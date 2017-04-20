#region License
/* 
 * Copyright (C) 1999-2017 John K�ll�n.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 */
#endregion

using Reko.Core;
using System;
using System.Collections.Generic;
using System.IO;
using System.IO.MemoryMappedFiles;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace Reko.Symbols.LGSymLoader
{
	[StructLayout(LayoutKind.Sequential, Pack = 1)]
	[Endian(Endianness.LittleEndian)]
	public struct SymHeader
	{
		public UInt32 magic;
		public UInt32 unknown;
		public UInt32 size;
		public UInt32 n_symbols;
		public UInt32 tail_size;
	}

	[StructLayout(LayoutKind.Sequential, Pack = 1)]
	[Endian(Endianness.LittleEndian)]
	public struct SymEntry
	{
		public UInt32 addr;
		public UInt32 end;
		public UInt32 sym_name_off;
	}

	[StructLayout(LayoutKind.Sequential, Pack = 1)]
	[Endian(Endianness.LittleEndian)]
	public struct DwarfEntry
	{
		public UInt32 d1;
		public UInt32 d2;
	}


	public class LGSymSource : ISymbolSource
	{
		public const UInt32 SYM_MAGIC = 0xB12791EE;
		private readonly MemoryMappedFile mf;
		private readonly Stream stream;
		private readonly BinaryReader rdr;
		private SymHeader hdr;

		private UInt32 n_dwarf_lst;
		private UInt32 dwarf_data_size;

		private long hash_offset;
		private long syms_offset;
		private long dwarf_list_offset;
		private long dwarf_data_offset;
		private long sym_names_offset;

		public LGSymSource(string filename)
        {
			mf = MemoryMappedFile.CreateFromFile(filename, FileMode.Open);
			stream = mf.CreateViewStream();
			rdr = new BinaryReader(stream);
		}

        public LGSymSource(Stream stm)
        {
            stream = stm;
            rdr = new BinaryReader(stm);
        }

        public void Dispose()
        {
            if (stream != null)
                stream.Dispose();
            if (mf != null)
                mf.Dispose();
        }

		public bool CanLoad(string filename, byte[] fileContents = null)
        {
			try {
				hdr = new StructureReader<SymHeader>(rdr).Read();
				if (hdr.magic != SYM_MAGIC)
					return false;

                var expected = hdr.size + Marshal.SizeOf(hdr);
                if (expected != stream.Length)
					return false;

				if ((hdr.tail_size + Marshal.SizeOf(typeof(SymEntry)) * hdr.n_symbols) != hdr.size)
					return false;

				long offset = Marshal.SizeOf(hdr);

				syms_offset = offset;
				offset += Marshal.SizeOf(typeof(SymEntry)) * hdr.n_symbols;

				rdr.BaseStream.Seek(offset, SeekOrigin.Begin);
				UInt32 has_hash = rdr.ReadUInt32();
				offset += Marshal.SizeOf(has_hash);

				if(has_hash != 2 && has_hash != 0)
					return false;

				if (has_hash == 2)
				{
					hash_offset = offset;
					offset += Marshal.SizeOf(typeof(UInt32)) * ((hdr.n_symbols + 1) & (~0 - 1));
				}

				rdr.BaseStream.Seek(offset, SeekOrigin.Begin);
				UInt32 has_dwarf = rdr.ReadUInt32();

				if(has_dwarf == 1)
				{
					offset += Marshal.SizeOf(has_dwarf);

					rdr.BaseStream.Seek(offset, SeekOrigin.Begin);
					n_dwarf_lst = rdr.ReadUInt32();
					offset += Marshal.SizeOf(n_dwarf_lst);

					rdr.BaseStream.Seek(offset, SeekOrigin.Begin);
					dwarf_data_size = rdr.ReadUInt32();
					offset += Marshal.SizeOf(dwarf_data_size);

					dwarf_list_offset = offset;
					offset += Marshal.SizeOf(typeof(DwarfEntry)) * n_dwarf_lst;

					dwarf_data_offset = offset;
					offset += dwarf_data_size;
				}

				sym_names_offset = stream.Position; //$REVIEW was offset, but we read a word to get has_dwarf.
				return true;

			} catch {
				return false;
			}
		}

		public List<ImageSymbol> GetAllSymbols() {
			var symbols = new List<ImageSymbol>();
			for(uint i=0; i<hdr.n_symbols; i++)
			{
				rdr.BaseStream.Seek(syms_offset + Marshal.SizeOf(typeof(SymEntry)) * i, SeekOrigin.Begin);
				SymEntry sym = new StructureReader<SymEntry>(rdr).Read();

				rdr.BaseStream.Seek(sym_names_offset + sym.sym_name_off, SeekOrigin.Begin);
				string sym_name = rdr.ReadNullTerminatedString();

				symbols.Add(new ImageSymbol(new Address32(sym.addr))
				{
					Size = sym.end - sym.addr,
					Name = sym_name
				});
			}

			return symbols;
		}
	}
}

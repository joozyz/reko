#region License
/* 
 * Copyright (C) 1999-2012 John K�ll�n.
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

using Decompiler.Arch.X86;
using Decompiler.Core;
using Decompiler.Core.Code;
using Decompiler.Core.Expressions;
using Decompiler.Core.Machine;
using Decompiler.Core.Types;
using Decompiler.Analysis;
using Decompiler.Evaluation;
using Decompiler.UnitTests.Mocks;
using NUnit.Framework;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Text;

namespace Decompiler.UnitTests.Analysis
{
    public class TrashedRegisterFinderTests
    {
        private ProcedureBuilder m;
        private Program prog;
        private TrashedRegisterFinder trf;
        private Procedure exit;
        private ProgramDataFlow flow;
        private IntelArchitecture arch;
        private ProgramBuilder p;

        [SetUp]
        public void Setup()
        {
            arch = new IntelArchitecture(ProcessorMode.ProtectedFlat);
            m = new ProcedureBuilder(arch);
            prog = new Program();
            prog.Architecture = arch;
            exit = new Procedure("exit", new Frame(PrimitiveType.Word32));
            flow = new ProgramDataFlow();
            p = new ProgramBuilder();
        }

        private BlockFlow CreateBlockFlow(Block block, Frame frame)
        {
            var bflow = new BlockFlow(
                block,
                prog.Architecture.CreateRegisterBitset(),
                new SymbolicEvaluationContext(
                    prog.Architecture,
                    frame));
            flow[block] = bflow;
            return bflow;
        }

        private TrashedRegisterFinder CreateTrashedRegisterFinder()
        {
            return new TrashedRegisterFinder(prog, prog.Procedures.Values, this.flow, new FakeDecompilerEventListener());
        }

        private TrashedRegisterFinder CreateTrashedRegisterFinder(Program prog)
        {
            return new TrashedRegisterFinder(prog, prog.Procedures.Values, this.flow, new FakeDecompilerEventListener());
        }

        private string DumpProcedureSummaries()
        {
            var sw = new StringWriter();
            foreach (Procedure proc in prog.Procedures.Values)
            {
                DataFlow.EmitRegisters(prog.Architecture, proc.Name, flow[proc].grfTrashed, flow[proc].TrashedRegisters, sw);
                sw.WriteLine();
                if (flow[proc].ConstantRegisters.Count > 0)
                {
                    DataFlow.EmitRegisterValues("const", flow[proc].ConstantRegisters, sw);
                    sw.WriteLine();
                }
                foreach (var block in proc.ControlGraph.Blocks.OrderBy(b => b, new Procedure.BlockComparer()))
                {
                    DataFlow.EmitRegisterValues("    " + block.Name, flow[block].SymbolicIn.RegisterState, sw);
                    sw.WriteLine();
                }
                sw.WriteLine();
            }
            return sw.ToString();
        }

        private void RunTest(ProgramBuilder p, string sExp)
        {
            prog = p.BuildProgram(arch);
            flow = new ProgramDataFlow(prog);
            trf = CreateTrashedRegisterFinder();
            trf.Compute();

            var summary = DumpProcedureSummaries().Trim();
            if (sExp == summary)
                return;
            Console.WriteLine(summary);
            Assert.AreEqual(sExp, summary);
        }


        private string DumpValues()
        {
            var l = new SortedList<string, string>();
            foreach (var item in trf.RegisterSymbolicValues)
            {
                l.Add(item.Key.ToString(), item.Value.ToString());
            }
            foreach (var item in trf.StackSymbolicValues)
            {
                l.Add(
                    string.Format("Stack {0}{1:X}", item.Key >= 0 ? "+" : "-", Math.Abs(item.Key)),
                    item.Value.ToString());
            }
            var sb = new StringBuilder();
            string sep = "";
            foreach (KeyValuePair<string, string> de in l)
            {
                sb.Append(sep);
                sb.AppendFormat("({0}:{1})", de.Key, de.Value);
                sep = ", ";
            }
            return sb.ToString();
        }

        private string TrashToString(Storage o)
        {
            RegisterStorage rst = o as RegisterStorage;
            if (rst != null)
                return rst.Name;
            return o.ToString();
        }

        [Test]
        public void TrashRegister()
        {
            var r1 = m.Register(1);
            var stm = m.Assign(r1, m.Int32(0));

            trf = CreateTrashedRegisterFinder();
            CreateBlockFlow(m.Block, m.Frame);
            trf.StartProcessingBlock(m.Block);

            stm.Accept(trf);
            Debug.WriteLine(trf.RegisterSymbolicValues[(RegisterStorage)r1.Storage].ToString());
            Assert.IsTrue(trf.IsTrashed(r1.Storage), "r1 should have been marked as trashed.");
        }

        [Test]
        public void TrashFlag()
        {
            var scz = m.Frame.EnsureFlagGroup(0x7, arch.GrfToString(0x7), PrimitiveType.Byte);
            var stm = m.Assign(scz, m.Int32(3));

            trf = CreateTrashedRegisterFinder();
            CreateBlockFlow(m.Block, m.Frame);
            trf.StartProcessingBlock(m.Block);
            stm.Accept(trf);
            Assert.AreEqual(0x7, trf.TrashedFlags);
        }

        [Test]
        public void TrashCompoundRegister()
        {
            Identifier ax = m.Frame.EnsureRegister(Registers.ax);
            var stm = m.Assign(ax, 1);

            trf = CreateTrashedRegisterFinder();
            CreateBlockFlow(m.Block, m.Frame);
            trf.StartProcessingBlock(m.Block);

            stm.Accept(trf);
            Assert.AreEqual("(Register ax:0x0001)", DumpValues());
        }

        [Test]
        public void Copy()
        {
            Identifier r1 = m.Register(1);
            Identifier r2 = m.Register(2);
            var ass = m.Assign(r2, r1);

            trf = CreateTrashedRegisterFinder();
            CreateBlockFlow(m.Block, m.Frame);
            trf.StartProcessingBlock(m.Block);

            ass.Accept(trf);
            Assert.AreEqual(r1, trf.RegisterSymbolicValues[(RegisterStorage)r2.Storage], "r2 should now be equal to r1");
        }

        [Test]
        public void CopyBack()
        {
            var tmp = m.Local32("tmp");
            var esp = m.Frame.EnsureRegister(Registers.esp);
            var r2 = m.Register(2);
            var stm1 = m.Store(m.Sub(esp, 0x10), r2);
            var stm2 = m.Assign(r2, m.Int32(0));
            var stm3 = m.Assign(r2, m.LoadDw(m.Sub(esp, 0x10)));

            trf = CreateTrashedRegisterFinder();
            var flow = CreateBlockFlow(m.Block, m.Frame);
            flow.SymbolicIn.SetValue(esp, m.Frame.FramePointer);
            trf.StartProcessingBlock(m.Block);

            stm1.Instruction.Accept(trf);
            stm2.Accept(trf);
            stm3.Accept(trf);

            Assert.AreEqual(r2, trf.RegisterSymbolicValues[(RegisterStorage)r2.Storage]);
        }

        [Test]
        public void OutParameters()
        {
            var r2 = m.Register(2);
            var stm = m.SideEffect(m.Fn("Hello", m.AddrOf(r2)));

            trf = CreateTrashedRegisterFinder();
            trf.EnsureEvaluationContext(CreateBlockFlow(m.Block, m.Frame));

            stm.Instruction.Accept(trf);
            Assert.AreEqual("<invalid>", trf.RegisterSymbolicValues[(RegisterStorage)r2.Storage].ToString());
        }

        [Test]
        public void CallInstruction()
        {
            var callee = new Procedure("Callee", prog.Architecture.CreateFrame());
            var stm = m.Call(callee);
            var pf = new ProcedureFlow(callee, prog.Architecture);
            pf.TrashedRegisters[Registers.ebx.Number] = true;
            flow[callee] = pf;

            trf = CreateTrashedRegisterFinder();
            CreateBlockFlow(m.Block, m.Frame);
            trf.StartProcessingBlock(m.Block);

            stm.Instruction.Accept(trf);
            Assert.AreEqual("(Register ebx:<invalid>)", DumpValues());
        }

        [Test]
        public void PropagateToSuccessorBlocks()
        {
            Procedure proc = new Procedure("test", prog.Architecture.CreateFrame());
            var frame = proc.Frame;
            Identifier r1 = m.Register(1);
            Identifier r2 = m.Register(2);
            Identifier r3 = m.Register(3);
            Block b = proc.AddBlock("b");
            Block t = proc.AddBlock("t");
            Block e = proc.AddBlock("e");
            proc.ControlGraph.AddEdge(b, e);
            proc.ControlGraph.AddEdge(b, t);
            flow[t] = new BlockFlow(t, null, new SymbolicEvaluationContext(prog.Architecture, frame));
            flow[e] = new BlockFlow(e, null, new SymbolicEvaluationContext(prog.Architecture, frame));

            trf = CreateTrashedRegisterFinder(prog);
            CreateBlockFlow(b, frame);
            trf.StartProcessingBlock(b);
            trf.RegisterSymbolicValues[(RegisterStorage)r1.Storage] = Constant.Invalid;
            trf.RegisterSymbolicValues[(RegisterStorage)r2.Storage] = r3;

            flow[e].SymbolicIn.RegisterState[(RegisterStorage)r1.Storage] = r2;
            flow[e].SymbolicIn.RegisterState[(RegisterStorage)r2.Storage] = r3;

            flow[t].SymbolicIn.RegisterState[(RegisterStorage)r1.Storage] = Constant.Invalid;
            flow[t].SymbolicIn.RegisterState[(RegisterStorage)r2.Storage] = r2;

            trf.PropagateToSuccessorBlock(e);
            trf.PropagateToSuccessorBlock(t);
            Assert.AreEqual(2, proc.ControlGraph.Successors(b).Count);
            Assert.AreEqual("<invalid>", flow[e].SymbolicIn.RegisterState[(RegisterStorage)r1.Storage].ToString(), "trash & r2 => trash");
            Assert.AreEqual("r3", flow[e].SymbolicIn.RegisterState[(RegisterStorage)r2.Storage].ToString(), "r3 & r3 => r3");
            Assert.AreEqual("<invalid>", flow[e].SymbolicIn.RegisterState[(RegisterStorage)r1.Storage].ToString(), "trash & r2 => trash");
            Assert.AreEqual("r3", flow[e].SymbolicIn.RegisterState[(RegisterStorage)r2.Storage].ToString(), "r3 & r3 => r3");

            Assert.AreEqual("<invalid>", flow[t].SymbolicIn.RegisterState[(RegisterStorage)r1.Storage].ToString(), "trash & trash => trash");
            Assert.AreEqual("<invalid>", flow[t].SymbolicIn.RegisterState[(RegisterStorage)r2.Storage].ToString(), "r3 & r2 => trash");
        }

        [Test]
        public void PropagateStackValuesToSuccessor()
        {
            m.Label("Start");
            Identifier r1 = m.Register(1);
            trf = CreateTrashedRegisterFinder(prog);
            CreateBlockFlow(m.Block, m.Frame);
            trf.StartProcessingBlock(m.Block);

            trf.StackSymbolicValues[-4] = r1;
            trf.StackSymbolicValues[-8] = r1;
            trf.StackSymbolicValues[-12] = r1;
            trf.StackSymbolicValues[-16] = m.Word32(0x1234);
            trf.StackSymbolicValues[-20] = m.Word32(0x5678);
            trf.StackSymbolicValues[-24] = m.Word32(0x9ABC);

            var succ = new Block(m.Procedure, "succ");
            var sf = CreateBlockFlow(succ, m.Frame);
            flow[succ] = sf;
            sf.SymbolicIn.StackState[-8] = r1;
            sf.SymbolicIn.StackState[-12] = Constant.Word32(1231);
            sf.SymbolicIn.StackState[-20] = Constant.Word32(0x5678);
            sf.SymbolicIn.StackState[-24] = Constant.Word32(0xCCCC);

            trf.PropagateToSuccessorBlock(succ);

            Assert.AreEqual("r1", sf.SymbolicIn.StackState[-4].ToString(), "Didn't have a value before");
            Assert.AreEqual("r1", sf.SymbolicIn.StackState[-8].ToString(), "Same value as before");
            Assert.AreEqual("<invalid>", sf.SymbolicIn.StackState[-12].ToString());
            Assert.AreEqual("0x00001234", sf.SymbolicIn.StackState[-16].ToString());
            Assert.AreEqual("0x00005678", sf.SymbolicIn.StackState[-20].ToString());
            Assert.AreEqual("<invalid>", sf.SymbolicIn.StackState[-24].ToString());
        }

        [Test]
        public void PropagateToProcedureSummary()
        {
            Procedure proc = new Procedure("proc", prog.Architecture.CreateFrame());
            prog.CallGraph.AddProcedure(proc);
            Identifier eax = proc.Frame.EnsureRegister(Registers.eax);
            Identifier ebx = proc.Frame.EnsureRegister(Registers.ebx);
            Identifier ecx = proc.Frame.EnsureRegister(Registers.ecx);
            Identifier esi = proc.Frame.EnsureRegister(Registers.esi);
            flow[proc] = new ProcedureFlow(proc, prog.Architecture);

            trf = CreateTrashedRegisterFinder();
            CreateBlockFlow(proc.ExitBlock, proc.Frame);
            trf.StartProcessingBlock(proc.ExitBlock);

            trf.RegisterSymbolicValues[(RegisterStorage)eax.Storage] = eax;			// preserved
            trf.RegisterSymbolicValues[(RegisterStorage)ebx.Storage] = ecx;			// trashed
            trf.RegisterSymbolicValues[(RegisterStorage)esi.Storage] = Constant.Invalid;				// trashed
            trf.PropagateToProcedureSummary(proc);
            ProcedureFlow pf = flow[proc];
            Assert.AreEqual(" ebx esi", pf.EmitRegisters(prog.Architecture, "", pf.TrashedRegisters));
            Assert.AreEqual(" eax", pf.EmitRegisters(prog.Architecture, "", pf.PreservedRegisters));
        }

        [Test]
        public void PropagateFlagsToProcedureSummary()
        {
            var proc = new Procedure("proc", prog.Architecture.CreateFrame());
            prog.CallGraph.AddProcedure(proc);
            var flags = prog.Architecture.GetFlagGroup("SZ");
            var sz = m.Frame.EnsureFlagGroup(flags.FlagGroupBits, flags.Name, flags.DataType);
            var stm = m.Assign(sz, m.Int32(3));
            flow[proc] = new ProcedureFlow(proc, prog.Architecture);
            trf = CreateTrashedRegisterFinder(prog);
            CreateBlockFlow(m.Block, m.Frame);
            trf.StartProcessingBlock(m.Block);
            stm.Accept(trf);
            trf.PropagateToProcedureSummary(proc);
            Assert.AreEqual(" SZ" + Environment.NewLine, flow[proc].EmitFlagGroup(prog.Architecture, "", flow[proc].grfTrashed));
        }

        [Test]
        public void PreserveEbp()
        {
            Identifier esp = m.Frame.EnsureRegister(Registers.esp);
            Identifier ebp = m.Frame.EnsureRegister(Registers.ebp);
            m.Store(esp, ebp);
            m.Assign(ebp, m.LoadDw(m.Int32(0x12345678)));
            m.Assign(ebp, m.LoadDw(esp));
            m.Return();

            Procedure proc = m.Procedure;
            prog.Procedures.Add(new Address(0x10000), proc);
            prog.CallGraph.AddProcedure(proc);
            flow = new ProgramDataFlow(prog);

            trf = CreateTrashedRegisterFinder(prog);
            trf.Compute();
            ProcedureFlow pf = flow[proc];
            Assert.AreEqual(" esp ebp", pf.EmitRegisters(prog.Architecture, "", pf.PreservedRegisters), "ebp should have been preserved");
        }

        [Test]
        public void ProcessBlock()
        {
            Identifier eax = m.Procedure.Frame.EnsureRegister(Registers.eax);
            Identifier esp = m.Procedure.Frame.EnsureRegister(Registers.esp);
            m.Store(m.Sub(esp, 4), eax);
            m.Assign(eax, m.Int32(3));
            m.Assign(eax, m.LoadDw(m.Sub(esp, 4)));

            flow[m.Block] = CreateBlockFlow(m.Block, m.Frame);
            flow[m.Block].SymbolicIn.SetValue(esp, m.Frame.FramePointer);
            trf = CreateTrashedRegisterFinder(prog);
            trf.ProcessBlock(m.Block);
            Assert.AreEqual("(Register eax:eax), (Register esp:fp), (Stack -4:eax)", DumpValues());
        }

        [Test]
        public void TerminatingProcedure()
        {
            var eax = m.Procedure.Frame.EnsureRegister(Registers.eax);
            m.Assign(eax, m.Word32(0x40));
            m.Call(exit);

            flow[m.Block] = CreateBlockFlow(m.Block, m.Frame);
            flow[exit] = new ProcedureFlow(exit, prog.Architecture);
            flow[exit].TerminatesProcess = true;
            trf = CreateTrashedRegisterFinder(prog);
            trf.ProcessBlock(m.Block);
            Assert.AreEqual("", DumpValues());
        }

        [Test]
        public void TwoProcedures()
        {
            p.Add("main", m =>
            {
                var eax = m.Frame.EnsureRegister(Registers.eax);
                var tmp = m.Local32("tmp");
                m.Assign(tmp, eax);
                m.Call("TrashEaxEbx");
                m.Assign(eax, tmp);
                m.Return();
            });

            p.Add("TrashEaxEbx", m =>
            {
                var eax = m.Frame.EnsureRegister(Registers.eax);
                var ebx = m.Frame.EnsureRegister(Registers.ebx);
                m.Assign(ebx, m.Int32(0x1231313));
                m.Assign(eax, m.LoadDw(ebx));
                m.Return();
            });

            RunTest(p,
@"main ebx bx bl bh
const Register ebx:0x01231313
    main_entry Register esp:fp
    l1 Register esp:fp
    main_exit Register eax:eax Register ebx:0x01231313 Register esp:fp

TrashEaxEbx eax ebx ax bx al bl ah bh
const Register ebx:0x01231313
    TrashEaxEbx_entry Register esp:fp
    l1 Register esp:fp
    TrashEaxEbx_exit Register eax:<invalid> Register ebx:0x01231313 Register esp:fp");
        }


        [Test]
        public void PreservedValues()
        {
            arch = new IntelArchitecture(ProcessorMode.Real);
            p.Add("main", m =>
            {
                var sp = m.Frame.EnsureRegister(Registers.sp);
                var ss = m.Frame.EnsureRegister(Registers.ss);
                var ax = m.Frame.EnsureRegister(Registers.ax);
                m.Assign(sp, m.Sub(sp, 2));
                m.SegStoreW(ss, sp, ax);
                m.Assign(ax, 1);
                m.Assign(ax, m.SegMemW(ss, sp));
                m.Assign(sp, m.Add(sp, 2));
                m.Return();
            });

            RunTest(p,
@"main
    main_entry Register sp:fp
    l1 Register sp:fp
    main_exit Register ax:ax Register sp:fp");
        }

        [Test]
        public void TrashFlagProcedure()
        {
            p.Add("main", m =>
            {
                var eax = m.Frame.EnsureRegister(Registers.eax);
                m.Assign(eax, m.Add(eax, 4));
                m.Assign(m.Flags("SZCO"), m.Cond(eax));
                m.Return();
            });

            var sExp =
@"main SCZO eax ax al ah
    main_entry Register esp:fp
    l1 Register esp:fp
    main_exit Register eax:eax + 0x00000004 Register esp:fp";
            RunTest(p, sExp);
        }

        [Test]
        public void RegistersPreservedOnStack()
        {
            p.Add("main", m =>
            {
                var eax = m.Frame.EnsureRegister(Registers.eax);
                var esp = m.Frame.EnsureRegister(Registers.esp);
                m.Assign(esp, m.Sub(esp, 4));
                m.Store(esp, eax);
                m.Assign(eax, 1);
                m.Assign(m.Flags("SCZO"), m.Cond(eax));
                m.Store(m.Word32(0x12340000), eax);
                m.Assign(eax, m.LoadDw(esp));
                m.Assign(esp, m.Add(esp, 4));
                m.Return();
            });

            var sExp =
@"main SCZO
    main_entry Register esp:fp
    l1 Register esp:fp
    main_exit Register eax:eax Register esp:fp";
            RunTest(p, sExp);
        }
    }
}

// ais3_crackme.h
// Generated by decompiling ais3_crackme
// using Reko decompiler version 0.9.1.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (4005C5 Eq_16 t4005C5) (400620 Eq_19 t400620) (4006B0 Eq_20 t4006B0) (4006C8 (str char) str4006C8) (4006F0 (str char) str4006F0) (400718 (str char) str400718) (600DF8 (arr (ptr64 code)) a600DF8) (600E08 word64 qw600E08) (601038 byte b601038))
	globals_t (in globals : (ptr64 (struct "Globals")))
Eq_2: (fn void ())
	T_2 (in call_gmon_start : ptr64)
	T_3 (in signature of call_gmon_start : void)
Eq_5: (fn void ())
	T_5 (in rdx : (ptr64 Eq_5))
	T_21 (in rtld_fini : (ptr64 (fn void ())))
Eq_6: (union "Eq_6" (int32 u0) (word64 u1))
	T_6 (in qwArg00 : Eq_6)
	T_17 (in argc : int32)
Eq_7: (fn void (ptr64))
	T_7 (in __align : ptr64)
	T_8 (in signature of __align : void)
Eq_14: (fn int32 ((ptr64 Eq_16), Eq_6, (ptr64 (ptr64 char)), (ptr64 Eq_19), (ptr64 Eq_20), (ptr64 Eq_5), (ptr64 void)))
	T_14 (in __libc_start_main : ptr64)
	T_15 (in signature of __libc_start_main : void)
Eq_16: (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))
	T_16 (in main : (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))))
	T_23 (in 0x00000000004005C5 : word64)
Eq_19: (fn void ())
	T_19 (in init : (ptr64 (fn void ())))
	T_25 (in 0x0000000000400620 : word64)
Eq_20: (fn void ())
	T_20 (in fini : (ptr64 (fn void ())))
	T_26 (in 0x00000000004006B0 : word64)
Eq_28: (fn void ())
	T_28 (in __hlt : ptr64)
	T_29 (in signature of __hlt : void)
Eq_50: (fn void ())
	T_50 (in deregister_tm_clones : ptr64)
	T_51 (in signature of deregister_tm_clones : void)
Eq_65: (fn void ())
	T_65 (in register_tm_clones : ptr64)
	T_66 (in signature of register_tm_clones : void)
	T_68 (in register_tm_clones : ptr64)
Eq_96: (struct "Eq_96" 0001 (0 (arr Eq_96) a0000))
	T_96 (in Mem12[rdi + (int64) SLICE((uint64) dwLoc0C_100, word32, 0):byte] : byte)
	T_227
	T_228
Eq_108: (struct "Eq_108" (601020 byte b601020))
	T_108 (in SEQ(SLICE(rax_75, word48, 16), (int16) SLICE(rax_75, byte, 0)) : word64)
Eq_172: (struct "Eq_172" (8 (ptr64 (arr Eq_96)) ptr0008))
	T_172 (in rsi : (ptr64 Eq_172))
Eq_176: (fn word32 ((ptr64 (arr Eq_96))))
	T_176 (in verify : ptr64)
	T_177 (in signature of verify : void)
Eq_187: (fn int32 ((ptr64 char)))
	T_187 (in puts : ptr64)
	T_188 (in signature of puts : void)
	T_192 (in puts : ptr64)
	T_195 (in puts : ptr64)
Eq_203: (fn void ())
	T_203 (in _init : ptr64)
	T_204 (in signature of _init : void)
Eq_207: (union "Eq_207" (int64 u0) (ptr64 u1))
	T_207 (in 0000000000600E00 : ptr64)
Eq_208: (union "Eq_208" (int64 u0) (ptr64 u1))
	T_208 (in 0000000000600DF8 : ptr64)
Eq_217: (union "Eq_217" (int64 u0) (uint64 u1))
	T_217 (in rbx_36 : Eq_217)
	T_218 (in 0x0000000000000000 : uint64)
	T_224 (in rbx_36 + 0x0000000000000001 : word64)
	T_225 (in rbp_19 >> 0x0000000000000003 : word64)
// Type Variables ////////////
globals_t: (in globals : (ptr64 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr64 Eq_1)
  OrigDataType: (ptr64 (struct "Globals"))
T_2: (in call_gmon_start : ptr64)
  Class: Eq_2
  DataType: (ptr64 Eq_2)
  OrigDataType: (ptr64 (fn T_4 ()))
T_3: (in signature of call_gmon_start : void)
  Class: Eq_2
  DataType: (ptr64 Eq_2)
  OrigDataType: 
T_4: (in call_gmon_start() : void)
  Class: Eq_4
  DataType: void
  OrigDataType: void
T_5: (in rdx : (ptr64 Eq_5))
  Class: Eq_5
  DataType: (ptr64 Eq_5)
  OrigDataType: (ptr64 (fn void ()))
T_6: (in qwArg00 : Eq_6)
  Class: Eq_6
  DataType: Eq_6
  OrigDataType: (union (int32 u1) (word64 u0))
T_7: (in __align : ptr64)
  Class: Eq_7
  DataType: (ptr64 Eq_7)
  OrigDataType: (ptr64 (fn T_13 (T_12)))
T_8: (in signature of __align : void)
  Class: Eq_7
  DataType: (ptr64 Eq_7)
  OrigDataType: 
T_9: (in  : word64)
  Class: Eq_9
  DataType: ptr64
  OrigDataType: 
T_10: (in fp : ptr64)
  Class: Eq_10
  DataType: (ptr64 void)
  OrigDataType: (ptr64 void)
T_11: (in 8 : int64)
  Class: Eq_11
  DataType: int64
  OrigDataType: int64
T_12: (in fp + 8 : word64)
  Class: Eq_9
  DataType: ptr64
  OrigDataType: ptr64
T_13: (in __align((char *) fp + 8) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in __libc_start_main : ptr64)
  Class: Eq_14
  DataType: (ptr64 Eq_14)
  OrigDataType: (ptr64 (fn T_27 (T_23, T_6, T_24, T_25, T_26, T_5, T_10)))
T_15: (in signature of __libc_start_main : void)
  Class: Eq_14
  DataType: (ptr64 Eq_14)
  OrigDataType: 
T_16: (in main : (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))))
  Class: Eq_16
  DataType: (ptr64 Eq_16)
  OrigDataType: 
T_17: (in argc : int32)
  Class: Eq_6
  DataType: Eq_6
  OrigDataType: 
T_18: (in ubp_av : (ptr64 (ptr64 char)))
  Class: Eq_18
  DataType: (ptr64 (ptr64 char))
  OrigDataType: 
T_19: (in init : (ptr64 (fn void ())))
  Class: Eq_19
  DataType: (ptr64 Eq_19)
  OrigDataType: 
T_20: (in fini : (ptr64 (fn void ())))
  Class: Eq_20
  DataType: (ptr64 Eq_20)
  OrigDataType: 
T_21: (in rtld_fini : (ptr64 (fn void ())))
  Class: Eq_5
  DataType: (ptr64 Eq_5)
  OrigDataType: 
T_22: (in stack_end : (ptr64 void))
  Class: Eq_10
  DataType: (ptr64 void)
  OrigDataType: 
T_23: (in 0x00000000004005C5 : word64)
  Class: Eq_16
  DataType: (ptr64 Eq_16)
  OrigDataType: (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char)))))
T_24: (in fp + 8 : word64)
  Class: Eq_18
  DataType: (ptr64 (ptr64 char))
  OrigDataType: (ptr64 (ptr64 char))
T_25: (in 0x0000000000400620 : word64)
  Class: Eq_19
  DataType: (ptr64 Eq_19)
  OrigDataType: (ptr64 (fn void ()))
T_26: (in 0x00000000004006B0 : word64)
  Class: Eq_20
  DataType: (ptr64 Eq_20)
  OrigDataType: (ptr64 (fn void ()))
T_27: (in __libc_start_main(&globals->t4005C5, qwArg00, (char *) fp + 8, &globals->t400620, &globals->t4006B0, rdx, fp) : int32)
  Class: Eq_27
  DataType: int32
  OrigDataType: int32
T_28: (in __hlt : ptr64)
  Class: Eq_28
  DataType: (ptr64 Eq_28)
  OrigDataType: (ptr64 (fn T_30 ()))
T_29: (in signature of __hlt : void)
  Class: Eq_28
  DataType: (ptr64 Eq_28)
  OrigDataType: 
T_30: (in __hlt() : void)
  Class: Eq_30
  DataType: void
  OrigDataType: void
T_31: (in __gmon_start__ : ptr64)
  Class: Eq_31
  DataType: word64
  OrigDataType: 
T_32: (in signature of __gmon_start__ : void)
  Class: Eq_32
  DataType: Eq_32
  OrigDataType: 
T_33: (in 0x0000000000000000 : word64)
  Class: Eq_31
  DataType: word64
  OrigDataType: word64
T_34: (in __gmon_start__ == 0x0000000000000000 : bool)
  Class: Eq_34
  DataType: bool
  OrigDataType: bool
T_35: (in __gmon_start__ : ptr64)
  Class: Eq_35
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_36: (in false : bool)
  Class: Eq_36
  DataType: bool
  OrigDataType: bool
T_37: (in 0x0000000000000000 : uint64)
  Class: Eq_37
  DataType: uint64
  OrigDataType: uint64
T_38: (in 0x0000000000000000 : word64)
  Class: Eq_37
  DataType: uint64
  OrigDataType: word64
T_39: (in 0x0000000000000000 == 0x0000000000000000 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_40: (in 0x0000000000000000 : uint64)
  Class: Eq_40
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_41: (in false : bool)
  Class: Eq_41
  DataType: bool
  OrigDataType: bool
T_42: (in 0x0000000000000000 : uint64)
  Class: Eq_42
  DataType: uint64
  OrigDataType: uint64
T_43: (in 0x0000000000000000 : word64)
  Class: Eq_42
  DataType: uint64
  OrigDataType: word64
T_44: (in 0x0000000000000000 == 0x0000000000000000 : bool)
  Class: Eq_44
  DataType: bool
  OrigDataType: bool
T_45: (in 0x0000000000000000 : uint64)
  Class: Eq_45
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_46: (in 0000000000601038 : ptr64)
  Class: Eq_46
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_47 t0000)))
T_47: (in Mem0[0x0000000000601038:byte] : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in 0x00 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_49: (in globals->b601038 != 0x00 : bool)
  Class: Eq_49
  DataType: bool
  OrigDataType: bool
T_50: (in deregister_tm_clones : ptr64)
  Class: Eq_50
  DataType: (ptr64 Eq_50)
  OrigDataType: (ptr64 (fn T_52 ()))
T_51: (in signature of deregister_tm_clones : void)
  Class: Eq_50
  DataType: (ptr64 Eq_50)
  OrigDataType: 
T_52: (in deregister_tm_clones() : void)
  Class: Eq_52
  DataType: void
  OrigDataType: void
T_53: (in 0x01 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_54: (in 0000000000601038 : ptr64)
  Class: Eq_54
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_55 t0000)))
T_55: (in Mem19[0x0000000000601038:byte] : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_56: (in 0000000000600E08 : ptr64)
  Class: Eq_56
  DataType: (ptr64 word64)
  OrigDataType: (ptr64 (struct (0 T_57 t0000)))
T_57: (in Mem0[0x0000000000600E08:word64] : word64)
  Class: Eq_57
  DataType: word64
  OrigDataType: word64
T_58: (in 0x0000000000000000 : word64)
  Class: Eq_57
  DataType: word64
  OrigDataType: word64
T_59: (in globals->qw600E08 == 0x0000000000000000 : bool)
  Class: Eq_59
  DataType: bool
  OrigDataType: bool
T_60: (in 0x0000000000000000 : uint64)
  Class: Eq_60
  DataType: uint64
  OrigDataType: uint64
T_61: (in 0x0000000000000000 : word64)
  Class: Eq_60
  DataType: uint64
  OrigDataType: word64
T_62: (in 0x0000000000000000 == 0x0000000000000000 : bool)
  Class: Eq_62
  DataType: bool
  OrigDataType: bool
T_63: (in fn0000000000000000 : ptr64)
  Class: Eq_63
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_64: (in signature of fn0000000000000000 : void)
  Class: Eq_64
  DataType: Eq_64
  OrigDataType: 
T_65: (in register_tm_clones : ptr64)
  Class: Eq_65
  DataType: (ptr64 Eq_65)
  OrigDataType: (ptr64 (fn T_67 ()))
T_66: (in signature of register_tm_clones : void)
  Class: Eq_65
  DataType: (ptr64 Eq_65)
  OrigDataType: 
T_67: (in register_tm_clones() : void)
  Class: Eq_67
  DataType: void
  OrigDataType: void
T_68: (in register_tm_clones : ptr64)
  Class: Eq_65
  DataType: (ptr64 Eq_65)
  OrigDataType: (ptr64 (fn T_69 ()))
T_69: (in register_tm_clones() : void)
  Class: Eq_67
  DataType: void
  OrigDataType: void
T_70: (in eax : word32)
  Class: Eq_70
  DataType: word32
  OrigDataType: word32
T_71: (in rdi : (arr Eq_96))
  Class: Eq_71
  DataType: (ptr64 (arr Eq_96))
  OrigDataType: (ptr64 (struct (0 (arr T_227) a0000)))
T_72: (in dwLoc0C_100 : word32)
  Class: Eq_72
  DataType: word32
  OrigDataType: word32
T_73: (in 0x00000000 : word32)
  Class: Eq_72
  DataType: word32
  OrigDataType: word32
T_74: (in rax_114 : uint64)
  Class: Eq_74
  DataType: uint64
  OrigDataType: uint64
T_75: (in rax_17 : (ptr64 byte))
  Class: Eq_75
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_84 t0000)))
T_76: (in (uint64) dwLoc0C_100 : uint64)
  Class: Eq_76
  DataType: uint64
  OrigDataType: uint64
T_77: (in SLICE((uint64) dwLoc0C_100, word32, 0) : word32)
  Class: Eq_77
  DataType: word32
  OrigDataType: word32
T_78: (in (int64) SLICE((uint64) dwLoc0C_100, word32, 0) : int64)
  Class: Eq_78
  DataType: int64
  OrigDataType: int64
T_79: (in rdi + (int64) SLICE((uint64) dwLoc0C_100, word32, 0) : word64)
  Class: Eq_75
  DataType: (ptr64 byte)
  OrigDataType: word64
T_80: (in rax_32_32_115 : word32)
  Class: Eq_80
  DataType: word32
  OrigDataType: word32
T_81: (in SLICE(rax_17, word32, 32) : word32)
  Class: Eq_80
  DataType: word32
  OrigDataType: word32
T_82: (in 0x0000000000000000 : word64)
  Class: Eq_82
  DataType: word64
  OrigDataType: word64
T_83: (in rax_17 + 0x0000000000000000 : word64)
  Class: Eq_83
  DataType: word64
  OrigDataType: word64
T_84: (in Mem12[rax_17 + 0x0000000000000000:byte] : byte)
  Class: Eq_84
  DataType: byte
  OrigDataType: byte
T_85: (in (word32) Mem12[rax_17 + 0x0000000000000000:byte] : word32)
  Class: Eq_85
  DataType: word32
  OrigDataType: word32
T_86: (in SLICE((word32) Mem12[rax_17 + 0x0000000000000000:byte], byte, 0) : byte)
  Class: Eq_86
  DataType: byte
  OrigDataType: byte
T_87: (in 0x00 : byte)
  Class: Eq_86
  DataType: byte
  OrigDataType: byte
T_88: (in (byte) (word32) *rax_17 != 0x00 : bool)
  Class: Eq_88
  DataType: bool
  OrigDataType: bool
T_89: (in al_34 : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_90: (in (uint64) dwLoc0C_100 : uint64)
  Class: Eq_90
  DataType: uint64
  OrigDataType: uint64
T_91: (in SLICE((uint64) dwLoc0C_100, word32, 0) : word32)
  Class: Eq_91
  DataType: word32
  OrigDataType: word32
T_92: (in (uint64) dwLoc0C_100 : uint64)
  Class: Eq_92
  DataType: uint64
  OrigDataType: uint64
T_93: (in SLICE((uint64) dwLoc0C_100, word32, 0) : word32)
  Class: Eq_93
  DataType: word32
  OrigDataType: word32
T_94: (in (int64) SLICE((uint64) dwLoc0C_100, word32, 0) : int64)
  Class: Eq_94
  DataType: int64
  OrigDataType: int64
T_95: (in rdi + (int64) SLICE((uint64) dwLoc0C_100, word32, 0) : word64)
  Class: Eq_95
  DataType: (ptr64 Eq_96)
  OrigDataType: (ptr64 (struct (0 T_96 t0000)))
T_96: (in Mem12[rdi + (int64) SLICE((uint64) dwLoc0C_100, word32, 0):byte] : byte)
  Class: Eq_96
  DataType: Eq_96
  OrigDataType: byte
T_97: (in (word32) Mem12[rdi + (int64) SLICE((uint64) dwLoc0C_100, word32, 0):byte] : word32)
  Class: Eq_97
  DataType: word32
  OrigDataType: word32
T_98: (in (uint64) (word32) Mem12[rdi + (int64) SLICE((uint64) dwLoc0C_100, word32, 0):byte] : uint64)
  Class: Eq_98
  DataType: uint64
  OrigDataType: uint64
T_99: (in SLICE((uint64) (word32) Mem12[rdi + (int64) SLICE((uint64) dwLoc0C_100, word32, 0):byte], word32, 0) : word32)
  Class: Eq_99
  DataType: word32
  OrigDataType: word32
T_100: (in (word32) (uint64) dwLoc0C_100 ^ (word32) ((uint64) ((word32) (&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&(rdi)[(int64) ((word32) ((uint64) dwLoc0C_100))].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000)[0])) : word32)
  Class: Eq_100
  DataType: ui32
  OrigDataType: ui32
T_101: (in (uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ SLICE((uint64) ((word32) Mem12[rdi + (int64) SLICE((uint64) dwLoc0C_100, word32, 0):byte]), word32, 0)) : uint64)
  Class: Eq_101
  DataType: uint64
  OrigDataType: uint64
T_102: (in SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ SLICE((uint64) ((word32) Mem12[rdi + (int64) SLICE((uint64) dwLoc0C_100, word32, 0):byte]), word32, 0)), byte, 0) : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_103: (in rax_75 : uint64)
  Class: Eq_103
  DataType: uint64
  OrigDataType: uint64
T_104: (in (uint64) dwLoc0C_100 : uint64)
  Class: Eq_103
  DataType: uint64
  OrigDataType: uint64
T_105: (in SLICE(rax_75, word48, 16) : word48)
  Class: Eq_105
  DataType: word48
  OrigDataType: word48
T_106: (in SLICE(rax_75, byte, 0) : byte)
  Class: Eq_106
  DataType: byte
  OrigDataType: byte
T_107: (in (int16) SLICE(rax_75, byte, 0) : int16)
  Class: Eq_107
  DataType: int16
  OrigDataType: int16
T_108: (in SEQ(SLICE(rax_75, word48, 16), (int16) SLICE(rax_75, byte, 0)) : word64)
  Class: Eq_108
  DataType: (ptr64 Eq_108)
  OrigDataType: (ptr64 (struct (601020 T_111 t601020)))
T_109: (in 0x0000000000601020 : word64)
  Class: Eq_109
  DataType: word64
  OrigDataType: word64
T_110: (in SEQ(SLICE(rax_75, word48, 16), (int16) SLICE(rax_75, byte, 0)) + 0x0000000000601020 : word64)
  Class: Eq_110
  DataType: word64
  OrigDataType: word64
T_111: (in Mem74[SEQ(SLICE(rax_75, word48, 16), (int16) SLICE(rax_75, byte, 0)) + 0x0000000000601020:byte] : byte)
  Class: Eq_111
  DataType: byte
  OrigDataType: byte
T_112: (in (word32) Mem74[SEQ(SLICE(rax_75, word48, 16), (int16) SLICE(rax_75, byte, 0)) + 0x0000000000601020:byte] : word32)
  Class: Eq_112
  DataType: word32
  OrigDataType: word32
T_113: (in SLICE((word32) Mem74[SEQ(SLICE(rax_75, word48, 16), (int16) SLICE(rax_75, byte, 0)) + 0x0000000000601020:byte], byte, 0) : byte)
  Class: Eq_113
  DataType: byte
  OrigDataType: byte
T_114: (in (word32) al_34 : word32)
  Class: Eq_114
  DataType: int32
  OrigDataType: int32
T_115: (in 0x00000008 : word32)
  Class: Eq_115
  DataType: word32
  OrigDataType: word32
T_116: (in (uint64) dwLoc0C_100 : uint64)
  Class: Eq_116
  DataType: uint64
  OrigDataType: uint64
T_117: (in SLICE((uint64) dwLoc0C_100, word32, 0) : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_118: (in 0x00000009 : word32)
  Class: Eq_118
  DataType: word32
  OrigDataType: word32
T_119: (in (word32) (uint64) dwLoc0C_100 ^ 0x00000009 : word32)
  Class: Eq_119
  DataType: ui32
  OrigDataType: ui32
T_120: (in (uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 0x00000009) : uint64)
  Class: Eq_120
  DataType: uint64
  OrigDataType: uint64
T_121: (in SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 0x00000009), word32, 0) : word32)
  Class: Eq_121
  DataType: ui32
  OrigDataType: ui32
T_122: (in 0x00000003 : word32)
  Class: Eq_122
  DataType: ui32
  OrigDataType: ui32
T_123: (in (word32) (uint64) ((word32) (uint64) dwLoc0C_100 ^ 0x00000009) & 0x00000003 : word32)
  Class: Eq_123
  DataType: ui32
  OrigDataType: ui32
T_124: (in (uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 0x00000009), word32, 0) & 0x00000003) : uint64)
  Class: Eq_124
  DataType: uint64
  OrigDataType: uint64
T_125: (in SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 0x00000009), word32, 0) & 0x00000003), word32, 0) : word32)
  Class: Eq_125
  DataType: word32
  OrigDataType: word32
T_126: (in (uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 0x00000009), word32, 0) & 0x00000003), word32, 0) : uint64)
  Class: Eq_126
  DataType: uint64
  OrigDataType: uint64
T_127: (in SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 0x00000009), word32, 0) & 0x00000003), word32, 0), word32, 0) : word32)
  Class: Eq_127
  DataType: word32
  OrigDataType: word32
T_128: (in 0x00000008 - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_100) ^ 0x00000009)) & 0x00000003)))) : word32)
  Class: Eq_128
  DataType: word32
  OrigDataType: word32
T_129: (in (uint64) (0x00000008 - SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 0x00000009), word32, 0) & 0x00000003), word32, 0), word32, 0)) : uint64)
  Class: Eq_129
  DataType: uint64
  OrigDataType: uint64
T_130: (in SLICE((uint64) (0x00000008 - SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 0x00000009), word32, 0) & 0x00000003), word32, 0), word32, 0)), word32, 0) : word32)
  Class: Eq_130
  DataType: word32
  OrigDataType: word32
T_131: (in (uint64) SLICE((uint64) (0x00000008 - SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 0x00000009), word32, 0) & 0x00000003), word32, 0), word32, 0)), word32, 0) : uint64)
  Class: Eq_131
  DataType: uint64
  OrigDataType: uint64
T_132: (in SLICE((uint64) SLICE((uint64) (0x00000008 - SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 0x00000009), word32, 0) & 0x00000003), word32, 0), word32, 0)), word32, 0), byte, 0) : byte)
  Class: Eq_132
  DataType: byte
  OrigDataType: byte
T_133: (in (word32) al_34 >> (byte) ((uint64) ((word32) ((uint64) (0x00000008 - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_100) ^ 0x00000009)) & 0x00000003)))))))) : word32)
  Class: Eq_133
  DataType: int32
  OrigDataType: int32
T_134: (in (uint64) ((word32) al_34 >> SLICE((uint64) SLICE((uint64) (0x00000008 - SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 0x00000009), word32, 0) & 0x00000003), word32, 0), word32, 0)), word32, 0), byte, 0)) : uint64)
  Class: Eq_134
  DataType: uint64
  OrigDataType: uint64
T_135: (in SLICE((uint64) ((word32) al_34 >> SLICE((uint64) SLICE((uint64) (0x00000008 - SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 0x00000009), word32, 0) & 0x00000003), word32, 0), word32, 0)), word32, 0), byte, 0)), word32, 0) : word32)
  Class: Eq_135
  DataType: word32
  OrigDataType: word32
T_136: (in (uint64) SLICE((uint64) ((word32) al_34 >> SLICE((uint64) SLICE((uint64) (0x00000008 - SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 0x00000009), word32, 0) & 0x00000003), word32, 0), word32, 0)), word32, 0), byte, 0)), word32, 0) : uint64)
  Class: Eq_136
  DataType: uint64
  OrigDataType: uint64
T_137: (in SLICE((uint64) SLICE((uint64) ((word32) al_34 >> SLICE((uint64) SLICE((uint64) (0x00000008 - SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 0x00000009), word32, 0) & 0x00000003), word32, 0), word32, 0)), word32, 0), byte, 0)), word32, 0), word32, 0) : word32)
  Class: Eq_137
  DataType: ui32
  OrigDataType: ui32
T_138: (in (word32) al_34 : word32)
  Class: Eq_138
  DataType: ui32
  OrigDataType: ui32
T_139: (in (uint64) dwLoc0C_100 : uint64)
  Class: Eq_139
  DataType: uint64
  OrigDataType: uint64
T_140: (in SLICE((uint64) dwLoc0C_100, word32, 0) : word32)
  Class: Eq_140
  DataType: word32
  OrigDataType: word32
T_141: (in 0x00000009 : word32)
  Class: Eq_141
  DataType: word32
  OrigDataType: word32
T_142: (in (word32) (uint64) dwLoc0C_100 ^ 0x00000009 : word32)
  Class: Eq_142
  DataType: ui32
  OrigDataType: ui32
T_143: (in (uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 0x00000009) : uint64)
  Class: Eq_143
  DataType: uint64
  OrigDataType: uint64
T_144: (in SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 0x00000009), word32, 0) : word32)
  Class: Eq_144
  DataType: ui32
  OrigDataType: ui32
T_145: (in 0x00000003 : word32)
  Class: Eq_145
  DataType: ui32
  OrigDataType: ui32
T_146: (in (word32) (uint64) ((word32) (uint64) dwLoc0C_100 ^ 0x00000009) & 0x00000003 : word32)
  Class: Eq_146
  DataType: ui32
  OrigDataType: ui32
T_147: (in (uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 0x00000009), word32, 0) & 0x00000003) : uint64)
  Class: Eq_147
  DataType: uint64
  OrigDataType: uint64
T_148: (in SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 0x00000009), word32, 0) & 0x00000003), word32, 0) : word32)
  Class: Eq_148
  DataType: word32
  OrigDataType: word32
T_149: (in (uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 0x00000009), word32, 0) & 0x00000003), word32, 0) : uint64)
  Class: Eq_149
  DataType: uint64
  OrigDataType: uint64
T_150: (in SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 0x00000009), word32, 0) & 0x00000003), word32, 0), byte, 0) : byte)
  Class: Eq_150
  DataType: byte
  OrigDataType: byte
T_151: (in (word32) al_34 << (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_100) ^ 0x00000009)) & 0x00000003)))) : word32)
  Class: Eq_151
  DataType: ui32
  OrigDataType: ui32
T_152: (in (uint64) ((word32) al_34 << SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 0x00000009), word32, 0) & 0x00000003), word32, 0), byte, 0)) : uint64)
  Class: Eq_152
  DataType: uint64
  OrigDataType: uint64
T_153: (in SLICE((uint64) ((word32) al_34 << SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 0x00000009), word32, 0) & 0x00000003), word32, 0), byte, 0)), word32, 0) : word32)
  Class: Eq_153
  DataType: word32
  OrigDataType: word32
T_154: (in (uint64) SLICE((uint64) ((word32) al_34 << SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 0x00000009), word32, 0) & 0x00000003), word32, 0), byte, 0)), word32, 0) : uint64)
  Class: Eq_154
  DataType: uint64
  OrigDataType: uint64
T_155: (in SLICE((uint64) SLICE((uint64) ((word32) al_34 << SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 0x00000009), word32, 0) & 0x00000003), word32, 0), byte, 0)), word32, 0), word32, 0) : word32)
  Class: Eq_155
  DataType: word32
  OrigDataType: word32
T_156: (in (uint64) SLICE((uint64) SLICE((uint64) ((word32) al_34 << SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 0x00000009), word32, 0) & 0x00000003), word32, 0), byte, 0)), word32, 0), word32, 0) : uint64)
  Class: Eq_156
  DataType: uint64
  OrigDataType: uint64
T_157: (in SLICE((uint64) SLICE((uint64) SLICE((uint64) ((word32) al_34 << SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 0x00000009), word32, 0) & 0x00000003), word32, 0), byte, 0)), word32, 0), word32, 0), word32, 0) : word32)
  Class: Eq_157
  DataType: ui32
  OrigDataType: ui32
T_158: (in (word32) (uint64) (word32) (uint64) ((word32) al_34 >> (byte) ((uint64) ((word32) ((uint64) (0x00000008 - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_100) ^ 0x00000009)) & 0x00000003))))))))) | (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) al_34 << (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_100) ^ 0x00000009)) & 0x00000003)))))))))) : word32)
  Class: Eq_158
  DataType: ui32
  OrigDataType: ui32
T_159: (in (uint64) (SLICE((uint64) SLICE((uint64) ((word32) al_34 >> SLICE((uint64) SLICE((uint64) (0x00000008 - SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 0x00000009), word32, 0) & 0x00000003), word32, 0), word32, 0)), word32, 0), byte, 0)), word32, 0), word32, 0) | SLICE((uint64) SLICE((uint64) SLICE((uint64) ((word32) al_34 << SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 0x00000009), word32, 0) & 0x00000003), word32, 0), byte, 0)), word32, 0), word32, 0), word32, 0)) : uint64)
  Class: Eq_159
  DataType: uint64
  OrigDataType: uint64
T_160: (in SLICE((uint64) (SLICE((uint64) SLICE((uint64) ((word32) al_34 >> SLICE((uint64) SLICE((uint64) (0x00000008 - SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 0x00000009), word32, 0) & 0x00000003), word32, 0), word32, 0)), word32, 0), byte, 0)), word32, 0), word32, 0) | SLICE((uint64) SLICE((uint64) SLICE((uint64) ((word32) al_34 << SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 0x00000009), word32, 0) & 0x00000003), word32, 0), byte, 0)), word32, 0), word32, 0), word32, 0)), byte, 0) : byte)
  Class: Eq_160
  DataType: byte
  OrigDataType: byte
T_161: (in 0x08 : byte)
  Class: Eq_161
  DataType: byte
  OrigDataType: byte
T_162: (in (byte) (uint64) ((word32) (uint64) (word32) (uint64) ((word32) al_34 >> (byte) ((uint64) ((word32) ((uint64) (0x00000008 - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_100) ^ 0x00000009)) & 0x00000003))))))))) | (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) al_34 << (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_100) ^ 0x00000009)) & 0x00000003))))))))))) + 0x08 : byte)
  Class: Eq_113
  DataType: byte
  OrigDataType: byte
T_163: (in (byte) (word32) SEQ(SLICE(rax_75, word48, 16), (int16) (byte) rax_75)->b601020 == (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) al_34 >> (byte) ((uint64) ((word32) ((uint64) (0x00000008 - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_100) ^ 0x00000009)) & 0x00000003)))))))))))) | (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) al_34 << (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_100) ^ 0x00000009)) & 0x00000003)))))))))))) + 0x08 : bool)
  Class: Eq_163
  DataType: bool
  OrigDataType: bool
T_164: (in 0x00000017 : word32)
  Class: Eq_72
  DataType: word32
  OrigDataType: word32
T_165: (in dwLoc0C_100 == 0x00000017 : bool)
  Class: Eq_165
  DataType: bool
  OrigDataType: bool
T_166: (in (word32) (dwLoc0C_100 == 0x00000017) : word32)
  Class: Eq_166
  DataType: word32
  OrigDataType: word32
T_167: (in SEQ(rax_32_32_115, (word32) (dwLoc0C_100 == 0x00000017)) : word64)
  Class: Eq_74
  DataType: uint64
  OrigDataType: word64
T_168: (in 0x00000001 : word32)
  Class: Eq_168
  DataType: word32
  OrigDataType: word32
T_169: (in dwLoc0C_100 + 0x00000001 : word32)
  Class: Eq_72
  DataType: word32
  OrigDataType: word32
T_170: (in 0x0000000000000000 : uint64)
  Class: Eq_74
  DataType: uint64
  OrigDataType: uint64
T_171: (in SLICE(rax_114, word32, 0) : word32)
  Class: Eq_70
  DataType: word32
  OrigDataType: word32
T_172: (in rsi : (ptr64 Eq_172))
  Class: Eq_172
  DataType: (ptr64 Eq_172)
  OrigDataType: (ptr64 (struct (8 T_180 t0008)))
T_173: (in edi : word32)
  Class: Eq_173
  DataType: word32
  OrigDataType: word32
T_174: (in 0x00000002 : word32)
  Class: Eq_173
  DataType: word32
  OrigDataType: word32
T_175: (in edi == 0x00000002 : bool)
  Class: Eq_175
  DataType: bool
  OrigDataType: bool
T_176: (in verify : ptr64)
  Class: Eq_176
  DataType: (ptr64 Eq_176)
  OrigDataType: (ptr64 (fn T_181 (T_180)))
T_177: (in signature of verify : void)
  Class: Eq_176
  DataType: (ptr64 Eq_176)
  OrigDataType: 
T_178: (in 0x0000000000000008 : word64)
  Class: Eq_178
  DataType: word64
  OrigDataType: word64
T_179: (in rsi + 0x0000000000000008 : word64)
  Class: Eq_179
  DataType: word64
  OrigDataType: word64
T_180: (in Mem12[rsi + 0x0000000000000008:word64] : word64)
  Class: Eq_71
  DataType: (ptr64 (arr Eq_96))
  OrigDataType: word64
T_181: (in verify(rsi->ptr0008) : word32)
  Class: Eq_181
  DataType: word32
  OrigDataType: word32
T_182: (in (uint32) verify(rsi->ptr0008) : uint32)
  Class: Eq_182
  DataType: uint32
  OrigDataType: uint32
T_183: (in (uint64) (uint32) verify(rsi->ptr0008) : uint64)
  Class: Eq_183
  DataType: uint64
  OrigDataType: uint64
T_184: (in SLICE((uint64) (uint32) verify(rsi->ptr0008), word32, 0) : word32)
  Class: Eq_184
  DataType: word32
  OrigDataType: word32
T_185: (in 0x00000000 : word32)
  Class: Eq_184
  DataType: word32
  OrigDataType: word32
T_186: (in (word32) (uint64) (uint32) verify(rsi->ptr0008) == 0x00000000 : bool)
  Class: Eq_186
  DataType: bool
  OrigDataType: bool
T_187: (in puts : ptr64)
  Class: Eq_187
  DataType: (ptr64 Eq_187)
  OrigDataType: (ptr64 (fn T_191 (T_190)))
T_188: (in signature of puts : void)
  Class: Eq_187
  DataType: (ptr64 Eq_187)
  OrigDataType: 
T_189: (in s : (ptr64 char))
  Class: Eq_189
  DataType: (ptr64 char)
  OrigDataType: 
T_190: (in 0x00000000004006C8 : uint64)
  Class: Eq_189
  DataType: (ptr64 char)
  OrigDataType: (ptr64 char)
T_191: (in puts("You need to enter the secret key!") : int32)
  Class: Eq_191
  DataType: int32
  OrigDataType: int32
T_192: (in puts : ptr64)
  Class: Eq_187
  DataType: (ptr64 Eq_187)
  OrigDataType: (ptr64 (fn T_194 (T_193)))
T_193: (in 0x0000000000400718 : uint64)
  Class: Eq_189
  DataType: (ptr64 char)
  OrigDataType: (ptr64 char)
T_194: (in puts("I'm sorry, that's the wrong secret key!") : int32)
  Class: Eq_191
  DataType: int32
  OrigDataType: int32
T_195: (in puts : ptr64)
  Class: Eq_187
  DataType: (ptr64 Eq_187)
  OrigDataType: (ptr64 (fn T_197 (T_196)))
T_196: (in 0x00000000004006F0 : uint64)
  Class: Eq_189
  DataType: (ptr64 char)
  OrigDataType: (ptr64 char)
T_197: (in puts("Correct! that is the secret key!") : int32)
  Class: Eq_191
  DataType: int32
  OrigDataType: int32
T_198: (in rdx : word64)
  Class: Eq_198
  DataType: word64
  OrigDataType: word64
T_199: (in rsi : word64)
  Class: Eq_199
  DataType: word64
  OrigDataType: word64
T_200: (in edi : word32)
  Class: Eq_200
  DataType: word32
  OrigDataType: word32
T_201: (in rdi : word64)
  Class: Eq_201
  DataType: word64
  OrigDataType: word64
T_202: (in SLICE(rdi, word32, 0) : word32)
  Class: Eq_200
  DataType: word32
  OrigDataType: word32
T_203: (in _init : ptr64)
  Class: Eq_203
  DataType: (ptr64 Eq_203)
  OrigDataType: (ptr64 (fn T_205 ()))
T_204: (in signature of _init : void)
  Class: Eq_203
  DataType: (ptr64 Eq_203)
  OrigDataType: 
T_205: (in _init() : void)
  Class: Eq_205
  DataType: void
  OrigDataType: void
T_206: (in rbp_19 : int64)
  Class: Eq_206
  DataType: int64
  OrigDataType: int64
T_207: (in 0000000000600E00 : ptr64)
  Class: Eq_207
  DataType: int64
  OrigDataType: (union (int64 u0) (ptr64 u1))
T_208: (in 0000000000600DF8 : ptr64)
  Class: Eq_208
  DataType: int64
  OrigDataType: (union (int64 u1) (ptr64 u0))
T_209: (in 0x0000000000600E00 - 0x0000000000600DF8 : word64)
  Class: Eq_206
  DataType: int64
  OrigDataType: int64
T_210: (in r13d_72 : word32)
  Class: Eq_210
  DataType: word32
  OrigDataType: word32
T_211: (in (uint64) edi : uint64)
  Class: Eq_211
  DataType: uint64
  OrigDataType: uint64
T_212: (in SLICE((uint64) edi, word32, 0) : word32)
  Class: Eq_210
  DataType: word32
  OrigDataType: word32
T_213: (in 0x0000000000000003 : word64)
  Class: Eq_213
  DataType: word64
  OrigDataType: word64
T_214: (in rbp_19 >> 0x0000000000000003 : word64)
  Class: Eq_214
  DataType: int64
  OrigDataType: int64
T_215: (in 0x0000000000000000 : word64)
  Class: Eq_214
  DataType: int64
  OrigDataType: word64
T_216: (in rbp_19 >> 0x0000000000000003 == 0x0000000000000000 : bool)
  Class: Eq_216
  DataType: bool
  OrigDataType: bool
T_217: (in rbx_36 : Eq_217)
  Class: Eq_217
  DataType: Eq_217
  OrigDataType: word64
T_218: (in 0x0000000000000000 : uint64)
  Class: Eq_217
  DataType: uint64
  OrigDataType: uint64
T_219: (in 0000000000600DF8 : ptr64)
  Class: Eq_219
  DataType: (ptr64 (arr (ptr64 code)))
  OrigDataType: (ptr64 (struct (0 (arr T_229) a0000)))
T_220: (in 0x0000000000000008 : word64)
  Class: Eq_220
  DataType: ui64
  OrigDataType: ui64
T_221: (in rbx_36 * 0x0000000000000008 : word64)
  Class: Eq_221
  DataType: ui64
  OrigDataType: ui64
T_222: (in 0x0000000000600DF8[rbx_36 * 0x0000000000000008] : word64)
  Class: Eq_222
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_223: (in 0x0000000000000001 : word64)
  Class: Eq_223
  DataType: word64
  OrigDataType: word64
T_224: (in rbx_36 + 0x0000000000000001 : word64)
  Class: Eq_217
  DataType: Eq_217
  OrigDataType: uint64
T_225: (in rbp_19 >> 0x0000000000000003 : word64)
  Class: Eq_217
  DataType: Eq_217
  OrigDataType: int64
T_226: (in rbx_36 != rbp_19 >> 0x0000000000000003 : bool)
  Class: Eq_226
  DataType: bool
  OrigDataType: bool
T_227:
  Class: Eq_96
  DataType: Eq_96
  OrigDataType: (struct 0001 (0 T_96 t0000))
T_228:
  Class: Eq_96
  DataType: Eq_96
  OrigDataType: (arr Eq_96)
T_229:
  Class: Eq_229
  DataType: (ptr64 code)
  OrigDataType: (struct 0008 (0 T_222 t0000))
*/
typedef struct Globals {
	Eq_16 t4005C5;	// 4005C5
	Eq_19 t400620;	// 400620
	Eq_20 t4006B0;	// 4006B0
	char str4006C8[];	// 4006C8
	char str4006F0[];	// 4006F0
	char str400718[];	// 400718
	<anonymous> * a600DF8[];	// 600DF8
	word64 qw600E08;	// 600E08
	byte b601038;	// 601038
} Eq_1;

typedef void (Eq_2)();

typedef void (Eq_5)();

typedef union Eq_6 {
	int32 u0;
	word64 u1;
} Eq_6;

typedef void (Eq_7)(ptr64);

typedef int32 (Eq_14)( *, Eq_6, char * *,  *,  *,  *, void);

typedef int32 (Eq_16)(int32 rdi, char * * rsi, char * * rdx);

typedef void (Eq_19)();

typedef void (Eq_20)();

typedef void (Eq_28)();

typedef void (Eq_50)();

typedef void (Eq_65)();

typedef struct Eq_96 {	// size: 1 1
	Eq_96 a0000[];	// 0
} Eq_96;

typedef struct Eq_108 {
	byte b601020;	// 601020
} Eq_108;

typedef struct Eq_172 {
	Eq_96 (* ptr0008)[];	// 8
} Eq_172;

typedef word32 (Eq_176)(Eq_96 *[]);

typedef int32 (Eq_187)(char *);

typedef void (Eq_203)();

typedef union Eq_207 {
	int64 u0;
	ptr64 u1;
} Eq_207;

typedef union Eq_208 {
	int64 u0;
	ptr64 u1;
} Eq_208;

typedef union Eq_217 {
	int64 u0;
	uint64 u1;
} Eq_217;


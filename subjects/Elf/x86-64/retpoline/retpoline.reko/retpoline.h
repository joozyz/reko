// retpoline.h
// Generated by decompiling retpoline.elf
// using Reko decompiler version 0.9.1.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (400660 Eq_18 t400660) (400710 Eq_21 t400710) (400780 Eq_22 t400780) (600E10 (arr (ptr64 code)) a600E10) (601040 byte b601040))
	globals_t (in globals : (ptr64 (struct "Globals")))
Eq_7: (fn void ())
	T_7 (in rdx : (ptr64 Eq_7))
	T_23 (in rtld_fini : (ptr64 (fn void ())))
Eq_8: (union "Eq_8" (int32 u0) (word64 u1))
	T_8 (in qwArg00 : Eq_8)
	T_19 (in argc : int32)
Eq_9: (fn void (ptr64))
	T_9 (in __align : ptr64)
	T_10 (in signature of __align : void)
Eq_16: (fn int32 ((ptr64 Eq_18), Eq_8, (ptr64 (ptr64 char)), (ptr64 Eq_21), (ptr64 Eq_22), (ptr64 Eq_7), (ptr64 void)))
	T_16 (in __libc_start_main : ptr64)
	T_17 (in signature of __libc_start_main : void)
Eq_18: (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))
	T_18 (in main : (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))))
	T_25 (in 0x0000000000400660 : word64)
Eq_21: (fn void ())
	T_21 (in init : (ptr64 (fn void ())))
	T_27 (in 0x0000000000400710 : word64)
Eq_22: (fn void ())
	T_22 (in fini : (ptr64 (fn void ())))
	T_28 (in 0x0000000000400780 : word64)
Eq_30: (fn void ())
	T_30 (in __hlt : ptr64)
	T_31 (in signature of __hlt : void)
Eq_51: (fn void ())
	T_51 (in deregister_tm_clones : ptr64)
	T_52 (in signature of deregister_tm_clones : void)
Eq_57: (fn void ())
	T_57 (in register_tm_clones : ptr64)
	T_58 (in signature of register_tm_clones : void)
Eq_62: (fn (ptr64 void) (Eq_64, Eq_64))
	T_62 (in calloc : ptr64)
	T_63 (in signature of calloc : void)
Eq_64: (union "Eq_64" (int64 u0) (size_t u1))
	T_64 (in num : size_t)
	T_65 (in size : size_t)
	T_66 (in (int64) edi : int64)
	T_67 (in (int64) esi : int64)
Eq_140: (fn void (word32, word32))
	T_140 (in my1 : ptr64)
	T_141 (in signature of my1 : void)
Eq_147: (fn void ((ptr64 void)))
	T_147 (in free : ptr64)
	T_148 (in signature of free : void)
Eq_151: (fn void ())
	T_151 (in __llvm_retpoline_r11 : ptr64)
	T_152 (in signature of __llvm_retpoline_r11 : void)
Eq_154: (fn void ())
	T_154 (in fn0000000000400700 : ptr64)
	T_155 (in signature of fn0000000000400700 : void)
Eq_157: (fn void ())
	T_157 (in __pause : ptr64)
	T_158 (in signature of __pause : void)
Eq_165: (fn void ())
	T_165 (in _init : ptr64)
	T_166 (in signature of _init : void)
Eq_172: (union "Eq_172" (int64 u0) (ptr64 u1))
	T_172 (in 0000000000600E18 : ptr64)
Eq_173: (union "Eq_173" (int64 u0) (ptr64 u1))
	T_173 (in 0000000000600E10 : ptr64)
Eq_179: (union "Eq_179" (int64 u0) (uint64 u1))
	T_179 (in rbx_42 : Eq_179)
	T_180 (in 0x0000000000000000 : uint64)
	T_186 (in rbx_42 + 0x0000000000000001 : word64)
	T_187 (in rbp_30 >> 0x0000000000000003 : word64)
// Type Variables ////////////
globals_t: (in globals : (ptr64 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr64 Eq_1)
  OrigDataType: (ptr64 (struct "Globals"))
T_2: (in __gmon_start__ : ptr64)
  Class: Eq_2
  DataType: word64
  OrigDataType: 
T_3: (in signature of __gmon_start__ : void)
  Class: Eq_3
  DataType: Eq_3
  OrigDataType: 
T_4: (in 0x0000000000000000 : word64)
  Class: Eq_2
  DataType: word64
  OrigDataType: word64
T_5: (in __gmon_start__ == 0x0000000000000000 : bool)
  Class: Eq_5
  DataType: bool
  OrigDataType: bool
T_6: (in __gmon_start__ : ptr64)
  Class: Eq_6
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_7: (in rdx : (ptr64 Eq_7))
  Class: Eq_7
  DataType: (ptr64 Eq_7)
  OrigDataType: (ptr64 (fn void ()))
T_8: (in qwArg00 : Eq_8)
  Class: Eq_8
  DataType: Eq_8
  OrigDataType: (union (int32 u1) (word64 u0))
T_9: (in __align : ptr64)
  Class: Eq_9
  DataType: (ptr64 Eq_9)
  OrigDataType: (ptr64 (fn T_15 (T_14)))
T_10: (in signature of __align : void)
  Class: Eq_9
  DataType: (ptr64 Eq_9)
  OrigDataType: 
T_11: (in  : word64)
  Class: Eq_11
  DataType: ptr64
  OrigDataType: 
T_12: (in fp : ptr64)
  Class: Eq_12
  DataType: (ptr64 void)
  OrigDataType: (ptr64 void)
T_13: (in 8 : int64)
  Class: Eq_13
  DataType: int64
  OrigDataType: int64
T_14: (in fp + 8 : word64)
  Class: Eq_11
  DataType: ptr64
  OrigDataType: ptr64
T_15: (in __align((char *) fp + 8) : void)
  Class: Eq_15
  DataType: void
  OrigDataType: void
T_16: (in __libc_start_main : ptr64)
  Class: Eq_16
  DataType: (ptr64 Eq_16)
  OrigDataType: (ptr64 (fn T_29 (T_25, T_8, T_26, T_27, T_28, T_7, T_12)))
T_17: (in signature of __libc_start_main : void)
  Class: Eq_16
  DataType: (ptr64 Eq_16)
  OrigDataType: 
T_18: (in main : (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))))
  Class: Eq_18
  DataType: (ptr64 Eq_18)
  OrigDataType: 
T_19: (in argc : int32)
  Class: Eq_8
  DataType: Eq_8
  OrigDataType: 
T_20: (in ubp_av : (ptr64 (ptr64 char)))
  Class: Eq_20
  DataType: (ptr64 (ptr64 char))
  OrigDataType: 
T_21: (in init : (ptr64 (fn void ())))
  Class: Eq_21
  DataType: (ptr64 Eq_21)
  OrigDataType: 
T_22: (in fini : (ptr64 (fn void ())))
  Class: Eq_22
  DataType: (ptr64 Eq_22)
  OrigDataType: 
T_23: (in rtld_fini : (ptr64 (fn void ())))
  Class: Eq_7
  DataType: (ptr64 Eq_7)
  OrigDataType: 
T_24: (in stack_end : (ptr64 void))
  Class: Eq_12
  DataType: (ptr64 void)
  OrigDataType: 
T_25: (in 0x0000000000400660 : word64)
  Class: Eq_18
  DataType: (ptr64 Eq_18)
  OrigDataType: (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char)))))
T_26: (in fp + 8 : word64)
  Class: Eq_20
  DataType: (ptr64 (ptr64 char))
  OrigDataType: (ptr64 (ptr64 char))
T_27: (in 0x0000000000400710 : word64)
  Class: Eq_21
  DataType: (ptr64 Eq_21)
  OrigDataType: (ptr64 (fn void ()))
T_28: (in 0x0000000000400780 : word64)
  Class: Eq_22
  DataType: (ptr64 Eq_22)
  OrigDataType: (ptr64 (fn void ()))
T_29: (in __libc_start_main(&globals->t400660, qwArg00, (char *) fp + 8, &globals->t400710, &globals->t400780, rdx, fp) : int32)
  Class: Eq_29
  DataType: int32
  OrigDataType: int32
T_30: (in __hlt : ptr64)
  Class: Eq_30
  DataType: (ptr64 Eq_30)
  OrigDataType: (ptr64 (fn T_32 ()))
T_31: (in signature of __hlt : void)
  Class: Eq_30
  DataType: (ptr64 Eq_30)
  OrigDataType: 
T_32: (in __hlt() : void)
  Class: Eq_32
  DataType: void
  OrigDataType: void
T_33: (in 0x0000000000000000 : word64)
  Class: Eq_33
  DataType: word64
  OrigDataType: word64
T_34: (in 0x0000000000000000 : word64)
  Class: Eq_33
  DataType: word64
  OrigDataType: word64
T_35: (in 0x0000000000000000 == 0x0000000000000000 : bool)
  Class: Eq_35
  DataType: bool
  OrigDataType: bool
T_36: (in 0x0000000000000000 : uint64)
  Class: Eq_36
  DataType: uint64
  OrigDataType: uint64
T_37: (in 0x0000000000000000 : word64)
  Class: Eq_36
  DataType: uint64
  OrigDataType: word64
T_38: (in 0x0000000000000000 == 0x0000000000000000 : bool)
  Class: Eq_38
  DataType: bool
  OrigDataType: bool
T_39: (in 0x0000000000000000 : uint64)
  Class: Eq_39
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_40: (in 0 : int64)
  Class: Eq_40
  DataType: int64
  OrigDataType: int64
T_41: (in 0x0000000000000000 : word64)
  Class: Eq_40
  DataType: int64
  OrigDataType: word64
T_42: (in 0 == 0x0000000000000000 : bool)
  Class: Eq_42
  DataType: bool
  OrigDataType: bool
T_43: (in 0x0000000000000000 : uint64)
  Class: Eq_43
  DataType: uint64
  OrigDataType: uint64
T_44: (in 0x0000000000000000 : word64)
  Class: Eq_43
  DataType: uint64
  OrigDataType: word64
T_45: (in 0x0000000000000000 == 0x0000000000000000 : bool)
  Class: Eq_45
  DataType: bool
  OrigDataType: bool
T_46: (in 0x0000000000000000 : uint64)
  Class: Eq_46
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_47: (in 0000000000601040 : ptr64)
  Class: Eq_47
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_48 t0000)))
T_48: (in Mem0[0x0000000000601040:byte] : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_49: (in 0x00 : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_50: (in globals->b601040 != 0x00 : bool)
  Class: Eq_50
  DataType: bool
  OrigDataType: bool
T_51: (in deregister_tm_clones : ptr64)
  Class: Eq_51
  DataType: (ptr64 Eq_51)
  OrigDataType: (ptr64 (fn T_53 ()))
T_52: (in signature of deregister_tm_clones : void)
  Class: Eq_51
  DataType: (ptr64 Eq_51)
  OrigDataType: 
T_53: (in deregister_tm_clones() : void)
  Class: Eq_53
  DataType: void
  OrigDataType: void
T_54: (in 0x01 : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_55: (in 0000000000601040 : ptr64)
  Class: Eq_55
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_56 t0000)))
T_56: (in Mem17[0x0000000000601040:byte] : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_57: (in register_tm_clones : ptr64)
  Class: Eq_57
  DataType: (ptr64 Eq_57)
  OrigDataType: (ptr64 (fn T_59 ()))
T_58: (in signature of register_tm_clones : void)
  Class: Eq_57
  DataType: (ptr64 Eq_57)
  OrigDataType: 
T_59: (in register_tm_clones() : void)
  Class: Eq_59
  DataType: void
  OrigDataType: void
T_60: (in esi : word32)
  Class: Eq_60
  DataType: word32
  OrigDataType: word32
T_61: (in edi : word32)
  Class: Eq_61
  DataType: word32
  OrigDataType: word32
T_62: (in calloc : ptr64)
  Class: Eq_62
  DataType: (ptr64 Eq_62)
  OrigDataType: (ptr64 (fn T_68 (T_66, T_67)))
T_63: (in signature of calloc : void)
  Class: Eq_62
  DataType: (ptr64 Eq_62)
  OrigDataType: 
T_64: (in num : size_t)
  Class: Eq_64
  DataType: Eq_64
  OrigDataType: 
T_65: (in size : size_t)
  Class: Eq_64
  DataType: Eq_64
  OrigDataType: 
T_66: (in (int64) edi : int64)
  Class: Eq_64
  DataType: Eq_64
  OrigDataType: (union (int64 u0) (size_t u1))
T_67: (in (int64) esi : int64)
  Class: Eq_64
  DataType: Eq_64
  OrigDataType: (union (int64 u0) (size_t u1))
T_68: (in calloc((int64) edi, (int64) esi) : (ptr64 void))
  Class: Eq_68
  DataType: (ptr64 void)
  OrigDataType: (ptr64 void)
T_69: (in sil : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_70: (in rdi : (ptr64 byte))
  Class: Eq_70
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_73 t0000)))
T_71: (in 0x0000000000000000 : word64)
  Class: Eq_71
  DataType: word64
  OrigDataType: word64
T_72: (in rdi + 0x0000000000000000 : word64)
  Class: Eq_72
  DataType: word64
  OrigDataType: word64
T_73: (in Mem16[rdi + 0x0000000000000000:byte] : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_74: (in esi : int32)
  Class: Eq_74
  DataType: int32
  OrigDataType: int32
T_75: (in edi : int32)
  Class: Eq_75
  DataType: int32
  OrigDataType: int32
T_76: (in rdi : word64)
  Class: Eq_76
  DataType: word64
  OrigDataType: word64
T_77: (in SLICE(rdi, word32, 0) : word32)
  Class: Eq_75
  DataType: int32
  OrigDataType: word32
T_78: (in (uint64) edi : uint64)
  Class: Eq_78
  DataType: uint64
  OrigDataType: uint64
T_79: (in SLICE((uint64) edi, word32, 0) : word32)
  Class: Eq_74
  DataType: int32
  OrigDataType: int32
T_80: (in (word32) (uint64) edi >= esi : bool)
  Class: Eq_80
  DataType: bool
  OrigDataType: bool
T_81: (in (uint64) edi : uint64)
  Class: Eq_81
  DataType: uint64
  OrigDataType: uint64
T_82: (in SLICE((uint64) edi, word32, 0) : word32)
  Class: Eq_82
  DataType: ui32
  OrigDataType: ui32
T_83: (in 0x00000001 : word32)
  Class: Eq_83
  DataType: word32
  OrigDataType: word32
T_84: (in (word32) (uint64) edi << 0x00000001 : word32)
  Class: Eq_84
  DataType: ui32
  OrigDataType: ui32
T_85: (in (uint64) (SLICE((uint64) edi, word32, 0) << 0x00000001) : uint64)
  Class: Eq_85
  DataType: uint64
  OrigDataType: uint64
T_86: (in SLICE((uint64) (SLICE((uint64) edi, word32, 0) << 0x00000001), word32, 0) : word32)
  Class: Eq_86
  DataType: int32
  OrigDataType: int32
T_87: (in (uint64) esi : uint64)
  Class: Eq_87
  DataType: uint64
  OrigDataType: uint64
T_88: (in SLICE((uint64) esi, word32, 0) : word32)
  Class: Eq_88
  DataType: ui32
  OrigDataType: ui32
T_89: (in 0x00000001 : word32)
  Class: Eq_89
  DataType: word32
  OrigDataType: word32
T_90: (in (word32) (uint64) esi << 0x00000001 : word32)
  Class: Eq_90
  DataType: ui32
  OrigDataType: ui32
T_91: (in (uint64) (SLICE((uint64) esi, word32, 0) << 0x00000001) : uint64)
  Class: Eq_91
  DataType: uint64
  OrigDataType: uint64
T_92: (in SLICE((uint64) (SLICE((uint64) esi, word32, 0) << 0x00000001), word32, 0) : word32)
  Class: Eq_86
  DataType: int32
  OrigDataType: int32
T_93: (in (word32) (uint64) ((word32) (uint64) edi << 0x00000001) >= (word32) ((uint64) ((word32) ((uint64) esi) << 0x00000001)) : bool)
  Class: Eq_93
  DataType: bool
  OrigDataType: bool
T_94: (in 0x00000003 : word32)
  Class: Eq_94
  DataType: int32
  OrigDataType: int32
T_95: (in edi *s 0x00000003 : int32)
  Class: Eq_95
  DataType: int32
  OrigDataType: int32
T_96: (in (uint64) (edi *s 0x00000003) : uint64)
  Class: Eq_96
  DataType: uint64
  OrigDataType: uint64
T_97: (in SLICE((uint64) (edi *s 0x00000003), word32, 0) : word32)
  Class: Eq_97
  DataType: int32
  OrigDataType: int32
T_98: (in 0x00000003 : word32)
  Class: Eq_98
  DataType: int32
  OrigDataType: int32
T_99: (in esi *s 0x00000003 : int32)
  Class: Eq_99
  DataType: int32
  OrigDataType: int32
T_100: (in (uint64) (esi *s 0x00000003) : uint64)
  Class: Eq_100
  DataType: uint64
  OrigDataType: uint64
T_101: (in SLICE((uint64) (esi *s 0x00000003), word32, 0) : word32)
  Class: Eq_97
  DataType: int32
  OrigDataType: int32
T_102: (in (word32) (uint64) (edi *s 0x00000003) >= (word32) ((uint64) (esi *s 0x00000003)) : bool)
  Class: Eq_102
  DataType: bool
  OrigDataType: bool
T_103: (in (uint64) edi : uint64)
  Class: Eq_103
  DataType: uint64
  OrigDataType: uint64
T_104: (in SLICE((uint64) edi, word32, 0) : word32)
  Class: Eq_104
  DataType: ui32
  OrigDataType: ui32
T_105: (in 0x00000002 : word32)
  Class: Eq_105
  DataType: word32
  OrigDataType: word32
T_106: (in (word32) (uint64) edi << 0x00000002 : word32)
  Class: Eq_106
  DataType: ui32
  OrigDataType: ui32
T_107: (in (uint64) (SLICE((uint64) edi, word32, 0) << 0x00000002) : uint64)
  Class: Eq_107
  DataType: uint64
  OrigDataType: uint64
T_108: (in SLICE((uint64) (SLICE((uint64) edi, word32, 0) << 0x00000002), word32, 0) : word32)
  Class: Eq_108
  DataType: int32
  OrigDataType: int32
T_109: (in (uint64) esi : uint64)
  Class: Eq_109
  DataType: uint64
  OrigDataType: uint64
T_110: (in SLICE((uint64) esi, word32, 0) : word32)
  Class: Eq_110
  DataType: ui32
  OrigDataType: ui32
T_111: (in 0x00000002 : word32)
  Class: Eq_111
  DataType: word32
  OrigDataType: word32
T_112: (in (word32) (uint64) esi << 0x00000002 : word32)
  Class: Eq_112
  DataType: ui32
  OrigDataType: ui32
T_113: (in (uint64) (SLICE((uint64) esi, word32, 0) << 0x00000002) : uint64)
  Class: Eq_113
  DataType: uint64
  OrigDataType: uint64
T_114: (in SLICE((uint64) (SLICE((uint64) esi, word32, 0) << 0x00000002), word32, 0) : word32)
  Class: Eq_108
  DataType: int32
  OrigDataType: int32
T_115: (in (word32) (uint64) ((word32) (uint64) edi << 0x00000002) >= (word32) ((uint64) ((word32) ((uint64) esi) << 0x00000002)) : bool)
  Class: Eq_115
  DataType: bool
  OrigDataType: bool
T_116: (in rax_60 : uint64)
  Class: Eq_116
  DataType: uint64
  OrigDataType: uint64
T_117: (in (uint64) esi : uint64)
  Class: Eq_117
  DataType: uint64
  OrigDataType: uint64
T_118: (in SLICE((uint64) esi, word32, 0) : word32)
  Class: Eq_118
  DataType: word32
  OrigDataType: word32
T_119: (in (uint64) SLICE((uint64) esi, word32, 0) : uint64)
  Class: Eq_116
  DataType: uint64
  OrigDataType: uint64
T_120: (in eax_67 : int32)
  Class: Eq_120
  DataType: int32
  OrigDataType: int32
T_121: (in SLICE(rax_60, word32, 0) : word32)
  Class: Eq_121
  DataType: word32
  OrigDataType: word32
T_122: (in (int64) SLICE(rax_60, word32, 0) : int64)
  Class: Eq_122
  DataType: int64
  OrigDataType: int64
T_123: (in 0x00000002 : word32)
  Class: Eq_123
  DataType: int32
  OrigDataType: int32
T_124: (in (int64) (word32) rax_60 / 0x00000002 : word32)
  Class: Eq_124
  DataType: int32
  OrigDataType: int32
T_125: (in (int32) ((int64) SLICE(rax_60, word32, 0) / 0x00000002) : int32)
  Class: Eq_120
  DataType: int32
  OrigDataType: int32
T_126: (in rax_85 : (ptr64 void))
  Class: Eq_126
  DataType: (ptr64 void)
  OrigDataType: (ptr64 void)
T_127: (in SLICE(rax_60, word32, 32) : word32)
  Class: Eq_127
  DataType: word32
  OrigDataType: word32
T_128: (in SEQ(SLICE(rax_60, word32, 32), eax_67) : word64)
  Class: Eq_126
  DataType: (ptr64 void)
  OrigDataType: word64
T_129: (in (uint64) edi : uint64)
  Class: Eq_129
  DataType: uint64
  OrigDataType: uint64
T_130: (in SLICE((uint64) edi, word32, 0) : word32)
  Class: Eq_130
  DataType: word32
  OrigDataType: word32
T_131: (in (uint64) SLICE((uint64) edi, word32, 0) : uint64)
  Class: Eq_131
  DataType: uint64
  OrigDataType: uint64
T_132: (in SLICE((uint64) SLICE((uint64) edi, word32, 0), word32, 0) : word32)
  Class: Eq_132
  DataType: word32
  OrigDataType: word32
T_133: (in (int64) SLICE((uint64) SLICE((uint64) edi, word32, 0), word32, 0) : int64)
  Class: Eq_133
  DataType: int64
  OrigDataType: int64
T_134: (in 0x00000002 : word32)
  Class: Eq_134
  DataType: int32
  OrigDataType: int32
T_135: (in (int64) (word32) (uint64) (word32) (uint64) edi / 0x00000002 : word32)
  Class: Eq_135
  DataType: int32
  OrigDataType: int32
T_136: (in (int32) ((int64) SLICE((uint64) SLICE((uint64) edi, word32, 0), word32, 0) / 0x00000002) : int32)
  Class: Eq_136
  DataType: int32
  OrigDataType: int32
T_137: (in (uint64) (int32) ((int64) SLICE((uint64) SLICE((uint64) edi, word32, 0), word32, 0) / 0x00000002) : uint64)
  Class: Eq_137
  DataType: uint64
  OrigDataType: uint64
T_138: (in SLICE((uint64) (int32) ((int64) SLICE((uint64) SLICE((uint64) edi, word32, 0), word32, 0) / 0x00000002), word32, 0) : word32)
  Class: Eq_120
  DataType: int32
  OrigDataType: int32
T_139: (in (word32) (uint64) (int32) ((int64) (word32) (uint64) (word32) (uint64) edi / 0x00000002) >= eax_67 : bool)
  Class: Eq_139
  DataType: bool
  OrigDataType: bool
T_140: (in my1 : ptr64)
  Class: Eq_140
  DataType: (ptr64 Eq_140)
  OrigDataType: (ptr64 (fn T_146 (T_143, T_145)))
T_141: (in signature of my1 : void)
  Class: Eq_140
  DataType: (ptr64 Eq_140)
  OrigDataType: 
T_142: (in (uint64) esi : uint64)
  Class: Eq_142
  DataType: uint64
  OrigDataType: uint64
T_143: (in SLICE((uint64) esi, word32, 0) : word32)
  Class: Eq_60
  DataType: word32
  OrigDataType: word32
T_144: (in (uint64) edi : uint64)
  Class: Eq_144
  DataType: uint64
  OrigDataType: uint64
T_145: (in SLICE((uint64) edi, word32, 0) : word32)
  Class: Eq_61
  DataType: word32
  OrigDataType: word32
T_146: (in my1((word32) (uint64) esi, (word32) (uint64) edi) : void)
  Class: Eq_146
  DataType: void
  OrigDataType: void
T_147: (in free : ptr64)
  Class: Eq_147
  DataType: (ptr64 Eq_147)
  OrigDataType: (ptr64 (fn T_150 (T_126)))
T_148: (in signature of free : void)
  Class: Eq_147
  DataType: (ptr64 Eq_147)
  OrigDataType: 
T_149: (in p : (ptr64 void))
  Class: Eq_126
  DataType: (ptr64 void)
  OrigDataType: 
T_150: (in free(rax_85) : void)
  Class: Eq_150
  DataType: void
  OrigDataType: void
T_151: (in __llvm_retpoline_r11 : ptr64)
  Class: Eq_151
  DataType: (ptr64 Eq_151)
  OrigDataType: (ptr64 (fn T_153 ()))
T_152: (in signature of __llvm_retpoline_r11 : void)
  Class: Eq_151
  DataType: (ptr64 Eq_151)
  OrigDataType: 
T_153: (in __llvm_retpoline_r11() : void)
  Class: Eq_153
  DataType: void
  OrigDataType: void
T_154: (in fn0000000000400700 : ptr64)
  Class: Eq_154
  DataType: (ptr64 Eq_154)
  OrigDataType: (ptr64 (fn T_156 ()))
T_155: (in signature of fn0000000000400700 : void)
  Class: Eq_154
  DataType: (ptr64 Eq_154)
  OrigDataType: 
T_156: (in fn0000000000400700() : void)
  Class: Eq_156
  DataType: void
  OrigDataType: void
T_157: (in __pause : ptr64)
  Class: Eq_157
  DataType: (ptr64 Eq_157)
  OrigDataType: (ptr64 (fn T_159 ()))
T_158: (in signature of __pause : void)
  Class: Eq_157
  DataType: (ptr64 Eq_157)
  OrigDataType: 
T_159: (in __pause() : void)
  Class: Eq_159
  DataType: void
  OrigDataType: void
T_160: (in rdx : word64)
  Class: Eq_160
  DataType: word64
  OrigDataType: word64
T_161: (in rsi : word64)
  Class: Eq_161
  DataType: word64
  OrigDataType: word64
T_162: (in edi : word32)
  Class: Eq_162
  DataType: word32
  OrigDataType: word32
T_163: (in rdi : word64)
  Class: Eq_163
  DataType: word64
  OrigDataType: word64
T_164: (in SLICE(rdi, word32, 0) : word32)
  Class: Eq_162
  DataType: word32
  OrigDataType: word32
T_165: (in _init : ptr64)
  Class: Eq_165
  DataType: (ptr64 Eq_165)
  OrigDataType: (ptr64 (fn T_167 ()))
T_166: (in signature of _init : void)
  Class: Eq_165
  DataType: (ptr64 Eq_165)
  OrigDataType: 
T_167: (in _init() : void)
  Class: Eq_167
  DataType: void
  OrigDataType: void
T_168: (in r15d_84 : word32)
  Class: Eq_168
  DataType: word32
  OrigDataType: word32
T_169: (in (uint64) edi : uint64)
  Class: Eq_169
  DataType: uint64
  OrigDataType: uint64
T_170: (in SLICE((uint64) edi, word32, 0) : word32)
  Class: Eq_168
  DataType: word32
  OrigDataType: word32
T_171: (in rbp_30 : int64)
  Class: Eq_171
  DataType: int64
  OrigDataType: int64
T_172: (in 0000000000600E18 : ptr64)
  Class: Eq_172
  DataType: int64
  OrigDataType: (union (int64 u0) (ptr64 u1))
T_173: (in 0000000000600E10 : ptr64)
  Class: Eq_173
  DataType: int64
  OrigDataType: (union (int64 u1) (ptr64 u0))
T_174: (in 0x0000000000600E18 - 0x0000000000600E10 : word64)
  Class: Eq_171
  DataType: int64
  OrigDataType: int64
T_175: (in 0x0000000000000003 : word64)
  Class: Eq_175
  DataType: word64
  OrigDataType: word64
T_176: (in rbp_30 >> 0x0000000000000003 : word64)
  Class: Eq_176
  DataType: int64
  OrigDataType: int64
T_177: (in 0x0000000000000000 : word64)
  Class: Eq_176
  DataType: int64
  OrigDataType: word64
T_178: (in rbp_30 >> 0x0000000000000003 == 0x0000000000000000 : bool)
  Class: Eq_178
  DataType: bool
  OrigDataType: bool
T_179: (in rbx_42 : Eq_179)
  Class: Eq_179
  DataType: Eq_179
  OrigDataType: word64
T_180: (in 0x0000000000000000 : uint64)
  Class: Eq_179
  DataType: uint64
  OrigDataType: uint64
T_181: (in 0000000000600E10 : ptr64)
  Class: Eq_181
  DataType: (ptr64 (arr (ptr64 code)))
  OrigDataType: (ptr64 (struct (0 (arr T_189) a0000)))
T_182: (in 0x0000000000000008 : word64)
  Class: Eq_182
  DataType: ui64
  OrigDataType: ui64
T_183: (in rbx_42 * 0x0000000000000008 : word64)
  Class: Eq_183
  DataType: ui64
  OrigDataType: ui64
T_184: (in 0x0000000000600E10[rbx_42 * 0x0000000000000008] : word64)
  Class: Eq_184
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_185: (in 0x0000000000000001 : word64)
  Class: Eq_185
  DataType: word64
  OrigDataType: word64
T_186: (in rbx_42 + 0x0000000000000001 : word64)
  Class: Eq_179
  DataType: Eq_179
  OrigDataType: uint64
T_187: (in rbp_30 >> 0x0000000000000003 : word64)
  Class: Eq_179
  DataType: Eq_179
  OrigDataType: int64
T_188: (in rbp_30 >> 0x0000000000000003 != rbx_42 : bool)
  Class: Eq_188
  DataType: bool
  OrigDataType: bool
T_189:
  Class: Eq_189
  DataType: (ptr64 code)
  OrigDataType: (struct 0008 (0 T_184 t0000))
*/
typedef struct Globals {
	Eq_18 t400660;	// 400660
	Eq_21 t400710;	// 400710
	Eq_22 t400780;	// 400780
	<anonymous> * a600E10[];	// 600E10
	byte b601040;	// 601040
} Eq_1;

typedef void (Eq_7)();

typedef union Eq_8 {
	int32 u0;
	word64 u1;
} Eq_8;

typedef void (Eq_9)(ptr64);

typedef int32 (Eq_16)( *, Eq_8, char * *,  *,  *,  *, void);

typedef int32 (Eq_18)(int32 rdi, char * * rsi, char * * rdx);

typedef void (Eq_21)();

typedef void (Eq_22)();

typedef void (Eq_30)();

typedef void (Eq_51)();

typedef void (Eq_57)();

typedef void (Eq_62)(Eq_64, Eq_64);

typedef union Eq_64 {
	int64 u0;
	size_t u1;
} Eq_64;

typedef void (Eq_140)(word32, word32);

typedef void (Eq_147)(void);

typedef void (Eq_151)();

typedef void (Eq_154)();

typedef void (Eq_157)();

typedef void (Eq_165)();

typedef union Eq_172 {
	int64 u0;
	ptr64 u1;
} Eq_172;

typedef union Eq_173 {
	int64 u0;
	ptr64 u1;
} Eq_173;

typedef union Eq_179 {
	int64 u0;
	uint64 u1;
} Eq_179;


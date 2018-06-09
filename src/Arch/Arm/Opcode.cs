﻿namespace Reko.Arch.Arm
{
    public enum Opcode
    {
        Unknown = -1,
        Invalid = 0,

        adc,

        add,
        addw,
        adr,
        and,
        asr,
        asrs,
        b,
        bfc,
        bfi,
        bic,
        bl,
        blx,
        bx,
        cbz,
        cbnz,
        cdp,
        cdp2,
        clz,
        cmn,
        cmp,
        cps,
        dmb,
        eor,
        eret,
        esb,
        hint,
        it,
        ldc2l,
        ldc2,
        ldcl,
        ldc,
        ldm,
        ldmda,
        ldmdb,
        ldmib,
        ldr,
        ldrt,
        ldrb,
        ldrbt,
        ldrh,
        ldrht,
        ldrsb,
        ldrsbt,
        ldrsh,
        ldrsht,
        ldrd,
        ldrex,
        lsl,
        lsls,
        lsr,
        nop,
        mcr,
        mla,
        mls,
        mov,
        movt,
        movw,
        mrc,
        mrs,
        msr,
        mul,
        mvn,
        orn,
        orr,
        qadd,
        qadd16,
        qadd8,
        qdadd,
        qdsub,
        qsub,
        qsub16,
        pop,
        pop_w,
        push,
        push_w,
        rev,
        rsb,
        rsc,
        sadd16,
        sadd8,
        sbc,
        sbfx,
        sdiv,
        smlabb,
        smlabt,
        smlalbb ,
        smlalbt ,
        smlald,
       smlaldx,
       smlaltb,
       smlaltt,
        smlal,
        smlatb,
        smlatt,
        smlawb,
        smlawt,
        smlsld,
        smlsldx,
        smulbb,
        smulbt,
        smulwb,
        smulwt,
        smultb,
        smultt,
        smull,
        ssub16,
        ssub8,
        stc2l,
        stc2,
        stc,
        stcl,
        stm,
        stmdb,
        stmda,
        stmib,
        str,
        strb,
        strbt,
        strd,
        strex,
        strh,
        strht,
        strt,
        sub,
        subw,
        svc,
        swp,
        swpb,
        sxtab,
        sxtah,
        sxtb,
        sxth,
        teq,
        trap,
        tst,
        uadd16,
        uadd8,
        ubfx,
        udf,
        udiv,
        umaal,
        umlal,
        umull,
        usub16,
        usub8,
        uxtab,
        uxtah,
        uxtb,
        uxth,
        yield,



        vabs,
        vadd,
        vand,
        vcmp,
        vcmpe,
        vcvt,
        vdiv,
        vdup,
        veor,
        vext,
        vhadd,
        vhsub,
        vldmia,
        vldr,
        vmax,
        vmin,
        vmov,
        vmla,
        vmls,
        vmrs,
        vmvn,
        vmul,
        vorr,
        vneg,
        vnmla,
        vnmls,
        vnmul,
        vpadd,
        vpmax,
        vpmin,
        vpop,
        vpush,
        vqabs,
        vqadd,
        vqshl,
        vrshl,
        vrshr,
        vstmia,
        vsqrt,
        vshl,
        vstr,
        vsub,
        vabal,
        vaba,
        vabdl,
        vabd,
        vacge,
        vacgt,
        vaddhn,
        vaddl,
        vaddw,
        vbic,
        vbif,
        vbit,
        vbsl,
        vceq,
        vcge,
        vcgt,
        vcle,
        vcls,
        vclt,
        vclz,
        vcnt,
        vcvta,
        vcvtb,
        vcvtm,
        vcvtn,
        vcvtp,
        vcvtt,
        vfma,
        vfms,
        vfnma,
        vfnms,
        vld1,
        vld2,
        vld3,
        vld4,
        vldmdb,
        vmaxnm,
        vminnm,
        vmlal,
        vmlsl,
        vmovl,
        vmovn,
        vmsr,
        vmull,
        vorn,
        vpadal,
        vpaddl,
        vqdmlal,
        vqdmlsl,
        vqdmulh,
        vqdmull,
        vqmovun,
        vqmovn,
        vqneg,
        vqrdmlah,
        vqrdmlsh,
        vqrshl,
        vqrshrn,
        vqrshrun,
        vqshlu,
        vqshrn,
        vqshrun,
        vqsub,
        vraddhn,
        vrecpe,
        vrecps,
        vrev16,
        vrev32,
        vrev64,
        vrhadd,
        vrinta,
        vrintm,
        vrintn,
        vrintp,
        vrintr,
        vrintx,
        vrintz,
        vrshrn,
        vrsqrte,
        vrsqrts,
        vrsra,
        vrsubhn,
        vseleq,
        vselge,
        vselgt,
        vselvs,
        vshll,
        vshrn,
        vshr,
        vsli,
        vsra,
        vsri,
        vst1,
        vst2,
        vst3,
        vst4,
        vstmdb,
        vsubhn,
        vsubl,
        vsubw,
        vswp,
        vtbl,
        vtbx,
        vcvtr,
        vtrn,
        vtst,
        vuzp,
        vzip,

        aesd,
        aese,
        aesimc,
        aesmc,
        bkpt,
        bxj,
        clrex,
        crc32b,
        crc32cb,
        crc32ch,
        crc32cw,
        crc32h,
        crc32w,
        dbg,
        dsb,
        fldmdbx,
        fldmiax,
        fstmdbx,
        fstmiax,
        hlt,
        hvc,
        isb,
        lda,
        ldab,
        ldaex,
        ldaexb,
        ldaexd,
        ldaexh,
        ldah,
        ldrexb,
        ldrexd,
        ldrexh,
        mcr2,
        mcrr,
        mcrr2,
        mrc2,
        mrrc,
        mrrc2,
        pkhbt,
        pkhtb,
        pldw,
        pld,
        pli,
        qasx,
        qsax,
        qsub8,
        rbit,
        rev16,
        revsh,
        rfeda,
        rfedb,
        rfeia,
        rfeib,
        sasx,
        sel,
        setend,
        sha1c,
        sha1h,
        sha1m,
        sha1p,
        sha1su0,
        sha1su1,
        sha256h,
        sha256h2,
        sha256su0,
        sha256su1,
        shadd16,
        shadd8,
        shasx,
        shsax,
        shsub16,
        shsub8,
        smc,
        smlsd,
        smlsdx,
        smmla,
        smmlar,
        smmls,
        smmlsr,
        smmul,
        smmulr,
        smuad,
        smuadx,
        smusd,
        smusdx,
        srsda,
        srsdb,
        srsia,
        srsib,
        ssat,
        ssat16,
        ssax,
        stl,
        stlb,
        stlex,
        stlexb,
        stlexd,
        stlexh,
        stlh,
        strexb,
        strexd,
        strexh,
        sxtab16,
        sxtb16,
        uasx,
        uhadd16,
        uhadd8,
        uhasx,
        uhsax,
        uhsub16,
        uhsub8,
        uqadd16,
        uqadd8,
        uqasx,
        uqsax,
        uqsub16,
        uqsub8,
        usad8,
        usada8,
        usat,
        usat16,
        usax,
        uxtab16,
        uxtb16,

        dcps1,
        dcps2,
        dcps3,
        lsrs,
        ror,
        rrx,
        subs,
        tbb,
        tbh,
        movs,
        wfe,
        wfi,
        sev,
        sevl,
        smlad,
        smladx,
    }
}
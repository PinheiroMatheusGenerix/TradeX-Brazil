! File GEEXM40 : 
!===========================================================
! Line : GEEX0000 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX0000_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX0000_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX0000_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX0000_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX0000_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX0000_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX0000_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX0000_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : EMTEXC 
#define S_GEEX0000_EMTEXC peel(pick(nPos, 7, 14), " ")
#define R_GEEX0000_EMTEXC(A) put(nRec, 7, A :14.14)
!-----------------------------------------------------------
! FIELD : RCTEXC 
#define S_GEEX0000_RCTEXC peel(pick(nPos, 21, 14), " ")
#define R_GEEX0000_RCTEXC(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXC 
#define S_GEEX0000_DATEXC peel(pick(nPos, 35, 8), " ")
#define R_GEEX0000_DATEXC(A) put(nRec, 35, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_GEEX0000_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_GEEX0000_HEUEXC(A) put(nRec, 43, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : NUMEXC 
#define S_GEEX0000_NUMEXC peel(pick(nPos, 49, 7), " ")
#define R_GEEX0000_NUMEXC(A) put(nRec, 49, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : ACQEXC 
#define S_GEEX0000_ACQEXC peel(pick(nPos, 56, 1), " ")
#define R_GEEX0000_ACQEXC(A) put(nRec, 56, A :1.1)
!-----------------------------------------------------------
! FIELD : VEREXC 
#define S_GEEX0000_VEREXC peel(pick(nPos, 57, 4), " ")
#define R_GEEX0000_VEREXC(A) put(nRec, 57, A :4.4)
!-----------------------------------------------------------
! FIELD : NOMSYS 
#define S_GEEX0000_NOMSYS peel(pick(nPos, 61, 8), " ")
#define R_GEEX0000_NOMSYS(A) put(nRec, 61, A :8.8)
!-----------------------------------------------------------
! FIELD : NOMDTQ 
#define S_GEEX0000_NOMDTQ peel(pick(nPos, 69, 10), " ")
#define R_GEEX0000_NOMDTQ(A) put(nRec, 69, A :10.10)
!-----------------------------------------------------------
! FIELD : BIBDTQ 
#define S_GEEX0000_BIBDTQ peel(pick(nPos, 79, 10), " ")
#define R_GEEX0000_BIBDTQ(A) put(nRec, 79, A :10.10)
!-----------------------------------------------------------
! FIELD : LIBEXC 
#define S_GEEX0000_LIBEXC peel(pick(nPos, 89, 30), " ")
#define R_GEEX0000_LIBEXC(A) put(nRec, 89, A :30.30)
!-----------------------------------------------------------
! FIELD : BIBDST 
#define S_GEEX0000_BIBDST peel(pick(nPos, 119, 10), " ")
#define R_GEEX0000_BIBDST(A) put(nRec, 119, A :10.10)
!-----------------------------------------------------------
! FIELD : PGMDST 
#define S_GEEX0000_PGMDST peel(pick(nPos, 129, 10), " ")
#define R_GEEX0000_PGMDST(A) put(nRec, 129, A :10.10)
!-----------------------------------------------------------
! FIELD : PARDST 
#define S_GEEX0000_PARDST peel(pick(nPos, 139, 30), " ")
#define R_GEEX0000_PARDST(A) put(nRec, 139, A :30.30)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX0000_CODACT peel(pick(nPos, 169, 3), " ")
#define R_GEEX0000_CODACT(A) put(nRec, 169, A :3.3)
!-----------------------------------------------------------
! FIELD : IGLSIT 
#define S_GEEX0000_IGLSIT peel(pick(nPos, 172, 3), " ")
#define R_GEEX0000_IGLSIT(A) put(nRec, 172, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : EDISIT 
#define S_GEEX0000_EDISIT peel(pick(nPos, 175, 14), " ")
#define R_GEEX0000_EDISIT(A) put(nRec, 175, A :14.14)
!-----------------------------------------------------------
! FIELD : IMAEXC 
#define S_GEEX0000_IMAEXC peel(pick(nPos, 189, 8), " ")
#define R_GEEX0000_IMAEXC(A) put(nRec, 189, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : IDEMSG 
#define S_GEEX0000_IDEMSG peel(pick(nPos, 197, 30), " ")
#define R_GEEX0000_IDEMSG(A) put(nRec, 197, A :30.30)
!-----------------------------------------------------------
! FIELD : NATEXC 
#define S_GEEX0000_NATEXC peel(pick(nPos, 227, 5), " ")
#define R_GEEX0000_NATEXC(A) put(nRec, 227, A :5.5)
!-----------------------------------------------------------
! FIELD : EMTORI 
#define S_GEEX0000_EMTORI peel(pick(nPos, 232, 14), " ")
#define R_GEEX0000_EMTORI(A) put(nRec, 232, A :14.14)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX0000_DISEXC peel(pick(nPos, 246, 11), " ")
#define R_GEEX0000_DISEXC(A) put(nRec, 246, A :11.11)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4000 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4000_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4000_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4000_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4000_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4000_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4000_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4000_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4000_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4000_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4000_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4000_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4000_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4000_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4000_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : CODAPP 
#define S_GEEX4000_CODAPP peel(pick(nPos, 48, 10), " ")
#define R_GEEX4000_CODAPP(A) put(nRec, 48, A :10.10)
!-----------------------------------------------------------
! FIELD : CODLDR 
#define S_GEEX4000_CODLDR peel(pick(nPos, 58, 3), " ")
#define R_GEEX4000_CODLDR(A) put(nRec, 58, A :3.3)
!-----------------------------------------------------------
! FIELD : CODTRE 
#define S_GEEX4000_CODTRE peel(pick(nPos, 61, 3), " ")
#define R_GEEX4000_CODTRE(A) put(nRec, 61, A :3.3)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4000_CODACT peel(pick(nPos, 64, 3), " ")
#define R_GEEX4000_CODACT(A) put(nRec, 64, A :3.3)
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_GEEX4000_CODFOU peel(pick(nPos, 67, 14), " ")
#define R_GEEX4000_CODFOU(A) put(nRec, 67, A :14.14)
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_GEEX4000_CODTRA peel(pick(nPos, 81, 14), " ")
#define R_GEEX4000_CODTRA(A) put(nRec, 81, A :14.14)
!-----------------------------------------------------------
! FIELD : DTIREC 
#define S_GEEX4000_DTIREC peel(pick(nPos, 95, 8), " ")
#define R_GEEX4000_DTIREC(A) put(nRec, 95, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEIREC 
#define S_GEEX4000_HEIREC peel(pick(nPos, 103, 4), " ")
#define R_GEEX4000_HEIREC(A) put(nRec, 103, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : KAIREC 
#define S_GEEX4000_KAIREC peel(pick(nPos, 107, 3), " ")
#define R_GEEX4000_KAIREC(A) put(nRec, 107, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : MSGREC 
#define S_GEEX4000_MSGREC peel(pick(nPos, 110, 60), " ")
#define R_GEEX4000_MSGREC(A) put(nRec, 110, A :60.60)
!-----------------------------------------------------------
! FIELD : IGLSIT 
#define S_GEEX4000_IGLSIT peel(pick(nPos, 170, 3), " ")
#define R_GEEX4000_IGLSIT(A) put(nRec, 170, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : DTFREC 
#define S_GEEX4000_DTFREC peel(pick(nPos, 173, 8), " ")
#define R_GEEX4000_DTFREC(A) put(nRec, 173, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : EDIFOU 
#define S_GEEX4000_EDIFOU peel(pick(nPos, 181, 14), " ")
#define R_GEEX4000_EDIFOU(A) put(nRec, 181, A :14.14)
!-----------------------------------------------------------
! FIELD : METTRP 
#define S_GEEX4000_METTRP peel(pick(nPos, 195, 1), " ")
#define R_GEEX4000_METTRP(A) put(nRec, 195, A :1.1)
!-----------------------------------------------------------
! FIELD : CODRTN 
#define S_GEEX4000_CODRTN peel(pick(nPos, 196, 3), " ")
#define R_GEEX4000_CODRTN(A) put(nRec, 196, A :3.3)
!-----------------------------------------------------------
! FIELD : EDITRA 
#define S_GEEX4000_EDITRA peel(pick(nPos, 199, 14), " ")
#define R_GEEX4000_EDITRA(A) put(nRec, 199, A :14.14)
!-----------------------------------------------------------
! FIELD : CODRGT 
#define S_GEEX4000_CODRGT peel(pick(nPos, 213, 3), " ")
#define R_GEEX4000_CODRGT(A) put(nRec, 213, A :3.3)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4000_DISEXC peel(pick(nPos, 216, 41), " ")
#define R_GEEX4000_DISEXC(A) put(nRec, 216, A :41.41)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4001 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4001_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4001_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4001_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4001_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4001_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4001_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4001_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4001_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4001_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4001_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4001_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4001_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4001_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4001_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : DIPREC 
#define S_GEEX4001_DIPREC peel(pick(nPos, 48, 50), " ")
#define R_GEEX4001_DIPREC(A) put(nRec, 48, A :50.50)
!-----------------------------------------------------------
! FIELD : TOPREC 
#define S_GEEX4001_TOPREC peel(pick(nPos, 98, 5), " ")
#define R_GEEX4001_TOPREC(A) put(nRec, 98, A :5.5)
!-----------------------------------------------------------
! FIELD : NOMFOU 
#define S_GEEX4001_NOMFOU peel(pick(nPos, 103, 30), " ")
#define R_GEEX4001_NOMFOU(A) put(nRec, 103, A :30.30)
!-----------------------------------------------------------
! FIELD : AD1FOU 
#define S_GEEX4001_AD1FOU peel(pick(nPos, 133, 30), " ")
#define R_GEEX4001_AD1FOU(A) put(nRec, 133, A :30.30)
!-----------------------------------------------------------
! FIELD : AD2FOU 
#define S_GEEX4001_AD2FOU peel(pick(nPos, 163, 30), " ")
#define R_GEEX4001_AD2FOU(A) put(nRec, 163, A :30.30)
!-----------------------------------------------------------
! FIELD : CPOFOU 
#define S_GEEX4001_CPOFOU peel(pick(nPos, 193, 5), " ")
#define R_GEEX4001_CPOFOU(A) put(nRec, 193, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : VILFOU 
#define S_GEEX4001_VILFOU peel(pick(nPos, 198, 26), " ")
#define R_GEEX4001_VILFOU(A) put(nRec, 198, A :26.26)
!-----------------------------------------------------------
! FIELD : PAYFOU 
#define S_GEEX4001_PAYFOU peel(pick(nPos, 224, 3), " ")
#define R_GEEX4001_PAYFOU(A) put(nRec, 224, A :3.3)
!-----------------------------------------------------------
! FIELD : TELFOU 
#define S_GEEX4001_TELFOU peel(pick(nPos, 227, 20), " ")
#define R_GEEX4001_TELFOU(A) put(nRec, 227, A :20.20)
!-----------------------------------------------------------
! FIELD : TYPFOU 
#define S_GEEX4001_TYPFOU peel(pick(nPos, 247, 1), " ")
#define R_GEEX4001_TYPFOU(A) put(nRec, 247, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4001_DISEXC peel(pick(nPos, 248, 9), " ")
#define R_GEEX4001_DISEXC(A) put(nRec, 248, A :9.9)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4002 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4002_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4002_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4002_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4002_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4002_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4002_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4002_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4002_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4002_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4002_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4002_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4002_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4002_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4002_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : CPIFOU 
#define S_GEEX4002_CPIFOU peel(pick(nPos, 48, 10), " ")
#define R_GEEX4002_CPIFOU(A) put(nRec, 48, A :10.10)
!-----------------------------------------------------------
! FIELD : CODDDO 
#define S_GEEX4002_CODDDO peel(pick(nPos, 58, 14), " ")
#define R_GEEX4002_CODDDO(A) put(nRec, 58, A :14.14)
!-----------------------------------------------------------
! FIELD : CODCLV 
#define S_GEEX4002_CODCLV peel(pick(nPos, 72, 3), " ")
#define R_GEEX4002_CODCLV(A) put(nRec, 72, A :3.3)
!-----------------------------------------------------------
! FIELD : CODOWN 
#define S_GEEX4002_CODOWN peel(pick(nPos, 75, 14), " ")
#define R_GEEX4002_CODOWN(A) put(nRec, 75, A :14.14)
!-----------------------------------------------------------
! FIELD : AD1FOU 
#define S_GEEX4002_AD1FOU peel(pick(nPos, 89, 38), " ")
#define R_GEEX4002_AD1FOU(A) put(nRec, 89, A :38.38)
!-----------------------------------------------------------
! FIELD : AD2FOU 
#define S_GEEX4002_AD2FOU peel(pick(nPos, 127, 38), " ")
#define R_GEEX4002_AD2FOU(A) put(nRec, 127, A :38.38)
!-----------------------------------------------------------
! FIELD : AD3FOU 
#define S_GEEX4002_AD3FOU peel(pick(nPos, 165, 38), " ")
#define R_GEEX4002_AD3FOU(A) put(nRec, 165, A :38.38)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4002_DISEXC peel(pick(nPos, 203, 54), " ")
#define R_GEEX4002_DISEXC(A) put(nRec, 203, A :54.54)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4005 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4005_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4005_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4005_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4005_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4005_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4005_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4005_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4005_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4005_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4005_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4005_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4005_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4005_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4005_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_GEEX4005_CODRUB peel(pick(nPos, 48, 20), " ")
#define R_GEEX4005_CODRUB(A) put(nRec, 48, A :20.20)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX4005_VALRUB peel(pick(nPos, 68, 175), " ")
#define R_GEEX4005_VALRUB(A) put(nRec, 68, A :175.175)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4005_DISEXC peel(pick(nPos, 243, 14), " ")
#define R_GEEX4005_DISEXC(A) put(nRec, 243, A :14.14)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4007 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4007_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4007_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4007_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4007_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4007_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4007_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4007_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4007_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4007_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4007_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4007_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4007_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4007_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4007_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NUMCNT 
#define S_GEEX4007_NUMCNT peel(pick(nPos, 48, 17), " ")
#define R_GEEX4007_NUMCNT(A) put(nRec, 48, A :17.17)
!-----------------------------------------------------------
! FIELD : DATDEP 
#define S_GEEX4007_DATDEP peel(pick(nPos, 65, 8), " ")
#define R_GEEX4007_DATDEP(A) put(nRec, 65, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODNAV 
#define S_GEEX4007_CODNAV peel(pick(nPos, 73, 5), " ")
#define R_GEEX4007_CODNAV(A) put(nRec, 73, A :5.5)
!-----------------------------------------------------------
! FIELD : DATARR 
#define S_GEEX4007_DATARR peel(pick(nPos, 78, 8), " ")
#define R_GEEX4007_DATARR(A) put(nRec, 78, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODCIE 
#define S_GEEX4007_CODCIE peel(pick(nPos, 86, 5), " ")
#define R_GEEX4007_CODCIE(A) put(nRec, 86, A :5.5)
!-----------------------------------------------------------
! FIELD : TYPCNT 
#define S_GEEX4007_TYPCNT peel(pick(nPos, 91, 2), " ")
#define R_GEEX4007_TYPCNT(A) put(nRec, 91, A :2.2)
!-----------------------------------------------------------
! FIELD : CODTRS 
#define S_GEEX4007_CODTRS peel(pick(nPos, 93, 5), " ")
#define R_GEEX4007_CODTRS(A) put(nRec, 93, A :5.5)
!-----------------------------------------------------------
! FIELD : PTYDEP 
#define S_GEEX4007_PTYDEP peel(pick(nPos, 98, 2), " ")
#define R_GEEX4007_PTYDEP(A) put(nRec, 98, A :2.2)
!-----------------------------------------------------------
! FIELD : DISPO 
#define S_GEEX4007_DISPO peel(pick(nPos, 100, 157), " ")
#define R_GEEX4007_DISPO(A) put(nRec, 100, A :157.157)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4020 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4020_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4020_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4020_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4020_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4020_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4020_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4020_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4020_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4020_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4020_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4020_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4020_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4020_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4020_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4020_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4020_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4020_CODACT peel(pick(nPos, 53, 3), " ")
#define R_GEEX4020_CODACT(A) put(nRec, 53, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX4020_CODCLI peel(pick(nPos, 56, 14), " ")
#define R_GEEX4020_CODCLI(A) put(nRec, 56, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX4020_CODPRO peel(pick(nPos, 70, 17), " ")
#define R_GEEX4020_CODPRO(A) put(nRec, 70, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX4020_VALPRO peel(pick(nPos, 87, 2), " ")
#define R_GEEX4020_VALPRO(A) put(nRec, 87, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : UVCREA 
#define S_GEEX4020_UVCREA peel(pick(nPos, 89, 9), " ")
#define R_GEEX4020_UVCREA(A) put(nRec, 89, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UNICDE 
#define S_GEEX4020_UNICDE peel(pick(nPos, 98, 3), " ")
#define R_GEEX4020_UNICDE(A) put(nRec, 98, toupper(A) :3.3)
!-----------------------------------------------------------
! FIELD : CODPRN 
#define S_GEEX4020_CODPRN peel(pick(nPos, 101, 17), " ")
#define R_GEEX4020_CODPRN(A) put(nRec, 101, A :17.17)
!-----------------------------------------------------------
! FIELD : TYPOPE 
#define S_GEEX4020_TYPOPE peel(pick(nPos, 118, 1), " ")
#define R_GEEX4020_TYPOPE(A) put(nRec, 118, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMOPE 
#define S_GEEX4020_NUMOPE peel(pick(nPos, 119, 6), " ")
#define R_GEEX4020_NUMOPE(A) put(nRec, 119, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : AIGPRI 
#define S_GEEX4020_AIGPRI peel(pick(nPos, 125, 1), " ")
#define R_GEEX4020_AIGPRI(A) put(nRec, 125, A :1.1)
!-----------------------------------------------------------
! FIELD : PRIREC 
#define S_GEEX4020_PRIREC peel(pick(nPos, 126, 9), " ")
#define R_GEEX4020_PRIREC(A) put(nRec, 126, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : MSGLIG 
#define S_GEEX4020_MSGLIG peel(pick(nPos, 135, 30), " ")
#define R_GEEX4020_MSGLIG(A) put(nRec, 135, A :30.30)
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GEEX4020_MOTIMM peel(pick(nPos, 165, 3), " ")
#define R_GEEX4020_MOTIMM(A) put(nRec, 165, A :3.3)
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX4020_CODLOT peel(pick(nPos, 168, 20), " ")
#define R_GEEX4020_CODLOT(A) put(nRec, 168, A :20.20)
!-----------------------------------------------------------
! FIELD : DATFAB 
#define S_GEEX4020_DATFAB peel(pick(nPos, 188, 8), " ")
#define R_GEEX4020_DATFAB(A) put(nRec, 188, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_GEEX4020_DATFVI peel(pick(nPos, 196, 8), " ")
#define R_GEEX4020_DATFVI(A) put(nRec, 196, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SPCPRO 
#define S_GEEX4020_SPCPRO peel(pick(nPos, 204, 4), " ")
#define R_GEEX4020_SPCPRO(A) put(nRec, 204, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX4020_PCBPRO peel(pick(nPos, 208, 5), " ")
#define R_GEEX4020_PCBPRO(A) put(nRec, 208, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : PDBCOL 
#define S_GEEX4020_PDBCOL peel(pick(nPos, 213, 7), " ")
#define R_GEEX4020_PDBCOL(A) put(nRec, 213, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : VOLCOL 
#define S_GEEX4020_VOLCOL peel(pick(nPos, 220, 7), " ")
#define R_GEEX4020_VOLCOL(A) put(nRec, 220, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : COLCOU 
#define S_GEEX4020_COLCOU peel(pick(nPos, 227, 8), " ")
#define R_GEEX4020_COLCOU(A) put(nRec, 227, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : COUPAL 
#define S_GEEX4020_COUPAL peel(pick(nPos, 235, 8), " ")
#define R_GEEX4020_COUPAL(A) put(nRec, 235, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODEMB 
#define S_GEEX4020_CODEMB peel(pick(nPos, 243, 3), " ")
#define R_GEEX4020_CODEMB(A) put(nRec, 243, A :3.3)
!-----------------------------------------------------------
! FIELD : GERPAL 
#define S_GEEX4020_GERPAL peel(pick(nPos, 246, 2), " ")
#define R_GEEX4020_GERPAL(A) put(nRec, 246, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : GERHAU 
#define S_GEEX4020_GERHAU peel(pick(nPos, 248, 2), " ")
#define R_GEEX4020_GERHAU(A) put(nRec, 248, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODMDR 
#define S_GEEX4020_CODMDR peel(pick(nPos, 250, 3), " ")
#define R_GEEX4020_CODMDR(A) put(nRec, 250, A :3.3)
!-----------------------------------------------------------
! FIELD : IGLSIT 
#define S_GEEX4020_IGLSIT peel(pick(nPos, 253, 3), " ")
#define R_GEEX4020_IGLSIT(A) put(nRec, 253, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : INDUNI 
#define S_GEEX4020_INDUNI peel(pick(nPos, 256, 1), " ")
#define R_GEEX4020_INDUNI(A) put(nRec, 256, A :1.1)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4021 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4021_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4021_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4021_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4021_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4021_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4021_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4021_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4021_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4021_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4021_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4021_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4021_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4021_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4021_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4021_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4021_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : DIPREC 
#define S_GEEX4021_DIPREC peel(pick(nPos, 53, 50), " ")
#define R_GEEX4021_DIPREC(A) put(nRec, 53, A :50.50)
!-----------------------------------------------------------
! FIELD : TOPREC 
#define S_GEEX4021_TOPREC peel(pick(nPos, 103, 5), " ")
#define R_GEEX4021_TOPREC(A) put(nRec, 103, A :5.5)
!-----------------------------------------------------------
! FIELD : PRXPRO 
#define S_GEEX4021_PRXPRO peel(pick(nPos, 108, 9), " ")
#define R_GEEX4021_PRXPRO(A) put(nRec, 108, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_GEEX4021_EDIPRO peel(pick(nPos, 117, 17), " ")
#define R_GEEX4021_EDIPRO(A) put(nRec, 117, A :17.17)
!-----------------------------------------------------------
! FIELD : EDICLI 
#define S_GEEX4021_EDICLI peel(pick(nPos, 134, 14), " ")
#define R_GEEX4021_EDICLI(A) put(nRec, 134, A :14.14)
!-----------------------------------------------------------
! FIELD : CODOWN 
#define S_GEEX4021_CODOWN peel(pick(nPos, 148, 14), " ")
#define R_GEEX4021_CODOWN(A) put(nRec, 148, A :14.14)
!-----------------------------------------------------------
! FIELD : CODACR 
#define S_GEEX4021_CODACR peel(pick(nPos, 162, 3), " ")
#define R_GEEX4021_CODACR(A) put(nRec, 162, A :3.3)
!-----------------------------------------------------------
! FIELD : CODMDS 
#define S_GEEX4021_CODMDS peel(pick(nPos, 165, 3), " ")
#define R_GEEX4021_CODMDS(A) put(nRec, 165, A :3.3)
!-----------------------------------------------------------
! FIELD : ZONPRF 
#define S_GEEX4021_ZONPRF peel(pick(nPos, 168, 1), " ")
#define R_GEEX4021_ZONPRF(A) put(nRec, 168, A :1.1)
!-----------------------------------------------------------
! FIELD : ALLPRF 
#define S_GEEX4021_ALLPRF peel(pick(nPos, 169, 3), " ")
#define R_GEEX4021_ALLPRF(A) put(nRec, 169, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX4021_REFLIV peel(pick(nPos, 172, 30), " ")
#define R_GEEX4021_REFLIV(A) put(nRec, 172, A :30.30)
!-----------------------------------------------------------
! FIELD : QTEREA 
#define S_GEEX4021_QTEREA peel(pick(nPos, 202, 9), " ")
#define R_GEEX4021_QTEREA(A) put(nRec, 202, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4021_DISEXC peel(pick(nPos, 211, 46), " ")
#define R_GEEX4021_DISEXC(A) put(nRec, 211, A :46.46)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4022 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4022_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4022_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4022_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4022_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4022_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4022_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4022_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4022_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4022_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4022_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4022_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4022_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4022_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4022_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4022_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4022_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : MOTIM1 
#define S_GEEX4022_MOTIM1 peel(pick(nPos, 53, 3), " ")
#define R_GEEX4022_MOTIM1(A) put(nRec, 53, A :3.3)
!-----------------------------------------------------------
! FIELD : DATIM1 
#define S_GEEX4022_DATIM1 peel(pick(nPos, 56, 8), " ")
#define R_GEEX4022_DATIM1(A) put(nRec, 56, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUIM1 
#define S_GEEX4022_HEUIM1 peel(pick(nPos, 64, 6), " ")
#define R_GEEX4022_HEUIM1(A) put(nRec, 64, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : MOTIM2 
#define S_GEEX4022_MOTIM2 peel(pick(nPos, 70, 3), " ")
#define R_GEEX4022_MOTIM2(A) put(nRec, 70, A :3.3)
!-----------------------------------------------------------
! FIELD : DATIM2 
#define S_GEEX4022_DATIM2 peel(pick(nPos, 73, 8), " ")
#define R_GEEX4022_DATIM2(A) put(nRec, 73, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUIM2 
#define S_GEEX4022_HEUIM2 peel(pick(nPos, 81, 6), " ")
#define R_GEEX4022_HEUIM2(A) put(nRec, 81, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : MOTIM3 
#define S_GEEX4022_MOTIM3 peel(pick(nPos, 87, 3), " ")
#define R_GEEX4022_MOTIM3(A) put(nRec, 87, A :3.3)
!-----------------------------------------------------------
! FIELD : DATIM3 
#define S_GEEX4022_DATIM3 peel(pick(nPos, 90, 8), " ")
#define R_GEEX4022_DATIM3(A) put(nRec, 90, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUIM3 
#define S_GEEX4022_HEUIM3 peel(pick(nPos, 98, 6), " ")
#define R_GEEX4022_HEUIM3(A) put(nRec, 98, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4022_DISEXC peel(pick(nPos, 104, 153), " ")
#define R_GEEX4022_DISEXC(A) put(nRec, 104, A :153.153)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4023 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4023_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4023_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4023_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4023_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4023_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4023_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4023_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4023_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMARV 
#define S_GEEX4023_NUMARV peel(pick(nPos, 7, 8), " ")
#define R_GEEX4023_NUMARV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUARV 
#define S_GEEX4023_SNUARV peel(pick(nPos, 15, 3), " ")
#define R_GEEX4023_SNUARV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFARV 
#define S_GEEX4023_REFARV peel(pick(nPos, 18, 30), " ")
#define R_GEEX4023_REFARV(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : CODLDR 
#define S_GEEX4023_CODLDR peel(pick(nPos, 48, 3), " ")
#define R_GEEX4023_CODLDR(A) put(nRec, 48, A :3.3)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4023_CODACT peel(pick(nPos, 51, 3), " ")
#define R_GEEX4023_CODACT(A) put(nRec, 51, A :3.3)
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_GEEX4023_CODTRA peel(pick(nPos, 54, 14), " ")
#define R_GEEX4023_CODTRA(A) put(nRec, 54, A :14.14)
!-----------------------------------------------------------
! FIELD : DTIREC 
#define S_GEEX4023_DTIREC peel(pick(nPos, 68, 8), " ")
#define R_GEEX4023_DTIREC(A) put(nRec, 68, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEIREC 
#define S_GEEX4023_HEIREC peel(pick(nPos, 76, 4), " ")
#define R_GEEX4023_HEIREC(A) put(nRec, 76, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : KAIREC 
#define S_GEEX4023_KAIREC peel(pick(nPos, 80, 3), " ")
#define R_GEEX4023_KAIREC(A) put(nRec, 80, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : INDFIN 
#define S_GEEX4023_INDFIN peel(pick(nPos, 83, 1), " ")
#define R_GEEX4023_INDFIN(A) put(nRec, 83, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4023_DISEXC peel(pick(nPos, 84, 173), " ")
#define R_GEEX4023_DISEXC(A) put(nRec, 84, A :173.173)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4024 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4024_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4024_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4024_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4024_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4024_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4024_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4024_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4024_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMARV 
#define S_GEEX4024_NUMARV peel(pick(nPos, 7, 8), " ")
#define R_GEEX4024_NUMARV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUARV 
#define S_GEEX4024_SNUARV peel(pick(nPos, 15, 3), " ")
#define R_GEEX4024_SNUARV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFARV 
#define S_GEEX4024_REFARV peel(pick(nPos, 18, 30), " ")
#define R_GEEX4024_REFARV(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4024_NUMREC peel(pick(nPos, 48, 8), " ")
#define R_GEEX4024_NUMREC(A) put(nRec, 48, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4024_SNUREC peel(pick(nPos, 56, 3), " ")
#define R_GEEX4024_SNUREC(A) put(nRec, 56, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4024_REFREC peel(pick(nPos, 59, 30), " ")
#define R_GEEX4024_REFREC(A) put(nRec, 59, A :30.30)
!-----------------------------------------------------------
! FIELD : SEQREC 
#define S_GEEX4024_SEQREC peel(pick(nPos, 89, 4), " ")
#define R_GEEX4024_SEQREC(A) put(nRec, 89, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX4024_CODCLI peel(pick(nPos, 93, 14), " ")
#define R_GEEX4024_CODCLI(A) put(nRec, 93, A :14.14)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4024_NLIREC peel(pick(nPos, 107, 5), " ")
#define R_GEEX4024_NLIREC(A) put(nRec, 107, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4024_CODACT peel(pick(nPos, 112, 3), " ")
#define R_GEEX4024_CODACT(A) put(nRec, 112, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX4024_CODPRO peel(pick(nPos, 115, 17), " ")
#define R_GEEX4024_CODPRO(A) put(nRec, 115, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX4024_VALPRO peel(pick(nPos, 132, 2), " ")
#define R_GEEX4024_VALPRO(A) put(nRec, 132, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : UVCREA 
#define S_GEEX4024_UVCREA peel(pick(nPos, 134, 9), " ")
#define R_GEEX4024_UVCREA(A) put(nRec, 134, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UNICDE 
#define S_GEEX4024_UNICDE peel(pick(nPos, 143, 3), " ")
#define R_GEEX4024_UNICDE(A) put(nRec, 143, A :3.3)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4024_DISEXC peel(pick(nPos, 146, 111), " ")
#define R_GEEX4024_DISEXC(A) put(nRec, 146, A :111.111)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4025 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4025_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4025_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4025_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4025_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4025_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4025_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4025_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4025_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4025_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4025_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4025_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4025_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4025_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4025_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4025_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4025_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4025_CODACT peel(pick(nPos, 53, 3), " ")
#define R_GEEX4025_CODACT(A) put(nRec, 53, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX4025_CODPRO peel(pick(nPos, 56, 17), " ")
#define R_GEEX4025_CODPRO(A) put(nRec, 56, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX4025_VALPRO peel(pick(nPos, 73, 2), " ")
#define R_GEEX4025_VALPRO(A) put(nRec, 73, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TYPRUB 
#define S_GEEX4025_TYPRUB peel(pick(nPos, 75, 1), " ")
#define R_GEEX4025_TYPRUB(A) put(nRec, 75, A :1.1)
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_GEEX4025_CODRUB peel(pick(nPos, 76, 4), " ")
#define R_GEEX4025_CODRUB(A) put(nRec, 76, A :4.4)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX4025_VALRUB peel(pick(nPos, 80, 35), " ")
#define R_GEEX4025_VALRUB(A) put(nRec, 80, A :35.35)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4025_DISEXC peel(pick(nPos, 115, 142), " ")
#define R_GEEX4025_DISEXC(A) put(nRec, 115, A :142.142)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4030 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4030_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4030_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4030_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4030_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4030_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4030_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4030_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4030_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4030_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4030_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4030_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4030_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4030_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4030_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4030_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4030_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4030_CODACT peel(pick(nPos, 53, 3), " ")
#define R_GEEX4030_CODACT(A) put(nRec, 53, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX4030_CODPRO peel(pick(nPos, 56, 17), " ")
#define R_GEEX4030_CODPRO(A) put(nRec, 56, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX4030_VALPRO peel(pick(nPos, 73, 2), " ")
#define R_GEEX4030_VALPRO(A) put(nRec, 73, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TYPOPE 
#define S_GEEX4030_TYPOPE peel(pick(nPos, 75, 1), " ")
#define R_GEEX4030_TYPOPE(A) put(nRec, 75, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMOPE 
#define S_GEEX4030_NUMOPE peel(pick(nPos, 76, 6), " ")
#define R_GEEX4030_NUMOPE(A) put(nRec, 76, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX4030_CODCLI peel(pick(nPos, 82, 14), " ")
#define R_GEEX4030_CODCLI(A) put(nRec, 82, A :14.14)
!-----------------------------------------------------------
! FIELD : UVCMVT 
#define S_GEEX4030_UVCMVT peel(pick(nPos, 96, 9), " ")
#define R_GEEX4030_UVCMVT(A) put(nRec, 96, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UNICDE 
#define S_GEEX4030_UNICDE peel(pick(nPos, 105, 3), " ")
#define R_GEEX4030_UNICDE(A) put(nRec, 105, A :3.3)
!-----------------------------------------------------------
! FIELD : QTEMVT 
#define S_GEEX4030_QTEMVT peel(pick(nPos, 108, 9), " ")
#define R_GEEX4030_QTEMVT(A) put(nRec, 108, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : SPCPRO 
#define S_GEEX4030_SPCPRO peel(pick(nPos, 117, 4), " ")
#define R_GEEX4030_SPCPRO(A) put(nRec, 117, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX4030_PCBPRO peel(pick(nPos, 121, 5), " ")
#define R_GEEX4030_PCBPRO(A) put(nRec, 121, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX4030_CODLOT peel(pick(nPos, 126, 20), " ")
#define R_GEEX4030_CODLOT(A) put(nRec, 126, A :20.20)
!-----------------------------------------------------------
! FIELD : NUMLOT 
#define S_GEEX4030_NUMLOT peel(pick(nPos, 146, 9), " ")
#define R_GEEX4030_NUMLOT(A) put(nRec, 146, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : DATFAB 
#define S_GEEX4030_DATFAB peel(pick(nPos, 155, 8), " ")
#define R_GEEX4030_DATFAB(A) put(nRec, 155, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_GEEX4030_DATFVI peel(pick(nPos, 163, 8), " ")
#define R_GEEX4030_DATFVI(A) put(nRec, 163, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX4030_CODPAL peel(pick(nPos, 171, 18), " ")
#define R_GEEX4030_CODPAL(A) put(nRec, 171, A :18.18)
!-----------------------------------------------------------
! FIELD : ZONSTS 
#define S_GEEX4030_ZONSTS peel(pick(nPos, 189, 1), " ")
#define R_GEEX4030_ZONSTS(A) put(nRec, 189, A :1.1)
!-----------------------------------------------------------
! FIELD : ALLSTS 
#define S_GEEX4030_ALLSTS peel(pick(nPos, 190, 3), " ")
#define R_GEEX4030_ALLSTS(A) put(nRec, 190, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : DPLSTS 
#define S_GEEX4030_DPLSTS peel(pick(nPos, 193, 4), " ")
#define R_GEEX4030_DPLSTS(A) put(nRec, 193, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : NIVSTS 
#define S_GEEX4030_NIVSTS peel(pick(nPos, 197, 2), " ")
#define R_GEEX4030_NIVSTS(A) put(nRec, 197, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : EDTTOP 
#define S_GEEX4030_EDTTOP peel(pick(nPos, 199, 1), " ")
#define R_GEEX4030_EDTTOP(A) put(nRec, 199, A :1.1)
!-----------------------------------------------------------
! FIELD : PRXPRO 
#define S_GEEX4030_PRXPRO peel(pick(nPos, 200, 9), " ")
#define R_GEEX4030_PRXPRO(A) put(nRec, 200, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : PDBPAL 
#define S_GEEX4030_PDBPAL peel(pick(nPos, 209, 7), " ")
#define R_GEEX4030_PDBPAL(A) put(nRec, 209, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : PDNREC 
#define S_GEEX4030_PDNREC peel(pick(nPos, 216, 7), " ")
#define R_GEEX4030_PDNREC(A) put(nRec, 216, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : DATIMM 
#define S_GEEX4030_DATIMM peel(pick(nPos, 223, 16), " ")
#define R_GEEX4030_DATIMM(A) put(nRec, 223, build(number(A):R016.0))
!-----------------------------------------------------------
! FIELD : HEUIMM 
#define S_GEEX4030_HEUIMM peel(pick(nPos, 239, 12), " ")
#define R_GEEX4030_HEUIMM(A) put(nRec, 239, build(number(A):R012.0))
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GEEX4030_MOTIMM peel(pick(nPos, 251, 3), " ")
#define R_GEEX4030_MOTIMM(A) put(nRec, 251, A :3.3)
!-----------------------------------------------------------
! FIELD : CODMDS 
#define S_GEEX4030_CODMDS peel(pick(nPos, 254, 3), " ")
#define R_GEEX4030_CODMDS(A) put(nRec, 254, A :3.3)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4031 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4031_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4031_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4031_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4031_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4031_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4031_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4031_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4031_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4031_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4031_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4031_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4031_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4031_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4031_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4031_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4031_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4031_CODACT peel(pick(nPos, 53, 3), " ")
#define R_GEEX4031_CODACT(A) put(nRec, 53, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX4031_CODPRO peel(pick(nPos, 56, 17), " ")
#define R_GEEX4031_CODPRO(A) put(nRec, 56, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX4031_VALPRO peel(pick(nPos, 73, 2), " ")
#define R_GEEX4031_VALPRO(A) put(nRec, 73, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX4031_CODPAL peel(pick(nPos, 75, 18), " ")
#define R_GEEX4031_CODPAL(A) put(nRec, 75, A :18.18)
!-----------------------------------------------------------
! FIELD : CODDDO 
#define S_GEEX4031_CODDDO peel(pick(nPos, 93, 14), " ")
#define R_GEEX4031_CODDDO(A) put(nRec, 93, A :14.14)
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GEEX4031_MOTIMM peel(pick(nPos, 107, 3), " ")
#define R_GEEX4031_MOTIMM(A) put(nRec, 107, A :3.3)
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX4031_CODLOT peel(pick(nPos, 110, 20), " ")
#define R_GEEX4031_CODLOT(A) put(nRec, 110, A :20.20)
!-----------------------------------------------------------
! FIELD : HEUFAB 
#define S_GEEX4031_HEUFAB peel(pick(nPos, 130, 6), " ")
#define R_GEEX4031_HEUFAB(A) put(nRec, 130, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4031_DISEXC peel(pick(nPos, 136, 121), " ")
#define R_GEEX4031_DISEXC(A) put(nRec, 136, A :121.121)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4033 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4033_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4033_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4033_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4033_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4033_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4033_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4033_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4033_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4033_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4033_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4033_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4033_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4033_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4033_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4033_CODACT peel(pick(nPos, 48, 3), " ")
#define R_GEEX4033_CODACT(A) put(nRec, 48, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX4033_CODPAL peel(pick(nPos, 51, 18), " ")
#define R_GEEX4033_CODPAL(A) put(nRec, 51, A :18.18)
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_GEEX4033_CODRUB peel(pick(nPos, 69, 16), " ")
#define R_GEEX4033_CODRUB(A) put(nRec, 69, A :16.16)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX4033_VALRUB peel(pick(nPos, 85, 140), " ")
#define R_GEEX4033_VALRUB(A) put(nRec, 85, A :140.140)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4033_DISEXC peel(pick(nPos, 225, 32), " ")
#define R_GEEX4033_DISEXC(A) put(nRec, 225, A :32.32)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4035 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4035_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4035_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4035_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4035_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4035_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4035_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4035_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4035_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX4035_CODPAL peel(pick(nPos, 7, 72), " ")
#define R_GEEX4035_CODPAL(A) put(nRec, 7, A :72.72)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4035_DISEXC peel(pick(nPos, 79, 178), " ")
#define R_GEEX4035_DISEXC(A) put(nRec, 79, A :178.178)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4040 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4040_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4040_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4040_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4040_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4040_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4040_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4040_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4040_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4040_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4040_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4040_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4040_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4040_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4040_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4040_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4040_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4040_CODACT peel(pick(nPos, 53, 3), " ")
#define R_GEEX4040_CODACT(A) put(nRec, 53, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX4040_CODPRO peel(pick(nPos, 56, 17), " ")
#define R_GEEX4040_CODPRO(A) put(nRec, 56, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX4040_VALPRO peel(pick(nPos, 73, 2), " ")
#define R_GEEX4040_VALPRO(A) put(nRec, 73, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX4040_CODCLI peel(pick(nPos, 75, 14), " ")
#define R_GEEX4040_CODCLI(A) put(nRec, 75, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX4040_CODPAL peel(pick(nPos, 89, 18), " ")
#define R_GEEX4040_CODPAL(A) put(nRec, 89, A :18.18)
!-----------------------------------------------------------
! FIELD : CODSER 
#define S_GEEX4040_CODSER peel(pick(nPos, 107, 30), " ")
#define R_GEEX4040_CODSER(A) put(nRec, 107, A :30.30)
!-----------------------------------------------------------
! FIELD : SNUSER 
#define S_GEEX4040_SNUSER peel(pick(nPos, 137, 3), " ")
#define R_GEEX4040_SNUSER(A) put(nRec, 137, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : TYPSER 
#define S_GEEX4040_TYPSER peel(pick(nPos, 140, 1), " ")
#define R_GEEX4040_TYPSER(A) put(nRec, 140, A :1.1)
!-----------------------------------------------------------
! FIELD : PDBSER 
#define S_GEEX4040_PDBSER peel(pick(nPos, 141, 7), " ")
#define R_GEEX4040_PDBSER(A) put(nRec, 141, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4040_DISEXC peel(pick(nPos, 148, 109), " ")
#define R_GEEX4040_DISEXC(A) put(nRec, 148, A :109.109)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4060 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4060_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4060_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4060_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4060_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4060_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4060_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4060_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4060_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLOT 
#define S_GEEX4060_NUMLOT peel(pick(nPos, 7, 9), " ")
#define R_GEEX4060_NUMLOT(A) put(nRec, 7, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX4060_CODLOT peel(pick(nPos, 16, 20), " ")
#define R_GEEX4060_CODLOT(A) put(nRec, 16, A :20.20)
!-----------------------------------------------------------
! FIELD : DATCND 
#define S_GEEX4060_DATCND peel(pick(nPos, 36, 8), " ")
#define R_GEEX4060_DATCND(A) put(nRec, 36, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_GEEX4060_DATFVI peel(pick(nPos, 44, 8), " ")
#define R_GEEX4060_DATFVI(A) put(nRec, 44, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4060_CODACT peel(pick(nPos, 52, 3), " ")
#define R_GEEX4060_CODACT(A) put(nRec, 52, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX4060_CODPRO peel(pick(nPos, 55, 17), " ")
#define R_GEEX4060_CODPRO(A) put(nRec, 55, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX4060_VALPRO peel(pick(nPos, 72, 2), " ")
#define R_GEEX4060_VALPRO(A) put(nRec, 72, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : ZONSTS 
#define S_GEEX4060_ZONSTS peel(pick(nPos, 74, 1), " ")
#define R_GEEX4060_ZONSTS(A) put(nRec, 74, A :1.1)
!-----------------------------------------------------------
! FIELD : ALLSTS 
#define S_GEEX4060_ALLSTS peel(pick(nPos, 75, 3), " ")
#define R_GEEX4060_ALLSTS(A) put(nRec, 75, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : PALPRE 
#define S_GEEX4060_PALPRE peel(pick(nPos, 78, 5), " ")
#define R_GEEX4060_PALPRE(A) put(nRec, 78, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : MSGLOT 
#define S_GEEX4060_MSGLOT peel(pick(nPos, 83, 60), " ")
#define R_GEEX4060_MSGLOT(A) put(nRec, 83, A :60.60)
!-----------------------------------------------------------
! FIELD : DATFAB 
#define S_GEEX4060_DATFAB peel(pick(nPos, 143, 8), " ")
#define R_GEEX4060_DATFAB(A) put(nRec, 143, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUFAB 
#define S_GEEX4060_HEUFAB peel(pick(nPos, 151, 6), " ")
#define R_GEEX4060_HEUFAB(A) put(nRec, 151, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : LOGLOT 
#define S_GEEX4060_LOGLOT peel(pick(nPos, 157, 30), " ")
#define R_GEEX4060_LOGLOT(A) put(nRec, 157, A :30.30)
!-----------------------------------------------------------
! FIELD : CODATL 
#define S_GEEX4060_CODATL peel(pick(nPos, 187, 10), " ")
#define R_GEEX4060_CODATL(A) put(nRec, 187, A :10.10)
!-----------------------------------------------------------
! FIELD : CODMAF 
#define S_GEEX4060_CODMAF peel(pick(nPos, 197, 40), " ")
#define R_GEEX4060_CODMAF(A) put(nRec, 197, A :40.40)
!-----------------------------------------------------------
! FIELD : DISPO 
#define S_GEEX4060_DISPO peel(pick(nPos, 237, 20), " ")
#define R_GEEX4060_DISPO(A) put(nRec, 237, A :20.20)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4080 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4080_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4080_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4080_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4080_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4080_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4080_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4080_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4080_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4080_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4080_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4080_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4080_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4080_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX4080_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_GEEX4080_CODFOU peel(pick(nPos, 21, 14), " ")
#define R_GEEX4080_CODFOU(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4080_REFREC peel(pick(nPos, 35, 30), " ")
#define R_GEEX4080_REFREC(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : SEQTXR 
#define S_GEEX4080_SEQTXR peel(pick(nPos, 65, 4), " ")
#define R_GEEX4080_SEQTXR(A) put(nRec, 65, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : LIBTXR 
#define S_GEEX4080_LIBTXR peel(pick(nPos, 69, 120), " ")
#define R_GEEX4080_LIBTXR(A) put(nRec, 69, A :120.120)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4080_DISEXC peel(pick(nPos, 189, 68), " ")
#define R_GEEX4080_DISEXC(A) put(nRec, 189, A :68.68)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4099 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4099_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4099_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4099_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4099_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4099_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4099_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4099_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4099_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4099_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4099_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4099_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4099_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4099_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4099_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : CUMLIG 
#define S_GEEX4099_CUMLIG peel(pick(nPos, 48, 4), " ")
#define R_GEEX4099_CUMLIG(A) put(nRec, 48, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4099_DISEXC peel(pick(nPos, 52, 205), " ")
#define R_GEEX4099_DISEXC(A) put(nRec, 52, A :205.205)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9900 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9900_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9900_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9900_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9900_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9900_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9900_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9900_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9900_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : EMTEXC 
#define S_GEEX9900_EMTEXC peel(pick(nPos, 7, 14), " ")
#define R_GEEX9900_EMTEXC(A) put(nRec, 7, A :14.14)
!-----------------------------------------------------------
! FIELD : RCTEXC 
#define S_GEEX9900_RCTEXC peel(pick(nPos, 21, 14), " ")
#define R_GEEX9900_RCTEXC(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXC 
#define S_GEEX9900_DATEXC peel(pick(nPos, 35, 8), " ")
#define R_GEEX9900_DATEXC(A) put(nRec, 35, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_GEEX9900_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_GEEX9900_HEUEXC(A) put(nRec, 43, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : NUMEXC 
#define S_GEEX9900_NUMEXC peel(pick(nPos, 49, 7), " ")
#define R_GEEX9900_NUMEXC(A) put(nRec, 49, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : CPTEXC 
#define S_GEEX9900_CPTEXC peel(pick(nPos, 56, 8), " ")
#define R_GEEX9900_CPTEXC(A) put(nRec, 56, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : NOMSYS 
#define S_GEEX9900_NOMSYS peel(pick(nPos, 64, 8), " ")
#define R_GEEX9900_NOMSYS(A) put(nRec, 64, A :8.8)
!-----------------------------------------------------------
! FIELD : NOMDTQ 
#define S_GEEX9900_NOMDTQ peel(pick(nPos, 72, 10), " ")
#define R_GEEX9900_NOMDTQ(A) put(nRec, 72, A :10.10)
!-----------------------------------------------------------
! FIELD : BIBDTQ 
#define S_GEEX9900_BIBDTQ peel(pick(nPos, 82, 10), " ")
#define R_GEEX9900_BIBDTQ(A) put(nRec, 82, A :10.10)
!-----------------------------------------------------------
! FIELD : IDEMSG 
#define S_GEEX9900_IDEMSG peel(pick(nPos, 92, 30), " ")
#define R_GEEX9900_IDEMSG(A) put(nRec, 92, A :30.30)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9900_DISEXC peel(pick(nPos, 122, 135), " ")
#define R_GEEX9900_DISEXC(A) put(nRec, 122, A :135.135)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9999 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9999_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9999_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9999_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9999_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9999_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9999_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9999_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9999_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : EMTEXC 
#define S_GEEX9999_EMTEXC peel(pick(nPos, 7, 14), " ")
#define R_GEEX9999_EMTEXC(A) put(nRec, 7, A :14.14)
!-----------------------------------------------------------
! FIELD : RCTEXC 
#define S_GEEX9999_RCTEXC peel(pick(nPos, 21, 14), " ")
#define R_GEEX9999_RCTEXC(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXC 
#define S_GEEX9999_DATEXC peel(pick(nPos, 35, 8), " ")
#define R_GEEX9999_DATEXC(A) put(nRec, 35, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_GEEX9999_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_GEEX9999_HEUEXC(A) put(nRec, 43, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : NUMEXC 
#define S_GEEX9999_NUMEXC peel(pick(nPos, 49, 7), " ")
#define R_GEEX9999_NUMEXC(A) put(nRec, 49, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : CPTEXC 
#define S_GEEX9999_CPTEXC peel(pick(nPos, 56, 8), " ")
#define R_GEEX9999_CPTEXC(A) put(nRec, 56, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : ERREXC 
#define S_GEEX9999_ERREXC peel(pick(nPos, 64, 8), " ")
#define R_GEEX9999_ERREXC(A) put(nRec, 64, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : IDEMSG 
#define S_GEEX9999_IDEMSG peel(pick(nPos, 72, 30), " ")
#define R_GEEX9999_IDEMSG(A) put(nRec, 72, A :30.30)
!-----------------------------------------------------------
! FIELD : DEBFIN 
#define S_GEEX9999_DEBFIN peel(pick(nPos, 102, 1), " ")
#define R_GEEX9999_DEBFIN(A) put(nRec, 102, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9999_DISEXC peel(pick(nPos, 103, 154), " ")
#define R_GEEX9999_DISEXC(A) put(nRec, 103, A :154.154)
!-----------------------------------------------------------

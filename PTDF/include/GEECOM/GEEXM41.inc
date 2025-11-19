! File GEEXM41 : 
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
! Line : GEEX4100 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4100_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4100_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4100_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4100_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4100_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4100_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4100_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4100_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4100_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4100_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4100_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4100_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4100_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4100_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : CODAPP 
#define S_GEEX4100_CODAPP peel(pick(nPos, 48, 10), " ")
#define R_GEEX4100_CODAPP(A) put(nRec, 48, A :10.10)
!-----------------------------------------------------------
! FIELD : CODLDR 
#define S_GEEX4100_CODLDR peel(pick(nPos, 58, 3), " ")
#define R_GEEX4100_CODLDR(A) put(nRec, 58, A :3.3)
!-----------------------------------------------------------
! FIELD : CODTRE 
#define S_GEEX4100_CODTRE peel(pick(nPos, 61, 3), " ")
#define R_GEEX4100_CODTRE(A) put(nRec, 61, A :3.3)
!-----------------------------------------------------------
! FIELD : ORICDE 
#define S_GEEX4100_ORICDE peel(pick(nPos, 64, 1), " ")
#define R_GEEX4100_ORICDE(A) put(nRec, 64, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4100_CODACT peel(pick(nPos, 65, 3), " ")
#define R_GEEX4100_CODACT(A) put(nRec, 65, A :3.3)
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_GEEX4100_CODFOU peel(pick(nPos, 68, 14), " ")
#define R_GEEX4100_CODFOU(A) put(nRec, 68, A :14.14)
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_GEEX4100_CODTRA peel(pick(nPos, 82, 14), " ")
#define R_GEEX4100_CODTRA(A) put(nRec, 82, A :14.14)
!-----------------------------------------------------------
! FIELD : DTIREC 
#define S_GEEX4100_DTIREC peel(pick(nPos, 96, 8), " ")
#define R_GEEX4100_DTIREC(A) put(nRec, 96, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEIREC 
#define S_GEEX4100_HEIREC peel(pick(nPos, 104, 4), " ")
#define R_GEEX4100_HEIREC(A) put(nRec, 104, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : DTMREC 
#define S_GEEX4100_DTMREC peel(pick(nPos, 108, 8), " ")
#define R_GEEX4100_DTMREC(A) put(nRec, 108, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEMREC 
#define S_GEEX4100_HEMREC peel(pick(nPos, 116, 4), " ")
#define R_GEEX4100_HEMREC(A) put(nRec, 116, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : DTRREC 
#define S_GEEX4100_DTRREC peel(pick(nPos, 120, 8), " ")
#define R_GEEX4100_DTRREC(A) put(nRec, 120, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HERREC 
#define S_GEEX4100_HERREC peel(pick(nPos, 128, 4), " ")
#define R_GEEX4100_HERREC(A) put(nRec, 128, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : KAIREC 
#define S_GEEX4100_KAIREC peel(pick(nPos, 132, 3), " ")
#define R_GEEX4100_KAIREC(A) put(nRec, 132, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CTRREC 
#define S_GEEX4100_CTRREC peel(pick(nPos, 135, 10), " ")
#define R_GEEX4100_CTRREC(A) put(nRec, 135, A :10.10)
!-----------------------------------------------------------
! FIELD : REFCNT 
#define S_GEEX4100_REFCNT peel(pick(nPos, 145, 10), " ")
#define R_GEEX4100_REFCNT(A) put(nRec, 145, A :10.10)
!-----------------------------------------------------------
! FIELD : CMTREC 
#define S_GEEX4100_CMTREC peel(pick(nPos, 155, 60), " ")
#define R_GEEX4100_CMTREC(A) put(nRec, 155, A :60.60)
!-----------------------------------------------------------
! FIELD : DATRLQ 
#define S_GEEX4100_DATRLQ peel(pick(nPos, 215, 8), " ")
#define R_GEEX4100_DATRLQ(A) put(nRec, 215, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODACR 
#define S_GEEX4100_CODACR peel(pick(nPos, 223, 3), " ")
#define R_GEEX4100_CODACR(A) put(nRec, 223, A :3.3)
!-----------------------------------------------------------
! FIELD : NATREC 
#define S_GEEX4100_NATREC peel(pick(nPos, 226, 1), " ")
#define R_GEEX4100_NATREC(A) put(nRec, 226, A :1.1)
!-----------------------------------------------------------
! FIELD : EDIFOU 
#define S_GEEX4100_EDIFOU peel(pick(nPos, 227, 14), " ")
#define R_GEEX4100_EDIFOU(A) put(nRec, 227, A :14.14)
!-----------------------------------------------------------
! FIELD : CODCNT 
#define S_GEEX4100_CODCNT peel(pick(nPos, 241, 14), " ")
#define R_GEEX4100_CODCNT(A) put(nRec, 241, A :14.14)
!-----------------------------------------------------------
! FIELD : TYPRMT 
#define S_GEEX4100_TYPRMT peel(pick(nPos, 255, 1), " ")
#define R_GEEX4100_TYPRMT(A) put(nRec, 255, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4100_DISEXC peel(pick(nPos, 256, 1), " ")
#define R_GEEX4100_DISEXC(A) put(nRec, 256, A :1.1)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4101 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4101_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4101_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4101_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4101_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4101_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4101_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4101_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4101_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4101_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4101_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4101_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4101_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4101_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4101_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : DIPREC 
#define S_GEEX4101_DIPREC peel(pick(nPos, 48, 50), " ")
#define R_GEEX4101_DIPREC(A) put(nRec, 48, A :50.50)
!-----------------------------------------------------------
! FIELD : TOPREC 
#define S_GEEX4101_TOPREC peel(pick(nPos, 98, 5), " ")
#define R_GEEX4101_TOPREC(A) put(nRec, 98, A :5.5)
!-----------------------------------------------------------
! FIELD : DATBDR 
#define S_GEEX4101_DATBDR peel(pick(nPos, 103, 8), " ")
#define R_GEEX4101_DATBDR(A) put(nRec, 103, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : EDIACT 
#define S_GEEX4101_EDIACT peel(pick(nPos, 111, 14), " ")
#define R_GEEX4101_EDIACT(A) put(nRec, 111, A :14.14)
!-----------------------------------------------------------
! FIELD : EDITRA 
#define S_GEEX4101_EDITRA peel(pick(nPos, 125, 14), " ")
#define R_GEEX4101_EDITRA(A) put(nRec, 125, A :14.14)
!-----------------------------------------------------------
! FIELD : DATBDL 
#define S_GEEX4101_DATBDL peel(pick(nPos, 139, 8), " ")
#define R_GEEX4101_DATBDL(A) put(nRec, 139, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODTDD 
#define S_GEEX4101_CODTDD peel(pick(nPos, 147, 3), " ")
#define R_GEEX4101_CODTDD(A) put(nRec, 147, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMMTR 
#define S_GEEX4101_NUMMTR peel(pick(nPos, 150, 20), " ")
#define R_GEEX4101_NUMMTR(A) put(nRec, 150, A :20.20)
!-----------------------------------------------------------
! FIELD : NUMTOU 
#define S_GEEX4101_NUMTOU peel(pick(nPos, 170, 8), " ")
#define R_GEEX4101_NUMTOU(A) put(nRec, 170, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODRCN 
#define S_GEEX4101_CODRCN peel(pick(nPos, 178, 10), " ")
#define R_GEEX4101_CODRCN(A) put(nRec, 178, A :10.10)
!-----------------------------------------------------------
! FIELD : RCTSAP 
#define S_GEEX4101_RCTSAP peel(pick(nPos, 188, 14), " ")
#define R_GEEX4101_RCTSAP(A) put(nRec, 188, A :14.14)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4101_DISEXC peel(pick(nPos, 202, 55), " ")
#define R_GEEX4101_DISEXC(A) put(nRec, 202, A :55.55)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4102 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4102_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4102_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4102_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4102_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4102_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4102_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4102_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4102_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4102_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4102_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4102_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4102_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4102_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4102_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : MSGREC 
#define S_GEEX4102_MSGREC peel(pick(nPos, 48, 60), " ")
#define R_GEEX4102_MSGREC(A) put(nRec, 48, A :60.60)
!-----------------------------------------------------------
! FIELD : INFLIV 
#define S_GEEX4102_INFLIV peel(pick(nPos, 108, 15), " ")
#define R_GEEX4102_INFLIV(A) put(nRec, 108, A :15.15)
!-----------------------------------------------------------
! FIELD : INFCMR 
#define S_GEEX4102_INFCMR peel(pick(nPos, 123, 15), " ")
#define R_GEEX4102_INFCMR(A) put(nRec, 123, A :15.15)
!-----------------------------------------------------------
! FIELD : INFVET 
#define S_GEEX4102_INFVET peel(pick(nPos, 138, 15), " ")
#define R_GEEX4102_INFVET(A) put(nRec, 138, A :15.15)
!-----------------------------------------------------------
! FIELD : INFDOU 
#define S_GEEX4102_INFDOU peel(pick(nPos, 153, 15), " ")
#define R_GEEX4102_INFDOU(A) put(nRec, 153, A :15.15)
!-----------------------------------------------------------
! FIELD : TEMCAM 
#define S_GEEX4102_TEMCAM peel(pick(nPos, 168, 3), " ")
#define R_GEEX4102_TEMCAM(A) put(nRec, 168, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : MOTRCP 
#define S_GEEX4102_MOTRCP peel(pick(nPos, 171, 3), " ")
#define R_GEEX4102_MOTRCP(A) put(nRec, 171, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMBDL 
#define S_GEEX4102_NUMBDL peel(pick(nPos, 174, 6), " ")
#define R_GEEX4102_NUMBDL(A) put(nRec, 174, A :6.6)
!-----------------------------------------------------------
! FIELD : DATBDL 
#define S_GEEX4102_DATBDL peel(pick(nPos, 180, 8), " ")
#define R_GEEX4102_DATBDL(A) put(nRec, 180, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4102_DISEXC peel(pick(nPos, 188, 69), " ")
#define R_GEEX4102_DISEXC(A) put(nRec, 188, A :69.69)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4103 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4103_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4103_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4103_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4103_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4103_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4103_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4103_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4103_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4103_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4103_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4103_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4103_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4103_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4103_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4103_CODACT peel(pick(nPos, 48, 3), " ")
#define R_GEEX4103_CODACT(A) put(nRec, 48, A :3.3)
!-----------------------------------------------------------
! FIELD : MOTRFU 
#define S_GEEX4103_MOTRFU peel(pick(nPos, 51, 3), " ")
#define R_GEEX4103_MOTRFU(A) put(nRec, 51, A :3.3)
!-----------------------------------------------------------
! FIELD : CMTRFU 
#define S_GEEX4103_CMTRFU peel(pick(nPos, 54, 30), " ")
#define R_GEEX4103_CMTRFU(A) put(nRec, 54, A :30.30)
!-----------------------------------------------------------
! FIELD : CM2RFU 
#define S_GEEX4103_CM2RFU peel(pick(nPos, 84, 30), " ")
#define R_GEEX4103_CM2RFU(A) put(nRec, 84, A :30.30)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4103_DISEXC peel(pick(nPos, 114, 143), " ")
#define R_GEEX4103_DISEXC(A) put(nRec, 114, A :143.143)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4105 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4105_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4105_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4105_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4105_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4105_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4105_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4105_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4105_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4105_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4105_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4105_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4105_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4105_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4105_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_GEEX4105_CODRUB peel(pick(nPos, 48, 20), " ")
#define R_GEEX4105_CODRUB(A) put(nRec, 48, A :20.20)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX4105_VALRUB peel(pick(nPos, 68, 175), " ")
#define R_GEEX4105_VALRUB(A) put(nRec, 68, A :175.175)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4105_DISEXC peel(pick(nPos, 243, 14), " ")
#define R_GEEX4105_DISEXC(A) put(nRec, 243, A :14.14)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4107 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4107_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4107_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4107_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4107_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4107_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4107_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4107_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4107_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4107_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4107_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4107_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4107_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4107_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4107_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_GEEX4107_CODRUB peel(pick(nPos, 48, 20), " ")
#define R_GEEX4107_CODRUB(A) put(nRec, 48, A :20.20)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX4107_VALRUB peel(pick(nPos, 68, 175), " ")
#define R_GEEX4107_VALRUB(A) put(nRec, 68, A :175.175)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4107_DISEXC peel(pick(nPos, 243, 14), " ")
#define R_GEEX4107_DISEXC(A) put(nRec, 243, A :14.14)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4110 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4110_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4110_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4110_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4110_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4110_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4110_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4110_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4110_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4110_REFREC peel(pick(nPos, 7, 30), " ")
#define R_GEEX4110_REFREC(A) put(nRec, 7, A :30.30)
!-----------------------------------------------------------
! FIELD : NUMSUP 
#define S_GEEX4110_NUMSUP peel(pick(nPos, 37, 8), " ")
#define R_GEEX4110_NUMSUP(A) put(nRec, 37, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUSUP 
#define S_GEEX4110_SNUSUP peel(pick(nPos, 45, 3), " ")
#define R_GEEX4110_SNUSUP(A) put(nRec, 45, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX4110_CODPAL peel(pick(nPos, 48, 18), " ")
#define R_GEEX4110_CODPAL(A) put(nRec, 48, A :18.18)
!-----------------------------------------------------------
! FIELD : ETASUP 
#define S_GEEX4110_ETASUP peel(pick(nPos, 66, 2), " ")
#define R_GEEX4110_ETASUP(A) put(nRec, 66, A :2.2)
!-----------------------------------------------------------
! FIELD : LIBSUP 
#define S_GEEX4110_LIBSUP peel(pick(nPos, 68, 30), " ")
#define R_GEEX4110_LIBSUP(A) put(nRec, 68, A :30.30)
!-----------------------------------------------------------
! FIELD : TOPMNQ 
#define S_GEEX4110_TOPMNQ peel(pick(nPos, 98, 1), " ")
#define R_GEEX4110_TOPMNQ(A) put(nRec, 98, A :1.1)
!-----------------------------------------------------------
! FIELD : DATPRP 
#define S_GEEX4110_DATPRP peel(pick(nPos, 99, 8), " ")
#define R_GEEX4110_DATPRP(A) put(nRec, 99, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATLIV 
#define S_GEEX4110_DATLIV peel(pick(nPos, 107, 8), " ")
#define R_GEEX4110_DATLIV(A) put(nRec, 107, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : KAILIV 
#define S_GEEX4110_KAILIV peel(pick(nPos, 115, 3), " ")
#define R_GEEX4110_KAILIV(A) put(nRec, 115, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX4110_REFLIV peel(pick(nPos, 118, 30), " ")
#define R_GEEX4110_REFLIV(A) put(nRec, 118, A :30.30)
!-----------------------------------------------------------
! FIELD : CLILIV 
#define S_GEEX4110_CLILIV peel(pick(nPos, 148, 14), " ")
#define R_GEEX4110_CLILIV(A) put(nRec, 148, A :14.14)
!-----------------------------------------------------------
! FIELD : CUMPOI 
#define S_GEEX4110_CUMPOI peel(pick(nPos, 162, 11), " ")
#define R_GEEX4110_CUMPOI(A) put(nRec, 162, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : CUMVOL 
#define S_GEEX4110_CUMVOL peel(pick(nPos, 173, 11), " ")
#define R_GEEX4110_CUMVOL(A) put(nRec, 173, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4110_CODACT peel(pick(nPos, 184, 3), " ")
#define R_GEEX4110_CODACT(A) put(nRec, 184, A :3.3)
!-----------------------------------------------------------
! FIELD : CODEMB 
#define S_GEEX4110_CODEMB peel(pick(nPos, 187, 3), " ")
#define R_GEEX4110_CODEMB(A) put(nRec, 187, A :3.3)
!-----------------------------------------------------------
! FIELD : CUMCOL 
#define S_GEEX4110_CUMCOL peel(pick(nPos, 190, 7), " ")
#define R_GEEX4110_CUMCOL(A) put(nRec, 190, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : CUMPRT 
#define S_GEEX4110_CUMPRT peel(pick(nPos, 197, 9), " ")
#define R_GEEX4110_CUMPRT(A) put(nRec, 197, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CUMEQP 
#define S_GEEX4110_CUMEQP peel(pick(nPos, 206, 9), " ")
#define R_GEEX4110_CUMEQP(A) put(nRec, 206, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CUMUOT 
#define S_GEEX4110_CUMUOT peel(pick(nPos, 215, 9), " ")
#define R_GEEX4110_CUMUOT(A) put(nRec, 215, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : NUMTOU 
#define S_GEEX4110_NUMTOU peel(pick(nPos, 224, 8), " ")
#define R_GEEX4110_NUMTOU(A) put(nRec, 224, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : TOULIV 
#define S_GEEX4110_TOULIV peel(pick(nPos, 232, 4), " ")
#define R_GEEX4110_TOULIV(A) put(nRec, 232, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : ORDLIV 
#define S_GEEX4110_ORDLIV peel(pick(nPos, 236, 4), " ")
#define R_GEEX4110_ORDLIV(A) put(nRec, 236, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : PAQDNG 
#define S_GEEX4110_PAQDNG peel(pick(nPos, 240, 1), " ")
#define R_GEEX4110_PAQDNG(A) put(nRec, 240, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4110_DISEXC peel(pick(nPos, 241, 16), " ")
#define R_GEEX4110_DISEXC(A) put(nRec, 241, A :16.16)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4120 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4120_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4120_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4120_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4120_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4120_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4120_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4120_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4120_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4120_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4120_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4120_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4120_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4120_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4120_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4120_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4120_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4120_CODACT peel(pick(nPos, 53, 3), " ")
#define R_GEEX4120_CODACT(A) put(nRec, 53, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX4120_CODCLI peel(pick(nPos, 56, 14), " ")
#define R_GEEX4120_CODCLI(A) put(nRec, 56, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX4120_CODPRO peel(pick(nPos, 70, 17), " ")
#define R_GEEX4120_CODPRO(A) put(nRec, 70, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX4120_VALPRO peel(pick(nPos, 87, 2), " ")
#define R_GEEX4120_VALPRO(A) put(nRec, 87, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : UVCREA 
#define S_GEEX4120_UVCREA peel(pick(nPos, 89, 9), " ")
#define R_GEEX4120_UVCREA(A) put(nRec, 89, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UNICDE 
#define S_GEEX4120_UNICDE peel(pick(nPos, 98, 3), " ")
#define R_GEEX4120_UNICDE(A) put(nRec, 98, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRN 
#define S_GEEX4120_CODPRN peel(pick(nPos, 101, 17), " ")
#define R_GEEX4120_CODPRN(A) put(nRec, 101, A :17.17)
!-----------------------------------------------------------
! FIELD : TYPOPE 
#define S_GEEX4120_TYPOPE peel(pick(nPos, 118, 1), " ")
#define R_GEEX4120_TYPOPE(A) put(nRec, 118, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMOPE 
#define S_GEEX4120_NUMOPE peel(pick(nPos, 119, 6), " ")
#define R_GEEX4120_NUMOPE(A) put(nRec, 119, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODACR 
#define S_GEEX4120_CODACR peel(pick(nPos, 125, 3), " ")
#define R_GEEX4120_CODACR(A) put(nRec, 125, A :3.3)
!-----------------------------------------------------------
! FIELD : UVCREC 
#define S_GEEX4120_UVCREC peel(pick(nPos, 128, 9), " ")
#define R_GEEX4120_UVCREC(A) put(nRec, 128, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UVCGRA 
#define S_GEEX4120_UVCGRA peel(pick(nPos, 137, 9), " ")
#define R_GEEX4120_UVCGRA(A) put(nRec, 137, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UVCIMM 
#define S_GEEX4120_UVCIMM peel(pick(nPos, 146, 9), " ")
#define R_GEEX4120_UVCIMM(A) put(nRec, 146, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GEEX4120_MOTIMM peel(pick(nPos, 155, 3), " ")
#define R_GEEX4120_MOTIMM(A) put(nRec, 155, A :3.3)
!-----------------------------------------------------------
! FIELD : UVCRFU 
#define S_GEEX4120_UVCRFU peel(pick(nPos, 158, 9), " ")
#define R_GEEX4120_UVCRFU(A) put(nRec, 158, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : MOTRFU 
#define S_GEEX4120_MOTRFU peel(pick(nPos, 167, 3), " ")
#define R_GEEX4120_MOTRFU(A) put(nRec, 167, A :3.3)
!-----------------------------------------------------------
! FIELD : UVCRLQ 
#define S_GEEX4120_UVCRLQ peel(pick(nPos, 170, 9), " ")
#define R_GEEX4120_UVCRLQ(A) put(nRec, 170, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_GEEX4120_DATFVI peel(pick(nPos, 179, 8), " ")
#define R_GEEX4120_DATFVI(A) put(nRec, 179, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : MESPRO 
#define S_GEEX4120_MESPRO peel(pick(nPos, 187, 1), " ")
#define R_GEEX4120_MESPRO(A) put(nRec, 187, A :1.1)
!-----------------------------------------------------------
! FIELD : PDNREC 
#define S_GEEX4120_PDNREC peel(pick(nPos, 188, 11), " ")
#define R_GEEX4120_PDNREC(A) put(nRec, 188, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : DATFAB 
#define S_GEEX4120_DATFAB peel(pick(nPos, 199, 8), " ")
#define R_GEEX4120_DATFAB(A) put(nRec, 199, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX4120_CODLOT peel(pick(nPos, 207, 20), " ")
#define R_GEEX4120_CODLOT(A) put(nRec, 207, A :20.20)
!-----------------------------------------------------------
! FIELD : NUMLOT 
#define S_GEEX4120_NUMLOT peel(pick(nPos, 227, 9), " ")
#define R_GEEX4120_NUMLOT(A) put(nRec, 227, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : RECSOL 
#define S_GEEX4120_RECSOL peel(pick(nPos, 236, 1), " ")
#define R_GEEX4120_RECSOL(A) put(nRec, 236, A :1.1)
!-----------------------------------------------------------
! FIELD : CODMTR 
#define S_GEEX4120_CODMTR peel(pick(nPos, 237, 5), " ")
#define R_GEEX4120_CODMTR(A) put(nRec, 237, A :5.5)
!-----------------------------------------------------------
! FIELD : INDPRO 
#define S_GEEX4120_INDPRO peel(pick(nPos, 242, 10), " ")
#define R_GEEX4120_INDPRO(A) put(nRec, 242, A :10.10)
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX4120_PCBPRO peel(pick(nPos, 252, 5), " ")
#define R_GEEX4120_PCBPRO(A) put(nRec, 252, build(number(A):R05.0))
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4121 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4121_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4121_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4121_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4121_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4121_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4121_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4121_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4121_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4121_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4121_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4121_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4121_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4121_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4121_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4121_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4121_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : DIPREC 
#define S_GEEX4121_DIPREC peel(pick(nPos, 53, 50), " ")
#define R_GEEX4121_DIPREC(A) put(nRec, 53, A :50.50)
!-----------------------------------------------------------
! FIELD : TOPREC 
#define S_GEEX4121_TOPREC peel(pick(nPos, 103, 5), " ")
#define R_GEEX4121_TOPREC(A) put(nRec, 103, A :5.5)
!-----------------------------------------------------------
! FIELD : PRXPRO 
#define S_GEEX4121_PRXPRO peel(pick(nPos, 108, 9), " ")
#define R_GEEX4121_PRXPRO(A) put(nRec, 108, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_GEEX4121_EDIPRO peel(pick(nPos, 117, 17), " ")
#define R_GEEX4121_EDIPRO(A) put(nRec, 117, A :17.17)
!-----------------------------------------------------------
! FIELD : EDICLI 
#define S_GEEX4121_EDICLI peel(pick(nPos, 134, 14), " ")
#define R_GEEX4121_EDICLI(A) put(nRec, 134, A :14.14)
!-----------------------------------------------------------
! FIELD : UVCPRE 
#define S_GEEX4121_UVCPRE peel(pick(nPos, 148, 9), " ")
#define R_GEEX4121_UVCPRE(A) put(nRec, 148, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UNIREC 
#define S_GEEX4121_UNIREC peel(pick(nPos, 157, 3), " ")
#define R_GEEX4121_UNIREC(A) put(nRec, 157, A :3.3)
!-----------------------------------------------------------
! FIELD : QTEUOM 
#define S_GEEX4121_QTEUOM peel(pick(nPos, 160, 9), " ")
#define R_GEEX4121_QTEUOM(A) put(nRec, 160, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CODTDD 
#define S_GEEX4121_CODTDD peel(pick(nPos, 169, 3), " ")
#define R_GEEX4121_CODTDD(A) put(nRec, 169, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMMTR 
#define S_GEEX4121_NUMMTR peel(pick(nPos, 172, 20), " ")
#define R_GEEX4121_NUMMTR(A) put(nRec, 172, A :20.20)
!-----------------------------------------------------------
! FIELD : SENPDS 
#define S_GEEX4121_SENPDS peel(pick(nPos, 192, 1), " ")
#define R_GEEX4121_SENPDS(A) put(nRec, 192, A :1.1)
!-----------------------------------------------------------
! FIELD : ECAPDS 
#define S_GEEX4121_ECAPDS peel(pick(nPos, 193, 11), " ")
#define R_GEEX4121_ECAPDS(A) put(nRec, 193, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : TYPPRX 
#define S_GEEX4121_TYPPRX peel(pick(nPos, 204, 1), " ")
#define R_GEEX4121_TYPPRX(A) put(nRec, 204, A :1.1)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX4121_REFLIV peel(pick(nPos, 205, 30), " ")
#define R_GEEX4121_REFLIV(A) put(nRec, 205, A :30.30)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4121_DISEXC peel(pick(nPos, 235, 22), " ")
#define R_GEEX4121_DISEXC(A) put(nRec, 235, A :22.22)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4122 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4122_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4122_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4122_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4122_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4122_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4122_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4122_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4122_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4122_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4122_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4122_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4122_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4122_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4122_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4122_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4122_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4122_CODACT peel(pick(nPos, 53, 3), " ")
#define R_GEEX4122_CODACT(A) put(nRec, 53, A :3.3)
!-----------------------------------------------------------
! FIELD : MOTRFU 
#define S_GEEX4122_MOTRFU peel(pick(nPos, 56, 3), " ")
#define R_GEEX4122_MOTRFU(A) put(nRec, 56, A :3.3)
!-----------------------------------------------------------
! FIELD : UVCRFU 
#define S_GEEX4122_UVCRFU peel(pick(nPos, 59, 9), " ")
#define R_GEEX4122_UVCRFU(A) put(nRec, 59, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CMTRFU 
#define S_GEEX4122_CMTRFU peel(pick(nPos, 68, 30), " ")
#define R_GEEX4122_CMTRFU(A) put(nRec, 68, A :30.30)
!-----------------------------------------------------------
! FIELD : CM2RFU 
#define S_GEEX4122_CM2RFU peel(pick(nPos, 98, 30), " ")
#define R_GEEX4122_CM2RFU(A) put(nRec, 98, A :30.30)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4122_DISEXC peel(pick(nPos, 128, 129), " ")
#define R_GEEX4122_DISEXC(A) put(nRec, 128, A :129.129)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4123 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4123_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4123_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4123_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4123_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4123_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4123_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4123_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4123_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4123_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4123_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4123_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4123_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4123_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4123_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4123_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4123_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4123_CODACT peel(pick(nPos, 53, 3), " ")
#define R_GEEX4123_CODACT(A) put(nRec, 53, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX4123_CODCLI peel(pick(nPos, 56, 14), " ")
#define R_GEEX4123_CODCLI(A) put(nRec, 56, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX4123_CODPRO peel(pick(nPos, 70, 17), " ")
#define R_GEEX4123_CODPRO(A) put(nRec, 70, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX4123_VALPRO peel(pick(nPos, 87, 2), " ")
#define R_GEEX4123_VALPRO(A) put(nRec, 87, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : DS1PRO 
#define S_GEEX4123_DS1PRO peel(pick(nPos, 89, 35), " ")
#define R_GEEX4123_DS1PRO(A) put(nRec, 89, A :35.35)
!-----------------------------------------------------------
! FIELD : DS2PRO 
#define S_GEEX4123_DS2PRO peel(pick(nPos, 124, 32), " ")
#define R_GEEX4123_DS2PRO(A) put(nRec, 124, A :32.32)
!-----------------------------------------------------------
! FIELD : DS3PRO 
#define S_GEEX4123_DS3PRO peel(pick(nPos, 156, 35), " ")
#define R_GEEX4123_DS3PRO(A) put(nRec, 156, A :35.35)
!-----------------------------------------------------------
! FIELD : FAMPRO 
#define S_GEEX4123_FAMPRO peel(pick(nPos, 191, 10), " ")
#define R_GEEX4123_FAMPRO(A) put(nRec, 191, A :10.10)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4123_DISEXC peel(pick(nPos, 201, 56), " ")
#define R_GEEX4123_DISEXC(A) put(nRec, 201, A :56.56)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4125 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4125_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4125_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4125_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4125_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4125_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4125_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4125_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4125_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4125_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4125_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4125_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4125_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4125_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4125_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4125_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4125_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4125_CODACT peel(pick(nPos, 53, 3), " ")
#define R_GEEX4125_CODACT(A) put(nRec, 53, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX4125_CODPRO peel(pick(nPos, 56, 17), " ")
#define R_GEEX4125_CODPRO(A) put(nRec, 56, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX4125_VALPRO peel(pick(nPos, 73, 2), " ")
#define R_GEEX4125_VALPRO(A) put(nRec, 73, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TYPRUB 
#define S_GEEX4125_TYPRUB peel(pick(nPos, 75, 1), " ")
#define R_GEEX4125_TYPRUB(A) put(nRec, 75, A :1.1)
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_GEEX4125_CODRUB peel(pick(nPos, 76, 4), " ")
#define R_GEEX4125_CODRUB(A) put(nRec, 76, A :4.4)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX4125_VALRUB peel(pick(nPos, 80, 35), " ")
#define R_GEEX4125_VALRUB(A) put(nRec, 80, A :35.35)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4125_DISEXC peel(pick(nPos, 115, 142), " ")
#define R_GEEX4125_DISEXC(A) put(nRec, 115, A :142.142)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4127 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4127_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4127_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4127_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4127_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4127_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4127_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4127_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4127_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4127_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4127_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4127_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4127_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4127_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4127_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4127_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4127_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : ACTENF 
#define S_GEEX4127_ACTENF peel(pick(nPos, 53, 3), " ")
#define R_GEEX4127_ACTENF(A) put(nRec, 53, A :3.3)
!-----------------------------------------------------------
! FIELD : CODOPE 
#define S_GEEX4127_CODOPE peel(pick(nPos, 56, 14), " ")
#define R_GEEX4127_CODOPE(A) put(nRec, 56, A :14.14)
!-----------------------------------------------------------
! FIELD : PROENF 
#define S_GEEX4127_PROENF peel(pick(nPos, 70, 17), " ")
#define R_GEEX4127_PROENF(A) put(nRec, 70, A :17.17)
!-----------------------------------------------------------
! FIELD : VALENF 
#define S_GEEX4127_VALENF peel(pick(nPos, 87, 2), " ")
#define R_GEEX4127_VALENF(A) put(nRec, 87, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : UVCREC 
#define S_GEEX4127_UVCREC peel(pick(nPos, 89, 9), " ")
#define R_GEEX4127_UVCREC(A) put(nRec, 89, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : MESPRO 
#define S_GEEX4127_MESPRO peel(pick(nPos, 98, 1), " ")
#define R_GEEX4127_MESPRO(A) put(nRec, 98, A :1.1)
!-----------------------------------------------------------
! FIELD : PDNREC 
#define S_GEEX4127_PDNREC peel(pick(nPos, 99, 11), " ")
#define R_GEEX4127_PDNREC(A) put(nRec, 99, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX4127_CODLOT peel(pick(nPos, 110, 20), " ")
#define R_GEEX4127_CODLOT(A) put(nRec, 110, A :20.20)
!-----------------------------------------------------------
! FIELD : PRXEST 
#define S_GEEX4127_PRXEST peel(pick(nPos, 130, 9), " ")
#define R_GEEX4127_PRXEST(A) put(nRec, 130, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : PRXVAL 
#define S_GEEX4127_PRXVAL peel(pick(nPos, 139, 9), " ")
#define R_GEEX4127_PRXVAL(A) put(nRec, 139, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : PRXACH 
#define S_GEEX4127_PRXACH peel(pick(nPos, 148, 9), " ")
#define R_GEEX4127_PRXACH(A) put(nRec, 148, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX4127_PCBPRO peel(pick(nPos, 157, 5), " ")
#define R_GEEX4127_PCBPRO(A) put(nRec, 157, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4127_DISEXC peel(pick(nPos, 162, 95), " ")
#define R_GEEX4127_DISEXC(A) put(nRec, 162, A :95.95)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4128 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4128_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4128_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4128_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4128_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4128_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4128_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4128_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4128_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4128_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4128_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4128_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4128_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4128_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4128_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4128_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4128_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : SEQLIT 
#define S_GEEX4128_SEQLIT peel(pick(nPos, 53, 4), " ")
#define R_GEEX4128_SEQLIT(A) put(nRec, 53, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4128_CODACT peel(pick(nPos, 57, 3), " ")
#define R_GEEX4128_CODACT(A) put(nRec, 57, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX4128_CODPRO peel(pick(nPos, 60, 17), " ")
#define R_GEEX4128_CODPRO(A) put(nRec, 60, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX4128_VALPRO peel(pick(nPos, 77, 2), " ")
#define R_GEEX4128_VALPRO(A) put(nRec, 77, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_GEEX4128_EDIPRO peel(pick(nPos, 79, 17), " ")
#define R_GEEX4128_EDIPRO(A) put(nRec, 79, A :17.17)
!-----------------------------------------------------------
! FIELD : MOTLIT 
#define S_GEEX4128_MOTLIT peel(pick(nPos, 96, 3), " ")
#define R_GEEX4128_MOTLIT(A) put(nRec, 96, A :3.3)
!-----------------------------------------------------------
! FIELD : SENLIT 
#define S_GEEX4128_SENLIT peel(pick(nPos, 99, 1), " ")
#define R_GEEX4128_SENLIT(A) put(nRec, 99, A :1.1)
!-----------------------------------------------------------
! FIELD : UVCLIT 
#define S_GEEX4128_UVCLIT peel(pick(nPos, 100, 9), " ")
#define R_GEEX4128_UVCLIT(A) put(nRec, 100, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UNIUVC 
#define S_GEEX4128_UNIUVC peel(pick(nPos, 109, 3), " ")
#define R_GEEX4128_UNIUVC(A) put(nRec, 109, A :3.3)
!-----------------------------------------------------------
! FIELD : NUOLIT 
#define S_GEEX4128_NUOLIT peel(pick(nPos, 112, 9), " ")
#define R_GEEX4128_NUOLIT(A) put(nRec, 112, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UNIUOA 
#define S_GEEX4128_UNIUOA peel(pick(nPos, 121, 3), " ")
#define R_GEEX4128_UNIUOA(A) put(nRec, 121, A :3.3)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4128_DISEXC peel(pick(nPos, 124, 133), " ")
#define R_GEEX4128_DISEXC(A) put(nRec, 124, A :133.133)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4130 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4130_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4130_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4130_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4130_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4130_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4130_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4130_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4130_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4130_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4130_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4130_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4130_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4130_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4130_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4130_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4130_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : UVCMVT 
#define S_GEEX4130_UVCMVT peel(pick(nPos, 53, 9), " ")
#define R_GEEX4130_UVCMVT(A) put(nRec, 53, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : SPCPRO 
#define S_GEEX4130_SPCPRO peel(pick(nPos, 62, 4), " ")
#define R_GEEX4130_SPCPRO(A) put(nRec, 62, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX4130_PCBPRO peel(pick(nPos, 66, 5), " ")
#define R_GEEX4130_PCBPRO(A) put(nRec, 66, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX4130_CODLOT peel(pick(nPos, 71, 20), " ")
#define R_GEEX4130_CODLOT(A) put(nRec, 71, A :20.20)
!-----------------------------------------------------------
! FIELD : NUMLOT 
#define S_GEEX4130_NUMLOT peel(pick(nPos, 91, 9), " ")
#define R_GEEX4130_NUMLOT(A) put(nRec, 91, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CODNDS 
#define S_GEEX4130_CODNDS peel(pick(nPos, 100, 20), " ")
#define R_GEEX4130_CODNDS(A) put(nRec, 100, A :20.20)
!-----------------------------------------------------------
! FIELD : DATFAB 
#define S_GEEX4130_DATFAB peel(pick(nPos, 120, 8), " ")
#define R_GEEX4130_DATFAB(A) put(nRec, 120, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_GEEX4130_DATFVI peel(pick(nPos, 128, 8), " ")
#define R_GEEX4130_DATFVI(A) put(nRec, 128, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX4130_CODPAL peel(pick(nPos, 136, 18), " ")
#define R_GEEX4130_CODPAL(A) put(nRec, 136, A :18.18)
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GEEX4130_MOTIMM peel(pick(nPos, 154, 3), " ")
#define R_GEEX4130_MOTIMM(A) put(nRec, 154, A :3.3)
!-----------------------------------------------------------
! FIELD : DATIMM 
#define S_GEEX4130_DATIMM peel(pick(nPos, 157, 16), " ")
#define R_GEEX4130_DATIMM(A) put(nRec, 157, build(number(A):R016.0))
!-----------------------------------------------------------
! FIELD : HEUIMM 
#define S_GEEX4130_HEUIMM peel(pick(nPos, 173, 12), " ")
#define R_GEEX4130_HEUIMM(A) put(nRec, 173, build(number(A):R012.0))
!-----------------------------------------------------------
! FIELD : CODSIT 
#define S_GEEX4130_CODSIT peel(pick(nPos, 185, 3), " ")
#define R_GEEX4130_CODSIT(A) put(nRec, 185, A :3.3)
!-----------------------------------------------------------
! FIELD : ZONSTS 
#define S_GEEX4130_ZONSTS peel(pick(nPos, 188, 1), " ")
#define R_GEEX4130_ZONSTS(A) put(nRec, 188, A :1.1)
!-----------------------------------------------------------
! FIELD : ALLSTS 
#define S_GEEX4130_ALLSTS peel(pick(nPos, 189, 3), " ")
#define R_GEEX4130_ALLSTS(A) put(nRec, 189, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : DPLSTS 
#define S_GEEX4130_DPLSTS peel(pick(nPos, 192, 4), " ")
#define R_GEEX4130_DPLSTS(A) put(nRec, 192, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : NIVSTS 
#define S_GEEX4130_NIVSTS peel(pick(nPos, 196, 2), " ")
#define R_GEEX4130_NIVSTS(A) put(nRec, 196, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4130_CODACT peel(pick(nPos, 198, 3), " ")
#define R_GEEX4130_CODACT(A) put(nRec, 198, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX4130_CODCLI peel(pick(nPos, 201, 14), " ")
#define R_GEEX4130_CODCLI(A) put(nRec, 201, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX4130_CODPRO peel(pick(nPos, 215, 17), " ")
#define R_GEEX4130_CODPRO(A) put(nRec, 215, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX4130_VALPRO peel(pick(nPos, 232, 2), " ")
#define R_GEEX4130_VALPRO(A) put(nRec, 232, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : PRXPRO 
#define S_GEEX4130_PRXPRO peel(pick(nPos, 234, 9), " ")
#define R_GEEX4130_PRXPRO(A) put(nRec, 234, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : PDBPAL 
#define S_GEEX4130_PDBPAL peel(pick(nPos, 243, 7), " ")
#define R_GEEX4130_PDBPAL(A) put(nRec, 243, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : PDNREC 
#define S_GEEX4130_PDNREC peel(pick(nPos, 250, 7), " ")
#define R_GEEX4130_PDNREC(A) put(nRec, 250, build(number(A):R07.0))
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4131 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4131_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4131_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4131_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4131_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4131_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4131_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4131_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4131_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4131_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4131_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4131_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4131_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4131_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4131_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4131_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4131_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODEMB 
#define S_GEEX4131_CODEMB peel(pick(nPos, 53, 3), " ")
#define R_GEEX4131_CODEMB(A) put(nRec, 53, A :3.3)
!-----------------------------------------------------------
! FIELD : PROEMB 
#define S_GEEX4131_PROEMB peel(pick(nPos, 56, 17), " ")
#define R_GEEX4131_PROEMB(A) put(nRec, 56, A :17.17)
!-----------------------------------------------------------
! FIELD : DATREC 
#define S_GEEX4131_DATREC peel(pick(nPos, 73, 8), " ")
#define R_GEEX4131_DATREC(A) put(nRec, 73, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUREC 
#define S_GEEX4131_HEUREC peel(pick(nPos, 81, 6), " ")
#define R_GEEX4131_HEUREC(A) put(nRec, 81, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : HEUFAB 
#define S_GEEX4131_HEUFAB peel(pick(nPos, 87, 6), " ")
#define R_GEEX4131_HEUFAB(A) put(nRec, 87, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODEAP 
#define S_GEEX4131_CODEAP peel(pick(nPos, 93, 3), " ")
#define R_GEEX4131_CODEAP(A) put(nRec, 93, A :3.3)
!-----------------------------------------------------------
! FIELD : PROEAP 
#define S_GEEX4131_PROEAP peel(pick(nPos, 96, 17), " ")
#define R_GEEX4131_PROEAP(A) put(nRec, 96, A :17.17)
!-----------------------------------------------------------
! FIELD : TEMPAL 
#define S_GEEX4131_TEMPAL peel(pick(nPos, 113, 4), " ")
#define R_GEEX4131_TEMPAL(A) put(nRec, 113, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : SENTEM 
#define S_GEEX4131_SENTEM peel(pick(nPos, 117, 1), " ")
#define R_GEEX4131_SENTEM(A) put(nRec, 117, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4131_DISEXC peel(pick(nPos, 118, 139), " ")
#define R_GEEX4131_DISEXC(A) put(nRec, 118, A :139.139)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4135 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4135_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4135_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4135_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4135_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4135_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4135_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4135_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4135_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4135_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4135_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4135_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4135_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4135_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4135_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4135_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4135_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODOBL 
#define S_GEEX4135_CODOBL peel(pick(nPos, 53, 35), " ")
#define R_GEEX4135_CODOBL(A) put(nRec, 53, A :35.35)
!-----------------------------------------------------------
! FIELD : NLIOBL 
#define S_GEEX4135_NLIOBL peel(pick(nPos, 88, 5), " ")
#define R_GEEX4135_NLIOBL(A) put(nRec, 88, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : DATSTO 
#define S_GEEX4135_DATSTO peel(pick(nPos, 93, 8), " ")
#define R_GEEX4135_DATSTO(A) put(nRec, 93, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUSTO 
#define S_GEEX4135_HEUSTO peel(pick(nPos, 101, 6), " ")
#define R_GEEX4135_HEUSTO(A) put(nRec, 101, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_GEEX4135_CODFOU peel(pick(nPos, 107, 14), " ")
#define R_GEEX4135_CODFOU(A) put(nRec, 107, A :14.14)
!-----------------------------------------------------------
! FIELD : AVIREF 
#define S_GEEX4135_AVIREF peel(pick(nPos, 121, 35), " ")
#define R_GEEX4135_AVIREF(A) put(nRec, 121, A :35.35)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4135_DISEXC peel(pick(nPos, 156, 101), " ")
#define R_GEEX4135_DISEXC(A) put(nRec, 156, A :101.101)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4136 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4136_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4136_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4136_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4136_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4136_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4136_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4136_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4136_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4136_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4136_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4136_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4136_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4136_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4136_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4136_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4136_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODOBL 
#define S_GEEX4136_CODOBL peel(pick(nPos, 53, 35), " ")
#define R_GEEX4136_CODOBL(A) put(nRec, 53, A :35.35)
!-----------------------------------------------------------
! FIELD : NLIOBL 
#define S_GEEX4136_NLIOBL peel(pick(nPos, 88, 5), " ")
#define R_GEEX4136_NLIOBL(A) put(nRec, 88, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODRSV 
#define S_GEEX4136_CODRSV peel(pick(nPos, 93, 3), " ")
#define R_GEEX4136_CODRSV(A) put(nRec, 93, A :3.3)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4136_DISEXC peel(pick(nPos, 96, 161), " ")
#define R_GEEX4136_DISEXC(A) put(nRec, 96, A :161.161)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4140 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4140_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4140_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4140_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4140_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4140_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4140_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4140_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4140_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4140_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4140_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4140_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4140_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4140_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4140_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4140_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4140_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4140_CODACT peel(pick(nPos, 53, 3), " ")
#define R_GEEX4140_CODACT(A) put(nRec, 53, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX4140_CODPRO peel(pick(nPos, 56, 17), " ")
#define R_GEEX4140_CODPRO(A) put(nRec, 56, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX4140_VALPRO peel(pick(nPos, 73, 2), " ")
#define R_GEEX4140_VALPRO(A) put(nRec, 73, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX4140_CODCLI peel(pick(nPos, 75, 14), " ")
#define R_GEEX4140_CODCLI(A) put(nRec, 75, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX4140_CODPAL peel(pick(nPos, 89, 18), " ")
#define R_GEEX4140_CODPAL(A) put(nRec, 89, A :18.18)
!-----------------------------------------------------------
! FIELD : CODSER 
#define S_GEEX4140_CODSER peel(pick(nPos, 107, 30), " ")
#define R_GEEX4140_CODSER(A) put(nRec, 107, A :30.30)
!-----------------------------------------------------------
! FIELD : SNUSER 
#define S_GEEX4140_SNUSER peel(pick(nPos, 137, 3), " ")
#define R_GEEX4140_SNUSER(A) put(nRec, 137, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : NUMPAL 
#define S_GEEX4140_NUMPAL peel(pick(nPos, 140, 9), " ")
#define R_GEEX4140_NUMPAL(A) put(nRec, 140, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : SNUPAL 
#define S_GEEX4140_SNUPAL peel(pick(nPos, 149, 2), " ")
#define R_GEEX4140_SNUPAL(A) put(nRec, 149, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : NUMSER 
#define S_GEEX4140_NUMSER peel(pick(nPos, 151, 9), " ")
#define R_GEEX4140_NUMSER(A) put(nRec, 151, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CODOBI 
#define S_GEEX4140_CODOBI peel(pick(nPos, 160, 36), " ")
#define R_GEEX4140_CODOBI(A) put(nRec, 160, A :36.36)
!-----------------------------------------------------------
! FIELD : TYPSER 
#define S_GEEX4140_TYPSER peel(pick(nPos, 196, 1), " ")
#define R_GEEX4140_TYPSER(A) put(nRec, 196, A :1.1)
!-----------------------------------------------------------
! FIELD : PDBSER 
#define S_GEEX4140_PDBSER peel(pick(nPos, 197, 7), " ")
#define R_GEEX4140_PDBSER(A) put(nRec, 197, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4140_DISEXC peel(pick(nPos, 204, 53), " ")
#define R_GEEX4140_DISEXC(A) put(nRec, 204, A :53.53)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4145 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4145_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4145_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4145_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4145_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4145_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4145_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4145_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4145_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4145_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4145_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4145_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4145_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4145_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4145_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4145_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4145_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX4145_CODPAL peel(pick(nPos, 53, 18), " ")
#define R_GEEX4145_CODPAL(A) put(nRec, 53, A :18.18)
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GEEX4145_MOTIMM peel(pick(nPos, 71, 3), " ")
#define R_GEEX4145_MOTIMM(A) put(nRec, 71, A :3.3)
!-----------------------------------------------------------
! FIELD : EDIIMO 
#define S_GEEX4145_EDIIMO peel(pick(nPos, 74, 3), " ")
#define R_GEEX4145_EDIIMO(A) put(nRec, 74, A :3.3)
!-----------------------------------------------------------
! FIELD : BLOANO 
#define S_GEEX4145_BLOANO peel(pick(nPos, 77, 1), " ")
#define R_GEEX4145_BLOANO(A) put(nRec, 77, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4145_DISEXC peel(pick(nPos, 78, 179), " ")
#define R_GEEX4145_DISEXC(A) put(nRec, 78, A :179.179)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4150 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4150_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4150_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4150_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4150_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4150_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4150_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4150_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4150_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4150_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4150_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4150_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4150_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4150_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4150_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4150_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4150_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4150_CODACT peel(pick(nPos, 53, 3), " ")
#define R_GEEX4150_CODACT(A) put(nRec, 53, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX4150_CODPRO peel(pick(nPos, 56, 17), " ")
#define R_GEEX4150_CODPRO(A) put(nRec, 56, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX4150_VALPRO peel(pick(nPos, 73, 2), " ")
#define R_GEEX4150_VALPRO(A) put(nRec, 73, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX4150_CODCLI peel(pick(nPos, 75, 14), " ")
#define R_GEEX4150_CODCLI(A) put(nRec, 75, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX4150_CODPAL peel(pick(nPos, 89, 18), " ")
#define R_GEEX4150_CODPAL(A) put(nRec, 89, A :18.18)
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_GEEX4150_CODRUB peel(pick(nPos, 107, 4), " ")
#define R_GEEX4150_CODRUB(A) put(nRec, 107, A :4.4)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX4150_VALRUB peel(pick(nPos, 111, 35), " ")
#define R_GEEX4150_VALRUB(A) put(nRec, 111, A :35.35)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4150_DISEXC peel(pick(nPos, 146, 111), " ")
#define R_GEEX4150_DISEXC(A) put(nRec, 146, A :111.111)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4170 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4170_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4170_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4170_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4170_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4170_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4170_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4170_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4170_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4170_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4170_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4170_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4170_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4170_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX4170_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_GEEX4170_CODFOU peel(pick(nPos, 21, 14), " ")
#define R_GEEX4170_CODFOU(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4170_REFREC peel(pick(nPos, 35, 30), " ")
#define R_GEEX4170_REFREC(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : NUMWAG 
#define S_GEEX4170_NUMWAG peel(pick(nPos, 65, 180), " ")
#define R_GEEX4170_NUMWAG(A) put(nRec, 65, A :180.180)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4170_DISEXC peel(pick(nPos, 245, 12), " ")
#define R_GEEX4170_DISEXC(A) put(nRec, 245, A :12.12)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4180 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4180_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4180_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4180_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4180_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4180_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4180_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4180_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4180_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4180_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4180_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4180_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4180_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4180_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX4180_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_GEEX4180_CODFOU peel(pick(nPos, 21, 14), " ")
#define R_GEEX4180_CODFOU(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4180_REFREC peel(pick(nPos, 35, 30), " ")
#define R_GEEX4180_REFREC(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : CODEMB 
#define S_GEEX4180_CODEMB peel(pick(nPos, 65, 3), " ")
#define R_GEEX4180_CODEMB(A) put(nRec, 65, A :3.3)
!-----------------------------------------------------------
! FIELD : QTBSOR 
#define S_GEEX4180_QTBSOR peel(pick(nPos, 68, 9), " ")
#define R_GEEX4180_QTBSOR(A) put(nRec, 68, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : QTBENT 
#define S_GEEX4180_QTBENT peel(pick(nPos, 77, 9), " ")
#define R_GEEX4180_QTBENT(A) put(nRec, 77, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : PRXEMB 
#define S_GEEX4180_PRXEMB peel(pick(nPos, 86, 6), " ")
#define R_GEEX4180_PRXEMB(A) put(nRec, 86, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_GEEX4180_CODTRA peel(pick(nPos, 92, 14), " ")
#define R_GEEX4180_CODTRA(A) put(nRec, 92, A :14.14)
!-----------------------------------------------------------
! FIELD : PROEMB 
#define S_GEEX4180_PROEMB peel(pick(nPos, 106, 17), " ")
#define R_GEEX4180_PROEMB(A) put(nRec, 106, A :17.17)
!-----------------------------------------------------------
! FIELD : DATEMB 
#define S_GEEX4180_DATEMB peel(pick(nPos, 123, 8), " ")
#define R_GEEX4180_DATEMB(A) put(nRec, 123, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : TYPTIE 
#define S_GEEX4180_TYPTIE peel(pick(nPos, 131, 1), " ")
#define R_GEEX4180_TYPTIE(A) put(nRec, 131, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4180_DISEXC peel(pick(nPos, 132, 125), " ")
#define R_GEEX4180_DISEXC(A) put(nRec, 132, A :125.125)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4184 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4184_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4184_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4184_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4184_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4184_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4184_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4184_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4184_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4184_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4184_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4184_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4184_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4184_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX4184_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_GEEX4184_CODFOU peel(pick(nPos, 21, 14), " ")
#define R_GEEX4184_CODFOU(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4184_REFREC peel(pick(nPos, 35, 30), " ")
#define R_GEEX4184_REFREC(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : CODEMB 
#define S_GEEX4184_CODEMB peel(pick(nPos, 65, 3), " ")
#define R_GEEX4184_CODEMB(A) put(nRec, 65, A :3.3)
!-----------------------------------------------------------
! FIELD : LIBTYP 
#define S_GEEX4184_LIBTYP peel(pick(nPos, 68, 3), " ")
#define R_GEEX4184_LIBTYP(A) put(nRec, 68, A :3.3)
!-----------------------------------------------------------
! FIELD : CODIMA 
#define S_GEEX4184_CODIMA peel(pick(nPos, 71, 175), " ")
#define R_GEEX4184_CODIMA(A) put(nRec, 71, A :175.175)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4184_DISEXC peel(pick(nPos, 246, 11), " ")
#define R_GEEX4184_DISEXC(A) put(nRec, 246, A :11.11)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4190 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4190_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4190_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4190_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4190_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4190_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4190_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4190_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4190_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMPAL 
#define S_GEEX4190_NUMPAL peel(pick(nPos, 7, 9), " ")
#define R_GEEX4190_NUMPAL(A) put(nRec, 7, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : SNUPAL 
#define S_GEEX4190_SNUPAL peel(pick(nPos, 16, 2), " ")
#define R_GEEX4190_SNUPAL(A) put(nRec, 16, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4190_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX4190_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX4190_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX4190_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX4190_CODPRO peel(pick(nPos, 35, 17), " ")
#define R_GEEX4190_CODPRO(A) put(nRec, 35, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX4190_VALPRO peel(pick(nPos, 52, 2), " ")
#define R_GEEX4190_VALPRO(A) put(nRec, 52, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX4190_CODPAL peel(pick(nPos, 54, 18), " ")
#define R_GEEX4190_CODPAL(A) put(nRec, 54, A :18.18)
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GEEX4190_MOTIMM peel(pick(nPos, 72, 9), " ")
#define R_GEEX4190_MOTIMM(A) put(nRec, 72, A :9.9)
!-----------------------------------------------------------
! FIELD : DATLIB 
#define S_GEEX4190_DATLIB peel(pick(nPos, 81, 24), " ")
#define R_GEEX4190_DATLIB(A) put(nRec, 81, build(number(A):R024.0))
!-----------------------------------------------------------
! FIELD : HEULIB 
#define S_GEEX4190_HEULIB peel(pick(nPos, 105, 18), " ")
#define R_GEEX4190_HEULIB(A) put(nRec, 105, build(number(A):R018.0))
!-----------------------------------------------------------
! FIELD : INDLIB 
#define S_GEEX4190_INDLIB peel(pick(nPos, 123, 3), " ")
#define R_GEEX4190_INDLIB(A) put(nRec, 123, A :3.3)
!-----------------------------------------------------------
! FIELD : IMMBKL 
#define S_GEEX4190_IMMBKL peel(pick(nPos, 126, 3), " ")
#define R_GEEX4190_IMMBKL(A) put(nRec, 126, A :3.3)
!-----------------------------------------------------------
! FIELD : PALIMM 
#define S_GEEX4190_PALIMM peel(pick(nPos, 129, 3), " ")
#define R_GEEX4190_PALIMM(A) put(nRec, 129, A :3.3)
!-----------------------------------------------------------
! FIELD : DATBKL 
#define S_GEEX4190_DATBKL peel(pick(nPos, 132, 8), " ")
#define R_GEEX4190_DATBKL(A) put(nRec, 132, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUBKL 
#define S_GEEX4190_HEUBKL peel(pick(nPos, 140, 6), " ")
#define R_GEEX4190_HEUBKL(A) put(nRec, 140, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : DATIMM 
#define S_GEEX4190_DATIMM peel(pick(nPos, 146, 8), " ")
#define R_GEEX4190_DATIMM(A) put(nRec, 146, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUIMM 
#define S_GEEX4190_HEUIMM peel(pick(nPos, 154, 6), " ")
#define R_GEEX4190_HEUIMM(A) put(nRec, 154, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4190_DISEXC peel(pick(nPos, 160, 97), " ")
#define R_GEEX4190_DISEXC(A) put(nRec, 160, A :97.97)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4199 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4199_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4199_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4199_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4199_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4199_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4199_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4199_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4199_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4199_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4199_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4199_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4199_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4199_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4199_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : CUMLIG 
#define S_GEEX4199_CUMLIG peel(pick(nPos, 48, 4), " ")
#define R_GEEX4199_CUMLIG(A) put(nRec, 48, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : CUMPAL 
#define S_GEEX4199_CUMPAL peel(pick(nPos, 52, 5), " ")
#define R_GEEX4199_CUMPAL(A) put(nRec, 52, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : COLTOT 
#define S_GEEX4199_COLTOT peel(pick(nPos, 57, 9), " ")
#define R_GEEX4199_COLTOT(A) put(nRec, 57, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : TOTPRO 
#define S_GEEX4199_TOTPRO peel(pick(nPos, 66, 5), " ")
#define R_GEEX4199_TOTPRO(A) put(nRec, 66, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4199_DISEXC peel(pick(nPos, 71, 186), " ")
#define R_GEEX4199_DISEXC(A) put(nRec, 71, A :186.186)
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

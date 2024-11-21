! File GEEXM41 : 
!===========================================================
! Line : GEEX0000_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX0000_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX0000_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX0000_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX0000_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX0000_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX0000_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX0000_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX0000_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : EMTEXC 
#define S_GEEX0000_BP_EMTEXC peel(pick(nPos, 7, 14), " ")
#define R_GEEX0000_BP_EMTEXC(A) put(nRec, 7, A :14.14)
!-----------------------------------------------------------
! FIELD : RCTEXC 
#define S_GEEX0000_BP_RCTEXC peel(pick(nPos, 21, 14), " ")
#define R_GEEX0000_BP_RCTEXC(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXC 
#define S_GEEX0000_BP_DATEXC peel(pick(nPos, 35, 8), " ")
#define R_GEEX0000_BP_DATEXC(A) put(nRec, 35, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_GEEX0000_BP_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_GEEX0000_BP_HEUEXC(A) put(nRec, 43, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : NUMEXC 
#define S_GEEX0000_BP_NUMEXC peel(pick(nPos, 49, 7), " ")
#define R_GEEX0000_BP_NUMEXC(A) put(nRec, 49, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : ACQEXC 
#define S_GEEX0000_BP_ACQEXC peel(pick(nPos, 56, 1), " ")
#define R_GEEX0000_BP_ACQEXC(A) put(nRec, 56, A :1.1)
!-----------------------------------------------------------
! FIELD : VEREXC 
#define S_GEEX0000_BP_VEREXC peel(pick(nPos, 57, 4), " ")
#define R_GEEX0000_BP_VEREXC(A) put(nRec, 57, A :4.4)
!-----------------------------------------------------------
! FIELD : NOMSYS 
#define S_GEEX0000_BP_NOMSYS peel(pick(nPos, 61, 8), " ")
#define R_GEEX0000_BP_NOMSYS(A) put(nRec, 61, A :8.8)
!-----------------------------------------------------------
! FIELD : NOMDTQ 
#define S_GEEX0000_BP_NOMDTQ peel(pick(nPos, 69, 10), " ")
#define R_GEEX0000_BP_NOMDTQ(A) put(nRec, 69, A :10.10)
!-----------------------------------------------------------
! FIELD : BIBDTQ 
#define S_GEEX0000_BP_BIBDTQ peel(pick(nPos, 79, 10), " ")
#define R_GEEX0000_BP_BIBDTQ(A) put(nRec, 79, A :10.10)
!-----------------------------------------------------------
! FIELD : LIBEXC 
#define S_GEEX0000_BP_LIBEXC peel(pick(nPos, 89, 30), " ")
#define R_GEEX0000_BP_LIBEXC(A) put(nRec, 89, A :30.30)
!-----------------------------------------------------------
! FIELD : BIBDST 
#define S_GEEX0000_BP_BIBDST peel(pick(nPos, 119, 10), " ")
#define R_GEEX0000_BP_BIBDST(A) put(nRec, 119, A :10.10)
!-----------------------------------------------------------
! FIELD : PGMDST 
#define S_GEEX0000_BP_PGMDST peel(pick(nPos, 129, 10), " ")
#define R_GEEX0000_BP_PGMDST(A) put(nRec, 129, A :10.10)
!-----------------------------------------------------------
! FIELD : PARDST 
#define S_GEEX0000_BP_PARDST peel(pick(nPos, 139, 30), " ")
#define R_GEEX0000_BP_PARDST(A) put(nRec, 139, A :30.30)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX0000_BP_CODACT peel(pick(nPos, 169, 3), " ")
#define R_GEEX0000_BP_CODACT(A) put(nRec, 169, A :3.3)
!-----------------------------------------------------------
! FIELD : IGLSIT 
#define S_GEEX0000_BP_IGLSIT peel(pick(nPos, 172, 3), " ")
#define R_GEEX0000_BP_IGLSIT(A) put(nRec, 172, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : EDISIT 
#define S_GEEX0000_BP_EDISIT peel(pick(nPos, 175, 14), " ")
#define R_GEEX0000_BP_EDISIT(A) put(nRec, 175, A :14.14)
!-----------------------------------------------------------
! FIELD : IMAEXC 
#define S_GEEX0000_BP_IMAEXC peel(pick(nPos, 189, 8), " ")
#define R_GEEX0000_BP_IMAEXC(A) put(nRec, 189, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : IDEMSG 
#define S_GEEX0000_BP_IDEMSG peel(pick(nPos, 197, 30), " ")
#define R_GEEX0000_BP_IDEMSG(A) put(nRec, 197, A :30.30)
!-----------------------------------------------------------
! FIELD : NATEXC 
#define S_GEEX0000_BP_NATEXC peel(pick(nPos, 227, 5), " ")
#define R_GEEX0000_BP_NATEXC(A) put(nRec, 227, A :5.5)
!-----------------------------------------------------------
! FIELD : EMTORI 
#define S_GEEX0000_BP_EMTORI peel(pick(nPos, 232, 14), " ")
#define R_GEEX0000_BP_EMTORI(A) put(nRec, 232, A :14.14)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX0000_BP_DISEXC peel(pick(nPos, 246, 11), " ")
#define R_GEEX0000_BP_DISEXC(A) put(nRec, 246, A :11.11)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4100_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4100_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4100_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4100_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4100_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4100_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4100_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4100_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4100_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4100_BP_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4100_BP_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4100_BP_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4100_BP_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4100_BP_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4100_BP_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : CODAPP 
#define S_GEEX4100_BP_CODAPP peel(pick(nPos, 48, 10), " ")
#define R_GEEX4100_BP_CODAPP(A) put(nRec, 48, A :10.10)
!-----------------------------------------------------------
! FIELD : CODLDR 
#define S_GEEX4100_BP_CODLDR peel(pick(nPos, 58, 3), " ")
#define R_GEEX4100_BP_CODLDR(A) put(nRec, 58, A :3.3)
!-----------------------------------------------------------
! FIELD : CODTRE 
#define S_GEEX4100_BP_CODTRE peel(pick(nPos, 61, 3), " ")
#define R_GEEX4100_BP_CODTRE(A) put(nRec, 61, A :3.3)
!-----------------------------------------------------------
! FIELD : ORICDE 
#define S_GEEX4100_BP_ORICDE peel(pick(nPos, 64, 1), " ")
#define R_GEEX4100_BP_ORICDE(A) put(nRec, 64, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4100_BP_CODACT peel(pick(nPos, 65, 3), " ")
#define R_GEEX4100_BP_CODACT(A) put(nRec, 65, A :3.3)
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_GEEX4100_BP_CODFOU peel(pick(nPos, 68, 14), " ")
#define R_GEEX4100_BP_CODFOU(A) put(nRec, 68, A :14.14)
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_GEEX4100_BP_CODTRA peel(pick(nPos, 82, 14), " ")
#define R_GEEX4100_BP_CODTRA(A) put(nRec, 82, A :14.14)
!-----------------------------------------------------------
! FIELD : DTIREC 
#define S_GEEX4100_BP_DTIREC peel(pick(nPos, 96, 8), " ")
#define R_GEEX4100_BP_DTIREC(A) put(nRec, 96, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEIREC 
#define S_GEEX4100_BP_HEIREC peel(pick(nPos, 104, 4), " ")
#define R_GEEX4100_BP_HEIREC(A) put(nRec, 104, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : DTMREC 
#define S_GEEX4100_BP_DTMREC peel(pick(nPos, 108, 8), " ")
#define R_GEEX4100_BP_DTMREC(A) put(nRec, 108, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEMREC 
#define S_GEEX4100_BP_HEMREC peel(pick(nPos, 116, 4), " ")
#define R_GEEX4100_BP_HEMREC(A) put(nRec, 116, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : DTRREC 
#define S_GEEX4100_BP_DTRREC peel(pick(nPos, 120, 8), " ")
#define R_GEEX4100_BP_DTRREC(A) put(nRec, 120, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HERREC 
#define S_GEEX4100_BP_HERREC peel(pick(nPos, 128, 4), " ")
#define R_GEEX4100_BP_HERREC(A) put(nRec, 128, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : KAIREC 
#define S_GEEX4100_BP_KAIREC peel(pick(nPos, 132, 3), " ")
#define R_GEEX4100_BP_KAIREC(A) put(nRec, 132, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CTRREC 
#define S_GEEX4100_BP_CTRREC peel(pick(nPos, 135, 10), " ")
#define R_GEEX4100_BP_CTRREC(A) put(nRec, 135, A :10.10)
!-----------------------------------------------------------
! FIELD : REFCNT 
#define S_GEEX4100_BP_REFCNT peel(pick(nPos, 145, 10), " ")
#define R_GEEX4100_BP_REFCNT(A) put(nRec, 145, A :10.10)
!-----------------------------------------------------------
! FIELD : CMTREC 
#define S_GEEX4100_BP_CMTREC peel(pick(nPos, 155, 60), " ")
#define R_GEEX4100_BP_CMTREC(A) put(nRec, 155, A :60.60)
!-----------------------------------------------------------
! FIELD : DATRLQ 
#define S_GEEX4100_BP_DATRLQ peel(pick(nPos, 215, 8), " ")
#define R_GEEX4100_BP_DATRLQ(A) put(nRec, 215, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODACR 
#define S_GEEX4100_BP_CODACR peel(pick(nPos, 223, 3), " ")
#define R_GEEX4100_BP_CODACR(A) put(nRec, 223, A :3.3)
!-----------------------------------------------------------
! FIELD : NATREC 
#define S_GEEX4100_BP_NATREC peel(pick(nPos, 226, 1), " ")
#define R_GEEX4100_BP_NATREC(A) put(nRec, 226, A :1.1)
!-----------------------------------------------------------
! FIELD : EDIFOU 
#define S_GEEX4100_BP_EDIFOU peel(pick(nPos, 227, 14), " ")
#define R_GEEX4100_BP_EDIFOU(A) put(nRec, 227, A :14.14)
!-----------------------------------------------------------
! FIELD : CODCNT 
#define S_GEEX4100_BP_CODCNT peel(pick(nPos, 241, 14), " ")
#define R_GEEX4100_BP_CODCNT(A) put(nRec, 241, A :14.14)
!-----------------------------------------------------------
! FIELD : TYPRMT 
#define S_GEEX4100_BP_TYPRMT peel(pick(nPos, 255, 1), " ")
#define R_GEEX4100_BP_TYPRMT(A) put(nRec, 255, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4100_BP_DISEXC peel(pick(nPos, 256, 1), " ")
#define R_GEEX4100_BP_DISEXC(A) put(nRec, 256, A :1.1)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4101_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4101_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4101_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4101_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4101_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4101_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4101_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4101_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4101_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4101_BP_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4101_BP_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4101_BP_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4101_BP_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4101_BP_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4101_BP_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : DIPREC 
#define S_GEEX4101_BP_DIPREC peel(pick(nPos, 48, 50), " ")
#define R_GEEX4101_BP_DIPREC(A) put(nRec, 48, A :50.50)
!-----------------------------------------------------------
! FIELD : TOPREC 
#define S_GEEX4101_BP_TOPREC peel(pick(nPos, 98, 5), " ")
#define R_GEEX4101_BP_TOPREC(A) put(nRec, 98, A :5.5)
!-----------------------------------------------------------
! FIELD : DATBDR 
#define S_GEEX4101_BP_DATBDR peel(pick(nPos, 103, 8), " ")
#define R_GEEX4101_BP_DATBDR(A) put(nRec, 103, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : EDIACT 
#define S_GEEX4101_BP_EDIACT peel(pick(nPos, 111, 14), " ")
#define R_GEEX4101_BP_EDIACT(A) put(nRec, 111, A :14.14)
!-----------------------------------------------------------
! FIELD : EDITRA 
#define S_GEEX4101_BP_EDITRA peel(pick(nPos, 125, 14), " ")
#define R_GEEX4101_BP_EDITRA(A) put(nRec, 125, A :14.14)
!-----------------------------------------------------------
! FIELD : DATBDL 
#define S_GEEX4101_BP_DATBDL peel(pick(nPos, 139, 8), " ")
#define R_GEEX4101_BP_DATBDL(A) put(nRec, 139, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODTDD 
#define S_GEEX4101_BP_CODTDD peel(pick(nPos, 147, 3), " ")
#define R_GEEX4101_BP_CODTDD(A) put(nRec, 147, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMMTR 
#define S_GEEX4101_BP_NUMMTR peel(pick(nPos, 150, 20), " ")
#define R_GEEX4101_BP_NUMMTR(A) put(nRec, 150, A :20.20)
!-----------------------------------------------------------
! FIELD : NUMTOU 
#define S_GEEX4101_BP_NUMTOU peel(pick(nPos, 170, 8), " ")
#define R_GEEX4101_BP_NUMTOU(A) put(nRec, 170, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODRCN 
#define S_GEEX4101_BP_CODRCN peel(pick(nPos, 178, 10), " ")
#define R_GEEX4101_BP_CODRCN(A) put(nRec, 178, A :10.10)
!-----------------------------------------------------------
! FIELD : RCTSAP 
#define S_GEEX4101_BP_RCTSAP peel(pick(nPos, 188, 14), " ")
#define R_GEEX4101_BP_RCTSAP(A) put(nRec, 188, A :14.14)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4101_BP_DISEXC peel(pick(nPos, 202, 55), " ")
#define R_GEEX4101_BP_DISEXC(A) put(nRec, 202, A :55.55)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4102_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4102_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4102_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4102_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4102_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4102_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4102_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4102_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4102_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4102_BP_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4102_BP_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4102_BP_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4102_BP_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4102_BP_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4102_BP_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : MSGREC 
#define S_GEEX4102_BP_MSGREC peel(pick(nPos, 48, 60), " ")
#define R_GEEX4102_BP_MSGREC(A) put(nRec, 48, A :60.60)
!-----------------------------------------------------------
! FIELD : INFLIV 
#define S_GEEX4102_BP_INFLIV peel(pick(nPos, 108, 15), " ")
#define R_GEEX4102_BP_INFLIV(A) put(nRec, 108, A :15.15)
!-----------------------------------------------------------
! FIELD : INFCMR 
#define S_GEEX4102_BP_INFCMR peel(pick(nPos, 123, 15), " ")
#define R_GEEX4102_BP_INFCMR(A) put(nRec, 123, A :15.15)
!-----------------------------------------------------------
! FIELD : INFVET 
#define S_GEEX4102_BP_INFVET peel(pick(nPos, 138, 15), " ")
#define R_GEEX4102_BP_INFVET(A) put(nRec, 138, A :15.15)
!-----------------------------------------------------------
! FIELD : INFDOU 
#define S_GEEX4102_BP_INFDOU peel(pick(nPos, 153, 15), " ")
#define R_GEEX4102_BP_INFDOU(A) put(nRec, 153, A :15.15)
!-----------------------------------------------------------
! FIELD : TEMCAM 
#define S_GEEX4102_BP_TEMCAM peel(pick(nPos, 168, 3), " ")
#define R_GEEX4102_BP_TEMCAM(A) put(nRec, 168, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : MOTRCP 
#define S_GEEX4102_BP_MOTRCP peel(pick(nPos, 171, 3), " ")
#define R_GEEX4102_BP_MOTRCP(A) put(nRec, 171, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMBDL 
#define S_GEEX4102_BP_NUMBDL peel(pick(nPos, 174, 6), " ")
#define R_GEEX4102_BP_NUMBDL(A) put(nRec, 174, A :6.6)
!-----------------------------------------------------------
! FIELD : DATBDL 
#define S_GEEX4102_BP_DATBDL peel(pick(nPos, 180, 8), " ")
#define R_GEEX4102_BP_DATBDL(A) put(nRec, 180, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4102_BP_DISEXC peel(pick(nPos, 188, 69), " ")
#define R_GEEX4102_BP_DISEXC(A) put(nRec, 188, A :69.69)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4103_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4103_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4103_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4103_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4103_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4103_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4103_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4103_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4103_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4103_BP_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4103_BP_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4103_BP_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4103_BP_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4103_BP_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4103_BP_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4103_BP_CODACT peel(pick(nPos, 48, 3), " ")
#define R_GEEX4103_BP_CODACT(A) put(nRec, 48, A :3.3)
!-----------------------------------------------------------
! FIELD : MOTRFU 
#define S_GEEX4103_BP_MOTRFU peel(pick(nPos, 51, 3), " ")
#define R_GEEX4103_BP_MOTRFU(A) put(nRec, 51, A :3.3)
!-----------------------------------------------------------
! FIELD : CMTRFU 
#define S_GEEX4103_BP_CMTRFU peel(pick(nPos, 54, 30), " ")
#define R_GEEX4103_BP_CMTRFU(A) put(nRec, 54, A :30.30)
!-----------------------------------------------------------
! FIELD : CM2RFU 
#define S_GEEX4103_BP_CM2RFU peel(pick(nPos, 84, 30), " ")
#define R_GEEX4103_BP_CM2RFU(A) put(nRec, 84, A :30.30)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4103_BP_DISEXC peel(pick(nPos, 114, 143), " ")
#define R_GEEX4103_BP_DISEXC(A) put(nRec, 114, A :143.143)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4105_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4105_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4105_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4105_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4105_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4105_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4105_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4105_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4105_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4105_BP_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4105_BP_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4105_BP_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4105_BP_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4105_BP_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4105_BP_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_GEEX4105_BP_CODRUB peel(pick(nPos, 48, 20), " ")
#define R_GEEX4105_BP_CODRUB(A) put(nRec, 48, A :20.20)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX4105_BP_VALRUB peel(pick(nPos, 68, 175), " ")
#define R_GEEX4105_BP_VALRUB(A) put(nRec, 68, A :175.175)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4105_BP_DISEXC peel(pick(nPos, 243, 14), " ")
#define R_GEEX4105_BP_DISEXC(A) put(nRec, 243, A :14.14)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4107_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4107_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4107_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4107_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4107_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4107_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4107_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4107_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4107_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4107_BP_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4107_BP_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4107_BP_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4107_BP_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4107_BP_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4107_BP_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_GEEX4107_BP_CODRUB peel(pick(nPos, 48, 20), " ")
#define R_GEEX4107_BP_CODRUB(A) put(nRec, 48, A :20.20)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX4107_BP_VALRUB peel(pick(nPos, 68, 175), " ")
#define R_GEEX4107_BP_VALRUB(A) put(nRec, 68, A :175.175)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4107_BP_DISEXC peel(pick(nPos, 243, 14), " ")
#define R_GEEX4107_BP_DISEXC(A) put(nRec, 243, A :14.14)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4110_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4110_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4110_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4110_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4110_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4110_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4110_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4110_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4110_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4110_BP_REFREC peel(pick(nPos, 7, 30), " ")
#define R_GEEX4110_BP_REFREC(A) put(nRec, 7, A :30.30)
!-----------------------------------------------------------
! FIELD : NUMSUP 
#define S_GEEX4110_BP_NUMSUP peel(pick(nPos, 37, 8), " ")
#define R_GEEX4110_BP_NUMSUP(A) put(nRec, 37, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUSUP 
#define S_GEEX4110_BP_SNUSUP peel(pick(nPos, 45, 3), " ")
#define R_GEEX4110_BP_SNUSUP(A) put(nRec, 45, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX4110_BP_CODPAL peel(pick(nPos, 48, 18), " ")
#define R_GEEX4110_BP_CODPAL(A) put(nRec, 48, A :18.18)
!-----------------------------------------------------------
! FIELD : ETASUP 
#define S_GEEX4110_BP_ETASUP peel(pick(nPos, 66, 2), " ")
#define R_GEEX4110_BP_ETASUP(A) put(nRec, 66, A :2.2)
!-----------------------------------------------------------
! FIELD : LIBSUP 
#define S_GEEX4110_BP_LIBSUP peel(pick(nPos, 68, 30), " ")
#define R_GEEX4110_BP_LIBSUP(A) put(nRec, 68, A :30.30)
!-----------------------------------------------------------
! FIELD : TOPMNQ 
#define S_GEEX4110_BP_TOPMNQ peel(pick(nPos, 98, 1), " ")
#define R_GEEX4110_BP_TOPMNQ(A) put(nRec, 98, A :1.1)
!-----------------------------------------------------------
! FIELD : DATPRP 
#define S_GEEX4110_BP_DATPRP peel(pick(nPos, 99, 8), " ")
#define R_GEEX4110_BP_DATPRP(A) put(nRec, 99, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATLIV 
#define S_GEEX4110_BP_DATLIV peel(pick(nPos, 107, 8), " ")
#define R_GEEX4110_BP_DATLIV(A) put(nRec, 107, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : KAILIV 
#define S_GEEX4110_BP_KAILIV peel(pick(nPos, 115, 3), " ")
#define R_GEEX4110_BP_KAILIV(A) put(nRec, 115, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX4110_BP_REFLIV peel(pick(nPos, 118, 30), " ")
#define R_GEEX4110_BP_REFLIV(A) put(nRec, 118, A :30.30)
!-----------------------------------------------------------
! FIELD : CLILIV 
#define S_GEEX4110_BP_CLILIV peel(pick(nPos, 148, 14), " ")
#define R_GEEX4110_BP_CLILIV(A) put(nRec, 148, A :14.14)
!-----------------------------------------------------------
! FIELD : CUMPOI 
#define S_GEEX4110_BP_CUMPOI peel(pick(nPos, 162, 11), " ")
#define R_GEEX4110_BP_CUMPOI(A) put(nRec, 162, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : CUMVOL 
#define S_GEEX4110_BP_CUMVOL peel(pick(nPos, 173, 11), " ")
#define R_GEEX4110_BP_CUMVOL(A) put(nRec, 173, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4110_BP_CODACT peel(pick(nPos, 184, 3), " ")
#define R_GEEX4110_BP_CODACT(A) put(nRec, 184, A :3.3)
!-----------------------------------------------------------
! FIELD : CODEMB 
#define S_GEEX4110_BP_CODEMB peel(pick(nPos, 187, 3), " ")
#define R_GEEX4110_BP_CODEMB(A) put(nRec, 187, A :3.3)
!-----------------------------------------------------------
! FIELD : CUMCOL 
#define S_GEEX4110_BP_CUMCOL peel(pick(nPos, 190, 7), " ")
#define R_GEEX4110_BP_CUMCOL(A) put(nRec, 190, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : CUMPRT 
#define S_GEEX4110_BP_CUMPRT peel(pick(nPos, 197, 9), " ")
#define R_GEEX4110_BP_CUMPRT(A) put(nRec, 197, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CUMEQP 
#define S_GEEX4110_BP_CUMEQP peel(pick(nPos, 206, 9), " ")
#define R_GEEX4110_BP_CUMEQP(A) put(nRec, 206, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CUMUOT 
#define S_GEEX4110_BP_CUMUOT peel(pick(nPos, 215, 9), " ")
#define R_GEEX4110_BP_CUMUOT(A) put(nRec, 215, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : NUMTOU 
#define S_GEEX4110_BP_NUMTOU peel(pick(nPos, 224, 8), " ")
#define R_GEEX4110_BP_NUMTOU(A) put(nRec, 224, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : TOULIV 
#define S_GEEX4110_BP_TOULIV peel(pick(nPos, 232, 4), " ")
#define R_GEEX4110_BP_TOULIV(A) put(nRec, 232, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : ORDLIV 
#define S_GEEX4110_BP_ORDLIV peel(pick(nPos, 236, 4), " ")
#define R_GEEX4110_BP_ORDLIV(A) put(nRec, 236, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : PAQDNG 
#define S_GEEX4110_BP_PAQDNG peel(pick(nPos, 240, 1), " ")
#define R_GEEX4110_BP_PAQDNG(A) put(nRec, 240, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4110_BP_DISEXC peel(pick(nPos, 241, 16), " ")
#define R_GEEX4110_BP_DISEXC(A) put(nRec, 241, A :16.16)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4120_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4120_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4120_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4120_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4120_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4120_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4120_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4120_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4120_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4120_BP_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4120_BP_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4120_BP_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4120_BP_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4120_BP_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4120_BP_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4120_BP_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4120_BP_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4120_BP_CODACT peel(pick(nPos, 53, 3), " ")
#define R_GEEX4120_BP_CODACT(A) put(nRec, 53, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX4120_BP_CODCLI peel(pick(nPos, 56, 14), " ")
#define R_GEEX4120_BP_CODCLI(A) put(nRec, 56, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX4120_BP_CODPRO peel(pick(nPos, 70, 17), " ")
#define R_GEEX4120_BP_CODPRO(A) put(nRec, 70, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX4120_BP_VALPRO peel(pick(nPos, 87, 2), " ")
#define R_GEEX4120_BP_VALPRO(A) put(nRec, 87, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : UVCREA 
#define S_GEEX4120_BP_UVCREA peel(pick(nPos, 89, 9), " ")
#define R_GEEX4120_BP_UVCREA(A) put(nRec, 89, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UNICDE 
#define S_GEEX4120_BP_UNICDE peel(pick(nPos, 98, 3), " ")
#define R_GEEX4120_BP_UNICDE(A) put(nRec, 98, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRN 
#define S_GEEX4120_BP_CODPRN peel(pick(nPos, 101, 17), " ")
#define R_GEEX4120_BP_CODPRN(A) put(nRec, 101, A :17.17)
!-----------------------------------------------------------
! FIELD : TYPOPE 
#define S_GEEX4120_BP_TYPOPE peel(pick(nPos, 118, 1), " ")
#define R_GEEX4120_BP_TYPOPE(A) put(nRec, 118, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMOPE 
#define S_GEEX4120_BP_NUMOPE peel(pick(nPos, 119, 6), " ")
#define R_GEEX4120_BP_NUMOPE(A) put(nRec, 119, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODACR 
#define S_GEEX4120_BP_CODACR peel(pick(nPos, 125, 3), " ")
#define R_GEEX4120_BP_CODACR(A) put(nRec, 125, A :3.3)
!-----------------------------------------------------------
! FIELD : UVCREC 
#define S_GEEX4120_BP_UVCREC peel(pick(nPos, 128, 9), " ")
#define R_GEEX4120_BP_UVCREC(A) put(nRec, 128, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UVCGRA 
#define S_GEEX4120_BP_UVCGRA peel(pick(nPos, 137, 9), " ")
#define R_GEEX4120_BP_UVCGRA(A) put(nRec, 137, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UVCIMM 
#define S_GEEX4120_BP_UVCIMM peel(pick(nPos, 146, 9), " ")
#define R_GEEX4120_BP_UVCIMM(A) put(nRec, 146, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GEEX4120_BP_MOTIMM peel(pick(nPos, 155, 3), " ")
#define R_GEEX4120_BP_MOTIMM(A) put(nRec, 155, A :3.3)
!-----------------------------------------------------------
! FIELD : UVCRFU 
#define S_GEEX4120_BP_UVCRFU peel(pick(nPos, 158, 9), " ")
#define R_GEEX4120_BP_UVCRFU(A) put(nRec, 158, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : MOTRFU 
#define S_GEEX4120_BP_MOTRFU peel(pick(nPos, 167, 3), " ")
#define R_GEEX4120_BP_MOTRFU(A) put(nRec, 167, A :3.3)
!-----------------------------------------------------------
! FIELD : UVCRLQ 
#define S_GEEX4120_BP_UVCRLQ peel(pick(nPos, 170, 9), " ")
#define R_GEEX4120_BP_UVCRLQ(A) put(nRec, 170, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_GEEX4120_BP_DATFVI peel(pick(nPos, 179, 8), " ")
#define R_GEEX4120_BP_DATFVI(A) put(nRec, 179, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : MESPRO 
#define S_GEEX4120_BP_MESPRO peel(pick(nPos, 187, 1), " ")
#define R_GEEX4120_BP_MESPRO(A) put(nRec, 187, A :1.1)
!-----------------------------------------------------------
! FIELD : PDNREC 
#define S_GEEX4120_BP_PDNREC peel(pick(nPos, 188, 11), " ")
#define R_GEEX4120_BP_PDNREC(A) put(nRec, 188, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : DATFAB 
#define S_GEEX4120_BP_DATFAB peel(pick(nPos, 199, 8), " ")
#define R_GEEX4120_BP_DATFAB(A) put(nRec, 199, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX4120_BP_CODLOT peel(pick(nPos, 207, 20), " ")
#define R_GEEX4120_BP_CODLOT(A) put(nRec, 207, A :20.20)
!-----------------------------------------------------------
! FIELD : NUMLOT 
#define S_GEEX4120_BP_NUMLOT peel(pick(nPos, 227, 9), " ")
#define R_GEEX4120_BP_NUMLOT(A) put(nRec, 227, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : RECSOL 
#define S_GEEX4120_BP_RECSOL peel(pick(nPos, 236, 1), " ")
#define R_GEEX4120_BP_RECSOL(A) put(nRec, 236, A :1.1)
!-----------------------------------------------------------
! FIELD : CODMTR 
#define S_GEEX4120_BP_CODMTR peel(pick(nPos, 237, 5), " ")
#define R_GEEX4120_BP_CODMTR(A) put(nRec, 237, A :5.5)
!-----------------------------------------------------------
! FIELD : INDPRO 
#define S_GEEX4120_BP_INDPRO peel(pick(nPos, 242, 10), " ")
#define R_GEEX4120_BP_INDPRO(A) put(nRec, 242, A :10.10)
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX4120_BP_PCBPRO peel(pick(nPos, 252, 5), " ")
#define R_GEEX4120_BP_PCBPRO(A) put(nRec, 252, build(number(A):R05.0))
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4121_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4121_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4121_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4121_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4121_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4121_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4121_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4121_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4121_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4121_BP_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4121_BP_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4121_BP_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4121_BP_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4121_BP_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4121_BP_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4121_BP_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4121_BP_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : DIPREC 
#define S_GEEX4121_BP_DIPREC peel(pick(nPos, 53, 50), " ")
#define R_GEEX4121_BP_DIPREC(A) put(nRec, 53, A :50.50)
!-----------------------------------------------------------
! FIELD : TOPREC 
#define S_GEEX4121_BP_TOPREC peel(pick(nPos, 103, 5), " ")
#define R_GEEX4121_BP_TOPREC(A) put(nRec, 103, A :5.5)
!-----------------------------------------------------------
! FIELD : PRXPRO 
#define S_GEEX4121_BP_PRXPRO peel(pick(nPos, 108, 9), " ")
#define R_GEEX4121_BP_PRXPRO(A) put(nRec, 108, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_GEEX4121_BP_EDIPRO peel(pick(nPos, 117, 17), " ")
#define R_GEEX4121_BP_EDIPRO(A) put(nRec, 117, A :17.17)
!-----------------------------------------------------------
! FIELD : EDICLI 
#define S_GEEX4121_BP_EDICLI peel(pick(nPos, 134, 14), " ")
#define R_GEEX4121_BP_EDICLI(A) put(nRec, 134, A :14.14)
!-----------------------------------------------------------
! FIELD : UVCPRE 
#define S_GEEX4121_BP_UVCPRE peel(pick(nPos, 148, 9), " ")
#define R_GEEX4121_BP_UVCPRE(A) put(nRec, 148, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UNIREC 
#define S_GEEX4121_BP_UNIREC peel(pick(nPos, 157, 3), " ")
#define R_GEEX4121_BP_UNIREC(A) put(nRec, 157, A :3.3)
!-----------------------------------------------------------
! FIELD : QTEUOM 
#define S_GEEX4121_BP_QTEUOM peel(pick(nPos, 160, 9), " ")
#define R_GEEX4121_BP_QTEUOM(A) put(nRec, 160, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CODTDD 
#define S_GEEX4121_BP_CODTDD peel(pick(nPos, 169, 3), " ")
#define R_GEEX4121_BP_CODTDD(A) put(nRec, 169, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMMTR 
#define S_GEEX4121_BP_NUMMTR peel(pick(nPos, 172, 20), " ")
#define R_GEEX4121_BP_NUMMTR(A) put(nRec, 172, A :20.20)
!-----------------------------------------------------------
! FIELD : SENPDS 
#define S_GEEX4121_BP_SENPDS peel(pick(nPos, 192, 1), " ")
#define R_GEEX4121_BP_SENPDS(A) put(nRec, 192, A :1.1)
!-----------------------------------------------------------
! FIELD : ECAPDS 
#define S_GEEX4121_BP_ECAPDS peel(pick(nPos, 193, 11), " ")
#define R_GEEX4121_BP_ECAPDS(A) put(nRec, 193, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : TYPPRX 
#define S_GEEX4121_BP_TYPPRX peel(pick(nPos, 204, 1), " ")
#define R_GEEX4121_BP_TYPPRX(A) put(nRec, 204, A :1.1)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX4121_BP_REFLIV peel(pick(nPos, 205, 30), " ")
#define R_GEEX4121_BP_REFLIV(A) put(nRec, 205, A :30.30)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4121_BP_DISEXC peel(pick(nPos, 235, 22), " ")
#define R_GEEX4121_BP_DISEXC(A) put(nRec, 235, A :22.22)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4122_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4122_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4122_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4122_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4122_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4122_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4122_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4122_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4122_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4122_BP_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4122_BP_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4122_BP_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4122_BP_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4122_BP_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4122_BP_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4122_BP_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4122_BP_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4122_BP_CODACT peel(pick(nPos, 53, 3), " ")
#define R_GEEX4122_BP_CODACT(A) put(nRec, 53, A :3.3)
!-----------------------------------------------------------
! FIELD : MOTRFU 
#define S_GEEX4122_BP_MOTRFU peel(pick(nPos, 56, 3), " ")
#define R_GEEX4122_BP_MOTRFU(A) put(nRec, 56, A :3.3)
!-----------------------------------------------------------
! FIELD : UVCRFU 
#define S_GEEX4122_BP_UVCRFU peel(pick(nPos, 59, 9), " ")
#define R_GEEX4122_BP_UVCRFU(A) put(nRec, 59, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CMTRFU 
#define S_GEEX4122_BP_CMTRFU peel(pick(nPos, 68, 30), " ")
#define R_GEEX4122_BP_CMTRFU(A) put(nRec, 68, A :30.30)
!-----------------------------------------------------------
! FIELD : CM2RFU 
#define S_GEEX4122_BP_CM2RFU peel(pick(nPos, 98, 30), " ")
#define R_GEEX4122_BP_CM2RFU(A) put(nRec, 98, A :30.30)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4122_BP_DISEXC peel(pick(nPos, 128, 129), " ")
#define R_GEEX4122_BP_DISEXC(A) put(nRec, 128, A :129.129)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4123_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4123_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4123_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4123_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4123_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4123_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4123_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4123_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4123_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4123_BP_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4123_BP_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4123_BP_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4123_BP_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4123_BP_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4123_BP_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4123_BP_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4123_BP_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4123_BP_CODACT peel(pick(nPos, 53, 3), " ")
#define R_GEEX4123_BP_CODACT(A) put(nRec, 53, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX4123_BP_CODCLI peel(pick(nPos, 56, 14), " ")
#define R_GEEX4123_BP_CODCLI(A) put(nRec, 56, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX4123_BP_CODPRO peel(pick(nPos, 70, 17), " ")
#define R_GEEX4123_BP_CODPRO(A) put(nRec, 70, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX4123_BP_VALPRO peel(pick(nPos, 87, 2), " ")
#define R_GEEX4123_BP_VALPRO(A) put(nRec, 87, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : DS1PRO 
#define S_GEEX4123_BP_DS1PRO peel(pick(nPos, 89, 35), " ")
#define R_GEEX4123_BP_DS1PRO(A) put(nRec, 89, A :35.35)
!-----------------------------------------------------------
! FIELD : DS2PRO 
#define S_GEEX4123_BP_DS2PRO peel(pick(nPos, 124, 32), " ")
#define R_GEEX4123_BP_DS2PRO(A) put(nRec, 124, A :32.32)
!-----------------------------------------------------------
! FIELD : DS3PRO 
#define S_GEEX4123_BP_DS3PRO peel(pick(nPos, 156, 35), " ")
#define R_GEEX4123_BP_DS3PRO(A) put(nRec, 156, A :35.35)
!-----------------------------------------------------------
! FIELD : FAMPRO 
#define S_GEEX4123_BP_FAMPRO peel(pick(nPos, 191, 10), " ")
#define R_GEEX4123_BP_FAMPRO(A) put(nRec, 191, A :10.10)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4123_BP_DISEXC peel(pick(nPos, 201, 56), " ")
#define R_GEEX4123_BP_DISEXC(A) put(nRec, 201, A :56.56)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4125_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4125_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4125_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4125_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4125_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4125_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4125_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4125_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4125_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4125_BP_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4125_BP_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4125_BP_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4125_BP_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4125_BP_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4125_BP_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4125_BP_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4125_BP_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4125_BP_CODACT peel(pick(nPos, 53, 3), " ")
#define R_GEEX4125_BP_CODACT(A) put(nRec, 53, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX4125_BP_CODPRO peel(pick(nPos, 56, 17), " ")
#define R_GEEX4125_BP_CODPRO(A) put(nRec, 56, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX4125_BP_VALPRO peel(pick(nPos, 73, 2), " ")
#define R_GEEX4125_BP_VALPRO(A) put(nRec, 73, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TYPRUB 
#define S_GEEX4125_BP_TYPRUB peel(pick(nPos, 75, 1), " ")
#define R_GEEX4125_BP_TYPRUB(A) put(nRec, 75, A :1.1)
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_GEEX4125_BP_CODRUB peel(pick(nPos, 76, 4), " ")
#define R_GEEX4125_BP_CODRUB(A) put(nRec, 76, A :4.4)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX4125_BP_VALRUB peel(pick(nPos, 80, 35), " ")
#define R_GEEX4125_BP_VALRUB(A) put(nRec, 80, A :35.35)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4125_BP_DISEXC peel(pick(nPos, 115, 142), " ")
#define R_GEEX4125_BP_DISEXC(A) put(nRec, 115, A :142.142)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4127_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4127_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4127_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4127_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4127_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4127_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4127_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4127_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4127_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4127_BP_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4127_BP_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4127_BP_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4127_BP_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4127_BP_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4127_BP_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4127_BP_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4127_BP_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : ACTENF 
#define S_GEEX4127_BP_ACTENF peel(pick(nPos, 53, 3), " ")
#define R_GEEX4127_BP_ACTENF(A) put(nRec, 53, A :3.3)
!-----------------------------------------------------------
! FIELD : CODOPE 
#define S_GEEX4127_BP_CODOPE peel(pick(nPos, 56, 14), " ")
#define R_GEEX4127_BP_CODOPE(A) put(nRec, 56, A :14.14)
!-----------------------------------------------------------
! FIELD : PROENF 
#define S_GEEX4127_BP_PROENF peel(pick(nPos, 70, 17), " ")
#define R_GEEX4127_BP_PROENF(A) put(nRec, 70, A :17.17)
!-----------------------------------------------------------
! FIELD : VALENF 
#define S_GEEX4127_BP_VALENF peel(pick(nPos, 87, 2), " ")
#define R_GEEX4127_BP_VALENF(A) put(nRec, 87, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : UVCREC 
#define S_GEEX4127_BP_UVCREC peel(pick(nPos, 89, 9), " ")
#define R_GEEX4127_BP_UVCREC(A) put(nRec, 89, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : MESPRO 
#define S_GEEX4127_BP_MESPRO peel(pick(nPos, 98, 1), " ")
#define R_GEEX4127_BP_MESPRO(A) put(nRec, 98, A :1.1)
!-----------------------------------------------------------
! FIELD : PDNREC 
#define S_GEEX4127_BP_PDNREC peel(pick(nPos, 99, 11), " ")
#define R_GEEX4127_BP_PDNREC(A) put(nRec, 99, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX4127_BP_CODLOT peel(pick(nPos, 110, 20), " ")
#define R_GEEX4127_BP_CODLOT(A) put(nRec, 110, A :20.20)
!-----------------------------------------------------------
! FIELD : PRXEST 
#define S_GEEX4127_BP_PRXEST peel(pick(nPos, 130, 9), " ")
#define R_GEEX4127_BP_PRXEST(A) put(nRec, 130, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : PRXVAL 
#define S_GEEX4127_BP_PRXVAL peel(pick(nPos, 139, 9), " ")
#define R_GEEX4127_BP_PRXVAL(A) put(nRec, 139, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : PRXACH 
#define S_GEEX4127_BP_PRXACH peel(pick(nPos, 148, 9), " ")
#define R_GEEX4127_BP_PRXACH(A) put(nRec, 148, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX4127_BP_PCBPRO peel(pick(nPos, 157, 5), " ")
#define R_GEEX4127_BP_PCBPRO(A) put(nRec, 157, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4127_BP_DISEXC peel(pick(nPos, 162, 95), " ")
#define R_GEEX4127_BP_DISEXC(A) put(nRec, 162, A :95.95)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4128_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4128_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4128_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4128_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4128_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4128_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4128_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4128_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4128_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4128_BP_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4128_BP_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4128_BP_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4128_BP_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4128_BP_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4128_BP_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4128_BP_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4128_BP_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : SEQLIT 
#define S_GEEX4128_BP_SEQLIT peel(pick(nPos, 53, 4), " ")
#define R_GEEX4128_BP_SEQLIT(A) put(nRec, 53, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4128_BP_CODACT peel(pick(nPos, 57, 3), " ")
#define R_GEEX4128_BP_CODACT(A) put(nRec, 57, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX4128_BP_CODPRO peel(pick(nPos, 60, 17), " ")
#define R_GEEX4128_BP_CODPRO(A) put(nRec, 60, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX4128_BP_VALPRO peel(pick(nPos, 77, 2), " ")
#define R_GEEX4128_BP_VALPRO(A) put(nRec, 77, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_GEEX4128_BP_EDIPRO peel(pick(nPos, 79, 17), " ")
#define R_GEEX4128_BP_EDIPRO(A) put(nRec, 79, A :17.17)
!-----------------------------------------------------------
! FIELD : MOTLIT 
#define S_GEEX4128_BP_MOTLIT peel(pick(nPos, 96, 3), " ")
#define R_GEEX4128_BP_MOTLIT(A) put(nRec, 96, A :3.3)
!-----------------------------------------------------------
! FIELD : SENLIT 
#define S_GEEX4128_BP_SENLIT peel(pick(nPos, 99, 1), " ")
#define R_GEEX4128_BP_SENLIT(A) put(nRec, 99, A :1.1)
!-----------------------------------------------------------
! FIELD : UVCLIT 
#define S_GEEX4128_BP_UVCLIT peel(pick(nPos, 100, 9), " ")
#define R_GEEX4128_BP_UVCLIT(A) put(nRec, 100, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UNIUVC 
#define S_GEEX4128_BP_UNIUVC peel(pick(nPos, 109, 3), " ")
#define R_GEEX4128_BP_UNIUVC(A) put(nRec, 109, A :3.3)
!-----------------------------------------------------------
! FIELD : NUOLIT 
#define S_GEEX4128_BP_NUOLIT peel(pick(nPos, 112, 9), " ")
#define R_GEEX4128_BP_NUOLIT(A) put(nRec, 112, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UNIUOA 
#define S_GEEX4128_BP_UNIUOA peel(pick(nPos, 121, 3), " ")
#define R_GEEX4128_BP_UNIUOA(A) put(nRec, 121, A :3.3)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4128_BP_DISEXC peel(pick(nPos, 124, 133), " ")
#define R_GEEX4128_BP_DISEXC(A) put(nRec, 124, A :133.133)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4130_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4130_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4130_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4130_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4130_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4130_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4130_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4130_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4130_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4130_BP_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4130_BP_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4130_BP_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4130_BP_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4130_BP_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4130_BP_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4130_BP_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4130_BP_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : UVCMVT 
#define S_GEEX4130_BP_UVCMVT peel(pick(nPos, 53, 9), " ")
#define R_GEEX4130_BP_UVCMVT(A) put(nRec, 53, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : SPCPRO 
#define S_GEEX4130_BP_SPCPRO peel(pick(nPos, 62, 4), " ")
#define R_GEEX4130_BP_SPCPRO(A) put(nRec, 62, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX4130_BP_PCBPRO peel(pick(nPos, 66, 5), " ")
#define R_GEEX4130_BP_PCBPRO(A) put(nRec, 66, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX4130_BP_CODLOT peel(pick(nPos, 71, 20), " ")
#define R_GEEX4130_BP_CODLOT(A) put(nRec, 71, A :20.20)
!-----------------------------------------------------------
! FIELD : NUMLOT 
#define S_GEEX4130_BP_NUMLOT peel(pick(nPos, 91, 9), " ")
#define R_GEEX4130_BP_NUMLOT(A) put(nRec, 91, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CODNDS 
#define S_GEEX4130_BP_CODNDS peel(pick(nPos, 100, 20), " ")
#define R_GEEX4130_BP_CODNDS(A) put(nRec, 100, A :20.20)
!-----------------------------------------------------------
! FIELD : DATFAB 
#define S_GEEX4130_BP_DATFAB peel(pick(nPos, 120, 8), " ")
#define R_GEEX4130_BP_DATFAB(A) put(nRec, 120, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_GEEX4130_BP_DATFVI peel(pick(nPos, 128, 8), " ")
#define R_GEEX4130_BP_DATFVI(A) put(nRec, 128, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX4130_BP_CODPAL peel(pick(nPos, 136, 18), " ")
#define R_GEEX4130_BP_CODPAL(A) put(nRec, 136, A :18.18)
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GEEX4130_BP_MOTIMM peel(pick(nPos, 154, 3), " ")
#define R_GEEX4130_BP_MOTIMM(A) put(nRec, 154, A :3.3)
!-----------------------------------------------------------
! FIELD : DATIMM 
#define S_GEEX4130_BP_DATIMM peel(pick(nPos, 157, 16), " ")
#define R_GEEX4130_BP_DATIMM(A) put(nRec, 157, build(number(A):R016.0))
!-----------------------------------------------------------
! FIELD : HEUIMM 
#define S_GEEX4130_BP_HEUIMM peel(pick(nPos, 173, 12), " ")
#define R_GEEX4130_BP_HEUIMM(A) put(nRec, 173, build(number(A):R012.0))
!-----------------------------------------------------------
! FIELD : CODSIT 
#define S_GEEX4130_BP_CODSIT peel(pick(nPos, 185, 3), " ")
#define R_GEEX4130_BP_CODSIT(A) put(nRec, 185, A :3.3)
!-----------------------------------------------------------
! FIELD : ZONSTS 
#define S_GEEX4130_BP_ZONSTS peel(pick(nPos, 188, 1), " ")
#define R_GEEX4130_BP_ZONSTS(A) put(nRec, 188, A :1.1)
!-----------------------------------------------------------
! FIELD : ALLSTS 
#define S_GEEX4130_BP_ALLSTS peel(pick(nPos, 189, 3), " ")
#define R_GEEX4130_BP_ALLSTS(A) put(nRec, 189, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : DPLSTS 
#define S_GEEX4130_BP_DPLSTS peel(pick(nPos, 192, 4), " ")
#define R_GEEX4130_BP_DPLSTS(A) put(nRec, 192, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : NIVSTS 
#define S_GEEX4130_BP_NIVSTS peel(pick(nPos, 196, 2), " ")
#define R_GEEX4130_BP_NIVSTS(A) put(nRec, 196, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4130_BP_CODACT peel(pick(nPos, 198, 3), " ")
#define R_GEEX4130_BP_CODACT(A) put(nRec, 198, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX4130_BP_CODCLI peel(pick(nPos, 201, 14), " ")
#define R_GEEX4130_BP_CODCLI(A) put(nRec, 201, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX4130_BP_CODPRO peel(pick(nPos, 215, 17), " ")
#define R_GEEX4130_BP_CODPRO(A) put(nRec, 215, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX4130_BP_VALPRO peel(pick(nPos, 232, 2), " ")
#define R_GEEX4130_BP_VALPRO(A) put(nRec, 232, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : PRXPRO 
#define S_GEEX4130_BP_PRXPRO peel(pick(nPos, 234, 9), " ")
#define R_GEEX4130_BP_PRXPRO(A) put(nRec, 234, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : PDBPAL 
#define S_GEEX4130_BP_PDBPAL peel(pick(nPos, 243, 7), " ")
#define R_GEEX4130_BP_PDBPAL(A) put(nRec, 243, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : PDNREC 
#define S_GEEX4130_BP_PDNREC peel(pick(nPos, 250, 7), " ")
#define R_GEEX4130_BP_PDNREC(A) put(nRec, 250, build(number(A):R07.0))
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4131_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4131_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4131_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4131_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4131_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4131_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4131_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4131_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4131_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4131_BP_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4131_BP_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4131_BP_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4131_BP_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4131_BP_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4131_BP_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4131_BP_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4131_BP_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODEMB 
#define S_GEEX4131_BP_CODEMB peel(pick(nPos, 53, 3), " ")
#define R_GEEX4131_BP_CODEMB(A) put(nRec, 53, A :3.3)
!-----------------------------------------------------------
! FIELD : PROEMB 
#define S_GEEX4131_BP_PROEMB peel(pick(nPos, 56, 17), " ")
#define R_GEEX4131_BP_PROEMB(A) put(nRec, 56, A :17.17)
!-----------------------------------------------------------
! FIELD : DATREC 
#define S_GEEX4131_BP_DATREC peel(pick(nPos, 73, 8), " ")
#define R_GEEX4131_BP_DATREC(A) put(nRec, 73, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUREC 
#define S_GEEX4131_BP_HEUREC peel(pick(nPos, 81, 6), " ")
#define R_GEEX4131_BP_HEUREC(A) put(nRec, 81, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : HEUFAB 
#define S_GEEX4131_BP_HEUFAB peel(pick(nPos, 87, 6), " ")
#define R_GEEX4131_BP_HEUFAB(A) put(nRec, 87, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODEAP 
#define S_GEEX4131_BP_CODEAP peel(pick(nPos, 93, 3), " ")
#define R_GEEX4131_BP_CODEAP(A) put(nRec, 93, A :3.3)
!-----------------------------------------------------------
! FIELD : PROEAP 
#define S_GEEX4131_BP_PROEAP peel(pick(nPos, 96, 17), " ")
#define R_GEEX4131_BP_PROEAP(A) put(nRec, 96, A :17.17)
!-----------------------------------------------------------
! FIELD : TEMPAL 
#define S_GEEX4131_BP_TEMPAL peel(pick(nPos, 113, 4), " ")
#define R_GEEX4131_BP_TEMPAL(A) put(nRec, 113, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : SENTEM 
#define S_GEEX4131_BP_SENTEM peel(pick(nPos, 117, 1), " ")
#define R_GEEX4131_BP_SENTEM(A) put(nRec, 117, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4131_BP_DISEXC peel(pick(nPos, 118, 139), " ")
#define R_GEEX4131_BP_DISEXC(A) put(nRec, 118, A :139.139)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4135_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4135_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4135_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4135_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4135_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4135_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4135_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4135_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4135_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4135_BP_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4135_BP_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4135_BP_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4135_BP_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4135_BP_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4135_BP_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4135_BP_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4135_BP_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODOBL 
#define S_GEEX4135_BP_CODOBL peel(pick(nPos, 53, 35), " ")
#define R_GEEX4135_BP_CODOBL(A) put(nRec, 53, A :35.35)
!-----------------------------------------------------------
! FIELD : NLIOBL 
#define S_GEEX4135_BP_NLIOBL peel(pick(nPos, 88, 5), " ")
#define R_GEEX4135_BP_NLIOBL(A) put(nRec, 88, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : DATSTO 
#define S_GEEX4135_BP_DATSTO peel(pick(nPos, 93, 8), " ")
#define R_GEEX4135_BP_DATSTO(A) put(nRec, 93, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUSTO 
#define S_GEEX4135_BP_HEUSTO peel(pick(nPos, 101, 6), " ")
#define R_GEEX4135_BP_HEUSTO(A) put(nRec, 101, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_GEEX4135_BP_CODFOU peel(pick(nPos, 107, 14), " ")
#define R_GEEX4135_BP_CODFOU(A) put(nRec, 107, A :14.14)
!-----------------------------------------------------------
! FIELD : AVIREF 
#define S_GEEX4135_BP_AVIREF peel(pick(nPos, 121, 35), " ")
#define R_GEEX4135_BP_AVIREF(A) put(nRec, 121, A :35.35)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4135_BP_DISEXC peel(pick(nPos, 156, 101), " ")
#define R_GEEX4135_BP_DISEXC(A) put(nRec, 156, A :101.101)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4136_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4136_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4136_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4136_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4136_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4136_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4136_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4136_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4136_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4136_BP_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4136_BP_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4136_BP_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4136_BP_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4136_BP_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4136_BP_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4136_BP_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4136_BP_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODOBL 
#define S_GEEX4136_BP_CODOBL peel(pick(nPos, 53, 35), " ")
#define R_GEEX4136_BP_CODOBL(A) put(nRec, 53, A :35.35)
!-----------------------------------------------------------
! FIELD : NLIOBL 
#define S_GEEX4136_BP_NLIOBL peel(pick(nPos, 88, 5), " ")
#define R_GEEX4136_BP_NLIOBL(A) put(nRec, 88, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODRSV 
#define S_GEEX4136_BP_CODRSV peel(pick(nPos, 93, 3), " ")
#define R_GEEX4136_BP_CODRSV(A) put(nRec, 93, A :3.3)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4136_BP_DISEXC peel(pick(nPos, 96, 161), " ")
#define R_GEEX4136_BP_DISEXC(A) put(nRec, 96, A :161.161)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4140_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4140_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4140_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4140_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4140_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4140_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4140_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4140_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4140_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4140_BP_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4140_BP_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4140_BP_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4140_BP_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4140_BP_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4140_BP_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4140_BP_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4140_BP_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4140_BP_CODACT peel(pick(nPos, 53, 3), " ")
#define R_GEEX4140_BP_CODACT(A) put(nRec, 53, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX4140_BP_CODPRO peel(pick(nPos, 56, 17), " ")
#define R_GEEX4140_BP_CODPRO(A) put(nRec, 56, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX4140_BP_VALPRO peel(pick(nPos, 73, 2), " ")
#define R_GEEX4140_BP_VALPRO(A) put(nRec, 73, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX4140_BP_CODCLI peel(pick(nPos, 75, 14), " ")
#define R_GEEX4140_BP_CODCLI(A) put(nRec, 75, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX4140_BP_CODPAL peel(pick(nPos, 89, 18), " ")
#define R_GEEX4140_BP_CODPAL(A) put(nRec, 89, A :18.18)
!-----------------------------------------------------------
! FIELD : CODSER 
#define S_GEEX4140_BP_CODSER peel(pick(nPos, 107, 30), " ")
#define R_GEEX4140_BP_CODSER(A) put(nRec, 107, A :30.30)
!-----------------------------------------------------------
! FIELD : SNUSER 
#define S_GEEX4140_BP_SNUSER peel(pick(nPos, 137, 3), " ")
#define R_GEEX4140_BP_SNUSER(A) put(nRec, 137, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : NUMPAL 
#define S_GEEX4140_BP_NUMPAL peel(pick(nPos, 140, 9), " ")
#define R_GEEX4140_BP_NUMPAL(A) put(nRec, 140, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : SNUPAL 
#define S_GEEX4140_BP_SNUPAL peel(pick(nPos, 149, 2), " ")
#define R_GEEX4140_BP_SNUPAL(A) put(nRec, 149, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : NUMSER 
#define S_GEEX4140_BP_NUMSER peel(pick(nPos, 151, 9), " ")
#define R_GEEX4140_BP_NUMSER(A) put(nRec, 151, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CODOBI 
#define S_GEEX4140_BP_CODOBI peel(pick(nPos, 160, 36), " ")
#define R_GEEX4140_BP_CODOBI(A) put(nRec, 160, A :36.36)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4140_BP_DISEXC peel(pick(nPos, 196, 61), " ")
#define R_GEEX4140_BP_DISEXC(A) put(nRec, 196, A :61.61)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4145_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4145_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4145_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4145_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4145_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4145_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4145_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4145_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4145_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4145_BP_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4145_BP_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4145_BP_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4145_BP_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4145_BP_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4145_BP_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4145_BP_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4145_BP_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX4145_BP_CODPAL peel(pick(nPos, 53, 18), " ")
#define R_GEEX4145_BP_CODPAL(A) put(nRec, 53, A :18.18)
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GEEX4145_BP_MOTIMM peel(pick(nPos, 71, 3), " ")
#define R_GEEX4145_BP_MOTIMM(A) put(nRec, 71, A :3.3)
!-----------------------------------------------------------
! FIELD : EDIIMO 
#define S_GEEX4145_BP_EDIIMO peel(pick(nPos, 74, 3), " ")
#define R_GEEX4145_BP_EDIIMO(A) put(nRec, 74, A :3.3)
!-----------------------------------------------------------
! FIELD : BLOANO 
#define S_GEEX4145_BP_BLOANO peel(pick(nPos, 77, 1), " ")
#define R_GEEX4145_BP_BLOANO(A) put(nRec, 77, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4145_BP_DISEXC peel(pick(nPos, 78, 179), " ")
#define R_GEEX4145_BP_DISEXC(A) put(nRec, 78, A :179.179)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4150_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4150_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4150_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4150_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4150_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4150_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4150_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4150_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4150_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4150_BP_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4150_BP_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4150_BP_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4150_BP_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4150_BP_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4150_BP_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX4150_BP_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4150_BP_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4150_BP_CODACT peel(pick(nPos, 53, 3), " ")
#define R_GEEX4150_BP_CODACT(A) put(nRec, 53, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX4150_BP_CODPRO peel(pick(nPos, 56, 17), " ")
#define R_GEEX4150_BP_CODPRO(A) put(nRec, 56, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX4150_BP_VALPRO peel(pick(nPos, 73, 2), " ")
#define R_GEEX4150_BP_VALPRO(A) put(nRec, 73, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX4150_BP_CODCLI peel(pick(nPos, 75, 14), " ")
#define R_GEEX4150_BP_CODCLI(A) put(nRec, 75, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX4150_BP_CODPAL peel(pick(nPos, 89, 18), " ")
#define R_GEEX4150_BP_CODPAL(A) put(nRec, 89, A :18.18)
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_GEEX4150_BP_CODRUB peel(pick(nPos, 107, 4), " ")
#define R_GEEX4150_BP_CODRUB(A) put(nRec, 107, A :4.4)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX4150_BP_VALRUB peel(pick(nPos, 111, 35), " ")
#define R_GEEX4150_BP_VALRUB(A) put(nRec, 111, A :35.35)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4150_BP_DISEXC peel(pick(nPos, 146, 111), " ")
#define R_GEEX4150_BP_DISEXC(A) put(nRec, 146, A :111.111)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4170_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4170_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4170_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4170_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4170_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4170_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4170_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4170_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4170_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4170_BP_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4170_BP_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4170_BP_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4170_BP_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4170_BP_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX4170_BP_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_GEEX4170_BP_CODFOU peel(pick(nPos, 21, 14), " ")
#define R_GEEX4170_BP_CODFOU(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4170_BP_REFREC peel(pick(nPos, 35, 30), " ")
#define R_GEEX4170_BP_REFREC(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : NUMWAG 
#define S_GEEX4170_BP_NUMWAG peel(pick(nPos, 65, 180), " ")
#define R_GEEX4170_BP_NUMWAG(A) put(nRec, 65, A :180.180)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4170_BP_DISEXC peel(pick(nPos, 245, 12), " ")
#define R_GEEX4170_BP_DISEXC(A) put(nRec, 245, A :12.12)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4180_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4180_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4180_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4180_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4180_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4180_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4180_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4180_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4180_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4180_BP_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4180_BP_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4180_BP_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4180_BP_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4180_BP_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX4180_BP_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_GEEX4180_BP_CODFOU peel(pick(nPos, 21, 14), " ")
#define R_GEEX4180_BP_CODFOU(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4180_BP_REFREC peel(pick(nPos, 35, 30), " ")
#define R_GEEX4180_BP_REFREC(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : CODEMB 
#define S_GEEX4180_BP_CODEMB peel(pick(nPos, 65, 3), " ")
#define R_GEEX4180_BP_CODEMB(A) put(nRec, 65, A :3.3)
!-----------------------------------------------------------
! FIELD : QTBSOR 
#define S_GEEX4180_BP_QTBSOR peel(pick(nPos, 68, 9), " ")
#define R_GEEX4180_BP_QTBSOR(A) put(nRec, 68, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : QTBENT 
#define S_GEEX4180_BP_QTBENT peel(pick(nPos, 77, 9), " ")
#define R_GEEX4180_BP_QTBENT(A) put(nRec, 77, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : PRXEMB 
#define S_GEEX4180_BP_PRXEMB peel(pick(nPos, 86, 6), " ")
#define R_GEEX4180_BP_PRXEMB(A) put(nRec, 86, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_GEEX4180_BP_CODTRA peel(pick(nPos, 92, 14), " ")
#define R_GEEX4180_BP_CODTRA(A) put(nRec, 92, A :14.14)
!-----------------------------------------------------------
! FIELD : PROEMB 
#define S_GEEX4180_BP_PROEMB peel(pick(nPos, 106, 17), " ")
#define R_GEEX4180_BP_PROEMB(A) put(nRec, 106, A :17.17)
!-----------------------------------------------------------
! FIELD : DATEMB 
#define S_GEEX4180_BP_DATEMB peel(pick(nPos, 123, 8), " ")
#define R_GEEX4180_BP_DATEMB(A) put(nRec, 123, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : TYPTIE 
#define S_GEEX4180_BP_TYPTIE peel(pick(nPos, 131, 1), " ")
#define R_GEEX4180_BP_TYPTIE(A) put(nRec, 131, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4180_BP_DISEXC peel(pick(nPos, 132, 125), " ")
#define R_GEEX4180_BP_DISEXC(A) put(nRec, 132, A :125.125)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4184_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4184_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4184_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4184_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4184_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4184_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4184_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4184_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4184_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4184_BP_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4184_BP_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4184_BP_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4184_BP_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4184_BP_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX4184_BP_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_GEEX4184_BP_CODFOU peel(pick(nPos, 21, 14), " ")
#define R_GEEX4184_BP_CODFOU(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4184_BP_REFREC peel(pick(nPos, 35, 30), " ")
#define R_GEEX4184_BP_REFREC(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : CODEMB 
#define S_GEEX4184_BP_CODEMB peel(pick(nPos, 65, 3), " ")
#define R_GEEX4184_BP_CODEMB(A) put(nRec, 65, A :3.3)
!-----------------------------------------------------------
! FIELD : LIBTYP 
#define S_GEEX4184_BP_LIBTYP peel(pick(nPos, 68, 3), " ")
#define R_GEEX4184_BP_LIBTYP(A) put(nRec, 68, A :3.3)
!-----------------------------------------------------------
! FIELD : CODIMA 
#define S_GEEX4184_BP_CODIMA peel(pick(nPos, 71, 175), " ")
#define R_GEEX4184_BP_CODIMA(A) put(nRec, 71, A :175.175)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4184_BP_DISEXC peel(pick(nPos, 246, 11), " ")
#define R_GEEX4184_BP_DISEXC(A) put(nRec, 246, A :11.11)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4190_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4190_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4190_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4190_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4190_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4190_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4190_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4190_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4190_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMPAL 
#define S_GEEX4190_BP_NUMPAL peel(pick(nPos, 7, 9), " ")
#define R_GEEX4190_BP_NUMPAL(A) put(nRec, 7, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : SNUPAL 
#define S_GEEX4190_BP_SNUPAL peel(pick(nPos, 16, 2), " ")
#define R_GEEX4190_BP_SNUPAL(A) put(nRec, 16, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX4190_BP_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX4190_BP_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX4190_BP_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX4190_BP_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX4190_BP_CODPRO peel(pick(nPos, 35, 17), " ")
#define R_GEEX4190_BP_CODPRO(A) put(nRec, 35, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX4190_BP_VALPRO peel(pick(nPos, 52, 2), " ")
#define R_GEEX4190_BP_VALPRO(A) put(nRec, 52, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX4190_BP_CODPAL peel(pick(nPos, 54, 18), " ")
#define R_GEEX4190_BP_CODPAL(A) put(nRec, 54, A :18.18)
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GEEX4190_BP_MOTIMM peel(pick(nPos, 72, 9), " ")
#define R_GEEX4190_BP_MOTIMM(A) put(nRec, 72, A :9.9)
!-----------------------------------------------------------
! FIELD : DATLIB 
#define S_GEEX4190_BP_DATLIB peel(pick(nPos, 81, 24), " ")
#define R_GEEX4190_BP_DATLIB(A) put(nRec, 81, build(number(A):R024.0))
!-----------------------------------------------------------
! FIELD : HEULIB 
#define S_GEEX4190_BP_HEULIB peel(pick(nPos, 105, 18), " ")
#define R_GEEX4190_BP_HEULIB(A) put(nRec, 105, build(number(A):R018.0))
!-----------------------------------------------------------
! FIELD : INDLIB 
#define S_GEEX4190_BP_INDLIB peel(pick(nPos, 123, 3), " ")
#define R_GEEX4190_BP_INDLIB(A) put(nRec, 123, A :3.3)
!-----------------------------------------------------------
! FIELD : IMMBKL 
#define S_GEEX4190_BP_IMMBKL peel(pick(nPos, 126, 3), " ")
#define R_GEEX4190_BP_IMMBKL(A) put(nRec, 126, A :3.3)
!-----------------------------------------------------------
! FIELD : PALIMM 
#define S_GEEX4190_BP_PALIMM peel(pick(nPos, 129, 3), " ")
#define R_GEEX4190_BP_PALIMM(A) put(nRec, 129, A :3.3)
!-----------------------------------------------------------
! FIELD : DATBKL 
#define S_GEEX4190_BP_DATBKL peel(pick(nPos, 132, 8), " ")
#define R_GEEX4190_BP_DATBKL(A) put(nRec, 132, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUBKL 
#define S_GEEX4190_BP_HEUBKL peel(pick(nPos, 140, 6), " ")
#define R_GEEX4190_BP_HEUBKL(A) put(nRec, 140, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : DATIMM 
#define S_GEEX4190_BP_DATIMM peel(pick(nPos, 146, 8), " ")
#define R_GEEX4190_BP_DATIMM(A) put(nRec, 146, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUIMM 
#define S_GEEX4190_BP_HEUIMM peel(pick(nPos, 154, 6), " ")
#define R_GEEX4190_BP_HEUIMM(A) put(nRec, 154, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : LIBIMO 
#define S_GEEX4190_BP_LIBIMO peel(pick(nPos, 160, 30), " ")
#define R_GEEX4190_BP_LIBIMO(A) put(nRec, 160, A :30.30)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4190_BP_DISEXC peel(pick(nPos, 190, 67), " ")
#define R_GEEX4190_BP_DISEXC(A) put(nRec, 190, A :67.67)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX4199_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX4199_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4199_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX4199_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4199_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX4199_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4199_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX4199_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4199_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX4199_BP_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4199_BP_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX4199_BP_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4199_BP_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX4199_BP_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4199_BP_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : CUMLIG 
#define S_GEEX4199_BP_CUMLIG peel(pick(nPos, 48, 4), " ")
#define R_GEEX4199_BP_CUMLIG(A) put(nRec, 48, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : CUMPAL 
#define S_GEEX4199_BP_CUMPAL peel(pick(nPos, 52, 5), " ")
#define R_GEEX4199_BP_CUMPAL(A) put(nRec, 52, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : COLTOT 
#define S_GEEX4199_BP_COLTOT peel(pick(nPos, 57, 9), " ")
#define R_GEEX4199_BP_COLTOT(A) put(nRec, 57, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : TOTPRO 
#define S_GEEX4199_BP_TOTPRO peel(pick(nPos, 66, 5), " ")
#define R_GEEX4199_BP_TOTPRO(A) put(nRec, 66, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX4199_BP_DISEXC peel(pick(nPos, 71, 186), " ")
#define R_GEEX4199_BP_DISEXC(A) put(nRec, 71, A :186.186)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9900_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9900_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9900_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9900_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9900_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9900_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9900_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9900_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9900_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : EMTEXC 
#define S_GEEX9900_BP_EMTEXC peel(pick(nPos, 7, 14), " ")
#define R_GEEX9900_BP_EMTEXC(A) put(nRec, 7, A :14.14)
!-----------------------------------------------------------
! FIELD : RCTEXC 
#define S_GEEX9900_BP_RCTEXC peel(pick(nPos, 21, 14), " ")
#define R_GEEX9900_BP_RCTEXC(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXC 
#define S_GEEX9900_BP_DATEXC peel(pick(nPos, 35, 8), " ")
#define R_GEEX9900_BP_DATEXC(A) put(nRec, 35, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_GEEX9900_BP_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_GEEX9900_BP_HEUEXC(A) put(nRec, 43, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : NUMEXC 
#define S_GEEX9900_BP_NUMEXC peel(pick(nPos, 49, 7), " ")
#define R_GEEX9900_BP_NUMEXC(A) put(nRec, 49, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : CPTEXC 
#define S_GEEX9900_BP_CPTEXC peel(pick(nPos, 56, 8), " ")
#define R_GEEX9900_BP_CPTEXC(A) put(nRec, 56, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : NOMSYS 
#define S_GEEX9900_BP_NOMSYS peel(pick(nPos, 64, 8), " ")
#define R_GEEX9900_BP_NOMSYS(A) put(nRec, 64, A :8.8)
!-----------------------------------------------------------
! FIELD : NOMDTQ 
#define S_GEEX9900_BP_NOMDTQ peel(pick(nPos, 72, 10), " ")
#define R_GEEX9900_BP_NOMDTQ(A) put(nRec, 72, A :10.10)
!-----------------------------------------------------------
! FIELD : BIBDTQ 
#define S_GEEX9900_BP_BIBDTQ peel(pick(nPos, 82, 10), " ")
#define R_GEEX9900_BP_BIBDTQ(A) put(nRec, 82, A :10.10)
!-----------------------------------------------------------
! FIELD : IDEMSG 
#define S_GEEX9900_BP_IDEMSG peel(pick(nPos, 92, 30), " ")
#define R_GEEX9900_BP_IDEMSG(A) put(nRec, 92, A :30.30)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9900_BP_DISEXC peel(pick(nPos, 122, 135), " ")
#define R_GEEX9900_BP_DISEXC(A) put(nRec, 122, A :135.135)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9999_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9999_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9999_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9999_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9999_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9999_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9999_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9999_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9999_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : EMTEXC 
#define S_GEEX9999_BP_EMTEXC peel(pick(nPos, 7, 14), " ")
#define R_GEEX9999_BP_EMTEXC(A) put(nRec, 7, A :14.14)
!-----------------------------------------------------------
! FIELD : RCTEXC 
#define S_GEEX9999_BP_RCTEXC peel(pick(nPos, 21, 14), " ")
#define R_GEEX9999_BP_RCTEXC(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXC 
#define S_GEEX9999_BP_DATEXC peel(pick(nPos, 35, 8), " ")
#define R_GEEX9999_BP_DATEXC(A) put(nRec, 35, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_GEEX9999_BP_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_GEEX9999_BP_HEUEXC(A) put(nRec, 43, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : NUMEXC 
#define S_GEEX9999_BP_NUMEXC peel(pick(nPos, 49, 7), " ")
#define R_GEEX9999_BP_NUMEXC(A) put(nRec, 49, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : CPTEXC 
#define S_GEEX9999_BP_CPTEXC peel(pick(nPos, 56, 8), " ")
#define R_GEEX9999_BP_CPTEXC(A) put(nRec, 56, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : ERREXC 
#define S_GEEX9999_BP_ERREXC peel(pick(nPos, 64, 8), " ")
#define R_GEEX9999_BP_ERREXC(A) put(nRec, 64, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : IDEMSG 
#define S_GEEX9999_BP_IDEMSG peel(pick(nPos, 72, 30), " ")
#define R_GEEX9999_BP_IDEMSG(A) put(nRec, 72, A :30.30)
!-----------------------------------------------------------
! FIELD : DEBFIN 
#define S_GEEX9999_BP_DEBFIN peel(pick(nPos, 102, 1), " ")
#define R_GEEX9999_BP_DEBFIN(A) put(nRec, 102, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9999_BP_DISEXC peel(pick(nPos, 103, 154), " ")
#define R_GEEX9999_BP_DISEXC(A) put(nRec, 103, A :154.154)
!-----------------------------------------------------------

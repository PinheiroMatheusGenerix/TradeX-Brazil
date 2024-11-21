! File GEEXM80 : 
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
! Line : GEEX8000_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX8000_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8000_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX8000_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8000_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX8000_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8000_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX8000_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8000_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : DATMVT 
#define S_GEEX8000_BP_DATMVT peel(pick(nPos, 7, 8), " ")
#define R_GEEX8000_BP_DATMVT(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUMVT 
#define S_GEEX8000_BP_HEUMVT peel(pick(nPos, 15, 6), " ")
#define R_GEEX8000_BP_HEUMVT(A) put(nRec, 15, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : DATRGL 
#define S_GEEX8000_BP_DATRGL peel(pick(nPos, 21, 8), " ")
#define R_GEEX8000_BP_DATRGL(A) put(nRec, 21, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODMDU 
#define S_GEEX8000_BP_CODMDU peel(pick(nPos, 29, 2), " ")
#define R_GEEX8000_BP_CODMDU(A) put(nRec, 29, A :2.2)
!-----------------------------------------------------------
! FIELD : CODFON 
#define S_GEEX8000_BP_CODFON peel(pick(nPos, 31, 1), " ")
#define R_GEEX8000_BP_CODFON(A) put(nRec, 31, build(number(A):R01.0))
!-----------------------------------------------------------
! FIELD : CODMVT 
#define S_GEEX8000_BP_CODMVT peel(pick(nPos, 32, 2), " ")
#define R_GEEX8000_BP_CODMVT(A) put(nRec, 32, A :2.2)
!-----------------------------------------------------------
! FIELD : SENMVT 
#define S_GEEX8000_BP_SENMVT peel(pick(nPos, 34, 1), " ")
#define R_GEEX8000_BP_SENMVT(A) put(nRec, 34, A :1.1)
!-----------------------------------------------------------
! FIELD : MOTMVT 
#define S_GEEX8000_BP_MOTMVT peel(pick(nPos, 35, 3), " ")
#define R_GEEX8000_BP_MOTMVT(A) put(nRec, 35, A :3.3)
!-----------------------------------------------------------
! FIELD : EDIMVT 
#define S_GEEX8000_BP_EDIMVT peel(pick(nPos, 38, 3), " ")
#define R_GEEX8000_BP_EDIMVT(A) put(nRec, 38, A :3.3)
!-----------------------------------------------------------
! FIELD : REFMVT 
#define S_GEEX8000_BP_REFMVT peel(pick(nPos, 41, 30), " ")
#define R_GEEX8000_BP_REFMVT(A) put(nRec, 41, A :30.30)
!-----------------------------------------------------------
! FIELD : UVCMVT 
#define S_GEEX8000_BP_UVCMVT peel(pick(nPos, 71, 9), " ")
#define R_GEEX8000_BP_UVCMVT(A) put(nRec, 71, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX8000_BP_CODACT peel(pick(nPos, 80, 3), " ")
#define R_GEEX8000_BP_CODACT(A) put(nRec, 80, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX8000_BP_CODCLI peel(pick(nPos, 83, 14), " ")
#define R_GEEX8000_BP_CODCLI(A) put(nRec, 83, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX8000_BP_CODPRO peel(pick(nPos, 97, 17), " ")
#define R_GEEX8000_BP_CODPRO(A) put(nRec, 97, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX8000_BP_VALPRO peel(pick(nPos, 114, 2), " ")
#define R_GEEX8000_BP_VALPRO(A) put(nRec, 114, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODPRN 
#define S_GEEX8000_BP_CODPRN peel(pick(nPos, 116, 17), " ")
#define R_GEEX8000_BP_CODPRN(A) put(nRec, 116, A :17.17)
!-----------------------------------------------------------
! FIELD : SPCPRO 
#define S_GEEX8000_BP_SPCPRO peel(pick(nPos, 133, 4), " ")
#define R_GEEX8000_BP_SPCPRO(A) put(nRec, 133, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX8000_BP_PCBPRO peel(pick(nPos, 137, 5), " ")
#define R_GEEX8000_BP_PCBPRO(A) put(nRec, 137, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODSIT 
#define S_GEEX8000_BP_CODSIT peel(pick(nPos, 142, 3), " ")
#define R_GEEX8000_BP_CODSIT(A) put(nRec, 142, A :3.3)
!-----------------------------------------------------------
! FIELD : ZONSTS 
#define S_GEEX8000_BP_ZONSTS peel(pick(nPos, 145, 1), " ")
#define R_GEEX8000_BP_ZONSTS(A) put(nRec, 145, A :1.1)
!-----------------------------------------------------------
! FIELD : ALLSTS 
#define S_GEEX8000_BP_ALLSTS peel(pick(nPos, 146, 3), " ")
#define R_GEEX8000_BP_ALLSTS(A) put(nRec, 146, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : DPLSTS 
#define S_GEEX8000_BP_DPLSTS peel(pick(nPos, 149, 4), " ")
#define R_GEEX8000_BP_DPLSTS(A) put(nRec, 149, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : NIVSTS 
#define S_GEEX8000_BP_NIVSTS peel(pick(nPos, 153, 2), " ")
#define R_GEEX8000_BP_NIVSTS(A) put(nRec, 153, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX8000_BP_CODLOT peel(pick(nPos, 155, 20), " ")
#define R_GEEX8000_BP_CODLOT(A) put(nRec, 155, A :20.20)
!-----------------------------------------------------------
! FIELD : NUMLOT 
#define S_GEEX8000_BP_NUMLOT peel(pick(nPos, 175, 9), " ")
#define R_GEEX8000_BP_NUMLOT(A) put(nRec, 175, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX8000_BP_CODPAL peel(pick(nPos, 184, 18), " ")
#define R_GEEX8000_BP_CODPAL(A) put(nRec, 184, A :18.18)
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_GEEX8000_BP_DATFVI peel(pick(nPos, 202, 8), " ")
#define R_GEEX8000_BP_DATFVI(A) put(nRec, 202, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : NUMDIM 
#define S_GEEX8000_BP_NUMDIM peel(pick(nPos, 210, 8), " ")
#define R_GEEX8000_BP_NUMDIM(A) put(nRec, 210, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODTIE 
#define S_GEEX8000_BP_CODTIE peel(pick(nPos, 218, 14), " ")
#define R_GEEX8000_BP_CODTIE(A) put(nRec, 218, A :14.14)
!-----------------------------------------------------------
! FIELD : TYPTIE 
#define S_GEEX8000_BP_TYPTIE peel(pick(nPos, 232, 1), " ")
#define R_GEEX8000_BP_TYPTIE(A) put(nRec, 232, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMCDE 
#define S_GEEX8000_BP_NUMCDE peel(pick(nPos, 233, 8), " ")
#define R_GEEX8000_BP_NUMCDE(A) put(nRec, 233, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUCDE 
#define S_GEEX8000_BP_SNUCDE peel(pick(nPos, 241, 3), " ")
#define R_GEEX8000_BP_SNUCDE(A) put(nRec, 241, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODUTI 
#define S_GEEX8000_BP_CODUTI peel(pick(nPos, 244, 10), " ")
#define R_GEEX8000_BP_CODUTI(A) put(nRec, 244, A :10.10)
!-----------------------------------------------------------
! FIELD : UNIPRO 
#define S_GEEX8000_BP_UNIPRO peel(pick(nPos, 254, 3), " ")
#define R_GEEX8000_BP_UNIPRO(A) put(nRec, 254, A :3.3)
!-----------------------------------------------------------
! FIELD : CHDSSC 
#define S_GEEX8000_BP_CHDSSC peel(pick(nPos, 257, 18), " ")
#define R_GEEX8000_BP_CHDSSC(A) put(nRec, 257, A :18.18)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX8001_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX8001_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8001_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX8001_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8001_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX8001_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8001_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX8001_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8001_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : DATMVT 
#define S_GEEX8001_BP_DATMVT peel(pick(nPos, 7, 8), " ")
#define R_GEEX8001_BP_DATMVT(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUMVT 
#define S_GEEX8001_BP_HEUMVT peel(pick(nPos, 15, 6), " ")
#define R_GEEX8001_BP_HEUMVT(A) put(nRec, 15, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : REFMVT 
#define S_GEEX8001_BP_REFMVT peel(pick(nPos, 21, 30), " ")
#define R_GEEX8001_BP_REFMVT(A) put(nRec, 21, A :30.30)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX8001_BP_CODACT peel(pick(nPos, 51, 3), " ")
#define R_GEEX8001_BP_CODACT(A) put(nRec, 51, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX8001_BP_CODPRO peel(pick(nPos, 54, 17), " ")
#define R_GEEX8001_BP_CODPRO(A) put(nRec, 54, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX8001_BP_VALPRO peel(pick(nPos, 71, 2), " ")
#define R_GEEX8001_BP_VALPRO(A) put(nRec, 71, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : PDBPAL 
#define S_GEEX8001_BP_PDBPAL peel(pick(nPos, 73, 7), " ")
#define R_GEEX8001_BP_PDBPAL(A) put(nRec, 73, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : PDBMVT 
#define S_GEEX8001_BP_PDBMVT peel(pick(nPos, 80, 7), " ")
#define R_GEEX8001_BP_PDBMVT(A) put(nRec, 80, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : ANAPRO 
#define S_GEEX8001_BP_ANAPRO peel(pick(nPos, 87, 15), " ")
#define R_GEEX8001_BP_ANAPRO(A) put(nRec, 87, A :15.15)
!-----------------------------------------------------------
! FIELD : FAMPRO 
#define S_GEEX8001_BP_FAMPRO peel(pick(nPos, 102, 10), " ")
#define R_GEEX8001_BP_FAMPRO(A) put(nRec, 102, A :10.10)
!-----------------------------------------------------------
! FIELD : INDPRO 
#define S_GEEX8001_BP_INDPRO peel(pick(nPos, 112, 10), " ")
#define R_GEEX8001_BP_INDPRO(A) put(nRec, 112, A :10.10)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_GEEX8001_BP_NLILIV peel(pick(nPos, 122, 5), " ")
#define R_GEEX8001_BP_NLILIV(A) put(nRec, 122, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODTLI 
#define S_GEEX8001_BP_CODTLI peel(pick(nPos, 127, 3), " ")
#define R_GEEX8001_BP_CODTLI(A) put(nRec, 127, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX8001_BP_CODPAL peel(pick(nPos, 130, 18), " ")
#define R_GEEX8001_BP_CODPAL(A) put(nRec, 130, A :18.18)
!-----------------------------------------------------------
! FIELD : DATFAB 
#define S_GEEX8001_BP_DATFAB peel(pick(nPos, 148, 8), " ")
#define R_GEEX8001_BP_DATFAB(A) put(nRec, 148, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : MOTSAP 
#define S_GEEX8001_BP_MOTSAP peel(pick(nPos, 156, 4), " ")
#define R_GEEX8001_BP_MOTSAP(A) put(nRec, 156, A :4.4)
!-----------------------------------------------------------
! FIELD : CODSAP 
#define S_GEEX8001_BP_CODSAP peel(pick(nPos, 160, 3), " ")
#define R_GEEX8001_BP_CODSAP(A) put(nRec, 160, A :3.3)
!-----------------------------------------------------------
! FIELD : STOSAP 
#define S_GEEX8001_BP_STOSAP peel(pick(nPos, 163, 4), " ")
#define R_GEEX8001_BP_STOSAP(A) put(nRec, 163, A :4.4)
!-----------------------------------------------------------
! FIELD : STASAP 
#define S_GEEX8001_BP_STASAP peel(pick(nPos, 167, 1), " ")
#define R_GEEX8001_BP_STASAP(A) put(nRec, 167, A :1.1)
!-----------------------------------------------------------
! FIELD : MESPRO 
#define S_GEEX8001_BP_MESPRO peel(pick(nPos, 168, 1), " ")
#define R_GEEX8001_BP_MESPRO(A) put(nRec, 168, A :1.1)
!-----------------------------------------------------------
! FIELD : DIPMVT 
#define S_GEEX8001_BP_DIPMVT peel(pick(nPos, 169, 50), " ")
#define R_GEEX8001_BP_DIPMVT(A) put(nRec, 169, A :50.50)
!-----------------------------------------------------------
! FIELD : CODRGT 
#define S_GEEX8001_BP_CODRGT peel(pick(nPos, 219, 3), " ")
#define R_GEEX8001_BP_CODRGT(A) put(nRec, 219, A :3.3)
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_GEEX8001_BP_EDIPRO peel(pick(nPos, 222, 17), " ")
#define R_GEEX8001_BP_EDIPRO(A) put(nRec, 222, A :17.17)
!-----------------------------------------------------------
! FIELD : NUMGRP 
#define S_GEEX8001_BP_NUMGRP peel(pick(nPos, 239, 10), " ")
#define R_GEEX8001_BP_NUMGRP(A) put(nRec, 239, build(number(A):R010.0))
!-----------------------------------------------------------
! FIELD : DS1PRO 
#define S_GEEX8001_BP_DS1PRO peel(pick(nPos, 249, 35), " ")
#define R_GEEX8001_BP_DS1PRO(A) put(nRec, 249, A :35.35)
!-----------------------------------------------------------
! FIELD : DS2PRO 
#define S_GEEX8001_BP_DS2PRO peel(pick(nPos, 284, 35), " ")
#define R_GEEX8001_BP_DS2PRO(A) put(nRec, 284, A :35.35)
!-----------------------------------------------------------
! FIELD : DS3PRO 
#define S_GEEX8001_BP_DS3PRO peel(pick(nPos, 319, 35), " ")
#define R_GEEX8001_BP_DS3PRO(A) put(nRec, 319, A :35.35)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX8020_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX8020_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8020_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX8020_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8020_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX8020_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8020_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX8020_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8020_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : DATMVT 
#define S_GEEX8020_BP_DATMVT peel(pick(nPos, 7, 8), " ")
#define R_GEEX8020_BP_DATMVT(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUMVT 
#define S_GEEX8020_BP_HEUMVT peel(pick(nPos, 15, 6), " ")
#define R_GEEX8020_BP_HEUMVT(A) put(nRec, 15, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODMVT 
#define S_GEEX8020_BP_CODMVT peel(pick(nPos, 21, 2), " ")
#define R_GEEX8020_BP_CODMVT(A) put(nRec, 21, A :2.2)
!-----------------------------------------------------------
! FIELD : SENMVT 
#define S_GEEX8020_BP_SENMVT peel(pick(nPos, 23, 1), " ")
#define R_GEEX8020_BP_SENMVT(A) put(nRec, 23, A :1.1)
!-----------------------------------------------------------
! FIELD : MOTMVT 
#define S_GEEX8020_BP_MOTMVT peel(pick(nPos, 24, 3), " ")
#define R_GEEX8020_BP_MOTMVT(A) put(nRec, 24, A :3.3)
!-----------------------------------------------------------
! FIELD : REFMVT 
#define S_GEEX8020_BP_REFMVT peel(pick(nPos, 27, 30), " ")
#define R_GEEX8020_BP_REFMVT(A) put(nRec, 27, A :30.30)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_GEEX8020_BP_NLILIV peel(pick(nPos, 57, 5), " ")
#define R_GEEX8020_BP_NLILIV(A) put(nRec, 57, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : UVCMVT 
#define S_GEEX8020_BP_UVCMVT peel(pick(nPos, 62, 9), " ")
#define R_GEEX8020_BP_UVCMVT(A) put(nRec, 62, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX8020_BP_CODACT peel(pick(nPos, 71, 3), " ")
#define R_GEEX8020_BP_CODACT(A) put(nRec, 71, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX8020_BP_CODCLI peel(pick(nPos, 74, 14), " ")
#define R_GEEX8020_BP_CODCLI(A) put(nRec, 74, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX8020_BP_CODPRO peel(pick(nPos, 88, 17), " ")
#define R_GEEX8020_BP_CODPRO(A) put(nRec, 88, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX8020_BP_VALPRO peel(pick(nPos, 105, 2), " ")
#define R_GEEX8020_BP_VALPRO(A) put(nRec, 105, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX8020_BP_PCBPRO peel(pick(nPos, 107, 5), " ")
#define R_GEEX8020_BP_PCBPRO(A) put(nRec, 107, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : SPCPRO 
#define S_GEEX8020_BP_SPCPRO peel(pick(nPos, 112, 4), " ")
#define R_GEEX8020_BP_SPCPRO(A) put(nRec, 112, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX8020_BP_CODLOT peel(pick(nPos, 116, 20), " ")
#define R_GEEX8020_BP_CODLOT(A) put(nRec, 116, A :20.20)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX8020_BP_CODPAL peel(pick(nPos, 136, 18), " ")
#define R_GEEX8020_BP_CODPAL(A) put(nRec, 136, A :18.18)
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_GEEX8020_BP_DATFVI peel(pick(nPos, 154, 8), " ")
#define R_GEEX8020_BP_DATFVI(A) put(nRec, 154, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SITPAL 
#define S_GEEX8020_BP_SITPAL peel(pick(nPos, 162, 3), " ")
#define R_GEEX8020_BP_SITPAL(A) put(nRec, 162, A :3.3)
!-----------------------------------------------------------
! FIELD : CLILIV 
#define S_GEEX8020_BP_CLILIV peel(pick(nPos, 165, 14), " ")
#define R_GEEX8020_BP_CLILIV(A) put(nRec, 165, A :14.14)
!-----------------------------------------------------------
! FIELD : PRPPIC 
#define S_GEEX8020_BP_PRPPIC peel(pick(nPos, 179, 1), " ")
#define R_GEEX8020_BP_PRPPIC(A) put(nRec, 179, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX8020_BP_NUMLIV peel(pick(nPos, 180, 8), " ")
#define R_GEEX8020_BP_NUMLIV(A) put(nRec, 180, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX8020_BP_SNULIV peel(pick(nPos, 188, 3), " ")
#define R_GEEX8020_BP_SNULIV(A) put(nRec, 188, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_GEEX8020_BP_EDIPRO peel(pick(nPos, 191, 17), " ")
#define R_GEEX8020_BP_EDIPRO(A) put(nRec, 191, A :17.17)
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GEEX8020_BP_MOTIMM peel(pick(nPos, 208, 3), " ")
#define R_GEEX8020_BP_MOTIMM(A) put(nRec, 208, A :3.3)
!-----------------------------------------------------------
! FIELD : DATIMM 
#define S_GEEX8020_BP_DATIMM peel(pick(nPos, 211, 16), " ")
#define R_GEEX8020_BP_DATIMM(A) put(nRec, 211, build(number(A):R016.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX8020_BP_DISEXC peel(pick(nPos, 227, 30), " ")
#define R_GEEX8020_BP_DISEXC(A) put(nRec, 227, A :30.30)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX8030_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX8030_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8030_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX8030_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8030_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX8030_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8030_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX8030_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8030_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX8030_BP_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX8030_BP_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : DATPRP 
#define S_GEEX8030_BP_DATPRP peel(pick(nPos, 10, 8), " ")
#define R_GEEX8030_BP_DATPRP(A) put(nRec, 10, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODLDP 
#define S_GEEX8030_BP_CODLDP peel(pick(nPos, 18, 3), " ")
#define R_GEEX8030_BP_CODLDP(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : INDCIR 
#define S_GEEX8030_BP_INDCIR peel(pick(nPos, 21, 5), " ")
#define R_GEEX8030_BP_INDCIR(A) put(nRec, 21, A :5.5)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX8030_BP_CODPRO peel(pick(nPos, 26, 17), " ")
#define R_GEEX8030_BP_CODPRO(A) put(nRec, 26, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX8030_BP_VALPRO peel(pick(nPos, 43, 2), " ")
#define R_GEEX8030_BP_VALPRO(A) put(nRec, 43, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : PRXPRO 
#define S_GEEX8030_BP_PRXPRO peel(pick(nPos, 45, 36), " ")
#define R_GEEX8030_BP_PRXPRO(A) put(nRec, 45, build(number(A):R036.0))
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX8030_BP_PCBPRO peel(pick(nPos, 81, 5), " ")
#define R_GEEX8030_BP_PCBPRO(A) put(nRec, 81, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : PDBUVC 
#define S_GEEX8030_BP_PDBUVC peel(pick(nPos, 86, 7), " ")
#define R_GEEX8030_BP_PDBUVC(A) put(nRec, 86, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX8030_BP_VALRUB peel(pick(nPos, 93, 35), " ")
#define R_GEEX8030_BP_VALRUB(A) put(nRec, 93, A :35.35)
!-----------------------------------------------------------
! FIELD : INDFAC 
#define S_GEEX8030_BP_INDFAC peel(pick(nPos, 128, 1), " ")
#define R_GEEX8030_BP_INDFAC(A) put(nRec, 128, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX8030_BP_DISEXC peel(pick(nPos, 129, 128), " ")
#define R_GEEX8030_BP_DISEXC(A) put(nRec, 129, A :128.128)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX8031_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX8031_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8031_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX8031_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8031_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX8031_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8031_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX8031_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8031_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX8031_BP_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX8031_BP_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : DATPRP 
#define S_GEEX8031_BP_DATPRP peel(pick(nPos, 10, 8), " ")
#define R_GEEX8031_BP_DATPRP(A) put(nRec, 10, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODLDP 
#define S_GEEX8031_BP_CODLDP peel(pick(nPos, 18, 3), " ")
#define R_GEEX8031_BP_CODLDP(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : INDCIR 
#define S_GEEX8031_BP_INDCIR peel(pick(nPos, 21, 5), " ")
#define R_GEEX8031_BP_INDCIR(A) put(nRec, 21, A :5.5)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX8031_BP_CODPRO peel(pick(nPos, 26, 17), " ")
#define R_GEEX8031_BP_CODPRO(A) put(nRec, 26, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX8031_BP_VALPRO peel(pick(nPos, 43, 2), " ")
#define R_GEEX8031_BP_VALPRO(A) put(nRec, 43, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX8031_BP_CODCLI peel(pick(nPos, 45, 14), " ")
#define R_GEEX8031_BP_CODCLI(A) put(nRec, 45, A :14.14)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX8031_BP_VALRUB peel(pick(nPos, 59, 35), " ")
#define R_GEEX8031_BP_VALRUB(A) put(nRec, 59, A :35.35)
!-----------------------------------------------------------
! FIELD : UVCVTL 
#define S_GEEX8031_BP_UVCVTL peel(pick(nPos, 94, 9), " ")
#define R_GEEX8031_BP_UVCVTL(A) put(nRec, 94, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : VALMDT 
#define S_GEEX8031_BP_VALMDT peel(pick(nPos, 103, 35), " ")
#define R_GEEX8031_BP_VALMDT(A) put(nRec, 103, A :35.35)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX8031_BP_DISEXC peel(pick(nPos, 138, 119), " ")
#define R_GEEX8031_BP_DISEXC(A) put(nRec, 138, A :119.119)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX8032_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX8032_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8032_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX8032_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8032_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX8032_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8032_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX8032_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8032_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX8032_BP_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX8032_BP_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : DATPRP 
#define S_GEEX8032_BP_DATPRP peel(pick(nPos, 10, 8), " ")
#define R_GEEX8032_BP_DATPRP(A) put(nRec, 10, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX8032_BP_CODCLI peel(pick(nPos, 18, 14), " ")
#define R_GEEX8032_BP_CODCLI(A) put(nRec, 18, A :14.14)
!-----------------------------------------------------------
! FIELD : CODEMB 
#define S_GEEX8032_BP_CODEMB peel(pick(nPos, 32, 3), " ")
#define R_GEEX8032_BP_CODEMB(A) put(nRec, 32, A :3.3)
!-----------------------------------------------------------
! FIELD : TOPPAQ 
#define S_GEEX8032_BP_TOPPAQ peel(pick(nPos, 35, 1), " ")
#define R_GEEX8032_BP_TOPPAQ(A) put(nRec, 35, A :1.1)
!-----------------------------------------------------------
! FIELD : NBREMB 
#define S_GEEX8032_BP_NBREMB peel(pick(nPos, 36, 3), " ")
#define R_GEEX8032_BP_NBREMB(A) put(nRec, 36, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX8032_BP_VALRUB peel(pick(nPos, 39, 35), " ")
#define R_GEEX8032_BP_VALRUB(A) put(nRec, 39, A :35.35)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX8032_BP_DISEXC peel(pick(nPos, 74, 183), " ")
#define R_GEEX8032_BP_DISEXC(A) put(nRec, 74, A :183.183)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX8041_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX8041_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8041_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX8041_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8041_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX8041_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8041_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX8041_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8041_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : DATMVT 
#define S_GEEX8041_BP_DATMVT peel(pick(nPos, 7, 8), " ")
#define R_GEEX8041_BP_DATMVT(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUMVT 
#define S_GEEX8041_BP_HEUMVT peel(pick(nPos, 15, 6), " ")
#define R_GEEX8041_BP_HEUMVT(A) put(nRec, 15, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODMVT 
#define S_GEEX8041_BP_CODMVT peel(pick(nPos, 21, 2), " ")
#define R_GEEX8041_BP_CODMVT(A) put(nRec, 21, A :2.2)
!-----------------------------------------------------------
! FIELD : SENMVT 
#define S_GEEX8041_BP_SENMVT peel(pick(nPos, 23, 1), " ")
#define R_GEEX8041_BP_SENMVT(A) put(nRec, 23, A :1.1)
!-----------------------------------------------------------
! FIELD : MOTMVT 
#define S_GEEX8041_BP_MOTMVT peel(pick(nPos, 24, 3), " ")
#define R_GEEX8041_BP_MOTMVT(A) put(nRec, 24, A :3.3)
!-----------------------------------------------------------
! FIELD : REFMVT 
#define S_GEEX8041_BP_REFMVT peel(pick(nPos, 27, 30), " ")
#define R_GEEX8041_BP_REFMVT(A) put(nRec, 27, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX8041_BP_NLIREC peel(pick(nPos, 57, 5), " ")
#define R_GEEX8041_BP_NLIREC(A) put(nRec, 57, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : UVCMVT 
#define S_GEEX8041_BP_UVCMVT peel(pick(nPos, 62, 9), " ")
#define R_GEEX8041_BP_UVCMVT(A) put(nRec, 62, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX8041_BP_CODACT peel(pick(nPos, 71, 3), " ")
#define R_GEEX8041_BP_CODACT(A) put(nRec, 71, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX8041_BP_CODCLI peel(pick(nPos, 74, 14), " ")
#define R_GEEX8041_BP_CODCLI(A) put(nRec, 74, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX8041_BP_CODPRO peel(pick(nPos, 88, 17), " ")
#define R_GEEX8041_BP_CODPRO(A) put(nRec, 88, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX8041_BP_VALPRO peel(pick(nPos, 105, 2), " ")
#define R_GEEX8041_BP_VALPRO(A) put(nRec, 105, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX8041_BP_PCBPRO peel(pick(nPos, 107, 5), " ")
#define R_GEEX8041_BP_PCBPRO(A) put(nRec, 107, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : SPCPRO 
#define S_GEEX8041_BP_SPCPRO peel(pick(nPos, 112, 4), " ")
#define R_GEEX8041_BP_SPCPRO(A) put(nRec, 112, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX8041_BP_CODLOT peel(pick(nPos, 116, 20), " ")
#define R_GEEX8041_BP_CODLOT(A) put(nRec, 116, A :20.20)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX8041_BP_CODPAL peel(pick(nPos, 136, 18), " ")
#define R_GEEX8041_BP_CODPAL(A) put(nRec, 136, A :18.18)
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_GEEX8041_BP_DATFVI peel(pick(nPos, 154, 8), " ")
#define R_GEEX8041_BP_DATFVI(A) put(nRec, 154, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SITPAL 
#define S_GEEX8041_BP_SITPAL peel(pick(nPos, 162, 3), " ")
#define R_GEEX8041_BP_SITPAL(A) put(nRec, 162, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX8041_BP_NUMREC peel(pick(nPos, 165, 8), " ")
#define R_GEEX8041_BP_NUMREC(A) put(nRec, 165, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX8041_BP_SNUREC peel(pick(nPos, 173, 3), " ")
#define R_GEEX8041_BP_SNUREC(A) put(nRec, 173, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_GEEX8041_BP_CODFOU peel(pick(nPos, 176, 14), " ")
#define R_GEEX8041_BP_CODFOU(A) put(nRec, 176, A :14.14)
!-----------------------------------------------------------
! FIELD : DATFAB 
#define S_GEEX8041_BP_DATFAB peel(pick(nPos, 190, 8), " ")
#define R_GEEX8041_BP_DATFAB(A) put(nRec, 190, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUFAB 
#define S_GEEX8041_BP_HEUFAB peel(pick(nPos, 198, 6), " ")
#define R_GEEX8041_BP_HEUFAB(A) put(nRec, 198, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : DATREC 
#define S_GEEX8041_BP_DATREC peel(pick(nPos, 204, 8), " ")
#define R_GEEX8041_BP_DATREC(A) put(nRec, 204, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUREC 
#define S_GEEX8041_BP_HEUREC peel(pick(nPos, 212, 6), " ")
#define R_GEEX8041_BP_HEUREC(A) put(nRec, 212, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GEEX8041_BP_MOTIMM peel(pick(nPos, 218, 3), " ")
#define R_GEEX8041_BP_MOTIMM(A) put(nRec, 218, A :3.3)
!-----------------------------------------------------------
! FIELD : DATIMM 
#define S_GEEX8041_BP_DATIMM peel(pick(nPos, 221, 16), " ")
#define R_GEEX8041_BP_DATIMM(A) put(nRec, 221, build(number(A):R016.0))
!-----------------------------------------------------------
! FIELD : HEUIMM 
#define S_GEEX8041_BP_HEUIMM peel(pick(nPos, 237, 12), " ")
#define R_GEEX8041_BP_HEUIMM(A) put(nRec, 237, build(number(A):R012.0))
!-----------------------------------------------------------
! FIELD : PDBMVT 
#define S_GEEX8041_BP_PDBMVT peel(pick(nPos, 249, 7), " ")
#define R_GEEX8041_BP_PDBMVT(A) put(nRec, 249, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : INDRET 
#define S_GEEX8041_BP_INDRET peel(pick(nPos, 256, 1), " ")
#define R_GEEX8041_BP_INDRET(A) put(nRec, 256, A :1.1)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX8052_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX8052_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8052_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX8052_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8052_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX8052_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8052_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX8052_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8052_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX8052_BP_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX8052_BP_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX8052_BP_NUMLIV peel(pick(nPos, 10, 8), " ")
#define R_GEEX8052_BP_NUMLIV(A) put(nRec, 10, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX8052_BP_SNULIV peel(pick(nPos, 18, 3), " ")
#define R_GEEX8052_BP_SNULIV(A) put(nRec, 18, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX8052_BP_REFLIV peel(pick(nPos, 21, 30), " ")
#define R_GEEX8052_BP_REFLIV(A) put(nRec, 21, A :30.30)
!-----------------------------------------------------------
! FIELD : DATLIV 
#define S_GEEX8052_BP_DATLIV peel(pick(nPos, 51, 8), " ")
#define R_GEEX8052_BP_DATLIV(A) put(nRec, 51, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CLILIV 
#define S_GEEX8052_BP_CLILIV peel(pick(nPos, 59, 14), " ")
#define R_GEEX8052_BP_CLILIV(A) put(nRec, 59, A :14.14)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX8052_BP_CODCLI peel(pick(nPos, 73, 14), " ")
#define R_GEEX8052_BP_CODCLI(A) put(nRec, 73, A :14.14)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_GEEX8052_BP_NLILIV peel(pick(nPos, 87, 5), " ")
#define R_GEEX8052_BP_NLILIV(A) put(nRec, 87, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX8052_BP_CODPRO peel(pick(nPos, 92, 17), " ")
#define R_GEEX8052_BP_CODPRO(A) put(nRec, 92, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX8052_BP_VALPRO peel(pick(nPos, 109, 2), " ")
#define R_GEEX8052_BP_VALPRO(A) put(nRec, 109, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_GEEX8052_BP_EDIPRO peel(pick(nPos, 111, 17), " ")
#define R_GEEX8052_BP_EDIPRO(A) put(nRec, 111, A :17.17)
!-----------------------------------------------------------
! FIELD : UVCCDE 
#define S_GEEX8052_BP_UVCCDE peel(pick(nPos, 128, 9), " ")
#define R_GEEX8052_BP_UVCCDE(A) put(nRec, 128, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UVCEGE 
#define S_GEEX8052_BP_UVCEGE peel(pick(nPos, 137, 9), " ")
#define R_GEEX8052_BP_UVCEGE(A) put(nRec, 137, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UVCMNQ 
#define S_GEEX8052_BP_UVCMNQ peel(pick(nPos, 146, 9), " ")
#define R_GEEX8052_BP_UVCMNQ(A) put(nRec, 146, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : SENMVT 
#define S_GEEX8052_BP_SENMVT peel(pick(nPos, 155, 1), " ")
#define R_GEEX8052_BP_SENMVT(A) put(nRec, 155, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX8052_BP_DISEXC peel(pick(nPos, 156, 101), " ")
#define R_GEEX8052_BP_DISEXC(A) put(nRec, 156, A :101.101)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX8060_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX8060_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8060_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX8060_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8060_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX8060_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8060_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX8060_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8060_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX8060_BP_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX8060_BP_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX8060_BP_CODCLI peel(pick(nPos, 10, 14), " ")
#define R_GEEX8060_BP_CODCLI(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX8060_BP_CODPRO peel(pick(nPos, 24, 17), " ")
#define R_GEEX8060_BP_CODPRO(A) put(nRec, 24, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX8060_BP_VALPRO peel(pick(nPos, 41, 2), " ")
#define R_GEEX8060_BP_VALPRO(A) put(nRec, 41, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GEEX8060_BP_MOTIMM peel(pick(nPos, 43, 3), " ")
#define R_GEEX8060_BP_MOTIMM(A) put(nRec, 43, A :3.3)
!-----------------------------------------------------------
! FIELD : DATIMM1 
#define S_GEEX8060_BP_DATIMM1 peel(pick(nPos, 46, 8), " ")
#define R_GEEX8060_BP_DATIMM1(A) put(nRec, 46, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATIMM2 
#define S_GEEX8060_BP_DATIMM2 peel(pick(nPos, 54, 8), " ")
#define R_GEEX8060_BP_DATIMM2(A) put(nRec, 54, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_GEEX8060_BP_DATFVI peel(pick(nPos, 62, 8), " ")
#define R_GEEX8060_BP_DATFVI(A) put(nRec, 62, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATMVT 
#define S_GEEX8060_BP_DATMVT peel(pick(nPos, 70, 8), " ")
#define R_GEEX8060_BP_DATMVT(A) put(nRec, 70, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUMVT 
#define S_GEEX8060_BP_HEUMVT peel(pick(nPos, 78, 6), " ")
#define R_GEEX8060_BP_HEUMVT(A) put(nRec, 78, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODMVT 
#define S_GEEX8060_BP_CODMVT peel(pick(nPos, 84, 2), " ")
#define R_GEEX8060_BP_CODMVT(A) put(nRec, 84, A :2.2)
!-----------------------------------------------------------
! FIELD : SENMVT 
#define S_GEEX8060_BP_SENMVT peel(pick(nPos, 86, 1), " ")
#define R_GEEX8060_BP_SENMVT(A) put(nRec, 86, A :1.1)
!-----------------------------------------------------------
! FIELD : MOTMVT 
#define S_GEEX8060_BP_MOTMVT peel(pick(nPos, 87, 3), " ")
#define R_GEEX8060_BP_MOTMVT(A) put(nRec, 87, A :3.3)
!-----------------------------------------------------------
! FIELD : EDIMVT 
#define S_GEEX8060_BP_EDIMVT peel(pick(nPos, 90, 3), " ")
#define R_GEEX8060_BP_EDIMVT(A) put(nRec, 90, A :3.3)
!-----------------------------------------------------------
! FIELD : REFMVT 
#define S_GEEX8060_BP_REFMVT peel(pick(nPos, 93, 30), " ")
#define R_GEEX8060_BP_REFMVT(A) put(nRec, 93, A :30.30)
!-----------------------------------------------------------
! FIELD : UVCMVT 
#define S_GEEX8060_BP_UVCMVT peel(pick(nPos, 123, 9), " ")
#define R_GEEX8060_BP_UVCMVT(A) put(nRec, 123, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UNIPRO 
#define S_GEEX8060_BP_UNIPRO peel(pick(nPos, 132, 3), " ")
#define R_GEEX8060_BP_UNIPRO(A) put(nRec, 132, A :3.3)
!-----------------------------------------------------------
! FIELD : SITPAL 
#define S_GEEX8060_BP_SITPAL peel(pick(nPos, 135, 3), " ")
#define R_GEEX8060_BP_SITPAL(A) put(nRec, 135, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX8060_BP_CODPAL peel(pick(nPos, 138, 18), " ")
#define R_GEEX8060_BP_CODPAL(A) put(nRec, 138, A :18.18)
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX8060_BP_CODLOT peel(pick(nPos, 156, 20), " ")
#define R_GEEX8060_BP_CODLOT(A) put(nRec, 156, A :20.20)
!-----------------------------------------------------------
! FIELD : NUMLOT 
#define S_GEEX8060_BP_NUMLOT peel(pick(nPos, 176, 9), " ")
#define R_GEEX8060_BP_NUMLOT(A) put(nRec, 176, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : HEUIMM1 
#define S_GEEX8060_BP_HEUIMM1 peel(pick(nPos, 185, 6), " ")
#define R_GEEX8060_BP_HEUIMM1(A) put(nRec, 185, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : HEUIMM2 
#define S_GEEX8060_BP_HEUIMM2 peel(pick(nPos, 191, 6), " ")
#define R_GEEX8060_BP_HEUIMM2(A) put(nRec, 191, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODSAP 
#define S_GEEX8060_BP_CODSAP peel(pick(nPos, 197, 3), " ")
#define R_GEEX8060_BP_CODSAP(A) put(nRec, 197, A :3.3)
!-----------------------------------------------------------
! FIELD : STOSAP 
#define S_GEEX8060_BP_STOSAP peel(pick(nPos, 200, 4), " ")
#define R_GEEX8060_BP_STOSAP(A) put(nRec, 200, A :4.4)
!-----------------------------------------------------------
! FIELD : STASAP 
#define S_GEEX8060_BP_STASAP peel(pick(nPos, 204, 1), " ")
#define R_GEEX8060_BP_STASAP(A) put(nRec, 204, A :1.1)
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX8060_BP_PCBPRO peel(pick(nPos, 205, 5), " ")
#define R_GEEX8060_BP_PCBPRO(A) put(nRec, 205, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_GEEX8060_BP_EDIPRO peel(pick(nPos, 210, 17), " ")
#define R_GEEX8060_BP_EDIPRO(A) put(nRec, 210, A :17.17)
!-----------------------------------------------------------
! FIELD : IMMPAL 
#define S_GEEX8060_BP_IMMPAL peel(pick(nPos, 227, 1), " ")
#define R_GEEX8060_BP_IMMPAL(A) put(nRec, 227, A :1.1)
!-----------------------------------------------------------
! FIELD : CODRIM 
#define S_GEEX8060_BP_CODRIM peel(pick(nPos, 228, 3), " ")
#define R_GEEX8060_BP_CODRIM(A) put(nRec, 228, A :3.3)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX8060_BP_DISEXC peel(pick(nPos, 231, 26), " ")
#define R_GEEX8060_BP_DISEXC(A) put(nRec, 231, A :26.26)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX8080_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX8080_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8080_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX8080_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8080_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX8080_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8080_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX8080_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8080_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : DATMVT 
#define S_GEEX8080_BP_DATMVT peel(pick(nPos, 7, 8), " ")
#define R_GEEX8080_BP_DATMVT(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUMVT 
#define S_GEEX8080_BP_HEUMVT peel(pick(nPos, 15, 6), " ")
#define R_GEEX8080_BP_HEUMVT(A) put(nRec, 15, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODEMB 
#define S_GEEX8080_BP_CODEMB peel(pick(nPos, 21, 3), " ")
#define R_GEEX8080_BP_CODEMB(A) put(nRec, 21, A :3.3)
!-----------------------------------------------------------
! FIELD : PROEMB 
#define S_GEEX8080_BP_PROEMB peel(pick(nPos, 24, 17), " ")
#define R_GEEX8080_BP_PROEMB(A) put(nRec, 24, A :17.17)
!-----------------------------------------------------------
! FIELD : PRXEMB 
#define S_GEEX8080_BP_PRXEMB peel(pick(nPos, 41, 6), " ")
#define R_GEEX8080_BP_PRXEMB(A) put(nRec, 41, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : TYPTIE 
#define S_GEEX8080_BP_TYPTIE peel(pick(nPos, 47, 1), " ")
#define R_GEEX8080_BP_TYPTIE(A) put(nRec, 47, A :1.1)
!-----------------------------------------------------------
! FIELD : CODTIE 
#define S_GEEX8080_BP_CODTIE peel(pick(nPos, 48, 14), " ")
#define R_GEEX8080_BP_CODTIE(A) put(nRec, 48, A :14.14)
!-----------------------------------------------------------
! FIELD : MOTMVB 
#define S_GEEX8080_BP_MOTMVB peel(pick(nPos, 62, 3), " ")
#define R_GEEX8080_BP_MOTMVB(A) put(nRec, 62, A :3.3)
!-----------------------------------------------------------
! FIELD : REFMVT 
#define S_GEEX8080_BP_REFMVT peel(pick(nPos, 65, 30), " ")
#define R_GEEX8080_BP_REFMVT(A) put(nRec, 65, A :30.30)
!-----------------------------------------------------------
! FIELD : CMTMVB 
#define S_GEEX8080_BP_CMTMVB peel(pick(nPos, 95, 30), " ")
#define R_GEEX8080_BP_CMTMVB(A) put(nRec, 95, A :30.30)
!-----------------------------------------------------------
! FIELD : QTBENT 
#define S_GEEX8080_BP_QTBENT peel(pick(nPos, 125, 9), " ")
#define R_GEEX8080_BP_QTBENT(A) put(nRec, 125, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : QTBSOR 
#define S_GEEX8080_BP_QTBSOR peel(pick(nPos, 134, 9), " ")
#define R_GEEX8080_BP_QTBSOR(A) put(nRec, 134, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX8080_BP_CODACT peel(pick(nPos, 143, 3), " ")
#define R_GEEX8080_BP_CODACT(A) put(nRec, 143, A :3.3)
!-----------------------------------------------------------
! FIELD : DATEMB 
#define S_GEEX8080_BP_DATEMB peel(pick(nPos, 146, 8), " ")
#define R_GEEX8080_BP_DATEMB(A) put(nRec, 146, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_GEEX8080_BP_CODTRA peel(pick(nPos, 154, 14), " ")
#define R_GEEX8080_BP_CODTRA(A) put(nRec, 154, A :14.14)
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_GEEX8080_BP_CODFOU peel(pick(nPos, 168, 14), " ")
#define R_GEEX8080_BP_CODFOU(A) put(nRec, 168, A :14.14)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX8080_BP_CODCLI peel(pick(nPos, 182, 14), " ")
#define R_GEEX8080_BP_CODCLI(A) put(nRec, 182, A :14.14)
!-----------------------------------------------------------
! FIELD : EDIMVT 
#define S_GEEX8080_BP_EDIMVT peel(pick(nPos, 196, 3), " ")
#define R_GEEX8080_BP_EDIMVT(A) put(nRec, 196, A :3.3)
!-----------------------------------------------------------
! FIELD : EDIFOU 
#define S_GEEX8080_BP_EDIFOU peel(pick(nPos, 199, 14), " ")
#define R_GEEX8080_BP_EDIFOU(A) put(nRec, 199, A :14.14)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX8080_BP_DISEXC peel(pick(nPos, 213, 44), " ")
#define R_GEEX8080_BP_DISEXC(A) put(nRec, 213, A :44.44)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX8084_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX8084_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8084_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX8084_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8084_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX8084_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8084_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX8084_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8084_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : DATMVT 
#define S_GEEX8084_BP_DATMVT peel(pick(nPos, 7, 8), " ")
#define R_GEEX8084_BP_DATMVT(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUMVT 
#define S_GEEX8084_BP_HEUMVT peel(pick(nPos, 15, 6), " ")
#define R_GEEX8084_BP_HEUMVT(A) put(nRec, 15, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODEMB 
#define S_GEEX8084_BP_CODEMB peel(pick(nPos, 21, 3), " ")
#define R_GEEX8084_BP_CODEMB(A) put(nRec, 21, A :3.3)
!-----------------------------------------------------------
! FIELD : LIBTYP 
#define S_GEEX8084_BP_LIBTYP peel(pick(nPos, 24, 3), " ")
#define R_GEEX8084_BP_LIBTYP(A) put(nRec, 24, A :3.3)
!-----------------------------------------------------------
! FIELD : CODIMA 
#define S_GEEX8084_BP_CODIMA peel(pick(nPos, 27, 210), " ")
#define R_GEEX8084_BP_CODIMA(A) put(nRec, 27, A :210.210)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX8084_BP_DISEXC peel(pick(nPos, 237, 20), " ")
#define R_GEEX8084_BP_DISEXC(A) put(nRec, 237, A :20.20)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX8090_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX8090_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8090_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX8090_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8090_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX8090_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8090_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX8090_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8090_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : DATMVT 
#define S_GEEX8090_BP_DATMVT peel(pick(nPos, 7, 8), " ")
#define R_GEEX8090_BP_DATMVT(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUMVT 
#define S_GEEX8090_BP_HEUMVT peel(pick(nPos, 15, 6), " ")
#define R_GEEX8090_BP_HEUMVT(A) put(nRec, 15, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODMVT 
#define S_GEEX8090_BP_CODMVT peel(pick(nPos, 21, 2), " ")
#define R_GEEX8090_BP_CODMVT(A) put(nRec, 21, A :2.2)
!-----------------------------------------------------------
! FIELD : SENMVT 
#define S_GEEX8090_BP_SENMVT peel(pick(nPos, 23, 1), " ")
#define R_GEEX8090_BP_SENMVT(A) put(nRec, 23, A :1.1)
!-----------------------------------------------------------
! FIELD : MOTMVT 
#define S_GEEX8090_BP_MOTMVT peel(pick(nPos, 24, 3), " ")
#define R_GEEX8090_BP_MOTMVT(A) put(nRec, 24, A :3.3)
!-----------------------------------------------------------
! FIELD : REFMVT 
#define S_GEEX8090_BP_REFMVT peel(pick(nPos, 27, 30), " ")
#define R_GEEX8090_BP_REFMVT(A) put(nRec, 27, A :30.30)
!-----------------------------------------------------------
! FIELD : NUMPAL 
#define S_GEEX8090_BP_NUMPAL peel(pick(nPos, 57, 9), " ")
#define R_GEEX8090_BP_NUMPAL(A) put(nRec, 57, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : SNUPAL 
#define S_GEEX8090_BP_SNUPAL peel(pick(nPos, 66, 2), " ")
#define R_GEEX8090_BP_SNUPAL(A) put(nRec, 66, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : ETAPAL 
#define S_GEEX8090_BP_ETAPAL peel(pick(nPos, 68, 2), " ")
#define R_GEEX8090_BP_ETAPAL(A) put(nRec, 68, A :2.2)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX8090_BP_CODACT peel(pick(nPos, 70, 3), " ")
#define R_GEEX8090_BP_CODACT(A) put(nRec, 70, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX8090_BP_CODCLI peel(pick(nPos, 73, 14), " ")
#define R_GEEX8090_BP_CODCLI(A) put(nRec, 73, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX8090_BP_CODPRO peel(pick(nPos, 87, 17), " ")
#define R_GEEX8090_BP_CODPRO(A) put(nRec, 87, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX8090_BP_VALPRO peel(pick(nPos, 104, 2), " ")
#define R_GEEX8090_BP_VALPRO(A) put(nRec, 104, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX8090_BP_CODPAL peel(pick(nPos, 106, 18), " ")
#define R_GEEX8090_BP_CODPAL(A) put(nRec, 106, A :18.18)
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GEEX8090_BP_MOTIMM peel(pick(nPos, 124, 9), " ")
#define R_GEEX8090_BP_MOTIMM(A) put(nRec, 124, A :9.9)
!-----------------------------------------------------------
! FIELD : DATLIB 
#define S_GEEX8090_BP_DATLIB peel(pick(nPos, 133, 24), " ")
#define R_GEEX8090_BP_DATLIB(A) put(nRec, 133, build(number(A):R024.0))
!-----------------------------------------------------------
! FIELD : HEULIB 
#define S_GEEX8090_BP_HEULIB peel(pick(nPos, 157, 18), " ")
#define R_GEEX8090_BP_HEULIB(A) put(nRec, 157, build(number(A):R018.0))
!-----------------------------------------------------------
! FIELD : INDLIB 
#define S_GEEX8090_BP_INDLIB peel(pick(nPos, 175, 3), " ")
#define R_GEEX8090_BP_INDLIB(A) put(nRec, 175, A :3.3)
!-----------------------------------------------------------
! FIELD : DATSTO 
#define S_GEEX8090_BP_DATSTO peel(pick(nPos, 178, 8), " ")
#define R_GEEX8090_BP_DATSTO(A) put(nRec, 178, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUSTO 
#define S_GEEX8090_BP_HEUSTO peel(pick(nPos, 186, 6), " ")
#define R_GEEX8090_BP_HEUSTO(A) put(nRec, 186, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : IMMBKL 
#define S_GEEX8090_BP_IMMBKL peel(pick(nPos, 192, 3), " ")
#define R_GEEX8090_BP_IMMBKL(A) put(nRec, 192, A :3.3)
!-----------------------------------------------------------
! FIELD : PALIMM 
#define S_GEEX8090_BP_PALIMM peel(pick(nPos, 195, 3), " ")
#define R_GEEX8090_BP_PALIMM(A) put(nRec, 195, A :3.3)
!-----------------------------------------------------------
! FIELD : DATBKL 
#define S_GEEX8090_BP_DATBKL peel(pick(nPos, 198, 8), " ")
#define R_GEEX8090_BP_DATBKL(A) put(nRec, 198, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUBKL 
#define S_GEEX8090_BP_HEUBKL peel(pick(nPos, 206, 6), " ")
#define R_GEEX8090_BP_HEUBKL(A) put(nRec, 206, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : DATIMM 
#define S_GEEX8090_BP_DATIMM peel(pick(nPos, 212, 8), " ")
#define R_GEEX8090_BP_DATIMM(A) put(nRec, 212, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUIMM 
#define S_GEEX8090_BP_HEUIMM peel(pick(nPos, 220, 6), " ")
#define R_GEEX8090_BP_HEUIMM(A) put(nRec, 220, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : LIBIMO 
#define S_GEEX8090_BP_LIBIMO peel(pick(nPos, 226, 30), " ")
#define R_GEEX8090_BP_LIBIMO(A) put(nRec, 226, A :30.30)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX8090_BP_DISEXC peel(pick(nPos, 256, 2), " ")
#define R_GEEX8090_BP_DISEXC(A) put(nRec, 256, A :2.2)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX8091_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX8091_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8091_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX8091_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8091_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX8091_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8091_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX8091_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8091_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : DATMVT 
#define S_GEEX8091_BP_DATMVT peel(pick(nPos, 7, 8), " ")
#define R_GEEX8091_BP_DATMVT(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUMVT 
#define S_GEEX8091_BP_HEUMVT peel(pick(nPos, 15, 6), " ")
#define R_GEEX8091_BP_HEUMVT(A) put(nRec, 15, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODMVT 
#define S_GEEX8091_BP_CODMVT peel(pick(nPos, 21, 2), " ")
#define R_GEEX8091_BP_CODMVT(A) put(nRec, 21, A :2.2)
!-----------------------------------------------------------
! FIELD : SENMVT 
#define S_GEEX8091_BP_SENMVT peel(pick(nPos, 23, 1), " ")
#define R_GEEX8091_BP_SENMVT(A) put(nRec, 23, A :1.1)
!-----------------------------------------------------------
! FIELD : MOTMVT 
#define S_GEEX8091_BP_MOTMVT peel(pick(nPos, 24, 3), " ")
#define R_GEEX8091_BP_MOTMVT(A) put(nRec, 24, A :3.3)
!-----------------------------------------------------------
! FIELD : REFMVT 
#define S_GEEX8091_BP_REFMVT peel(pick(nPos, 27, 30), " ")
#define R_GEEX8091_BP_REFMVT(A) put(nRec, 27, A :30.30)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX8091_BP_CODACT peel(pick(nPos, 57, 3), " ")
#define R_GEEX8091_BP_CODACT(A) put(nRec, 57, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX8091_BP_CODCLI peel(pick(nPos, 60, 14), " ")
#define R_GEEX8091_BP_CODCLI(A) put(nRec, 60, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX8091_BP_CODPRO peel(pick(nPos, 74, 17), " ")
#define R_GEEX8091_BP_CODPRO(A) put(nRec, 74, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX8091_BP_VALPRO peel(pick(nPos, 91, 2), " ")
#define R_GEEX8091_BP_VALPRO(A) put(nRec, 91, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX8091_BP_CODLOT peel(pick(nPos, 93, 20), " ")
#define R_GEEX8091_BP_CODLOT(A) put(nRec, 93, A :20.20)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX8091_BP_CODPAL peel(pick(nPos, 113, 18), " ")
#define R_GEEX8091_BP_CODPAL(A) put(nRec, 113, A :18.18)
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_GEEX8091_BP_CODRUB peel(pick(nPos, 131, 12), " ")
#define R_GEEX8091_BP_CODRUB(A) put(nRec, 131, A :12.12)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX8091_BP_VALRUB peel(pick(nPos, 143, 105), " ")
#define R_GEEX8091_BP_VALRUB(A) put(nRec, 143, A :105.105)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX8091_BP_DISEXC peel(pick(nPos, 248, 9), " ")
#define R_GEEX8091_BP_DISEXC(A) put(nRec, 248, A :9.9)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX8092_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX8092_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8092_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX8092_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8092_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX8092_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8092_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX8092_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8092_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : DATMVT 
#define S_GEEX8092_BP_DATMVT peel(pick(nPos, 7, 8), " ")
#define R_GEEX8092_BP_DATMVT(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUMVT 
#define S_GEEX8092_BP_HEUMVT peel(pick(nPos, 15, 6), " ")
#define R_GEEX8092_BP_HEUMVT(A) put(nRec, 15, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODMVT 
#define S_GEEX8092_BP_CODMVT peel(pick(nPos, 21, 2), " ")
#define R_GEEX8092_BP_CODMVT(A) put(nRec, 21, A :2.2)
!-----------------------------------------------------------
! FIELD : MOTMVT 
#define S_GEEX8092_BP_MOTMVT peel(pick(nPos, 23, 3), " ")
#define R_GEEX8092_BP_MOTMVT(A) put(nRec, 23, A :3.3)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX8092_BP_CODACT peel(pick(nPos, 26, 3), " ")
#define R_GEEX8092_BP_CODACT(A) put(nRec, 26, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX8092_BP_CODCLI peel(pick(nPos, 29, 14), " ")
#define R_GEEX8092_BP_CODCLI(A) put(nRec, 29, A :14.14)
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX8092_BP_CODLOT peel(pick(nPos, 43, 20), " ")
#define R_GEEX8092_BP_CODLOT(A) put(nRec, 43, A :20.20)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX8092_BP_CODPAL peel(pick(nPos, 63, 18), " ")
#define R_GEEX8092_BP_CODPAL(A) put(nRec, 63, A :18.18)
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_GEEX8092_BP_CODRUB peel(pick(nPos, 81, 12), " ")
#define R_GEEX8092_BP_CODRUB(A) put(nRec, 81, A :12.12)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX8092_BP_VALRUB peel(pick(nPos, 93, 105), " ")
#define R_GEEX8092_BP_VALRUB(A) put(nRec, 93, A :105.105)
!-----------------------------------------------------------
! FIELD : TYPMAJ 
#define S_GEEX8092_BP_TYPMAJ peel(pick(nPos, 198, 3), " ")
#define R_GEEX8092_BP_TYPMAJ(A) put(nRec, 198, A :3.3)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX8092_BP_DISEXC peel(pick(nPos, 201, 56), " ")
#define R_GEEX8092_BP_DISEXC(A) put(nRec, 201, A :56.56)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX8093_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX8093_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8093_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX8093_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8093_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX8093_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8093_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX8093_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8093_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : DATMVT 
#define S_GEEX8093_BP_DATMVT peel(pick(nPos, 7, 8), " ")
#define R_GEEX8093_BP_DATMVT(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUMVT 
#define S_GEEX8093_BP_HEUMVT peel(pick(nPos, 15, 6), " ")
#define R_GEEX8093_BP_HEUMVT(A) put(nRec, 15, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : OBLSUP 
#define S_GEEX8093_BP_OBLSUP peel(pick(nPos, 21, 20), " ")
#define R_GEEX8093_BP_OBLSUP(A) put(nRec, 21, A :20.20)
!-----------------------------------------------------------
! FIELD : CODOBL 
#define S_GEEX8093_BP_CODOBL peel(pick(nPos, 41, 20), " ")
#define R_GEEX8093_BP_CODOBL(A) put(nRec, 41, A :20.20)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX8093_BP_DISEXC peel(pick(nPos, 61, 196), " ")
#define R_GEEX8093_BP_DISEXC(A) put(nRec, 61, A :196.196)
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

! File GEEXM80 : 
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
! Line : GEEX8000 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX8000_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8000_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX8000_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8000_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX8000_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8000_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX8000_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8000_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : DATMVT 
#define S_GEEX8000_DATMVT peel(pick(nPos, 7, 8), " ")
#define R_GEEX8000_DATMVT(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUMVT 
#define S_GEEX8000_HEUMVT peel(pick(nPos, 15, 6), " ")
#define R_GEEX8000_HEUMVT(A) put(nRec, 15, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : DATRGL 
#define S_GEEX8000_DATRGL peel(pick(nPos, 21, 8), " ")
#define R_GEEX8000_DATRGL(A) put(nRec, 21, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODMDU 
#define S_GEEX8000_CODMDU peel(pick(nPos, 29, 2), " ")
#define R_GEEX8000_CODMDU(A) put(nRec, 29, A :2.2)
!-----------------------------------------------------------
! FIELD : CODFON 
#define S_GEEX8000_CODFON peel(pick(nPos, 31, 1), " ")
#define R_GEEX8000_CODFON(A) put(nRec, 31, build(number(A):R01.0))
!-----------------------------------------------------------
! FIELD : CODMVT 
#define S_GEEX8000_CODMVT peel(pick(nPos, 32, 2), " ")
#define R_GEEX8000_CODMVT(A) put(nRec, 32, A :2.2)
!-----------------------------------------------------------
! FIELD : SENMVT 
#define S_GEEX8000_SENMVT peel(pick(nPos, 34, 1), " ")
#define R_GEEX8000_SENMVT(A) put(nRec, 34, A :1.1)
!-----------------------------------------------------------
! FIELD : MOTMVT 
#define S_GEEX8000_MOTMVT peel(pick(nPos, 35, 3), " ")
#define R_GEEX8000_MOTMVT(A) put(nRec, 35, A :3.3)
!-----------------------------------------------------------
! FIELD : EDIMVT 
#define S_GEEX8000_EDIMVT peel(pick(nPos, 38, 3), " ")
#define R_GEEX8000_EDIMVT(A) put(nRec, 38, A :3.3)
!-----------------------------------------------------------
! FIELD : REFMVT 
#define S_GEEX8000_REFMVT peel(pick(nPos, 41, 30), " ")
#define R_GEEX8000_REFMVT(A) put(nRec, 41, A :30.30)
!-----------------------------------------------------------
! FIELD : UVCMVT 
#define S_GEEX8000_UVCMVT peel(pick(nPos, 71, 9), " ")
#define R_GEEX8000_UVCMVT(A) put(nRec, 71, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX8000_CODACT peel(pick(nPos, 80, 3), " ")
#define R_GEEX8000_CODACT(A) put(nRec, 80, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX8000_CODCLI peel(pick(nPos, 83, 14), " ")
#define R_GEEX8000_CODCLI(A) put(nRec, 83, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX8000_CODPRO peel(pick(nPos, 97, 17), " ")
#define R_GEEX8000_CODPRO(A) put(nRec, 97, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX8000_VALPRO peel(pick(nPos, 114, 2), " ")
#define R_GEEX8000_VALPRO(A) put(nRec, 114, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODPRN 
#define S_GEEX8000_CODPRN peel(pick(nPos, 116, 17), " ")
#define R_GEEX8000_CODPRN(A) put(nRec, 116, A :17.17)
!-----------------------------------------------------------
! FIELD : SPCPRO 
#define S_GEEX8000_SPCPRO peel(pick(nPos, 133, 4), " ")
#define R_GEEX8000_SPCPRO(A) put(nRec, 133, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX8000_PCBPRO peel(pick(nPos, 137, 5), " ")
#define R_GEEX8000_PCBPRO(A) put(nRec, 137, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODSIT 
#define S_GEEX8000_CODSIT peel(pick(nPos, 142, 3), " ")
#define R_GEEX8000_CODSIT(A) put(nRec, 142, A :3.3)
!-----------------------------------------------------------
! FIELD : ZONSTS 
#define S_GEEX8000_ZONSTS peel(pick(nPos, 145, 1), " ")
#define R_GEEX8000_ZONSTS(A) put(nRec, 145, A :1.1)
!-----------------------------------------------------------
! FIELD : ALLSTS 
#define S_GEEX8000_ALLSTS peel(pick(nPos, 146, 3), " ")
#define R_GEEX8000_ALLSTS(A) put(nRec, 146, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : DPLSTS 
#define S_GEEX8000_DPLSTS peel(pick(nPos, 149, 4), " ")
#define R_GEEX8000_DPLSTS(A) put(nRec, 149, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : NIVSTS 
#define S_GEEX8000_NIVSTS peel(pick(nPos, 153, 2), " ")
#define R_GEEX8000_NIVSTS(A) put(nRec, 153, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX8000_CODLOT peel(pick(nPos, 155, 20), " ")
#define R_GEEX8000_CODLOT(A) put(nRec, 155, A :20.20)
!-----------------------------------------------------------
! FIELD : NUMLOT 
#define S_GEEX8000_NUMLOT peel(pick(nPos, 175, 9), " ")
#define R_GEEX8000_NUMLOT(A) put(nRec, 175, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX8000_CODPAL peel(pick(nPos, 184, 18), " ")
#define R_GEEX8000_CODPAL(A) put(nRec, 184, A :18.18)
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_GEEX8000_DATFVI peel(pick(nPos, 202, 8), " ")
#define R_GEEX8000_DATFVI(A) put(nRec, 202, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : NUMDIM 
#define S_GEEX8000_NUMDIM peel(pick(nPos, 210, 8), " ")
#define R_GEEX8000_NUMDIM(A) put(nRec, 210, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODTIE 
#define S_GEEX8000_CODTIE peel(pick(nPos, 218, 14), " ")
#define R_GEEX8000_CODTIE(A) put(nRec, 218, A :14.14)
!-----------------------------------------------------------
! FIELD : TYPTIE 
#define S_GEEX8000_TYPTIE peel(pick(nPos, 232, 1), " ")
#define R_GEEX8000_TYPTIE(A) put(nRec, 232, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMCDE 
#define S_GEEX8000_NUMCDE peel(pick(nPos, 233, 8), " ")
#define R_GEEX8000_NUMCDE(A) put(nRec, 233, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUCDE 
#define S_GEEX8000_SNUCDE peel(pick(nPos, 241, 3), " ")
#define R_GEEX8000_SNUCDE(A) put(nRec, 241, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODUTI 
#define S_GEEX8000_CODUTI peel(pick(nPos, 244, 10), " ")
#define R_GEEX8000_CODUTI(A) put(nRec, 244, A :10.10)
!-----------------------------------------------------------
! FIELD : UNIPRO 
#define S_GEEX8000_UNIPRO peel(pick(nPos, 254, 3), " ")
#define R_GEEX8000_UNIPRO(A) put(nRec, 254, A :3.3)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX8001 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX8001_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8001_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX8001_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8001_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX8001_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8001_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX8001_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8001_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : DATMVT 
#define S_GEEX8001_DATMVT peel(pick(nPos, 7, 8), " ")
#define R_GEEX8001_DATMVT(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUMVT 
#define S_GEEX8001_HEUMVT peel(pick(nPos, 15, 6), " ")
#define R_GEEX8001_HEUMVT(A) put(nRec, 15, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : REFMVT 
#define S_GEEX8001_REFMVT peel(pick(nPos, 21, 30), " ")
#define R_GEEX8001_REFMVT(A) put(nRec, 21, A :30.30)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX8001_CODACT peel(pick(nPos, 51, 3), " ")
#define R_GEEX8001_CODACT(A) put(nRec, 51, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX8001_CODPRO peel(pick(nPos, 54, 17), " ")
#define R_GEEX8001_CODPRO(A) put(nRec, 54, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX8001_VALPRO peel(pick(nPos, 71, 2), " ")
#define R_GEEX8001_VALPRO(A) put(nRec, 71, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : PDBPAL 
#define S_GEEX8001_PDBPAL peel(pick(nPos, 73, 7), " ")
#define R_GEEX8001_PDBPAL(A) put(nRec, 73, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : PDBMVT 
#define S_GEEX8001_PDBMVT peel(pick(nPos, 80, 7), " ")
#define R_GEEX8001_PDBMVT(A) put(nRec, 80, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : ANAPRO 
#define S_GEEX8001_ANAPRO peel(pick(nPos, 87, 15), " ")
#define R_GEEX8001_ANAPRO(A) put(nRec, 87, A :15.15)
!-----------------------------------------------------------
! FIELD : FAMPRO 
#define S_GEEX8001_FAMPRO peel(pick(nPos, 102, 10), " ")
#define R_GEEX8001_FAMPRO(A) put(nRec, 102, A :10.10)
!-----------------------------------------------------------
! FIELD : INDPRO 
#define S_GEEX8001_INDPRO peel(pick(nPos, 112, 10), " ")
#define R_GEEX8001_INDPRO(A) put(nRec, 112, A :10.10)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_GEEX8001_NLILIV peel(pick(nPos, 122, 5), " ")
#define R_GEEX8001_NLILIV(A) put(nRec, 122, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODTLI 
#define S_GEEX8001_CODTLI peel(pick(nPos, 127, 3), " ")
#define R_GEEX8001_CODTLI(A) put(nRec, 127, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX8001_CODPAL peel(pick(nPos, 130, 18), " ")
#define R_GEEX8001_CODPAL(A) put(nRec, 130, A :18.18)
!-----------------------------------------------------------
! FIELD : DATFAB 
#define S_GEEX8001_DATFAB peel(pick(nPos, 148, 8), " ")
#define R_GEEX8001_DATFAB(A) put(nRec, 148, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : MOTSAP 
#define S_GEEX8001_MOTSAP peel(pick(nPos, 156, 4), " ")
#define R_GEEX8001_MOTSAP(A) put(nRec, 156, A :4.4)
!-----------------------------------------------------------
! FIELD : CODSAP 
#define S_GEEX8001_CODSAP peel(pick(nPos, 160, 3), " ")
#define R_GEEX8001_CODSAP(A) put(nRec, 160, A :3.3)
!-----------------------------------------------------------
! FIELD : STOSAP 
#define S_GEEX8001_STOSAP peel(pick(nPos, 163, 4), " ")
#define R_GEEX8001_STOSAP(A) put(nRec, 163, A :4.4)
!-----------------------------------------------------------
! FIELD : STASAP 
#define S_GEEX8001_STASAP peel(pick(nPos, 167, 1), " ")
#define R_GEEX8001_STASAP(A) put(nRec, 167, A :1.1)
!-----------------------------------------------------------
! FIELD : MESPRO 
#define S_GEEX8001_MESPRO peel(pick(nPos, 168, 1), " ")
#define R_GEEX8001_MESPRO(A) put(nRec, 168, A :1.1)
!-----------------------------------------------------------
! FIELD : DIPMVT 
#define S_GEEX8001_DIPMVT peel(pick(nPos, 169, 50), " ")
#define R_GEEX8001_DIPMVT(A) put(nRec, 169, A :50.50)
!-----------------------------------------------------------
! FIELD : CODRGT 
#define S_GEEX8001_CODRGT peel(pick(nPos, 219, 3), " ")
#define R_GEEX8001_CODRGT(A) put(nRec, 219, A :3.3)
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_GEEX8001_EDIPRO peel(pick(nPos, 222, 17), " ")
#define R_GEEX8001_EDIPRO(A) put(nRec, 222, A :17.17)
!-----------------------------------------------------------
! FIELD : NUMGRP 
#define S_GEEX8001_NUMGRP peel(pick(nPos, 239, 10), " ")
#define R_GEEX8001_NUMGRP(A) put(nRec, 239, build(number(A):R010.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX8001_DISEXC peel(pick(nPos, 249, 8), " ")
#define R_GEEX8001_DISEXC(A) put(nRec, 249, A :8.8)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX8020 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX8020_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8020_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX8020_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8020_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX8020_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8020_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX8020_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8020_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : DATMVT 
#define S_GEEX8020_DATMVT peel(pick(nPos, 7, 8), " ")
#define R_GEEX8020_DATMVT(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUMVT 
#define S_GEEX8020_HEUMVT peel(pick(nPos, 15, 6), " ")
#define R_GEEX8020_HEUMVT(A) put(nRec, 15, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODMVT 
#define S_GEEX8020_CODMVT peel(pick(nPos, 21, 2), " ")
#define R_GEEX8020_CODMVT(A) put(nRec, 21, A :2.2)
!-----------------------------------------------------------
! FIELD : SENMVT 
#define S_GEEX8020_SENMVT peel(pick(nPos, 23, 1), " ")
#define R_GEEX8020_SENMVT(A) put(nRec, 23, A :1.1)
!-----------------------------------------------------------
! FIELD : MOTMVT 
#define S_GEEX8020_MOTMVT peel(pick(nPos, 24, 3), " ")
#define R_GEEX8020_MOTMVT(A) put(nRec, 24, A :3.3)
!-----------------------------------------------------------
! FIELD : REFMVT 
#define S_GEEX8020_REFMVT peel(pick(nPos, 27, 30), " ")
#define R_GEEX8020_REFMVT(A) put(nRec, 27, A :30.30)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_GEEX8020_NLILIV peel(pick(nPos, 57, 5), " ")
#define R_GEEX8020_NLILIV(A) put(nRec, 57, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : UVCMVT 
#define S_GEEX8020_UVCMVT peel(pick(nPos, 62, 9), " ")
#define R_GEEX8020_UVCMVT(A) put(nRec, 62, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX8020_CODACT peel(pick(nPos, 71, 3), " ")
#define R_GEEX8020_CODACT(A) put(nRec, 71, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX8020_CODCLI peel(pick(nPos, 74, 14), " ")
#define R_GEEX8020_CODCLI(A) put(nRec, 74, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX8020_CODPRO peel(pick(nPos, 88, 17), " ")
#define R_GEEX8020_CODPRO(A) put(nRec, 88, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX8020_VALPRO peel(pick(nPos, 105, 2), " ")
#define R_GEEX8020_VALPRO(A) put(nRec, 105, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX8020_PCBPRO peel(pick(nPos, 107, 5), " ")
#define R_GEEX8020_PCBPRO(A) put(nRec, 107, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : SPCPRO 
#define S_GEEX8020_SPCPRO peel(pick(nPos, 112, 4), " ")
#define R_GEEX8020_SPCPRO(A) put(nRec, 112, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX8020_CODLOT peel(pick(nPos, 116, 20), " ")
#define R_GEEX8020_CODLOT(A) put(nRec, 116, A :20.20)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX8020_CODPAL peel(pick(nPos, 136, 18), " ")
#define R_GEEX8020_CODPAL(A) put(nRec, 136, A :18.18)
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_GEEX8020_DATFVI peel(pick(nPos, 154, 8), " ")
#define R_GEEX8020_DATFVI(A) put(nRec, 154, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SITPAL 
#define S_GEEX8020_SITPAL peel(pick(nPos, 162, 3), " ")
#define R_GEEX8020_SITPAL(A) put(nRec, 162, A :3.3)
!-----------------------------------------------------------
! FIELD : CLILIV 
#define S_GEEX8020_CLILIV peel(pick(nPos, 165, 14), " ")
#define R_GEEX8020_CLILIV(A) put(nRec, 165, A :14.14)
!-----------------------------------------------------------
! FIELD : PRPPIC 
#define S_GEEX8020_PRPPIC peel(pick(nPos, 179, 1), " ")
#define R_GEEX8020_PRPPIC(A) put(nRec, 179, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX8020_NUMLIV peel(pick(nPos, 180, 8), " ")
#define R_GEEX8020_NUMLIV(A) put(nRec, 180, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX8020_SNULIV peel(pick(nPos, 188, 3), " ")
#define R_GEEX8020_SNULIV(A) put(nRec, 188, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_GEEX8020_EDIPRO peel(pick(nPos, 191, 17), " ")
#define R_GEEX8020_EDIPRO(A) put(nRec, 191, A :17.17)
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GEEX8020_MOTIMM peel(pick(nPos, 208, 3), " ")
#define R_GEEX8020_MOTIMM(A) put(nRec, 208, A :3.3)
!-----------------------------------------------------------
! FIELD : DATIMM 
#define S_GEEX8020_DATIMM peel(pick(nPos, 211, 16), " ")
#define R_GEEX8020_DATIMM(A) put(nRec, 211, build(number(A):R016.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX8020_DISEXC peel(pick(nPos, 227, 30), " ")
#define R_GEEX8020_DISEXC(A) put(nRec, 227, A :30.30)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX8030 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX8030_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8030_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX8030_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8030_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX8030_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8030_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX8030_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8030_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX8030_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX8030_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : DATPRP 
#define S_GEEX8030_DATPRP peel(pick(nPos, 10, 8), " ")
#define R_GEEX8030_DATPRP(A) put(nRec, 10, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODLDP 
#define S_GEEX8030_CODLDP peel(pick(nPos, 18, 3), " ")
#define R_GEEX8030_CODLDP(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : INDCIR 
#define S_GEEX8030_INDCIR peel(pick(nPos, 21, 5), " ")
#define R_GEEX8030_INDCIR(A) put(nRec, 21, A :5.5)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX8030_CODPRO peel(pick(nPos, 26, 17), " ")
#define R_GEEX8030_CODPRO(A) put(nRec, 26, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX8030_VALPRO peel(pick(nPos, 43, 2), " ")
#define R_GEEX8030_VALPRO(A) put(nRec, 43, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : PRXPRO 
#define S_GEEX8030_PRXPRO peel(pick(nPos, 45, 36), " ")
#define R_GEEX8030_PRXPRO(A) put(nRec, 45, build(number(A):R036.0))
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX8030_PCBPRO peel(pick(nPos, 81, 5), " ")
#define R_GEEX8030_PCBPRO(A) put(nRec, 81, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : PDBUVC 
#define S_GEEX8030_PDBUVC peel(pick(nPos, 86, 7), " ")
#define R_GEEX8030_PDBUVC(A) put(nRec, 86, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX8030_VALRUB peel(pick(nPos, 93, 35), " ")
#define R_GEEX8030_VALRUB(A) put(nRec, 93, A :35.35)
!-----------------------------------------------------------
! FIELD : INDFAC 
#define S_GEEX8030_INDFAC peel(pick(nPos, 128, 1), " ")
#define R_GEEX8030_INDFAC(A) put(nRec, 128, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX8030_DISEXC peel(pick(nPos, 129, 128), " ")
#define R_GEEX8030_DISEXC(A) put(nRec, 129, A :128.128)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX8031 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX8031_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8031_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX8031_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8031_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX8031_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8031_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX8031_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8031_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX8031_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX8031_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : DATPRP 
#define S_GEEX8031_DATPRP peel(pick(nPos, 10, 8), " ")
#define R_GEEX8031_DATPRP(A) put(nRec, 10, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODLDP 
#define S_GEEX8031_CODLDP peel(pick(nPos, 18, 3), " ")
#define R_GEEX8031_CODLDP(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : INDCIR 
#define S_GEEX8031_INDCIR peel(pick(nPos, 21, 5), " ")
#define R_GEEX8031_INDCIR(A) put(nRec, 21, A :5.5)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX8031_CODPRO peel(pick(nPos, 26, 17), " ")
#define R_GEEX8031_CODPRO(A) put(nRec, 26, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX8031_VALPRO peel(pick(nPos, 43, 2), " ")
#define R_GEEX8031_VALPRO(A) put(nRec, 43, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX8031_CODCLI peel(pick(nPos, 45, 14), " ")
#define R_GEEX8031_CODCLI(A) put(nRec, 45, A :14.14)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX8031_VALRUB peel(pick(nPos, 59, 35), " ")
#define R_GEEX8031_VALRUB(A) put(nRec, 59, A :35.35)
!-----------------------------------------------------------
! FIELD : UVCVTL 
#define S_GEEX8031_UVCVTL peel(pick(nPos, 94, 9), " ")
#define R_GEEX8031_UVCVTL(A) put(nRec, 94, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : VALMDT 
#define S_GEEX8031_VALMDT peel(pick(nPos, 103, 35), " ")
#define R_GEEX8031_VALMDT(A) put(nRec, 103, A :35.35)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX8031_DISEXC peel(pick(nPos, 138, 119), " ")
#define R_GEEX8031_DISEXC(A) put(nRec, 138, A :119.119)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX8032 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX8032_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8032_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX8032_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8032_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX8032_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8032_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX8032_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8032_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX8032_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX8032_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : DATPRP 
#define S_GEEX8032_DATPRP peel(pick(nPos, 10, 8), " ")
#define R_GEEX8032_DATPRP(A) put(nRec, 10, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX8032_CODCLI peel(pick(nPos, 18, 14), " ")
#define R_GEEX8032_CODCLI(A) put(nRec, 18, A :14.14)
!-----------------------------------------------------------
! FIELD : CODEMB 
#define S_GEEX8032_CODEMB peel(pick(nPos, 32, 3), " ")
#define R_GEEX8032_CODEMB(A) put(nRec, 32, A :3.3)
!-----------------------------------------------------------
! FIELD : TOPPAQ 
#define S_GEEX8032_TOPPAQ peel(pick(nPos, 35, 1), " ")
#define R_GEEX8032_TOPPAQ(A) put(nRec, 35, A :1.1)
!-----------------------------------------------------------
! FIELD : NBREMB 
#define S_GEEX8032_NBREMB peel(pick(nPos, 36, 3), " ")
#define R_GEEX8032_NBREMB(A) put(nRec, 36, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX8032_VALRUB peel(pick(nPos, 39, 35), " ")
#define R_GEEX8032_VALRUB(A) put(nRec, 39, A :35.35)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX8032_DISEXC peel(pick(nPos, 74, 183), " ")
#define R_GEEX8032_DISEXC(A) put(nRec, 74, A :183.183)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX8041 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX8041_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8041_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX8041_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8041_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX8041_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8041_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX8041_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8041_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : DATMVT 
#define S_GEEX8041_DATMVT peel(pick(nPos, 7, 8), " ")
#define R_GEEX8041_DATMVT(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUMVT 
#define S_GEEX8041_HEUMVT peel(pick(nPos, 15, 6), " ")
#define R_GEEX8041_HEUMVT(A) put(nRec, 15, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODMVT 
#define S_GEEX8041_CODMVT peel(pick(nPos, 21, 2), " ")
#define R_GEEX8041_CODMVT(A) put(nRec, 21, A :2.2)
!-----------------------------------------------------------
! FIELD : SENMVT 
#define S_GEEX8041_SENMVT peel(pick(nPos, 23, 1), " ")
#define R_GEEX8041_SENMVT(A) put(nRec, 23, A :1.1)
!-----------------------------------------------------------
! FIELD : MOTMVT 
#define S_GEEX8041_MOTMVT peel(pick(nPos, 24, 3), " ")
#define R_GEEX8041_MOTMVT(A) put(nRec, 24, A :3.3)
!-----------------------------------------------------------
! FIELD : REFMVT 
#define S_GEEX8041_REFMVT peel(pick(nPos, 27, 30), " ")
#define R_GEEX8041_REFMVT(A) put(nRec, 27, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX8041_NLIREC peel(pick(nPos, 57, 5), " ")
#define R_GEEX8041_NLIREC(A) put(nRec, 57, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : UVCMVT 
#define S_GEEX8041_UVCMVT peel(pick(nPos, 62, 9), " ")
#define R_GEEX8041_UVCMVT(A) put(nRec, 62, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX8041_CODACT peel(pick(nPos, 71, 3), " ")
#define R_GEEX8041_CODACT(A) put(nRec, 71, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX8041_CODCLI peel(pick(nPos, 74, 14), " ")
#define R_GEEX8041_CODCLI(A) put(nRec, 74, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX8041_CODPRO peel(pick(nPos, 88, 17), " ")
#define R_GEEX8041_CODPRO(A) put(nRec, 88, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX8041_VALPRO peel(pick(nPos, 105, 2), " ")
#define R_GEEX8041_VALPRO(A) put(nRec, 105, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX8041_PCBPRO peel(pick(nPos, 107, 5), " ")
#define R_GEEX8041_PCBPRO(A) put(nRec, 107, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : SPCPRO 
#define S_GEEX8041_SPCPRO peel(pick(nPos, 112, 4), " ")
#define R_GEEX8041_SPCPRO(A) put(nRec, 112, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX8041_CODLOT peel(pick(nPos, 116, 20), " ")
#define R_GEEX8041_CODLOT(A) put(nRec, 116, A :20.20)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX8041_CODPAL peel(pick(nPos, 136, 18), " ")
#define R_GEEX8041_CODPAL(A) put(nRec, 136, A :18.18)
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_GEEX8041_DATFVI peel(pick(nPos, 154, 8), " ")
#define R_GEEX8041_DATFVI(A) put(nRec, 154, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SITPAL 
#define S_GEEX8041_SITPAL peel(pick(nPos, 162, 3), " ")
#define R_GEEX8041_SITPAL(A) put(nRec, 162, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX8041_NUMREC peel(pick(nPos, 165, 8), " ")
#define R_GEEX8041_NUMREC(A) put(nRec, 165, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX8041_SNUREC peel(pick(nPos, 173, 3), " ")
#define R_GEEX8041_SNUREC(A) put(nRec, 173, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_GEEX8041_CODFOU peel(pick(nPos, 176, 14), " ")
#define R_GEEX8041_CODFOU(A) put(nRec, 176, A :14.14)
!-----------------------------------------------------------
! FIELD : DATFAB 
#define S_GEEX8041_DATFAB peel(pick(nPos, 190, 8), " ")
#define R_GEEX8041_DATFAB(A) put(nRec, 190, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUFAB 
#define S_GEEX8041_HEUFAB peel(pick(nPos, 198, 6), " ")
#define R_GEEX8041_HEUFAB(A) put(nRec, 198, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : DATREC 
#define S_GEEX8041_DATREC peel(pick(nPos, 204, 8), " ")
#define R_GEEX8041_DATREC(A) put(nRec, 204, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUREC 
#define S_GEEX8041_HEUREC peel(pick(nPos, 212, 6), " ")
#define R_GEEX8041_HEUREC(A) put(nRec, 212, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GEEX8041_MOTIMM peel(pick(nPos, 218, 3), " ")
#define R_GEEX8041_MOTIMM(A) put(nRec, 218, A :3.3)
!-----------------------------------------------------------
! FIELD : DATIMM 
#define S_GEEX8041_DATIMM peel(pick(nPos, 221, 16), " ")
#define R_GEEX8041_DATIMM(A) put(nRec, 221, build(number(A):R016.0))
!-----------------------------------------------------------
! FIELD : HEUIMM 
#define S_GEEX8041_HEUIMM peel(pick(nPos, 237, 12), " ")
#define R_GEEX8041_HEUIMM(A) put(nRec, 237, build(number(A):R012.0))
!-----------------------------------------------------------
! FIELD : PDBMVT 
#define S_GEEX8041_PDBMVT peel(pick(nPos, 249, 7), " ")
#define R_GEEX8041_PDBMVT(A) put(nRec, 249, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : INDRET 
#define S_GEEX8041_INDRET peel(pick(nPos, 256, 1), " ")
#define R_GEEX8041_INDRET(A) put(nRec, 256, A :1.1)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX8052 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX8052_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8052_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX8052_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8052_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX8052_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8052_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX8052_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8052_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX8052_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX8052_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX8052_NUMLIV peel(pick(nPos, 10, 8), " ")
#define R_GEEX8052_NUMLIV(A) put(nRec, 10, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX8052_SNULIV peel(pick(nPos, 18, 3), " ")
#define R_GEEX8052_SNULIV(A) put(nRec, 18, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX8052_REFLIV peel(pick(nPos, 21, 30), " ")
#define R_GEEX8052_REFLIV(A) put(nRec, 21, A :30.30)
!-----------------------------------------------------------
! FIELD : DATLIV 
#define S_GEEX8052_DATLIV peel(pick(nPos, 51, 8), " ")
#define R_GEEX8052_DATLIV(A) put(nRec, 51, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CLILIV 
#define S_GEEX8052_CLILIV peel(pick(nPos, 59, 14), " ")
#define R_GEEX8052_CLILIV(A) put(nRec, 59, A :14.14)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX8052_CODCLI peel(pick(nPos, 73, 14), " ")
#define R_GEEX8052_CODCLI(A) put(nRec, 73, A :14.14)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_GEEX8052_NLILIV peel(pick(nPos, 87, 5), " ")
#define R_GEEX8052_NLILIV(A) put(nRec, 87, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX8052_CODPRO peel(pick(nPos, 92, 17), " ")
#define R_GEEX8052_CODPRO(A) put(nRec, 92, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX8052_VALPRO peel(pick(nPos, 109, 2), " ")
#define R_GEEX8052_VALPRO(A) put(nRec, 109, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_GEEX8052_EDIPRO peel(pick(nPos, 111, 17), " ")
#define R_GEEX8052_EDIPRO(A) put(nRec, 111, A :17.17)
!-----------------------------------------------------------
! FIELD : UVCCDE 
#define S_GEEX8052_UVCCDE peel(pick(nPos, 128, 9), " ")
#define R_GEEX8052_UVCCDE(A) put(nRec, 128, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UVCEGE 
#define S_GEEX8052_UVCEGE peel(pick(nPos, 137, 9), " ")
#define R_GEEX8052_UVCEGE(A) put(nRec, 137, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UVCMNQ 
#define S_GEEX8052_UVCMNQ peel(pick(nPos, 146, 9), " ")
#define R_GEEX8052_UVCMNQ(A) put(nRec, 146, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : SENMVT 
#define S_GEEX8052_SENMVT peel(pick(nPos, 155, 1), " ")
#define R_GEEX8052_SENMVT(A) put(nRec, 155, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX8052_DISEXC peel(pick(nPos, 156, 101), " ")
#define R_GEEX8052_DISEXC(A) put(nRec, 156, A :101.101)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX8060 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX8060_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8060_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX8060_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8060_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX8060_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8060_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX8060_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8060_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX8060_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX8060_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX8060_CODCLI peel(pick(nPos, 10, 14), " ")
#define R_GEEX8060_CODCLI(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX8060_CODPRO peel(pick(nPos, 24, 17), " ")
#define R_GEEX8060_CODPRO(A) put(nRec, 24, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX8060_VALPRO peel(pick(nPos, 41, 2), " ")
#define R_GEEX8060_VALPRO(A) put(nRec, 41, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GEEX8060_MOTIMM peel(pick(nPos, 43, 3), " ")
#define R_GEEX8060_MOTIMM(A) put(nRec, 43, A :3.3)
!-----------------------------------------------------------
! FIELD : DATIMM1 
#define S_GEEX8060_DATIMM1 peel(pick(nPos, 46, 8), " ")
#define R_GEEX8060_DATIMM1(A) put(nRec, 46, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATIMM2 
#define S_GEEX8060_DATIMM2 peel(pick(nPos, 54, 8), " ")
#define R_GEEX8060_DATIMM2(A) put(nRec, 54, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_GEEX8060_DATFVI peel(pick(nPos, 62, 8), " ")
#define R_GEEX8060_DATFVI(A) put(nRec, 62, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATMVT 
#define S_GEEX8060_DATMVT peel(pick(nPos, 70, 8), " ")
#define R_GEEX8060_DATMVT(A) put(nRec, 70, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUMVT 
#define S_GEEX8060_HEUMVT peel(pick(nPos, 78, 6), " ")
#define R_GEEX8060_HEUMVT(A) put(nRec, 78, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODMVT 
#define S_GEEX8060_CODMVT peel(pick(nPos, 84, 2), " ")
#define R_GEEX8060_CODMVT(A) put(nRec, 84, A :2.2)
!-----------------------------------------------------------
! FIELD : SENMVT 
#define S_GEEX8060_SENMVT peel(pick(nPos, 86, 1), " ")
#define R_GEEX8060_SENMVT(A) put(nRec, 86, A :1.1)
!-----------------------------------------------------------
! FIELD : MOTMVT 
#define S_GEEX8060_MOTMVT peel(pick(nPos, 87, 3), " ")
#define R_GEEX8060_MOTMVT(A) put(nRec, 87, A :3.3)
!-----------------------------------------------------------
! FIELD : EDIMVT 
#define S_GEEX8060_EDIMVT peel(pick(nPos, 90, 3), " ")
#define R_GEEX8060_EDIMVT(A) put(nRec, 90, A :3.3)
!-----------------------------------------------------------
! FIELD : REFMVT 
#define S_GEEX8060_REFMVT peel(pick(nPos, 93, 30), " ")
#define R_GEEX8060_REFMVT(A) put(nRec, 93, A :30.30)
!-----------------------------------------------------------
! FIELD : UVCMVT 
#define S_GEEX8060_UVCMVT peel(pick(nPos, 123, 9), " ")
#define R_GEEX8060_UVCMVT(A) put(nRec, 123, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UNIPRO 
#define S_GEEX8060_UNIPRO peel(pick(nPos, 132, 3), " ")
#define R_GEEX8060_UNIPRO(A) put(nRec, 132, A :3.3)
!-----------------------------------------------------------
! FIELD : SITPAL 
#define S_GEEX8060_SITPAL peel(pick(nPos, 135, 3), " ")
#define R_GEEX8060_SITPAL(A) put(nRec, 135, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX8060_CODPAL peel(pick(nPos, 138, 18), " ")
#define R_GEEX8060_CODPAL(A) put(nRec, 138, A :18.18)
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX8060_CODLOT peel(pick(nPos, 156, 20), " ")
#define R_GEEX8060_CODLOT(A) put(nRec, 156, A :20.20)
!-----------------------------------------------------------
! FIELD : NUMLOT 
#define S_GEEX8060_NUMLOT peel(pick(nPos, 176, 9), " ")
#define R_GEEX8060_NUMLOT(A) put(nRec, 176, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : HEUIMM1 
#define S_GEEX8060_HEUIMM1 peel(pick(nPos, 185, 6), " ")
#define R_GEEX8060_HEUIMM1(A) put(nRec, 185, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : HEUIMM2 
#define S_GEEX8060_HEUIMM2 peel(pick(nPos, 191, 6), " ")
#define R_GEEX8060_HEUIMM2(A) put(nRec, 191, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODSAP 
#define S_GEEX8060_CODSAP peel(pick(nPos, 197, 3), " ")
#define R_GEEX8060_CODSAP(A) put(nRec, 197, A :3.3)
!-----------------------------------------------------------
! FIELD : STOSAP 
#define S_GEEX8060_STOSAP peel(pick(nPos, 200, 4), " ")
#define R_GEEX8060_STOSAP(A) put(nRec, 200, A :4.4)
!-----------------------------------------------------------
! FIELD : STASAP 
#define S_GEEX8060_STASAP peel(pick(nPos, 204, 1), " ")
#define R_GEEX8060_STASAP(A) put(nRec, 204, A :1.1)
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX8060_PCBPRO peel(pick(nPos, 205, 5), " ")
#define R_GEEX8060_PCBPRO(A) put(nRec, 205, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_GEEX8060_EDIPRO peel(pick(nPos, 210, 17), " ")
#define R_GEEX8060_EDIPRO(A) put(nRec, 210, A :17.17)
!-----------------------------------------------------------
! FIELD : IMMPAL 
#define S_GEEX8060_IMMPAL peel(pick(nPos, 227, 1), " ")
#define R_GEEX8060_IMMPAL(A) put(nRec, 227, A :1.1)
!-----------------------------------------------------------
! FIELD : CODRIM 
#define S_GEEX8060_CODRIM peel(pick(nPos, 228, 3), " ")
#define R_GEEX8060_CODRIM(A) put(nRec, 228, A :3.3)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX8060_DISEXC peel(pick(nPos, 231, 26), " ")
#define R_GEEX8060_DISEXC(A) put(nRec, 231, A :26.26)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX8080 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX8080_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8080_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX8080_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8080_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX8080_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8080_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX8080_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8080_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : DATMVT 
#define S_GEEX8080_DATMVT peel(pick(nPos, 7, 8), " ")
#define R_GEEX8080_DATMVT(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUMVT 
#define S_GEEX8080_HEUMVT peel(pick(nPos, 15, 6), " ")
#define R_GEEX8080_HEUMVT(A) put(nRec, 15, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODEMB 
#define S_GEEX8080_CODEMB peel(pick(nPos, 21, 3), " ")
#define R_GEEX8080_CODEMB(A) put(nRec, 21, A :3.3)
!-----------------------------------------------------------
! FIELD : PROEMB 
#define S_GEEX8080_PROEMB peel(pick(nPos, 24, 17), " ")
#define R_GEEX8080_PROEMB(A) put(nRec, 24, A :17.17)
!-----------------------------------------------------------
! FIELD : PRXEMB 
#define S_GEEX8080_PRXEMB peel(pick(nPos, 41, 6), " ")
#define R_GEEX8080_PRXEMB(A) put(nRec, 41, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : TYPTIE 
#define S_GEEX8080_TYPTIE peel(pick(nPos, 47, 1), " ")
#define R_GEEX8080_TYPTIE(A) put(nRec, 47, A :1.1)
!-----------------------------------------------------------
! FIELD : CODTIE 
#define S_GEEX8080_CODTIE peel(pick(nPos, 48, 14), " ")
#define R_GEEX8080_CODTIE(A) put(nRec, 48, A :14.14)
!-----------------------------------------------------------
! FIELD : MOTMVB 
#define S_GEEX8080_MOTMVB peel(pick(nPos, 62, 3), " ")
#define R_GEEX8080_MOTMVB(A) put(nRec, 62, A :3.3)
!-----------------------------------------------------------
! FIELD : REFMVT 
#define S_GEEX8080_REFMVT peel(pick(nPos, 65, 30), " ")
#define R_GEEX8080_REFMVT(A) put(nRec, 65, A :30.30)
!-----------------------------------------------------------
! FIELD : CMTMVB 
#define S_GEEX8080_CMTMVB peel(pick(nPos, 95, 30), " ")
#define R_GEEX8080_CMTMVB(A) put(nRec, 95, A :30.30)
!-----------------------------------------------------------
! FIELD : QTBENT 
#define S_GEEX8080_QTBENT peel(pick(nPos, 125, 9), " ")
#define R_GEEX8080_QTBENT(A) put(nRec, 125, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : QTBSOR 
#define S_GEEX8080_QTBSOR peel(pick(nPos, 134, 9), " ")
#define R_GEEX8080_QTBSOR(A) put(nRec, 134, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX8080_CODACT peel(pick(nPos, 143, 3), " ")
#define R_GEEX8080_CODACT(A) put(nRec, 143, A :3.3)
!-----------------------------------------------------------
! FIELD : DATEMB 
#define S_GEEX8080_DATEMB peel(pick(nPos, 146, 8), " ")
#define R_GEEX8080_DATEMB(A) put(nRec, 146, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_GEEX8080_CODTRA peel(pick(nPos, 154, 14), " ")
#define R_GEEX8080_CODTRA(A) put(nRec, 154, A :14.14)
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_GEEX8080_CODFOU peel(pick(nPos, 168, 14), " ")
#define R_GEEX8080_CODFOU(A) put(nRec, 168, A :14.14)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX8080_CODCLI peel(pick(nPos, 182, 14), " ")
#define R_GEEX8080_CODCLI(A) put(nRec, 182, A :14.14)
!-----------------------------------------------------------
! FIELD : EDIMVT 
#define S_GEEX8080_EDIMVT peel(pick(nPos, 196, 3), " ")
#define R_GEEX8080_EDIMVT(A) put(nRec, 196, A :3.3)
!-----------------------------------------------------------
! FIELD : EDIFOU 
#define S_GEEX8080_EDIFOU peel(pick(nPos, 199, 14), " ")
#define R_GEEX8080_EDIFOU(A) put(nRec, 199, A :14.14)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX8080_DISEXC peel(pick(nPos, 213, 44), " ")
#define R_GEEX8080_DISEXC(A) put(nRec, 213, A :44.44)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX8084 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX8084_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8084_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX8084_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8084_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX8084_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8084_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX8084_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8084_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : DATMVT 
#define S_GEEX8084_DATMVT peel(pick(nPos, 7, 8), " ")
#define R_GEEX8084_DATMVT(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUMVT 
#define S_GEEX8084_HEUMVT peel(pick(nPos, 15, 6), " ")
#define R_GEEX8084_HEUMVT(A) put(nRec, 15, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODEMB 
#define S_GEEX8084_CODEMB peel(pick(nPos, 21, 3), " ")
#define R_GEEX8084_CODEMB(A) put(nRec, 21, A :3.3)
!-----------------------------------------------------------
! FIELD : LIBTYP 
#define S_GEEX8084_LIBTYP peel(pick(nPos, 24, 3), " ")
#define R_GEEX8084_LIBTYP(A) put(nRec, 24, A :3.3)
!-----------------------------------------------------------
! FIELD : CODIMA 
#define S_GEEX8084_CODIMA peel(pick(nPos, 27, 210), " ")
#define R_GEEX8084_CODIMA(A) put(nRec, 27, A :210.210)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX8084_DISEXC peel(pick(nPos, 237, 20), " ")
#define R_GEEX8084_DISEXC(A) put(nRec, 237, A :20.20)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX8090 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX8090_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8090_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX8090_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8090_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX8090_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8090_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX8090_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8090_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : DATMVT 
#define S_GEEX8090_DATMVT peel(pick(nPos, 7, 8), " ")
#define R_GEEX8090_DATMVT(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUMVT 
#define S_GEEX8090_HEUMVT peel(pick(nPos, 15, 6), " ")
#define R_GEEX8090_HEUMVT(A) put(nRec, 15, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODMVT 
#define S_GEEX8090_CODMVT peel(pick(nPos, 21, 2), " ")
#define R_GEEX8090_CODMVT(A) put(nRec, 21, A :2.2)
!-----------------------------------------------------------
! FIELD : SENMVT 
#define S_GEEX8090_SENMVT peel(pick(nPos, 23, 1), " ")
#define R_GEEX8090_SENMVT(A) put(nRec, 23, A :1.1)
!-----------------------------------------------------------
! FIELD : MOTMVT 
#define S_GEEX8090_MOTMVT peel(pick(nPos, 24, 3), " ")
#define R_GEEX8090_MOTMVT(A) put(nRec, 24, A :3.3)
!-----------------------------------------------------------
! FIELD : REFMVT 
#define S_GEEX8090_REFMVT peel(pick(nPos, 27, 30), " ")
#define R_GEEX8090_REFMVT(A) put(nRec, 27, A :30.30)
!-----------------------------------------------------------
! FIELD : NUMPAL 
#define S_GEEX8090_NUMPAL peel(pick(nPos, 57, 9), " ")
#define R_GEEX8090_NUMPAL(A) put(nRec, 57, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : SNUPAL 
#define S_GEEX8090_SNUPAL peel(pick(nPos, 66, 2), " ")
#define R_GEEX8090_SNUPAL(A) put(nRec, 66, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : ETAPAL 
#define S_GEEX8090_ETAPAL peel(pick(nPos, 68, 2), " ")
#define R_GEEX8090_ETAPAL(A) put(nRec, 68, A :2.2)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX8090_CODACT peel(pick(nPos, 70, 3), " ")
#define R_GEEX8090_CODACT(A) put(nRec, 70, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX8090_CODCLI peel(pick(nPos, 73, 14), " ")
#define R_GEEX8090_CODCLI(A) put(nRec, 73, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX8090_CODPRO peel(pick(nPos, 87, 17), " ")
#define R_GEEX8090_CODPRO(A) put(nRec, 87, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX8090_VALPRO peel(pick(nPos, 104, 2), " ")
#define R_GEEX8090_VALPRO(A) put(nRec, 104, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX8090_CODPAL peel(pick(nPos, 106, 18), " ")
#define R_GEEX8090_CODPAL(A) put(nRec, 106, A :18.18)
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GEEX8090_MOTIMM peel(pick(nPos, 124, 9), " ")
#define R_GEEX8090_MOTIMM(A) put(nRec, 124, A :9.9)
!-----------------------------------------------------------
! FIELD : DATLIB 
#define S_GEEX8090_DATLIB peel(pick(nPos, 133, 24), " ")
#define R_GEEX8090_DATLIB(A) put(nRec, 133, build(number(A):R024.0))
!-----------------------------------------------------------
! FIELD : HEULIB 
#define S_GEEX8090_HEULIB peel(pick(nPos, 157, 18), " ")
#define R_GEEX8090_HEULIB(A) put(nRec, 157, build(number(A):R018.0))
!-----------------------------------------------------------
! FIELD : INDLIB 
#define S_GEEX8090_INDLIB peel(pick(nPos, 175, 3), " ")
#define R_GEEX8090_INDLIB(A) put(nRec, 175, A :3.3)
!-----------------------------------------------------------
! FIELD : DATSTO 
#define S_GEEX8090_DATSTO peel(pick(nPos, 178, 8), " ")
#define R_GEEX8090_DATSTO(A) put(nRec, 178, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUSTO 
#define S_GEEX8090_HEUSTO peel(pick(nPos, 186, 6), " ")
#define R_GEEX8090_HEUSTO(A) put(nRec, 186, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : IMMBKL 
#define S_GEEX8090_IMMBKL peel(pick(nPos, 192, 3), " ")
#define R_GEEX8090_IMMBKL(A) put(nRec, 192, A :3.3)
!-----------------------------------------------------------
! FIELD : PALIMM 
#define S_GEEX8090_PALIMM peel(pick(nPos, 195, 3), " ")
#define R_GEEX8090_PALIMM(A) put(nRec, 195, A :3.3)
!-----------------------------------------------------------
! FIELD : DATBKL 
#define S_GEEX8090_DATBKL peel(pick(nPos, 198, 8), " ")
#define R_GEEX8090_DATBKL(A) put(nRec, 198, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUBKL 
#define S_GEEX8090_HEUBKL peel(pick(nPos, 206, 6), " ")
#define R_GEEX8090_HEUBKL(A) put(nRec, 206, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : DATIMM 
#define S_GEEX8090_DATIMM peel(pick(nPos, 212, 8), " ")
#define R_GEEX8090_DATIMM(A) put(nRec, 212, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUIMM 
#define S_GEEX8090_HEUIMM peel(pick(nPos, 220, 6), " ")
#define R_GEEX8090_HEUIMM(A) put(nRec, 220, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX8090_DISEXC peel(pick(nPos, 226, 31), " ")
#define R_GEEX8090_DISEXC(A) put(nRec, 226, A :31.31)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX8091 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX8091_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8091_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX8091_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8091_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX8091_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8091_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX8091_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8091_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : DATMVT 
#define S_GEEX8091_DATMVT peel(pick(nPos, 7, 8), " ")
#define R_GEEX8091_DATMVT(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUMVT 
#define S_GEEX8091_HEUMVT peel(pick(nPos, 15, 6), " ")
#define R_GEEX8091_HEUMVT(A) put(nRec, 15, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODMVT 
#define S_GEEX8091_CODMVT peel(pick(nPos, 21, 2), " ")
#define R_GEEX8091_CODMVT(A) put(nRec, 21, A :2.2)
!-----------------------------------------------------------
! FIELD : SENMVT 
#define S_GEEX8091_SENMVT peel(pick(nPos, 23, 1), " ")
#define R_GEEX8091_SENMVT(A) put(nRec, 23, A :1.1)
!-----------------------------------------------------------
! FIELD : MOTMVT 
#define S_GEEX8091_MOTMVT peel(pick(nPos, 24, 3), " ")
#define R_GEEX8091_MOTMVT(A) put(nRec, 24, A :3.3)
!-----------------------------------------------------------
! FIELD : REFMVT 
#define S_GEEX8091_REFMVT peel(pick(nPos, 27, 30), " ")
#define R_GEEX8091_REFMVT(A) put(nRec, 27, A :30.30)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX8091_CODACT peel(pick(nPos, 57, 3), " ")
#define R_GEEX8091_CODACT(A) put(nRec, 57, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX8091_CODCLI peel(pick(nPos, 60, 14), " ")
#define R_GEEX8091_CODCLI(A) put(nRec, 60, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX8091_CODPRO peel(pick(nPos, 74, 17), " ")
#define R_GEEX8091_CODPRO(A) put(nRec, 74, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX8091_VALPRO peel(pick(nPos, 91, 2), " ")
#define R_GEEX8091_VALPRO(A) put(nRec, 91, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX8091_CODLOT peel(pick(nPos, 93, 20), " ")
#define R_GEEX8091_CODLOT(A) put(nRec, 93, A :20.20)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX8091_CODPAL peel(pick(nPos, 113, 18), " ")
#define R_GEEX8091_CODPAL(A) put(nRec, 113, A :18.18)
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_GEEX8091_CODRUB peel(pick(nPos, 131, 12), " ")
#define R_GEEX8091_CODRUB(A) put(nRec, 131, A :12.12)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX8091_VALRUB peel(pick(nPos, 143, 105), " ")
#define R_GEEX8091_VALRUB(A) put(nRec, 143, A :105.105)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX8091_DISEXC peel(pick(nPos, 248, 9), " ")
#define R_GEEX8091_DISEXC(A) put(nRec, 248, A :9.9)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX8092 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX8092_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8092_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX8092_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8092_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX8092_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8092_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX8092_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8092_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : DATMVT 
#define S_GEEX8092_DATMVT peel(pick(nPos, 7, 8), " ")
#define R_GEEX8092_DATMVT(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUMVT 
#define S_GEEX8092_HEUMVT peel(pick(nPos, 15, 6), " ")
#define R_GEEX8092_HEUMVT(A) put(nRec, 15, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODMVT 
#define S_GEEX8092_CODMVT peel(pick(nPos, 21, 2), " ")
#define R_GEEX8092_CODMVT(A) put(nRec, 21, A :2.2)
!-----------------------------------------------------------
! FIELD : MOTMVT 
#define S_GEEX8092_MOTMVT peel(pick(nPos, 23, 3), " ")
#define R_GEEX8092_MOTMVT(A) put(nRec, 23, A :3.3)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX8092_CODACT peel(pick(nPos, 26, 3), " ")
#define R_GEEX8092_CODACT(A) put(nRec, 26, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX8092_CODCLI peel(pick(nPos, 29, 14), " ")
#define R_GEEX8092_CODCLI(A) put(nRec, 29, A :14.14)
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX8092_CODLOT peel(pick(nPos, 43, 20), " ")
#define R_GEEX8092_CODLOT(A) put(nRec, 43, A :20.20)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX8092_CODPAL peel(pick(nPos, 63, 18), " ")
#define R_GEEX8092_CODPAL(A) put(nRec, 63, A :18.18)
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_GEEX8092_CODRUB peel(pick(nPos, 81, 12), " ")
#define R_GEEX8092_CODRUB(A) put(nRec, 81, A :12.12)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX8092_VALRUB peel(pick(nPos, 93, 105), " ")
#define R_GEEX8092_VALRUB(A) put(nRec, 93, A :105.105)
!-----------------------------------------------------------
! FIELD : TYPMAJ 
#define S_GEEX8092_TYPMAJ peel(pick(nPos, 198, 3), " ")
#define R_GEEX8092_TYPMAJ(A) put(nRec, 198, A :3.3)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX8092_DISEXC peel(pick(nPos, 201, 56), " ")
#define R_GEEX8092_DISEXC(A) put(nRec, 201, A :56.56)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX8093 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX8093_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8093_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX8093_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8093_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX8093_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8093_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX8093_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8093_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : DATMVT 
#define S_GEEX8093_DATMVT peel(pick(nPos, 7, 8), " ")
#define R_GEEX8093_DATMVT(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUMVT 
#define S_GEEX8093_HEUMVT peel(pick(nPos, 15, 6), " ")
#define R_GEEX8093_HEUMVT(A) put(nRec, 15, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : OBLSUP 
#define S_GEEX8093_OBLSUP peel(pick(nPos, 21, 20), " ")
#define R_GEEX8093_OBLSUP(A) put(nRec, 21, A :20.20)
!-----------------------------------------------------------
! FIELD : CODOBL 
#define S_GEEX8093_CODOBL peel(pick(nPos, 41, 20), " ")
#define R_GEEX8093_CODOBL(A) put(nRec, 41, A :20.20)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX8093_DISEXC peel(pick(nPos, 61, 196), " ")
#define R_GEEX8093_DISEXC(A) put(nRec, 61, A :196.196)
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

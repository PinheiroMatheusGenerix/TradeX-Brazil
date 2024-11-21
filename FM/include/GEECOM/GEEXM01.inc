! File GEEXM01 : 
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
! Line : GEEX0101 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX0101_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX0101_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX0101_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX0101_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX0101_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX0101_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX0101_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX0101_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX0101_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX0101_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX0101_CODCLI peel(pick(nPos, 10, 14), " ")
#define R_GEEX0101_CODCLI(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX0101_CODPRO peel(pick(nPos, 24, 17), " ")
#define R_GEEX0101_CODPRO(A) put(nRec, 24, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX0101_VALPRO peel(pick(nPos, 41, 2), " ")
#define R_GEEX0101_VALPRO(A) put(nRec, 41, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : ZONSTS 
#define S_GEEX0101_ZONSTS peel(pick(nPos, 43, 1), " ")
#define R_GEEX0101_ZONSTS(A) put(nRec, 43, A :1.1)
!-----------------------------------------------------------
! FIELD : ALLSTS 
#define S_GEEX0101_ALLSTS peel(pick(nPos, 44, 3), " ")
#define R_GEEX0101_ALLSTS(A) put(nRec, 44, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : DPLSTS 
#define S_GEEX0101_DPLSTS peel(pick(nPos, 47, 4), " ")
#define R_GEEX0101_DPLSTS(A) put(nRec, 47, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : NIVSTS 
#define S_GEEX0101_NIVSTS peel(pick(nPos, 51, 2), " ")
#define R_GEEX0101_NIVSTS(A) put(nRec, 51, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : MOTMVT 
#define S_GEEX0101_MOTMVT peel(pick(nPos, 53, 3), " ")
#define R_GEEX0101_MOTMVT(A) put(nRec, 53, A :3.3)
!-----------------------------------------------------------
! FIELD : UVCMVT 
#define S_GEEX0101_UVCMVT peel(pick(nPos, 56, 9), " ")
#define R_GEEX0101_UVCMVT(A) put(nRec, 56, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX0101_CODPAL peel(pick(nPos, 65, 18), " ")
#define R_GEEX0101_CODPAL(A) put(nRec, 65, A :18.18)
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX0101_CODLOT peel(pick(nPos, 83, 20), " ")
#define R_GEEX0101_CODLOT(A) put(nRec, 83, A :20.20)
!-----------------------------------------------------------
! FIELD : DATFAB 
#define S_GEEX0101_DATFAB peel(pick(nPos, 103, 8), " ")
#define R_GEEX0101_DATFAB(A) put(nRec, 103, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_GEEX0101_DATFVI peel(pick(nPos, 111, 8), " ")
#define R_GEEX0101_DATFVI(A) put(nRec, 111, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GEEX0101_MOTIMM peel(pick(nPos, 119, 3), " ")
#define R_GEEX0101_MOTIMM(A) put(nRec, 119, A :3.3)
!-----------------------------------------------------------
! FIELD : NBJIMM 
#define S_GEEX0101_NBJIMM peel(pick(nPos, 122, 3), " ")
#define R_GEEX0101_NBJIMM(A) put(nRec, 122, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : NBHIMM 
#define S_GEEX0101_NBHIMM peel(pick(nPos, 125, 3), " ")
#define R_GEEX0101_NBHIMM(A) put(nRec, 125, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : MDSPRF 
#define S_GEEX0101_MDSPRF peel(pick(nPos, 128, 3), " ")
#define R_GEEX0101_MDSPRF(A) put(nRec, 128, A :3.3)
!-----------------------------------------------------------
! FIELD : DATREC 
#define S_GEEX0101_DATREC peel(pick(nPos, 131, 8), " ")
#define R_GEEX0101_DATREC(A) put(nRec, 131, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX0101_PCBPRO peel(pick(nPos, 139, 5), " ")
#define R_GEEX0101_PCBPRO(A) put(nRec, 139, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : ZONSPE 
#define S_GEEX0101_ZONSPE peel(pick(nPos, 144, 2), " ")
#define R_GEEX0101_ZONSPE(A) put(nRec, 144, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODEMB 
#define S_GEEX0101_CODEMB peel(pick(nPos, 146, 3), " ")
#define R_GEEX0101_CODEMB(A) put(nRec, 146, A :3.3)
!-----------------------------------------------------------
! FIELD : PDBPAL 
#define S_GEEX0101_PDBPAL peel(pick(nPos, 149, 7), " ")
#define R_GEEX0101_PDBPAL(A) put(nRec, 149, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : DIPSTO 
#define S_GEEX0101_DIPSTO peel(pick(nPos, 156, 50), " ")
#define R_GEEX0101_DIPSTO(A) put(nRec, 156, A :50.50)
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX0101_REFREC peel(pick(nPos, 206, 30), " ")
#define R_GEEX0101_REFREC(A) put(nRec, 206, A :30.30)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX0101_DISEXC peel(pick(nPos, 236, 21), " ")
#define R_GEEX0101_DISEXC(A) put(nRec, 236, A :21.21)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX0102 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX0102_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX0102_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX0102_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX0102_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX0102_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX0102_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX0102_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX0102_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX0102_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX0102_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX0102_CODCLI peel(pick(nPos, 10, 14), " ")
#define R_GEEX0102_CODCLI(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX0102_CODPRO peel(pick(nPos, 24, 17), " ")
#define R_GEEX0102_CODPRO(A) put(nRec, 24, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX0102_VALPRO peel(pick(nPos, 41, 2), " ")
#define R_GEEX0102_VALPRO(A) put(nRec, 41, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : ZONSTS 
#define S_GEEX0102_ZONSTS peel(pick(nPos, 43, 1), " ")
#define R_GEEX0102_ZONSTS(A) put(nRec, 43, A :1.1)
!-----------------------------------------------------------
! FIELD : ALLSTS 
#define S_GEEX0102_ALLSTS peel(pick(nPos, 44, 3), " ")
#define R_GEEX0102_ALLSTS(A) put(nRec, 44, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : DPLSTS 
#define S_GEEX0102_DPLSTS peel(pick(nPos, 47, 4), " ")
#define R_GEEX0102_DPLSTS(A) put(nRec, 47, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : NIVSTS 
#define S_GEEX0102_NIVSTS peel(pick(nPos, 51, 2), " ")
#define R_GEEX0102_NIVSTS(A) put(nRec, 51, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CIRPIC 
#define S_GEEX0102_CIRPIC peel(pick(nPos, 53, 3), " ")
#define R_GEEX0102_CIRPIC(A) put(nRec, 53, A :3.3)
!-----------------------------------------------------------
! FIELD : PRPPIC 
#define S_GEEX0102_PRPPIC peel(pick(nPos, 56, 1), " ")
#define R_GEEX0102_PRPPIC(A) put(nRec, 56, A :1.1)
!-----------------------------------------------------------
! FIELD : MINPIC 
#define S_GEEX0102_MINPIC peel(pick(nPos, 57, 9), " ")
#define R_GEEX0102_MINPIC(A) put(nRec, 57, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : MAXPIC 
#define S_GEEX0102_MAXPIC peel(pick(nPos, 66, 9), " ")
#define R_GEEX0102_MAXPIC(A) put(nRec, 66, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : SRVPCB 
#define S_GEEX0102_SRVPCB peel(pick(nPos, 75, 1), " ")
#define R_GEEX0102_SRVPCB(A) put(nRec, 75, A :1.1)
!-----------------------------------------------------------
! FIELD : SRVSPC 
#define S_GEEX0102_SRVSPC peel(pick(nPos, 76, 1), " ")
#define R_GEEX0102_SRVSPC(A) put(nRec, 76, A :1.1)
!-----------------------------------------------------------
! FIELD : SRVUVC 
#define S_GEEX0102_SRVUVC peel(pick(nPos, 77, 1), " ")
#define R_GEEX0102_SRVUVC(A) put(nRec, 77, A :1.1)
!-----------------------------------------------------------
! FIELD : UVCSTO 
#define S_GEEX0102_UVCSTO peel(pick(nPos, 78, 9), " ")
#define R_GEEX0102_UVCSTO(A) put(nRec, 78, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CPKFVI 
#define S_GEEX0102_CPKFVI peel(pick(nPos, 87, 8), " ")
#define R_GEEX0102_CPKFVI(A) put(nRec, 87, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CPKLOT 
#define S_GEEX0102_CPKLOT peel(pick(nPos, 95, 20), " ")
#define R_GEEX0102_CPKLOT(A) put(nRec, 95, A :20.20)
!-----------------------------------------------------------
! FIELD : CPKPCB 
#define S_GEEX0102_CPKPCB peel(pick(nPos, 115, 5), " ")
#define R_GEEX0102_CPKPCB(A) put(nRec, 115, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CPKSSC 
#define S_GEEX0102_CPKSSC peel(pick(nPos, 120, 18), " ")
#define R_GEEX0102_CPKSSC(A) put(nRec, 120, A :18.18)
!-----------------------------------------------------------
! FIELD : CPKIMM 
#define S_GEEX0102_CPKIMM peel(pick(nPos, 138, 3), " ")
#define R_GEEX0102_CPKIMM(A) put(nRec, 138, A :3.3)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX0102_DISEXC peel(pick(nPos, 141, 116), " ")
#define R_GEEX0102_DISEXC(A) put(nRec, 141, A :116.116)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX0103 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX0103_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX0103_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX0103_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX0103_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX0103_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX0103_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX0103_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX0103_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX0103_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX0103_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX0103_CODCLI peel(pick(nPos, 10, 14), " ")
#define R_GEEX0103_CODCLI(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX0103_CODPRO peel(pick(nPos, 24, 17), " ")
#define R_GEEX0103_CODPRO(A) put(nRec, 24, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX0103_VALPRO peel(pick(nPos, 41, 2), " ")
#define R_GEEX0103_VALPRO(A) put(nRec, 41, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CIRPIC 
#define S_GEEX0103_CIRPIC peel(pick(nPos, 43, 3), " ")
#define R_GEEX0103_CIRPIC(A) put(nRec, 43, A :3.3)
!-----------------------------------------------------------
! FIELD : PRPPIC 
#define S_GEEX0103_PRPPIC peel(pick(nPos, 46, 1), " ")
#define R_GEEX0103_PRPPIC(A) put(nRec, 46, A :1.1)
!-----------------------------------------------------------
! FIELD : INDCPK 
#define S_GEEX0103_INDCPK peel(pick(nPos, 47, 10), " ")
#define R_GEEX0103_INDCPK(A) put(nRec, 47, A :10.10)
!-----------------------------------------------------------
! FIELD : CODBRN 
#define S_GEEX0103_CODBRN peel(pick(nPos, 57, 10), " ")
#define R_GEEX0103_CODBRN(A) put(nRec, 57, A :10.10)
!-----------------------------------------------------------
! FIELD : DPLMIN 
#define S_GEEX0103_DPLMIN peel(pick(nPos, 67, 4), " ")
#define R_GEEX0103_DPLMIN(A) put(nRec, 67, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : NBRPIC 
#define S_GEEX0103_NBRPIC peel(pick(nPos, 71, 2), " ")
#define R_GEEX0103_NBRPIC(A) put(nRec, 71, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : DISPO 
#define S_GEEX0103_DISPO peel(pick(nPos, 73, 140), " ")
#define R_GEEX0103_DISPO(A) put(nRec, 73, A :140.140)
!-----------------------------------------------------------
! FIELD : MAJCRE 
#define S_GEEX0103_MAJCRE peel(pick(nPos, 213, 5), " ")
#define R_GEEX0103_MAJCRE(A) put(nRec, 213, A :5.5)
!-----------------------------------------------------------
! FIELD : MAJDAT 
#define S_GEEX0103_MAJDAT peel(pick(nPos, 218, 5), " ")
#define R_GEEX0103_MAJDAT(A) put(nRec, 218, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : MAJHMS 
#define S_GEEX0103_MAJHMS peel(pick(nPos, 223, 4), " ")
#define R_GEEX0103_MAJHMS(A) put(nRec, 223, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : MAJPGM 
#define S_GEEX0103_MAJPGM peel(pick(nPos, 227, 10), " ")
#define R_GEEX0103_MAJPGM(A) put(nRec, 227, A :10.10)
!-----------------------------------------------------------
! FIELD : MAJUTI 
#define S_GEEX0103_MAJUTI peel(pick(nPos, 237, 10), " ")
#define R_GEEX0103_MAJUTI(A) put(nRec, 237, A :10.10)
!-----------------------------------------------------------
! FIELD : MAJECR 
#define S_GEEX0103_MAJECR peel(pick(nPos, 247, 10), " ")
#define R_GEEX0103_MAJECR(A) put(nRec, 247, A :10.10)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX0130 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX0130_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX0130_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX0130_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX0130_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX0130_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX0130_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX0130_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX0130_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMPAL 
#define S_GEEX0130_NUMPAL peel(pick(nPos, 7, 9), " ")
#define R_GEEX0130_NUMPAL(A) put(nRec, 7, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : SNUPAL 
#define S_GEEX0130_SNUPAL peel(pick(nPos, 16, 2), " ")
#define R_GEEX0130_SNUPAL(A) put(nRec, 16, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX0130_CODPAL peel(pick(nPos, 18, 18), " ")
#define R_GEEX0130_CODPAL(A) put(nRec, 18, A :18.18)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX0130_CODACT peel(pick(nPos, 36, 3), " ")
#define R_GEEX0130_CODACT(A) put(nRec, 36, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX0130_CODCLI peel(pick(nPos, 39, 14), " ")
#define R_GEEX0130_CODCLI(A) put(nRec, 39, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX0130_CODPRO peel(pick(nPos, 53, 17), " ")
#define R_GEEX0130_CODPRO(A) put(nRec, 53, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX0130_VALPRO peel(pick(nPos, 70, 2), " ")
#define R_GEEX0130_VALPRO(A) put(nRec, 70, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TYPOPE 
#define S_GEEX0130_TYPOPE peel(pick(nPos, 72, 1), " ")
#define R_GEEX0130_TYPOPE(A) put(nRec, 72, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMOPE 
#define S_GEEX0130_NUMOPE peel(pick(nPos, 73, 6), " ")
#define R_GEEX0130_NUMOPE(A) put(nRec, 73, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : UVCMVT 
#define S_GEEX0130_UVCMVT peel(pick(nPos, 79, 9), " ")
#define R_GEEX0130_UVCMVT(A) put(nRec, 79, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : SPCPRO 
#define S_GEEX0130_SPCPRO peel(pick(nPos, 88, 4), " ")
#define R_GEEX0130_SPCPRO(A) put(nRec, 88, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX0130_PCBPRO peel(pick(nPos, 92, 5), " ")
#define R_GEEX0130_PCBPRO(A) put(nRec, 92, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX0130_CODLOT peel(pick(nPos, 97, 20), " ")
#define R_GEEX0130_CODLOT(A) put(nRec, 97, A :20.20)
!-----------------------------------------------------------
! FIELD : DATFAB 
#define S_GEEX0130_DATFAB peel(pick(nPos, 117, 8), " ")
#define R_GEEX0130_DATFAB(A) put(nRec, 117, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_GEEX0130_DATFVI peel(pick(nPos, 125, 8), " ")
#define R_GEEX0130_DATFVI(A) put(nRec, 125, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : ZONSTS 
#define S_GEEX0130_ZONSTS peel(pick(nPos, 133, 1), " ")
#define R_GEEX0130_ZONSTS(A) put(nRec, 133, A :1.1)
!-----------------------------------------------------------
! FIELD : ALLSTS 
#define S_GEEX0130_ALLSTS peel(pick(nPos, 134, 3), " ")
#define R_GEEX0130_ALLSTS(A) put(nRec, 134, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : DPLSTS 
#define S_GEEX0130_DPLSTS peel(pick(nPos, 137, 4), " ")
#define R_GEEX0130_DPLSTS(A) put(nRec, 137, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : NIVSTS 
#define S_GEEX0130_NIVSTS peel(pick(nPos, 141, 2), " ")
#define R_GEEX0130_NIVSTS(A) put(nRec, 141, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : EDTTOP 
#define S_GEEX0130_EDTTOP peel(pick(nPos, 143, 1), " ")
#define R_GEEX0130_EDTTOP(A) put(nRec, 143, A :1.1)
!-----------------------------------------------------------
! FIELD : PRXPRO 
#define S_GEEX0130_PRXPRO peel(pick(nPos, 144, 9), " ")
#define R_GEEX0130_PRXPRO(A) put(nRec, 144, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : PDBPAL 
#define S_GEEX0130_PDBPAL peel(pick(nPos, 153, 7), " ")
#define R_GEEX0130_PDBPAL(A) put(nRec, 153, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : PDNREC 
#define S_GEEX0130_PDNREC peel(pick(nPos, 160, 7), " ")
#define R_GEEX0130_PDNREC(A) put(nRec, 160, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : DATIMM 
#define S_GEEX0130_DATIMM peel(pick(nPos, 167, 16), " ")
#define R_GEEX0130_DATIMM(A) put(nRec, 167, build(number(A):R016.0))
!-----------------------------------------------------------
! FIELD : HEUIMM 
#define S_GEEX0130_HEUIMM peel(pick(nPos, 183, 12), " ")
#define R_GEEX0130_HEUIMM(A) put(nRec, 183, build(number(A):R012.0))
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GEEX0130_MOTIMM peel(pick(nPos, 195, 3), " ")
#define R_GEEX0130_MOTIMM(A) put(nRec, 195, A :3.3)
!-----------------------------------------------------------
! FIELD : EDIIMO 
#define S_GEEX0130_EDIIMO peel(pick(nPos, 198, 3), " ")
#define R_GEEX0130_EDIIMO(A) put(nRec, 198, A :3.3)
!-----------------------------------------------------------
! FIELD : CODMDS 
#define S_GEEX0130_CODMDS peel(pick(nPos, 201, 3), " ")
#define R_GEEX0130_CODMDS(A) put(nRec, 201, A :3.3)
!-----------------------------------------------------------
! FIELD : MOTMVT 
#define S_GEEX0130_MOTMVT peel(pick(nPos, 204, 3), " ")
#define R_GEEX0130_MOTMVT(A) put(nRec, 204, A :3.3)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX0130_DISEXC peel(pick(nPos, 207, 50), " ")
#define R_GEEX0130_DISEXC(A) put(nRec, 207, A :50.50)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX0140 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX0140_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX0140_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX0140_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX0140_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX0140_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX0140_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX0140_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX0140_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX0140_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX0140_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX0140_CODCLI peel(pick(nPos, 10, 14), " ")
#define R_GEEX0140_CODCLI(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX0140_CODPRO peel(pick(nPos, 24, 17), " ")
#define R_GEEX0140_CODPRO(A) put(nRec, 24, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX0140_VALPRO peel(pick(nPos, 41, 2), " ")
#define R_GEEX0140_VALPRO(A) put(nRec, 41, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX0140_CODPAL peel(pick(nPos, 43, 18), " ")
#define R_GEEX0140_CODPAL(A) put(nRec, 43, A :18.18)
!-----------------------------------------------------------
! FIELD : CODSER 
#define S_GEEX0140_CODSER peel(pick(nPos, 61, 30), " ")
#define R_GEEX0140_CODSER(A) put(nRec, 61, A :30.30)
!-----------------------------------------------------------
! FIELD : SNUSER 
#define S_GEEX0140_SNUSER peel(pick(nPos, 91, 3), " ")
#define R_GEEX0140_SNUSER(A) put(nRec, 91, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX0140_NUMREC peel(pick(nPos, 94, 8), " ")
#define R_GEEX0140_NUMREC(A) put(nRec, 94, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX0140_SNUREC peel(pick(nPos, 102, 3), " ")
#define R_GEEX0140_SNUREC(A) put(nRec, 102, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX0140_REFREC peel(pick(nPos, 105, 30), " ")
#define R_GEEX0140_REFREC(A) put(nRec, 105, A :30.30)
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_GEEX0140_CODFOU peel(pick(nPos, 135, 14), " ")
#define R_GEEX0140_CODFOU(A) put(nRec, 135, A :14.14)
!-----------------------------------------------------------
! FIELD : DATREC 
#define S_GEEX0140_DATREC peel(pick(nPos, 149, 8), " ")
#define R_GEEX0140_DATREC(A) put(nRec, 149, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUREC 
#define S_GEEX0140_HEUREC peel(pick(nPos, 157, 8), " ")
#define R_GEEX0140_HEUREC(A) put(nRec, 157, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : PDBSER 
#define S_GEEX0140_PDBSER peel(pick(nPos, 165, 7), " ")
#define R_GEEX0140_PDBSER(A) put(nRec, 165, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : TYPSER 
#define S_GEEX0140_TYPSER peel(pick(nPos, 172, 1), " ")
#define R_GEEX0140_TYPSER(A) put(nRec, 172, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX0140_DISEXC peel(pick(nPos, 173, 84), " ")
#define R_GEEX0140_DISEXC(A) put(nRec, 173, A :84.84)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX0190 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX0190_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX0190_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX0190_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX0190_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX0190_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX0190_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX0190_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX0190_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : ZONSTS 
#define S_GEEX0190_ZONSTS peel(pick(nPos, 7, 1), " ")
#define R_GEEX0190_ZONSTS(A) put(nRec, 7, A :1.1)
!-----------------------------------------------------------
! FIELD : ALLSTS 
#define S_GEEX0190_ALLSTS peel(pick(nPos, 8, 3), " ")
#define R_GEEX0190_ALLSTS(A) put(nRec, 8, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : DPLSTS 
#define S_GEEX0190_DPLSTS peel(pick(nPos, 11, 4), " ")
#define R_GEEX0190_DPLSTS(A) put(nRec, 11, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : NIVSTS 
#define S_GEEX0190_NIVSTS peel(pick(nPos, 15, 2), " ")
#define R_GEEX0190_NIVSTS(A) put(nRec, 15, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : COLECA 
#define S_GEEX0190_COLECA peel(pick(nPos, 17, 3), " ")
#define R_GEEX0190_COLECA(A) put(nRec, 17, A :3.3)
!-----------------------------------------------------------
! FIELD : CLARSQ 
#define S_GEEX0190_CLARSQ peel(pick(nPos, 20, 2), " ")
#define R_GEEX0190_CLARSQ(A) put(nRec, 20, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX0190_DISEXC peel(pick(nPos, 22, 235), " ")
#define R_GEEX0190_DISEXC(A) put(nRec, 22, A :235.235)
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

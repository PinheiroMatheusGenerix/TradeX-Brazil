! File GEEXM06 : 
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
! Line : GEEX0600_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX0600_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX0600_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX0600_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX0600_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX0600_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX0600_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX0600_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX0600_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX0600_BP_CODPAL peel(pick(nPos, 7, 18), " ")
#define R_GEEX0600_BP_CODPAL(A) put(nRec, 7, A :18.18)
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GEEX0600_BP_MOTIMM peel(pick(nPos, 25, 3), " ")
#define R_GEEX0600_BP_MOTIMM(A) put(nRec, 25, A :3.3)
!-----------------------------------------------------------
! FIELD : CODTRT 
#define S_GEEX0600_BP_CODTRT peel(pick(nPos, 28, 1), " ")
#define R_GEEX0600_BP_CODTRT(A) put(nRec, 28, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMPAL 
#define S_GEEX0600_BP_NUMPAL peel(pick(nPos, 29, 9), " ")
#define R_GEEX0600_BP_NUMPAL(A) put(nRec, 29, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : DATMVT 
#define S_GEEX0600_BP_DATMVT peel(pick(nPos, 38, 8), " ")
#define R_GEEX0600_BP_DATMVT(A) put(nRec, 38, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX0600_BP_CODLOT peel(pick(nPos, 46, 20), " ")
#define R_GEEX0600_BP_CODLOT(A) put(nRec, 46, A :20.20)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX0600_BP_CODACT peel(pick(nPos, 66, 3), " ")
#define R_GEEX0600_BP_CODACT(A) put(nRec, 66, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX0600_BP_CODCLI peel(pick(nPos, 69, 14), " ")
#define R_GEEX0600_BP_CODCLI(A) put(nRec, 69, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX0600_BP_CODPRO peel(pick(nPos, 83, 17), " ")
#define R_GEEX0600_BP_CODPRO(A) put(nRec, 83, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX0600_BP_VALPRO peel(pick(nPos, 100, 2), " ")
#define R_GEEX0600_BP_VALPRO(A) put(nRec, 100, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_GEEX0600_BP_DATFVI peel(pick(nPos, 102, 8), " ")
#define R_GEEX0600_BP_DATFVI(A) put(nRec, 102, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_GEEX0600_BP_EDIPRO peel(pick(nPos, 110, 17), " ")
#define R_GEEX0600_BP_EDIPRO(A) put(nRec, 110, A :17.17)
!-----------------------------------------------------------
! FIELD : DATIMM2 
#define S_GEEX0600_BP_DATIMM2 peel(pick(nPos, 127, 8), " ")
#define R_GEEX0600_BP_DATIMM2(A) put(nRec, 127, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUIMM2 
#define S_GEEX0600_BP_HEUIMM2 peel(pick(nPos, 135, 6), " ")
#define R_GEEX0600_BP_HEUIMM2(A) put(nRec, 135, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX0600_BP_PCBPRO peel(pick(nPos, 141, 5), " ")
#define R_GEEX0600_BP_PCBPRO(A) put(nRec, 141, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODDDO 
#define S_GEEX0600_BP_CODDDO peel(pick(nPos, 146, 14), " ")
#define R_GEEX0600_BP_CODDDO(A) put(nRec, 146, A :14.14)
!-----------------------------------------------------------
! FIELD : MLTSIT 
#define S_GEEX0600_BP_MLTSIT peel(pick(nPos, 160, 1), " ")
#define R_GEEX0600_BP_MLTSIT(A) put(nRec, 160, A :1.1)
!-----------------------------------------------------------
! FIELD : REFBKL 
#define S_GEEX0600_BP_REFBKL peel(pick(nPos, 161, 30), " ")
#define R_GEEX0600_BP_REFBKL(A) put(nRec, 161, A :30.30)
!-----------------------------------------------------------
! FIELD : HEUTRT 
#define S_GEEX0600_BP_HEUTRT peel(pick(nPos, 191, 6), " ")
#define R_GEEX0600_BP_HEUTRT(A) put(nRec, 191, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODUTI 
#define S_GEEX0600_BP_CODUTI peel(pick(nPos, 197, 10), " ")
#define R_GEEX0600_BP_CODUTI(A) put(nRec, 197, A :10.10)
!-----------------------------------------------------------
! FIELD : IDEMSG 
#define S_GEEX0600_BP_IDEMSG peel(pick(nPos, 207, 30), " ")
#define R_GEEX0600_BP_IDEMSG(A) put(nRec, 207, A :30.30)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX0600_BP_DISEXC peel(pick(nPos, 237, 20), " ")
#define R_GEEX0600_BP_DISEXC(A) put(nRec, 237, A :20.20)
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

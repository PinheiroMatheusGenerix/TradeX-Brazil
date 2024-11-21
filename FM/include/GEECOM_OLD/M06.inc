! File M06 : 

!===========================================================
! Line : 00HEADER 
!===========================================================
! FIELD : CODEXC 
#define S_00HEADER_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_00HEADER_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_00HEADER_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_00HEADER_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_00HEADER_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_00HEADER_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_00HEADER_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_00HEADER_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : EMTEXC 
#define S_00HEADER_EMTEXC peel(pick(nPos, 7, 14), " ")
#define R_00HEADER_EMTEXC(A) put(nRec, 7, A :14.14)
!-----------------------------------------------------------
! FIELD : RCTEXC 
#define S_00HEADER_RCTEXC peel(pick(nPos, 21, 14), " ")
#define R_00HEADER_RCTEXC(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXC 
#define S_00HEADER_DATEXC peel(pick(nPos, 35, 8), " ")
#define R_00HEADER_DATEXC(A) put(nRec, 35, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_00HEADER_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_00HEADER_HEUEXC(A) put(nRec, 43, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : NUMEXC 
#define S_00HEADER_NUMEXC peel(pick(nPos, 49, 7), " ")
#define R_00HEADER_NUMEXC(A) put(nRec, 49, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : ACQEXC 
#define S_00HEADER_ACQEXC peel(pick(nPos, 56, 1), " ")
#define R_00HEADER_ACQEXC(A) put(nRec, 56, A :1.1)
!-----------------------------------------------------------
! FIELD : VEREXC 
#define S_00HEADER_VEREXC peel(pick(nPos, 57, 4), " ")
#define R_00HEADER_VEREXC(A) put(nRec, 57, A :4.4)
!-----------------------------------------------------------
! FIELD : NOMSYS 
#define S_00HEADER_NOMSYS peel(pick(nPos, 61, 8), " ")
#define R_00HEADER_NOMSYS(A) put(nRec, 61, A :8.8)
!-----------------------------------------------------------
! FIELD : NOMDTQ 
#define S_00HEADER_NOMDTQ peel(pick(nPos, 69, 10), " ")
#define R_00HEADER_NOMDTQ(A) put(nRec, 69, A :10.10)
!-----------------------------------------------------------
! FIELD : BIBDTQ 
#define S_00HEADER_BIBDTQ peel(pick(nPos, 79, 10), " ")
#define R_00HEADER_BIBDTQ(A) put(nRec, 79, A :10.10)
!-----------------------------------------------------------
! FIELD : LIBEXC 
#define S_00HEADER_LIBEXC peel(pick(nPos, 89, 30), " ")
#define R_00HEADER_LIBEXC(A) put(nRec, 89, A :30.30)
!-----------------------------------------------------------
! FIELD : BIBDST 
#define S_00HEADER_BIBDST peel(pick(nPos, 119, 10), " ")
#define R_00HEADER_BIBDST(A) put(nRec, 119, A :10.10)
!-----------------------------------------------------------
! FIELD : PGMDST 
#define S_00HEADER_PGMDST peel(pick(nPos, 129, 10), " ")
#define R_00HEADER_PGMDST(A) put(nRec, 129, A :10.10)
!-----------------------------------------------------------
! FIELD : PARDST 
#define S_00HEADER_PARDST peel(pick(nPos, 139, 30), " ")
#define R_00HEADER_PARDST(A) put(nRec, 139, A :30.30)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_00HEADER_CODACT peel(pick(nPos, 169, 3), " ")
#define R_00HEADER_CODACT(A) put(nRec, 169, A :3.3)
!-----------------------------------------------------------
! FIELD : IGLSIT 
#define S_00HEADER_IGLSIT peel(pick(nPos, 172, 3), " ")
#define R_00HEADER_IGLSIT(A) put(nRec, 172, A :3.3)
!-----------------------------------------------------------
! FIELD : EDISIT 
#define S_00HEADER_EDISIT peel(pick(nPos, 175, 14), " ")
#define R_00HEADER_EDISIT(A) put(nRec, 175, A :14.14)
!-----------------------------------------------------------
! FIELD : IMAEXC 
#define S_00HEADER_IMAEXC peel(pick(nPos, 189, 8), " ")
#define R_00HEADER_IMAEXC(A) put(nRec, 189, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_00HEADER_DISEXC peel(pick(nPos, 197, 60), " ")
#define R_00HEADER_DISEXC(A) put(nRec, 197, A :60.60)
!-----------------------------------------------------------


!===========================================================
! Line : M06 
!===========================================================
! FIELD : CODEXC 
#define S_M06_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_M06_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_M06_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_M06_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_M06_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_M06_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_M06_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_M06_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_M06_CODPAL peel(pick(nPos, 7, 18), " ")
#define R_M06_CODPAL(A) put(nRec, 7, A :18.18)
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_M06_MOTIMM peel(pick(nPos, 25, 3), " ")
#define R_M06_MOTIMM(A) put(nRec, 25, A :3.3)
!-----------------------------------------------------------
! FIELD : CODTRT 
#define S_M06_CODTRT peel(pick(nPos, 28, 1), " ")
#define R_M06_CODTRT(A) put(nRec, 28, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMPAL 
#define S_M06_NUMPAL peel(pick(nPos, 29, 9), " ")
#define R_M06_NUMPAL(A) put(nRec, 29, A :9.9)
!-----------------------------------------------------------
! FIELD : DATMVT 
#define S_M06_DATMVT peel(pick(nPos, 38, 8), " ")
#define R_M06_DATMVT(A) put(nRec, 38, A :8.8)
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_M06_CODLOT peel(pick(nPos, 46, 20), " ")
#define R_M06_CODLOT(A) put(nRec, 46, A :20.20)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_M06_CODACT peel(pick(nPos, 66, 3), " ")
#define R_M06_CODACT(A) put(nRec, 66, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_M06_CODCLI peel(pick(nPos, 69, 14), " ")
#define R_M06_CODCLI(A) put(nRec, 69, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_M06_CODPRO peel(pick(nPos, 83, 17), " ")
#define R_M06_CODPRO(A) put(nRec, 83, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_M06_VALPRO peel(pick(nPos, 100, 2), " ")
#define R_M06_VALPRO(A) put(nRec, 100, A :2.2)
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_M06_DATFVI peel(pick(nPos, 102, 8), " ")
#define R_M06_DATFVI(A) put(nRec, 102, A :8.8)
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_M06_EDIPRO peel(pick(nPos, 110, 17), " ")
#define R_M06_EDIPRO(A) put(nRec, 110, A :17.17)
!-----------------------------------------------------------
! FIELD : DATIMM2 
#define S_M06_DATIMM2 peel(pick(nPos, 127, 8), " ")
#define R_M06_DATIMM2(A) put(nRec, 127, A :8.8)
!-----------------------------------------------------------
! FIELD : HEUIMM2 
#define S_M06_HEUIMM2 peel(pick(nPos, 135, 6), " ")
#define R_M06_HEUIMM2(A) put(nRec, 135, A :6.6)
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_M06_PCBPRO peel(pick(nPos, 141, 5), " ")
#define R_M06_PCBPRO(A) put(nRec, 141, A :5.5)
!-----------------------------------------------------------
! FIELD : CODDDO 
#define S_M06_CODDDO peel(pick(nPos, 146, 14), " ")
#define R_M06_CODDDO(A) put(nRec, 146, A :14.14)
!-----------------------------------------------------------
! FIELD : MLTSIT 
#define S_M06_MLTSIT peel(pick(nPos, 160, 1), " ")
#define R_M06_MLTSIT(A) put(nRec, 160, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_M06_DISEXC peel(pick(nPos, 161, 96), " ")
#define R_M06_DISEXC(A) put(nRec, 161, A :96.96)
!-----------------------------------------------------------

!===========================================================
! Line : 99FILEFOOTER 
!===========================================================
! FIELD : CODEXC 
#define S_99FILEFOOTER_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_99FILEFOOTER_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_99FILEFOOTER_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_99FILEFOOTER_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_99FILEFOOTER_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_99FILEFOOTER_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_99FILEFOOTER_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_99FILEFOOTER_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : EMTEXC 
#define S_99FILEFOOTER_EMTEXC peel(pick(nPos, 7, 14), " ")
#define R_99FILEFOOTER_EMTEXC(A) put(nRec, 7, A :14.14)
!-----------------------------------------------------------
! FIELD : RCTEXC 
#define S_99FILEFOOTER_RCTEXC peel(pick(nPos, 21, 14), " ")
#define R_99FILEFOOTER_RCTEXC(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXC 
#define S_99FILEFOOTER_DATEXC peel(pick(nPos, 35, 8), " ")
#define R_99FILEFOOTER_DATEXC(A) put(nRec, 35, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_99FILEFOOTER_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_99FILEFOOTER_HEUEXC(A) put(nRec, 43, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : NUMEXC 
#define S_99FILEFOOTER_NUMEXC peel(pick(nPos, 49, 7), " ")
#define R_99FILEFOOTER_NUMEXC(A) put(nRec, 49, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : CPTEXC 
#define S_99FILEFOOTER_CPTEXC peel(pick(nPos, 56, 8), " ")
#define R_99FILEFOOTER_CPTEXC(A) put(nRec, 56, build(number(A):R08.0))
!-----------------------------------------------------------



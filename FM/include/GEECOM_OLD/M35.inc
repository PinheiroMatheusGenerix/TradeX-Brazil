! File M35_GECOM_IN : 
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
! Line : 3500 
!===========================================================
! FIELD : CODEXC 
#define S_3500_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_3500_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_3500_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_3500_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_3500_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_3500_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_3500_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_3500_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_3500_CODACT peel(pick(nPos, 7, 3), " ")
#define R_3500_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : TYPCTD 
#define S_3500_TYPCTD peel(pick(nPos, 10, 1), " ")
#define R_3500_TYPCTD(A) put(nRec, 10, A :1.1)
!-----------------------------------------------------------
! FIELD : CATCLI 
#define S_3500_CATCLI peel(pick(nPos, 11, 3), " ")
#define R_3500_CATCLI(A) put(nRec, 11, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_3500_CODCLI peel(pick(nPos, 14, 14), " ")
#define R_3500_CODCLI(A) put(nRec, 14, A :14.14)
!-----------------------------------------------------------
! FIELD : FAMPRO 
#define S_3500_FAMPRO peel(pick(nPos, 28, 10), " ")
#define R_3500_FAMPRO(A) put(nRec, 28, A :10.10)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_3500_CODPRO peel(pick(nPos, 38, 17), " ")
#define R_3500_CODPRO(A) put(nRec, 38, A :17.17)
!-----------------------------------------------------------
! FIELD : NBJCTD 
#define S_3500_NBJCTD peel(pick(nPos, 55, 3), " ")
#define R_3500_NBJCTD(A) put(nRec, 55, A :3.3)
!-----------------------------------------------------------
! FIELD : NBJCT2 
#define S_3500_NBJCT2 peel(pick(nPos, 58, 3), " ")
#define R_3500_NBJCT2(A) put(nRec, 58, A :3.3)
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_3500_EDIPRO peel(pick(nPos, 61, 17), " ")
#define R_3500_EDIPRO(A) put(nRec, 61, A :17.17)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_3500_DISEXC peel(pick(nPos, 78, 179), " ")
#define R_3500_DISEXC(A) put(nRec, 78, A :179.179)
!-----------------------------------------------------------



!===========================================================
! Line : 3510 
!===========================================================
! FIELD : CODEXC 
#define S_3510_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_3510_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_3510_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_3510_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_3510_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_3510_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_3510_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_3510_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_3510_CODACT peel(pick(nPos, 7, 3), " ")
#define R_3510_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_3510_CODPRO peel(pick(nPos, 10, 17), " ")
#define R_3510_CODPRO(A) put(nRec, 10, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_3510_VALPRO peel(pick(nPos, 27, 2), " ")
#define R_3510_VALPRO(A) put(nRec, 27, A :2.2)
!-----------------------------------------------------------
! FIELD : CLILIV 
#define S_3510_CLILIV peel(pick(nPos, 29, 14), " ")
#define R_3510_CLILIV(A) put(nRec, 29, A :14.14)
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_3510_DATFVI peel(pick(nPos, 43, 8), " ")
#define R_3510_DATFVI(A) put(nRec, 43, A :8.8)
!-----------------------------------------------------------
! FIELD : IDECMQ 
#define S_3510_IDECMQ peel(pick(nPos, 51, 14), " ")
#define R_3510_IDECMQ(A) put(nRec, 51, A :14.14)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_3510_DISEXC peel(pick(nPos, 65, 192), " ")
#define R_3510_DISEXC(A) put(nRec, 65, A :192.192)
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



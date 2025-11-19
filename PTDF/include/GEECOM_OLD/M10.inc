! File M30_GECOM_IN : 
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
! Line : 10HEADER 
!===========================================================
! FIELD : CODEXC 
#define S_10HEADER_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_10HEADER_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_10HEADER_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_10HEADER_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_10HEADER_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_10HEADER_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_10HEADER_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_10HEADER_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_10HEADER_CODACT peel(pick(nPos, 7, 3), " ")
#define R_10HEADER_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_10HEADER_CODFOU peel(pick(nPos, 10, 14), " ")
#define R_10HEADER_CODFOU(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : TYPFOU 
#define S_10HEADER_TYPFOU peel(pick(nPos, 24, 1), " ")
#define R_10HEADER_TYPFOU(A) put(nRec, 24, A :1.1)
!-----------------------------------------------------------
! FIELD : NOMFOU 
#define S_10HEADER_NOMFOU peel(pick(nPos, 25, 30), " ")
#define R_10HEADER_NOMFOU(A) put(nRec, 25, A :30.30)
!-----------------------------------------------------------
! FIELD : AD1FOU 
#define S_10HEADER_AD1FOU peel(pick(nPos, 55, 30), " ")
#define R_10HEADER_AD1FOU(A) put(nRec, 55, A :30.30)
!-----------------------------------------------------------
! FIELD : AD2FOU 
#define S_10HEADER_AD2FOU peel(pick(nPos, 85, 30), " ")
#define R_10HEADER_AD2FOU(A) put(nRec, 85, A :30.30)
!-----------------------------------------------------------
! FIELD : CPOFOU 
#define S_10HEADER_CPOFOU peel(pick(nPos, 115, 5), " ")
#define R_10HEADER_CPOFOU(A) put(nRec, 115, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : VILFOU 
#define S_10HEADER_VILFOU peel(pick(nPos, 120, 26), " ")
#define R_10HEADER_VILFOU(A) put(nRec, 120, A :26.26)
!-----------------------------------------------------------
! FIELD : PAYFOU 
#define S_10HEADER_PAYFOU peel(pick(nPos, 146, 3), " ")
#define R_10HEADER_PAYFOU(A) put(nRec, 146, A :3.3)
!-----------------------------------------------------------
! FIELD : TELFOU 
#define S_10HEADER_TELFOU peel(pick(nPos, 149, 20), " ")
#define R_10HEADER_TELFOU(A) put(nRec, 149, A :20.20)
!-----------------------------------------------------------
! FIELD : FAXFOU 
#define S_10HEADER_FAXFOU peel(pick(nPos, 169, 20), " ")
#define R_10HEADER_FAXFOU(A) put(nRec, 169, A :20.20)
!-----------------------------------------------------------
! FIELD : TLXFOU 
#define S_10HEADER_TLXFOU peel(pick(nPos, 189, 15), " ")
#define R_10HEADER_TLXFOU(A) put(nRec, 189, A :15.15)
!-----------------------------------------------------------
! FIELD : EDIFOU 
#define S_10HEADER_EDIFOU peel(pick(nPos, 204, 14), " ")
#define R_10HEADER_EDIFOU(A) put(nRec, 204, A :14.14)
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_10HEADER_CODTRA peel(pick(nPos, 218, 14), " ")
#define R_10HEADER_CODTRA(A) put(nRec, 218, A :14.14)
!-----------------------------------------------------------
! FIELD : IGLSIT 
#define S_10HEADER_IGLSIT peel(pick(nPos, 232, 3), " ")
#define R_10HEADER_IGLSIT(A) put(nRec, 232, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODTRE 
#define S_10HEADER_CODTRE peel(pick(nPos, 235, 3), " ")
#define R_10HEADER_CODTRE(A) put(nRec, 235, A :3.3)
!-----------------------------------------------------------
! FIELD : GSTAVI 
#define S_10HEADER_GSTAVI peel(pick(nPos, 238, 1), " ")
#define R_10HEADER_GSTAVI(A) put(nRec, 238, A :1.1)
!-----------------------------------------------------------
! FIELD : GSTRCP 
#define S_10HEADER_GSTRCP peel(pick(nPos, 239, 1), " ")
#define R_10HEADER_GSTRCP(A) put(nRec, 239, A :1.1)
!-----------------------------------------------------------
! FIELD : TYPPRT 
#define S_10HEADER_TYPPRT peel(pick(nPos, 240, 1), " ")
#define R_10HEADER_TYPPRT(A) put(nRec, 240, A :1.1)
!-----------------------------------------------------------
! FIELD : CPIFOU 
#define S_10HEADER_CPIFOU peel(pick(nPos, 241, 10), " ")
#define R_10HEADER_CPIFOU(A) put(nRec, 241, A :10.10)
!-----------------------------------------------------------
! FIELD : EMBTIE 
#define S_10HEADER_EMBTIE peel(pick(nPos, 251, 1), " ")
#define R_10HEADER_EMBTIE(A) put(nRec, 251, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_10HEADER_DISEXC peel(pick(nPos, 252, 5), " ")
#define R_10HEADER_DISEXC(A) put(nRec, 252, A :5.5)
!-----------------------------------------------------------



!===========================================================
! Line : 10_01 
!===========================================================
! FIELD : CODEXC 
#define S_10_01_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_10_01_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_10_01_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_10_01_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_10_01_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_10_01_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_10_01_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_10_01_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_10_01_CODACT peel(pick(nPos, 7, 3), " ")
#define R_10_01_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_10_01_CODFOU peel(pick(nPos, 10, 14), " ")
#define R_10_01_CODFOU(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : RSPFOU 
#define S_10_01_RSPFOU peel(pick(nPos, 24, 30), " ")
#define R_10_01_RSPFOU(A) put(nRec, 24, A :30.30)
!-----------------------------------------------------------
! FIELD : EMLADR 
#define S_10_01_EMLADR peel(pick(nPos, 54, 50), " ")
#define R_10_01_EMLADR(A) put(nRec, 54, A :50.35)
!-----------------------------------------------------------



!===========================================================
! Line : 10_02 
!===========================================================
! FIELD : CODEXC 
#define S_10_02_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_10_02_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_10_02_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_10_02_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_10_02_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_10_02_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_10_02_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_10_02_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_10_02_CODACT peel(pick(nPos, 7, 3), " ")
#define R_10_02_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_10_02_CODFOU peel(pick(nPos, 10, 14), " ")
#define R_10_02_CODFOU(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : RSPFOU 
#define S_10_02_LIBCPL peel(pick(nPos, 159, 38), " ")
#define R_10_02_LIBCPL(A) put(nRec, 159, A :38.38)
!-----------------------------------------------------------
!


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



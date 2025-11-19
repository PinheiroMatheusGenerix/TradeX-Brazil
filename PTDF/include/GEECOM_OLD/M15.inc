! File M15 : 

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
! Line : M15 
!===========================================================
! FIELD : CODEXC 
#define S_M15_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_M15_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_M15_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_M15_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_M15_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_M15_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_M15_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_M15_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_M15_CODACT peel(pick(nPos, 7, 3), " ")
#define R_M15_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_M15_CODTRA peel(pick(nPos, 10, 14), " ")
#define R_M15_CODTRA(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : TYPCLI 
#define S_M15_TYPCLI peel(pick(nPos, 24, 1), " ")
#define R_M15_TYPCLI(A) put(nRec, 24, A :1.1)
!-----------------------------------------------------------
! FIELD : NOMTRA 
#define S_M15_NOMTRA peel(pick(nPos, 25, 30), " ")
#define R_M15_NOMTRA(A) put(nRec, 25, A :30.30)
!-----------------------------------------------------------
! FIELD : AD1TRA 
#define S_M15_AD1TRA peel(pick(nPos, 55, 30), " ")
#define R_M15_AD1TRA(A) put(nRec, 55, A :30.30)
!-----------------------------------------------------------
! FIELD : AD2TRA 
#define S_M15_AD2TRA peel(pick(nPos, 85, 30), " ")
#define R_M15_AD2TRA(A) put(nRec, 85, A :30.30)
!-----------------------------------------------------------
! FIELD : CPOTRA 
#define S_M15_CPOTRA peel(pick(nPos, 115, 5), " ")
#define R_M15_CPOTRA(A) put(nRec, 115, A :5.5)
!-----------------------------------------------------------
! FIELD : VILTRA 
#define S_M15_VILTRA peel(pick(nPos, 120, 26), " ")
#define R_M15_VILTRA(A) put(nRec, 120, A :26.26)
!-----------------------------------------------------------
! FIELD : PAYTRA 
#define S_M15_PAYTRA peel(pick(nPos, 146, 3), " ")
#define R_M15_PAYTRA(A) put(nRec, 146, A :3.3)
!-----------------------------------------------------------
! FIELD : TELTRA 
#define S_M15_TELTRA peel(pick(nPos, 149, 20), " ")
#define R_M15_TELTRA(A) put(nRec, 149, A :20.20)
!-----------------------------------------------------------
! FIELD : FAXTRA 
#define S_M15_FAXTRA peel(pick(nPos, 169, 20), " ")
#define R_M15_FAXTRA(A) put(nRec, 169, A :20.20)
!-----------------------------------------------------------
! FIELD : TLXTRA 
#define S_M15_TLXTRA peel(pick(nPos, 189, 15), " ")
#define R_M15_TLXTRA(A) put(nRec, 189, A :15.15)
!-----------------------------------------------------------
! FIELD : EDITRA 
#define S_M15_EDITRA peel(pick(nPos, 204, 14), " ")
#define R_M15_EDITRA(A) put(nRec, 204, A :14.14)
!-----------------------------------------------------------
! FIELD : IGLSIT 
#define S_M15_IGLSIT peel(pick(nPos, 218, 3), " ")
#define R_M15_IGLSIT(A) put(nRec, 218, A :3.3)
!-----------------------------------------------------------
! FIELD : TYPVAL 
#define S_M15_TYPVAL peel(pick(nPos, 221, 1), " ")
#define R_M15_TYPVAL(A) put(nRec, 221, A :1.1)
!-----------------------------------------------------------
! FIELD : GSTEMB 
#define S_M15_GSTEMB peel(pick(nPos, 222, 1), " ")
#define R_M15_GSTEMB(A) put(nRec, 222, A :1.1)
!-----------------------------------------------------------
! FIELD : GSTEDI 
#define S_M15_GSTEDI peel(pick(nPos, 223, 1), " ")
#define R_M15_GSTEDI(A) put(nRec, 223, A :1.1)
!-----------------------------------------------------------
! FIELD : CPTTRA 
#define S_M15_CPTTRA peel(pick(nPos, 224, 6), " ")
#define R_M15_CPTTRA(A) put(nRec, 224, A :6.6)
!-----------------------------------------------------------
! FIELD : CODMRG 
#define S_M15_CODMRG peel(pick(nPos, 230, 3), " ")
#define R_M15_CODMRG(A) put(nRec, 230, A :3.3)
!-----------------------------------------------------------
! FIELD : CODDRG 
#define S_M15_CODDRG peel(pick(nPos, 233, 3), " ")
#define R_M15_CODDRG(A) put(nRec, 233, A :3.3)
!-----------------------------------------------------------
! FIELD : PEREMB 
#define S_M15_PEREMB peel(pick(nPos, 236, 1), " ")
#define R_M15_PEREMB(A) put(nRec, 236, A :1.1)
!-----------------------------------------------------------
! FIELD : TRADNG 
#define S_M15_TRADNG peel(pick(nPos, 237, 1), " ")
#define R_M15_TRADNG(A) put(nRec, 237, A :1.1)
!-----------------------------------------------------------
! FIELD : EMBTIE 
#define S_M15_EMBTIE peel(pick(nPos, 238, 1), " ")
#define R_M15_EMBTIE(A) put(nRec, 238, A :1.1)
!-----------------------------------------------------------
! FIELD : EDTBDL 
#define S_M15_EDTBDL peel(pick(nPos, 239, 1), " ")
#define R_M15_EDTBDL(A) put(nRec, 239, A :1.1)
!-----------------------------------------------------------
! FIELD : CPITRA 
#define S_M15_CPITRA peel(pick(nPos, 240, 10), " ")
#define R_M15_CPITRA(A) put(nRec, 240, A :10.10)
!-----------------------------------------------------------


!===========================================================
! Line : M1502 
!===========================================================
! FIELD : CODEXC 
#define S_M1502_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_M1502_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_M1502_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_M1502_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_M1502_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_M1502_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_M1502_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_M1502_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_M1502_CODACT peel(pick(nPos, 7, 3), " ")
#define R_M1502_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_M1502_CODTRA peel(pick(nPos, 10, 14), " ")
#define R_M1502_CODTRA(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : PGMETI 
#define S_M1502_PGMETI peel(pick(nPos, 24, 10), " ")
#define R_M1502_PGMETI(A) put(nRec, 24, A :10.10)
!-----------------------------------------------------------
! FIELD : TYPMAS 
#define S_M1502_TYPMAS peel(pick(nPos, 34, 1), " ")
#define R_M1502_TYPMAS(A) put(nRec, 34, A :1.1)

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


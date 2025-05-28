! File GEEX63: 
!===========================================================
! Line : GEEX0000 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX0000_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX0000_BP_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX0000_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX0000_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX0000_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX0000_BP_SCOEXC(A) put(nRec, 4, A :2.2)
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
#define R_GEEX0000_BP_DATEXC(A) put(nRec, 35, A :8.8)
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_GEEX0000_BP_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_GEEX0000_BP_HEUEXC(A) put(nRec, 43, A :6.6)
!-----------------------------------------------------------
! FIELD : NUMEXC 
#define S_GEEX0000_BP_NUMEXC peel(pick(nPos, 49, 7), " ")
#define R_GEEX0000_BP_NUMEXC(A) put(nRec, 49, A :7.7)
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
#define R_GEEX0000_BP_IGLSIT(A) put(nRec, 172, A :3.3)
!-----------------------------------------------------------
! FIELD : EDISIT 
#define S_GEEX0000_BP_EDISIT peel(pick(nPos, 175, 14), " ")
#define R_GEEX0000_BP_EDISIT(A) put(nRec, 175, A :14.14)
!-----------------------------------------------------------
! FIELD : IMAEXC 
#define S_GEEX0000_BP_IMAEXC peel(pick(nPos, 189, 8), " ")
#define R_GEEX0000_BP_IMAEXC(A) put(nRec, 189, A :8.8)
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
! Line : GEEX6300 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX6300_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX6300_BP_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX6300_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX6300_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX6300_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX6300_BP_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX6300_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX6300_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : REFMIT 
#define S_GEEX6300_BP_REFMIT peel(pick(nPos, 7, 30), " ")
#define R_GEEX6300_BP_REFMIT(A) put(nRec, 7, A :30.30)
!-----------------------------------------------------------
! FIELD : NUMTOU 
#define S_GEEX6300_BP_NUMTOU peel(pick(nPos, 37, 8), " ")
#define R_GEEX6300_BP_NUMTOU(A) put(nRec, 37, A :8.8)
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_GEEX6300_BP_CODTRA peel(pick(nPos, 45, 14), " ")
#define R_GEEX6300_BP_CODTRA(A) put(nRec, 45, A :14.14)
!-----------------------------------------------------------
! FIELD : DATCAM2 
#define S_GEEX6300_BP_DATCAM2 peel(pick(nPos, 59, 8), " ")
#define R_GEEX6300_BP_DATCAM2(A) put(nRec, 59, A :8.8)
!-----------------------------------------------------------
! FIELD : HEUCAM2 
#define S_GEEX6300_BP_HEUCAM2 peel(pick(nPos, 67, 6), " ")
#define R_GEEX6300_BP_HEUCAM2(A) put(nRec, 67, A :6.6)
!-----------------------------------------------------------
! FIELD : ETATOU 
#define S_GEEX6300_BP_ETATOU peel(pick(nPos, 73, 2), " ")
#define R_GEEX6300_BP_ETATOU(A) put(nRec, 73, A :2.2)
!-----------------------------------------------------------
! FIELD : CODCAM 
#define S_GEEX6300_BP_CODCAM peel(pick(nPos, 75, 14), " ")
#define R_GEEX6300_BP_CODCAM(A) put(nRec, 75, A :14.14)
!-----------------------------------------------------------
! FIELD : CODCHF 
#define S_GEEX6300_BP_CODCHF peel(pick(nPos, 89, 10), " ")
#define R_GEEX6300_BP_CODCHF(A) put(nRec, 89, A :10.10)
!-----------------------------------------------------------
! FIELD : DATEXP 
#define S_GEEX6300_BP_DATEXP peel(pick(nPos, 99, 8), " ")
#define R_GEEX6300_BP_DATEXP(A) put(nRec, 99, A :8.8)
!-----------------------------------------------------------
! FIELD : HEUEXP 
#define S_GEEX6300_BP_HEUEXP peel(pick(nPos, 107, 6), " ")
#define R_GEEX6300_BP_HEUEXP(A) put(nRec, 107, A :6.6)
!-----------------------------------------------------------
! FIELD : CODSIT 
#define S_GEEX6300_BP_CODSIT peel(pick(nPos, 113, 3), " ")
#define R_GEEX6300_BP_CODSIT(A) put(nRec, 113, A :3.3)
!-----------------------------------------------------------
! FIELD : SITRCT 
#define S_GEEX6300_BP_SITRCT peel(pick(nPos, 116, 3), " ")
#define R_GEEX6300_BP_SITRCT(A) put(nRec, 116, A :3.3)
!-----------------------------------------------------------
! FIELD : TYPTRT 
#define S_GEEX6300_BP_TYPTRT peel(pick(nPos, 119, 1), " ")
#define R_GEEX6300_BP_TYPTRT(A) put(nRec, 119, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX6300_BP_DISEXC peel(pick(nPos, 120, 137), " ")
#define R_GEEX6300_BP_DISEXC(A) put(nRec, 120, A :137.137)
!-----------------------------------------------------------
! FIELD : CLILIV 
#define S_GEEX6300_BP_CLILIV peel(pick(nPos, 257, 14), " ")
#define R_GEEX6300_BP_CLILIV(A) put(nRec, 257, A :14.14)
!-----------------------------------------------------------
! FIELD : TOULIV 
#define S_GEEX6300_BP_TOULIV peel(pick(nPos, 271, 4), " ")
#define R_GEEX6300_BP_TOULIV(A) put(nRec, 271, A :4.4)
!-----------------------------------------------------------
! FIELD : CUMSUP 
#define S_GEEX6300_BP_CUMSUP peel(pick(nPos, 275, 4), " ")
#define R_GEEX6300_BP_CUMSUP(A) put(nRec, 275, A :4.4)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX6320 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX6320_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX6320_BP_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX6320_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX6320_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX6320_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX6320_BP_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX6320_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX6320_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMSUP 
#define S_GEEX6320_BP_NUMSUP peel(pick(nPos, 7, 8), " ")
#define R_GEEX6320_BP_NUMSUP(A) put(nRec, 7, A :8.8)
!-----------------------------------------------------------
! FIELD : SNUSUP 
#define S_GEEX6320_BP_SNUSUP peel(pick(nPos, 15, 3), " ")
#define R_GEEX6320_BP_SNUSUP(A) put(nRec, 15, A :3.3)
!-----------------------------------------------------------
! FIELD : TYPSUP 
#define S_GEEX6320_BP_TYPSUP peel(pick(nPos, 18, 1), " ")
#define R_GEEX6320_BP_TYPSUP(A) put(nRec, 18, A :1.1)
!-----------------------------------------------------------
! FIELD : ETASUP 
#define S_GEEX6320_BP_ETASUP peel(pick(nPos, 19, 2), " ")
#define R_GEEX6320_BP_ETASUP(A) put(nRec, 19, A :2.2)
!-----------------------------------------------------------
! FIELD : LIBSUP 
#define S_GEEX6320_BP_LIBSUP peel(pick(nPos, 21, 30), " ")
#define R_GEEX6320_BP_LIBSUP(A) put(nRec, 21, A :30.30)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX6320_BP_CODPAL peel(pick(nPos, 51, 18), " ")
#define R_GEEX6320_BP_CODPAL(A) put(nRec, 51, A :18.18)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX6320_BP_REFLIV peel(pick(nPos, 69, 30), " ")
#define R_GEEX6320_BP_REFLIV(A) put(nRec, 69, A :30.30)
!-----------------------------------------------------------
! FIELD : NUMCMP 
#define S_GEEX6320_BP_NUMCMP peel(pick(nPos, 99, 8), " ")
#define R_GEEX6820_BP_NUMCMP(A) put(nRec, 99, A :8.8)
!-----------------------------------------------------------
! FIELD : SNUCMP 
#define S_GEEX6320_BP_SNUCMP peel(pick(nPos, 107, 3), " ")
#define R_GEEX6320_BP_SNUCMP(A) put(nRec, 107, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPALC 
#define S_GEEX6320_CBP_ODPALC peel(pick(nPos, 110, 18), " ")
#define R_GEEX6320_CBP_ODPALC(A) put(nRec, 110, A :18.18)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX6320_BP_DISEXC peel(pick(nPos, 128, 129), " ")
#define R_GEEX6320_BP_DISEXC(A) put(nRec, 128, A :129.129)
!===========================================================
! Line : GEEX6325 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX6325_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX6325_BP_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX6325_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX6325_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX6325_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX6325_BP_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX6325_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX6325_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMSUP 
#define S_GEEX6325_BP_NUMSUP peel(pick(nPos, 7, 8), " ")
#define R_GEEX6325_BP_NUMSUP(A) put(nRec, 7, A :8.8)
!-----------------------------------------------------------
! FIELD : SNUSUP 
#define S_GEEX6325_BP_SNUSUP peel(pick(nPos, 15, 3), " ")
#define R_GEEX6325_BP_SNUSUP(A) put(nRec, 15, A :3.3)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX6325_BP_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX6335_BP_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX6325_BP_REFLIV peel(pick(nPos, 21, 30), " ")
#define R_GEEX6325_BP_REFLIV(A) put(nRec, 21, A :30.30)
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_GEEX6325_BP_CODRUB peel(pick(nPos, 51, 4), " ")
#define R_GEEX6325_BP_CODRUB(A) put(nRec, 51, A :4.4)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX6325_BP_VALRUB peel(pick(nPos, 55, 35), " ")
#define R_GEEX6325_BP_VALRUB(A) put(nRec, 55, A :35.35)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX6325_BP_DISEXC peel(pick(nPos, 90, 50), " ")
#define R_GEEX6325_BP_DISEXC(A) put(nRec, 90, A :50.50)
!===========================================================
! Line : GEEX9900 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9900_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9900_BP_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9900_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9900_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9900_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9900_BP_SCOEXC(A) put(nRec, 4, A :2.2)
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
#define R_GEEX9900_BP_DATEXC(A) put(nRec, 35, A :8.8)
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_GEEX9900_BP_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_GEEX9900_BP_HEUEXC(A) put(nRec, 43, A :6.6)
!-----------------------------------------------------------
! FIELD : NUMEXC 
#define S_GEEX9900_BP_NUMEXC peel(pick(nPos, 49, 7), " ")
#define R_GEEX9900_BP_NUMEXC(A) put(nRec, 49, A :7.7)
!-----------------------------------------------------------
! FIELD : CPTEXC 
#define S_GEEX9900_BP_CPTEXC peel(pick(nPos, 56, 8), " ")
#define R_GEEX9900_BP_CPTEXC(A) put(nRec, 56, A :8.8)
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

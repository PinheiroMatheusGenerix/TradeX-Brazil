! File GEEX63: 
!===========================================================
! Line : GEEX0000 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX0000_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX0000_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX0000_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX0000_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX0000_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX0000_SCOEXC(A) put(nRec, 4, A :2.2)
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
#define R_GEEX0000_DATEXC(A) put(nRec, 35, A :8.8)
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_GEEX0000_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_GEEX0000_HEUEXC(A) put(nRec, 43, A :6.6)
!-----------------------------------------------------------
! FIELD : NUMEXC 
#define S_GEEX0000_NUMEXC peel(pick(nPos, 49, 7), " ")
#define R_GEEX0000_NUMEXC(A) put(nRec, 49, A :7.7)
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
#define R_GEEX0000_IGLSIT(A) put(nRec, 172, A :3.3)
!-----------------------------------------------------------
! FIELD : EDISIT 
#define S_GEEX0000_EDISIT peel(pick(nPos, 175, 14), " ")
#define R_GEEX0000_EDISIT(A) put(nRec, 175, A :14.14)
!-----------------------------------------------------------
! FIELD : IMAEXC 
#define S_GEEX0000_IMAEXC peel(pick(nPos, 189, 8), " ")
#define R_GEEX0000_IMAEXC(A) put(nRec, 189, A :8.8)
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
! Line : GEEX6300 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX6300_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX6300_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX6300_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX6300_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX6300_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX6300_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX6300_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX6300_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : REFMIT 
#define S_GEEX6300_REFMIT peel(pick(nPos, 7, 30), " ")
#define R_GEEX6300_REFMIT(A) put(nRec, 7, A :30.30)
!-----------------------------------------------------------
! FIELD : NUMTOU 
#define S_GEEX6300_NUMTOU peel(pick(nPos, 37, 8), " ")
#define R_GEEX6300_NUMTOU(A) put(nRec, 37, A :8.8)
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_GEEX6300_CODTRA peel(pick(nPos, 45, 14), " ")
#define R_GEEX6300_CODTRA(A) put(nRec, 45, A :14.14)
!-----------------------------------------------------------
! FIELD : DATCAM2 
#define S_GEEX6300_DATCAM2 peel(pick(nPos, 59, 8), " ")
#define R_GEEX680_DATCAM2(A) put(nRec, 59, A :8.8)
!-----------------------------------------------------------
! FIELD : HEUCAM2 
#define S_GEEX6300_HEUCAM2 peel(pick(nPos, 67, 6), " ")
#define R_GEEX660_HEUCAM2(A) put(nRec, 67, A :6.6)
!-----------------------------------------------------------
! FIELD : ETATOU 
#define S_GEEX6300_ETATOU peel(pick(nPos, 73, 2), " ")
#define R_GEEX6300_ETATOU(A) put(nRec, 73, A :2.2)
!-----------------------------------------------------------
! FIELD : CODCAM 
#define S_GEEX6300_CODCAM peel(pick(nPos, 75, 14), " ")
#define R_GEEX6300_CODCAM(A) put(nRec, 75, A :14.14)
!-----------------------------------------------------------
! FIELD : CODCHF 
#define S_GEEX6300_CODCHF peel(pick(nPos, 89, 10), " ")
#define R_GEEX6300_CODCHF(A) put(nRec, 89, A :10.10)
!-----------------------------------------------------------
! FIELD : DATEXP 
#define S_GEEX6300_DATEXP peel(pick(nPos, 99, 8), " ")
#define R_GEEX6300_DATEXP(A) put(nRec, 99, A :8.8)
!-----------------------------------------------------------
! FIELD : HEUEXP 
#define S_GEEX6300_HEUEXP peel(pick(nPos, 107, 6), " ")
#define R_GEEX6300_HEUEXP(A) put(nRec, 107, A :6.6)
!-----------------------------------------------------------
! FIELD : CODSIT 
#define S_GEEX6300_CODSIT peel(pick(nPos, 113, 3), " ")
#define R_GEEX6300_CODSIT(A) put(nRec, 113, A :3.3)
!-----------------------------------------------------------
! FIELD : SITRCT 
#define S_GEEX6300_SITRCT peel(pick(nPos, 116, 3), " ")
#define R_GEEX6300_SITRCT(A) put(nRec, 116, A :3.3)
!-----------------------------------------------------------
! FIELD : TYPTRT 
#define S_GEEX6300_TYPTRT peel(pick(nPos, 119, 1), " ")
#define R_GEEX6100_TYPTRT(A) put(nRec, 119, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX6300_DISEXC peel(pick(nPos, 120, 137), " ")
#define R_GEEX6300_DISEXC(A) put(nRec, 120, A :137.137)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX6320 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX6320_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX6320_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX6320_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX6320_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX6320_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX6320_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX6320_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX6320_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMSUP 
#define S_GEEX6320_NUMSUP peel(pick(nPos, 7, 8), " ")
#define R_GEEX6320_NUMSUP(A) put(nRec, 7, A :8.8)
!-----------------------------------------------------------
! FIELD : SNUSUP 
#define S_GEEX6320_SNUSUP peel(pick(nPos, 15, 3), " ")
#define R_GEEX6320_SNUSUP(A) put(nRec, 15, A :3.3)
!-----------------------------------------------------------
! FIELD : TYPSUP 
#define S_GEEX6320_TYPSUP peel(pick(nPos, 18, 1), " ")
#define R_GEEX6320_TYPSUP(A) put(nRec, 18, A :1.1)
!-----------------------------------------------------------
! FIELD : ETASUP 
#define S_GEEX6320_ETASUP peel(pick(nPos, 19, 2), " ")
#define R_GEEX6320_ETASUP(A) put(nRec, 19, A :2.2)
!-----------------------------------------------------------
! FIELD : LIBSUP 
#define S_GEEX6320_LIBSUP peel(pick(nPos, 21, 30), " ")
#define R_GEEX6320_LIBSUP(A) put(nRec, 21, A :30.30)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX6320_CODPAL peel(pick(nPos, 51, 18), " ")
#define R_GEEX6320_CODPAL(A) put(nRec, 51, A :18.18)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX6320_REFLIV peel(pick(nPos, 69, 30), " ")
#define R_GEEX6320_REFLIV(A) put(nRec, 69, A :30.30)
!-----------------------------------------------------------
! FIELD : NUMCMP 
#define S_GEEX6320_NUMCMP peel(pick(nPos, 99, 8), " ")
#define R_GEEX6820_NUMCMP(A) put(nRec, 99, A :8.8)
!-----------------------------------------------------------
! FIELD : SNUCMP 
#define S_GEEX6320_SNUCMP peel(pick(nPos, 107, 3), " ")
#define R_GEEX6320_SNUCMP(A) put(nRec, 107, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPALC 
#define S_GEEX6320_CODPALC peel(pick(nPos, 110, 18), " ")
#define R_GEEX6320_CODPALC(A) put(nRec, 110, A :18.18)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX6320_DISEXC peel(pick(nPos, 128, 129), " ")
#define R_GEEX6320_DISEXC(A) put(nRec, 128, A :129.129)
!===========================================================
! Line : GEEX6325 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX6325_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX6325_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX6325_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX6325_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX6325_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX6325_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX6325_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX6325_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMSUP 
#define S_GEEX6325_NUMSUP peel(pick(nPos, 7, 8), " ")
#define R_GEEX6325_NUMSUP(A) put(nRec, 7, A :8.8)
!-----------------------------------------------------------
! FIELD : SNUSUP 
#define S_GEEX6325_SNUSUP peel(pick(nPos, 15, 3), " ")
#define R_GEEX6325_SNUSUP(A) put(nRec, 15, A :3.3)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX6325_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX6335_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX6325_REFLIV peel(pick(nPos, 21, 30), " ")
#define R_GEEX6325_REFLIV(A) put(nRec, 21, A :30.30)
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_GEEX6325_CODRUB peel(pick(nPos, 51, 4), " ")
#define R_GEEX6325_CODRUB(A) put(nRec, 51, A :4.4)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX6325_VALRUB peel(pick(nPos, 55, 35), " ")
#define R_GEEX6325_VALRUB(A) put(nRec, 55, A :35.35)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX6325_DISEXC peel(pick(nPos, 90, 50), " ")
#define R_GEEX6325_DISEXC(A) put(nRec, 90, A :50.50)
!===========================================================
! Line : GEEX9900 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9900_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9900_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9900_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9900_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9900_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9900_SCOEXC(A) put(nRec, 4, A :2.2)
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
#define R_GEEX9900_DATEXC(A) put(nRec, 35, A :8.8)
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_GEEX9900_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_GEEX9900_HEUEXC(A) put(nRec, 43, A :6.6)
!-----------------------------------------------------------
! FIELD : NUMEXC 
#define S_GEEX9900_NUMEXC peel(pick(nPos, 49, 7), " ")
#define R_GEEX9900_NUMEXC(A) put(nRec, 49, A :7.7)
!-----------------------------------------------------------
! FIELD : CPTEXC 
#define S_GEEX9900_CPTEXC peel(pick(nPos, 56, 8), " ")
#define R_GEEX9900_CPTEXC(A) put(nRec, 56, A :8.8)
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

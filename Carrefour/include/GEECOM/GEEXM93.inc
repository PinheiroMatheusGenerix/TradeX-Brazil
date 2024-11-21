! File GEEX9300 : 
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
! Line : GEEX9300 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9300_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9300_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9300_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9300_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9300_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9300_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9300_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9300_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9300_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX9300_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX9300_REFLIV peel(pick(nPos, 10, 30), " ")
#define R_GEEX9300_REFLIV(A) put(nRec, 10, A :30.30)
!-----------------------------------------------------------
! FIELD : IGLSIT 
#define S_GEEX9300_IGLSIT peel(pick(nPos, 40, 3), " ")
#define R_GEEX9300_IGLSIT(A) put(nRec, 40, A :3.3)
!-----------------------------------------------------------
! FIELD : CODIMP 
#define S_GEEX9300_CODIMP peel(pick(nPos, 43, 3), " ")
#define R_GEEX9300_CODIMP(A) put(nRec, 43, A :3.3)
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_GEEX9300_CODTRA peel(pick(nPos, 46, 14), " ")
#define R_GEEX9300_CODTRA(A) put(nRec, 46, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRP 
#define S_GEEX9300_CODPRP peel(pick(nPos, 60, 10), " ")
#define R_GEEX9300_CODPRP(A) put(nRec, 60, A :10.10)
!-----------------------------------------------------------
! FIELD : VOLSUP 
#define S_GEEX9300_VOLSUP peel(pick(nPos, 70, 4), " ")
#define R_GEEX9300_VOLSUP(A) put(nRec, 70, A :4.4)
!-----------------------------------------------------------
! FIELD : LIVPAC 
#define S_GEEX9300_LIVPAC peel(pick(nPos, 74, 1), " ")
#define R_GEEX9300_LIVPAC(A) put(nRec, 74, A :1.1)
!-----------------------------------------------------------
! FIELD : CODZEB 
#define S_GEEX9300_CODZEB peel(pick(nPos, 75, 3), " ")
#define R_GEEX9300_CODZEB(A) put(nRec, 75, A :3.3)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9300_DISEXC peel(pick(nPos, 78, 179), " ")
#define R_GEEX9300_DISEXC(A) put(nRec, 78, A :179.179)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9320 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9320_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9320_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9320_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9320_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9320_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9320_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9320_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9320_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9320_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX9320_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX9320_REFLIV peel(pick(nPos, 10, 30), " ")
#define R_GEEX9320_REFLIV(A) put(nRec, 10, A :30.30)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX9320_CODPRO peel(pick(nPos, 40, 17), " ")
#define R_GEEX9320_CODPRO(A) put(nRec, 40, A :17.17)
!-----------------------------------------------------------
! FIELD : UVCLIV 
#define S_GEEX9320_UVCLIV peel(pick(nPos, 57, 9), " ")
#define R_GEEX9320_UVCLIV(A) put(nRec, 57, A :9.9)
!-----------------------------------------------------------
! FIELD : POILIV 
#define S_GEEX9320_POILIV peel(pick(nPos, 66, 11), " ")
#define R_GEEX9320_POILIV(A) put(nRec, 66, A :11.11)
!-----------------------------------------------------------
! FIELD : NUMSUP 
#define S_GEEX9320_NUMSUP peel(pick(nPos, 77, 8), " ")
#define R_GEEX9320_NUMSUP(A) put(nRec, 77, A :8.8)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9320_DISEXC peel(pick(nPos, 85, 172), " ")
#define R_GEEX9320_DISEXC(A) put(nRec, 85, A :172.172)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9330 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9330_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9330_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9330_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9330_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9330_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9330_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9330_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9330_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9330_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX9330_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX9330_REFLIV peel(pick(nPos, 10, 30), " ")
#define R_GEEX9330_REFLIV(A) put(nRec, 10, A :30.30)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX9330_CODPRO peel(pick(nPos, 40, 17), " ")
#define R_GEEX9330_CODPRO(A) put(nRec, 40, A :17.17)
!-----------------------------------------------------------
! FIELD : CODSER 
#define S_GEEX9330_CODSER peel(pick(nPos, 57, 30), " ")
#define R_GEEX9330_CODSER(A) put(nRec, 57, A :30.30)
!-----------------------------------------------------------
! FIELD : NUMSUP 
#define S_GEEX9330_NUMSUP peel(pick(nPos, 87, 8), " ")
#define R_GEEX9330_NUMSUP(A) put(nRec, 87, A :8.8)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9330_DISEXC peel(pick(nPos, 95, 162), " ")
#define R_GEEX9330_DISEXC(A) put(nRec, 95, A :162.162)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9399 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9399_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9399_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9399_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9399_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9399_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9399_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9399_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9399_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX9399_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX9399_NUMLIV(A) put(nRec, 7, A :8.8)
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX9399_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX9399_SNULIV(A) put(nRec, 15, A :3.3)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9399_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX9399_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX9399_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX9399_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX9399_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX9399_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : CUMLIG 
#define S_GEEX9399_CUMLIG peel(pick(nPos, 65, 4), " ")
#define R_GEEX9399_CUMLIG(A) put(nRec, 65, A :4.4)
!-----------------------------------------------------------
! FIELD : MVTEXC 
#define S_GEEX9399_MVTEXC peel(pick(nPos, 69, 8), " ")
#define R_GEEX9399_MVTEXC(A) put(nRec, 69, A :8.8)
!-----------------------------------------------------------
! FIELD : CUMSUP 
#define S_GEEX9399_CUMSUP peel(pick(nPos, 77, 5), " ")
#define R_GEEX9399_CUMSUP(A) put(nRec, 77, A :5.5)
!-----------------------------------------------------------
! FIELD : COLTOT 
#define S_GEEX9399_COLTOT peel(pick(nPos, 82, 9), " ")
#define R_GEEX9399_COLTOT(A) put(nRec, 82, A :9.9)
!-----------------------------------------------------------
! FIELD : TOTPRO 
#define S_GEEX9399_TOTPRO peel(pick(nPos, 91, 5), " ")
#define R_GEEX9399_TOTPRO(A) put(nRec, 91, A :5.5)
!-----------------------------------------------------------
! FIELD : PDBLIV 
#define S_GEEX9399_PDBLIV peel(pick(nPos, 96, 11), " ")
#define R_GEEX9399_PDBLIV(A) put(nRec, 96, A :11.11)
!-----------------------------------------------------------
! FIELD : PDNLIV 
#define S_GEEX9399_PDNLIV peel(pick(nPos, 107, 11), " ")
#define R_GEEX9399_PDNLIV(A) put(nRec, 107, A :11.11)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9399_DISEXC peel(pick(nPos, 118, 139), " ")
#define R_GEEX9399_DISEXC(A) put(nRec, 118, A :139.139)
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

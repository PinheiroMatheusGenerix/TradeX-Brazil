! File M62 : 

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
#define R_GEEX0000_IGLSIT(A) put(nRec, 172, A :3.3)
!-----------------------------------------------------------
! FIELD : EDISIT 
#define S_GEEX0000_EDISIT peel(pick(nPos, 175, 14), " ")
#define R_GEEX0000_EDISIT(A) put(nRec, 175, A :14.14)
!-----------------------------------------------------------
! FIELD : IMAEXC 
#define S_GEEX0000_IMAEXC peel(pick(nPos, 189, 8), " ")
#define R_GEEX0000_IMAEXC(A) put(nRec, 189, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX0000_DISEXC peel(pick(nPos, 197, 60), " ")
#define R_GEEX0000_DISEXC(A) put(nRec, 197, A :60.60)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX6200 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX6200_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX6200_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX6200_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX6200_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX6200_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX6200_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX6200_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX6200_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : REFMIT 
#define S_GEEX6200_REFMIT peel(pick(nPos, 7, 30), " ")
#define R_GEEX6200_REFMIT(A) put(nRec, 7, A :30.30)
!-----------------------------------------------------------
! FIELD : DATLIV 
#define S_GEEX6200_DATLIV peel(pick(nPos, 37, 8), " ")
#define R_GEEX6200_DATLIV(A) put(nRec, 37, A :8.8)
!-----------------------------------------------------------
! FIELD : TOULIV 
#define S_GEEX6200_TOULIV peel(pick(nPos, 45, 4), " ")
#define R_GEEX6200_TOULIV(A) put(nRec, 45, A :4.4)
!-----------------------------------------------------------
! FIELD : KAILIV 
#define S_GEEX6200_KAILIV peel(pick(nPos, 49, 3), " ")
#define R_GEEX6200_KAILIV(A) put(nRec, 49, A :3.3)
!-----------------------------------------------------------
! FIELD : PTYTRT 
#define S_GEEX6200_PTYTRT peel(pick(nPos, 52, 2), " ")
#define R_GEEX6200_PTYTRT(A) put(nRec, 52, A :2.2)
!-----------------------------------------------------------
! FIELD : DATCHT 
#define S_GEEX6200_DATCHT peel(pick(nPos, 54, 8), " ")
#define R_GEEX6200_DATCHT(A) put(nRec, 54, A :8.8)
!-----------------------------------------------------------
! FIELD : HEUCHT 
#define S_GEEX6200_HEUCHT peel(pick(nPos, 62, 6), " ")
#define R_GEEX6200_HEUCHT(A) put(nRec, 62, A :6.6)
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_GEEX6200_CODTRA peel(pick(nPos, 68, 14), " ")
#define R_GEEX6200_CODTRA(A) put(nRec, 68, A :14.14)
!-----------------------------------------------------------
! FIELD : CODCAM 
#define S_GEEX6200_CODCAM peel(pick(nPos, 82, 14), " ")
#define R_GEEX6200_CODCAM(A) put(nRec, 82, A :14.14)
!-----------------------------------------------------------
! FIELD : CODCHF 
#define S_GEEX6200_CODCHF peel(pick(nPos, 96, 10), " ")
#define R_GEEX6200_CODCHF(A) put(nRec, 96, A :10.10)
!-----------------------------------------------------------
! FIELD : CODPRT 
#define S_GEEX6200_CODPRT peel(pick(nPos, 106, 3), " ")
#define R_GEEX6200_CODPRT(A) put(nRec, 106, A :3.3)
!-----------------------------------------------------------
! FIELD : MSGEXP 
#define S_GEEX6200_MSGEXP peel(pick(nPos, 109, 80), " ")
#define R_GEEX6200_MSGEXP(A) put(nRec, 109, A :80.80)
!-----------------------------------------------------------
! FIELD : IGLSIT 
#define S_GEEX6200_IGLSIT peel(pick(nPos, 189, 3), " ")
#define R_GEEX6200_IGLSIT(A) put(nRec, 189, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMTOU 
#define S_GEEX6200_NUMTOU peel(pick(nPos, 192, 8), " ")
#define R_GEEX6200_NUMTOU(A) put(nRec, 192, A :8.8)
!-----------------------------------------------------------
! FIELD : ZONSPF 
#define S_GEEX6200_ZONSPF peel(pick(nPos, 200, 50), " ")
#define R_GEEX6200_ZONSPF(A) put(nRec, 200, A :50.50)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX6200_DISEXC peel(pick(nPos, 250, 7), " ")
#define R_GEEX6200_DISEXC(A) put(nRec, 250, A :7.7)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX6220 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX6220_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX6220_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX6220_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX6220_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX6220_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX6220_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX6220_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX6220_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : REFMIT 
#define S_GEEX6220_REFMIT peel(pick(nPos, 7, 30), " ")
#define R_GEEX6220_REFMIT(A) put(nRec, 7, A :30.30)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX6220_NUMLIV peel(pick(nPos, 37, 8), " ")
#define R_GEEX6220_NUMLIV(A) put(nRec, 37, A :8.8)
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX6220_SNULIV peel(pick(nPos, 45, 3), " ")
#define R_GEEX6220_SNULIV(A) put(nRec, 45, A :3.3)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX6220_REFLIV peel(pick(nPos, 48, 30), " ")
#define R_GEEX6220_REFLIV(A) put(nRec, 48, A :30.30)
!-----------------------------------------------------------
! FIELD : ORDLIV 
#define S_GEEX6220_ORDLIV peel(pick(nPos, 78, 4), " ")
#define R_GEEX6220_ORDLIV(A) put(nRec, 78, A :4.4)
!-----------------------------------------------------------
! FIELD : CLILIV 
#define S_GEEX6220_CLILIV peel(pick(nPos, 82, 14), " ")
#define R_GEEX6220_CLILIV(A) put(nRec, 82, A :14.14)
!-----------------------------------------------------------
! FIELD : CIRPIC 
#define S_GEEX6220_CIRPIC peel(pick(nPos, 96, 3), " ")
#define R_GEEX6220_CIRPIC(A) put(nRec, 96, A :3.3)
!-----------------------------------------------------------
! FIELD : TOTSUP 
#define S_GEEX6220_TOTSUP peel(pick(nPos, 99, 3), " ")
#define R_GEEX6220_TOTSUP(A) put(nRec, 99, A :3.3)
!-----------------------------------------------------------
! FIELD : CUMPOI 
#define S_GEEX6220_CUMPOI peel(pick(nPos, 102, 11), " ")
#define R_GEEX6220_CUMPOI(A) put(nRec, 102, A :11.11)
!-----------------------------------------------------------
! FIELD : CUMVOL 
#define S_GEEX6220_CUMVOL peel(pick(nPos, 113, 11), " ")
#define R_GEEX6220_CUMVOL(A) put(nRec, 113, A :11.11)
!-----------------------------------------------------------
! FIELD : NUMSUP 
#define S_GEEX6220_NUMSUP peel(pick(nPos, 124, 8), " ")
#define R_GEEX6220_NUMSUP(A) put(nRec, 124, A :8.8)
!-----------------------------------------------------------
! FIELD : SNUSUP 
#define S_GEEX6220_SNUSUP peel(pick(nPos, 132, 3), " ")
#define R_GEEX6220_SNUSUP(A) put(nRec, 132, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX6220_CODPAL peel(pick(nPos, 135, 18), " ")
#define R_GEEX6220_CODPAL(A) put(nRec, 135, A :18.18)
!-----------------------------------------------------------
! FIELD : KAILIV 
#define S_GEEX6220_KAILIV peel(pick(nPos, 153, 3), " ")
#define R_GEEX6220_KAILIV(A) put(nRec, 153, A :3.3)
!-----------------------------------------------------------
! FIELD : PTYMIS 
#define S_GEEX6220_PTYMIS peel(pick(nPos, 156, 2), " ")
#define R_GEEX6220_PTYMIS(A) put(nRec, 156, A :2.2)
!-----------------------------------------------------------
! FIELD : DATCHT 
#define S_GEEX6220_DATCHT peel(pick(nPos, 158, 8), " ")
#define R_GEEX6220_DATCHT(A) put(nRec, 158, A :8.8)
!-----------------------------------------------------------
! FIELD : HEUCHT 
#define S_GEEX6220_HEUCHT peel(pick(nPos, 166, 6), " ")
#define R_GEEX6220_HEUCHT(A) put(nRec, 166, A :6.6)
!-----------------------------------------------------------
! FIELD : SITRCT 
#define S_GEEX6220_SITRCT peel(pick(nPos, 172, 3), " ")
#define R_GEEX6220_SITRCT(A) put(nRec, 172, A :3.3)
!-----------------------------------------------------------
! FIELD : CODTYR 
#define S_GEEX6220_CODTYR peel(pick(nPos, 175, 3), " ")
#define R_GEEX6220_CODTYR(A) put(nRec, 175, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMTOU 
#define S_GEEX6220_NUMTOU peel(pick(nPos, 178, 8), " ")
#define R_GEEX6220_NUMTOU(A) put(nRec, 178, A :8.8)
!-----------------------------------------------------------
! FIELD : ZONSPF 
#define S_GEEX6220_ZONSPF peel(pick(nPos, 186, 50), " ")
#define R_GEEX6220_ZONSPF(A) put(nRec, 186, A :50.50)
!-----------------------------------------------------------
! FIELD : CODPRT 
#define S_GEEX6220_CODPRT peel(pick(nPos, 236, 3), " ")
#define R_GEEX6220_CODPRT(A) put(nRec, 236, A :3.3)
!-----------------------------------------------------------
! FIELD : CLIVIA 
#define S_GEEX6220_CLIVIA peel(pick(nPos, 239, 14), " ")
#define R_GEEX6220_CLIVIA(A) put(nRec, 239, A :14.14)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX6220_DISEXC peel(pick(nPos, 253, 4), " ")
#define R_GEEX6220_DISEXC(A) put(nRec, 253, A :4.4)
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

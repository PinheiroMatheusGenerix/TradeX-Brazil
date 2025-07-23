! File GEEXM62 : 
!===========================================================
! Line : GEEX0000 
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
! Line : GEEX6200 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX6200_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX6200_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX6200_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX6200_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX6200_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX6200_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX6200_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX6200_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : REFMIT 
#define S_GEEX6200_BP_REFMIT peel(pick(nPos, 7, 30), " ")
#define R_GEEX6200_BP_REFMIT(A) put(nRec, 7, A :30.30)
!-----------------------------------------------------------
! FIELD : DATLIV 
#define S_GEEX6200_BP_DATLIV peel(pick(nPos, 37, 8), " ")
#define R_GEEX6200_BP_DATLIV(A) put(nRec, 37, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : TOULIV 
#define S_GEEX6200_BP_TOULIV peel(pick(nPos, 45, 4), " ")
#define R_GEEX6200_BP_TOULIV(A) put(nRec, 45, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : KAILIV 
#define S_GEEX6200_BP_KAILIV peel(pick(nPos, 49, 3), " ")
#define R_GEEX6200_BP_KAILIV(A) put(nRec, 49, A :3.3)
!-----------------------------------------------------------
! FIELD : PTYTRT 
#define S_GEEX6200_BP_PTYTRT peel(pick(nPos, 52, 2), " ")
#define R_GEEX6200_BP_PTYTRT(A) put(nRec, 52, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : DATCHT 
#define S_GEEX6200_BP_DATCHT peel(pick(nPos, 54, 8), " ")
#define R_GEEX6200_BP_DATCHT(A) put(nRec, 54, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUCHT 
#define S_GEEX6200_BP_HEUCHT peel(pick(nPos, 62, 6), " ")
#define R_GEEX6200_BP_HEUCHT(A) put(nRec, 62, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_GEEX6200_BP_CODTRA peel(pick(nPos, 68, 14), " ")
#define R_GEEX6200_BP_CODTRA(A) put(nRec, 68, A :14.14)
!-----------------------------------------------------------
! FIELD : CODCAM 
#define S_GEEX6200_BP_CODCAM peel(pick(nPos, 82, 14), " ")
#define R_GEEX6200_BP_CODCAM(A) put(nRec, 82, A :14.14)
!-----------------------------------------------------------
! FIELD : CODCHF 
#define S_GEEX6200_BP_CODCHF peel(pick(nPos, 96, 10), " ")
#define R_GEEX6200_BP_CODCHF(A) put(nRec, 96, A :10.10)
!-----------------------------------------------------------
! FIELD : CODPRT 
#define S_GEEX6200_BP_CODPRT peel(pick(nPos, 106, 3), " ")
#define R_GEEX6200_BP_CODPRT(A) put(nRec, 106, A :3.3)
!-----------------------------------------------------------
! FIELD : MSGEXP 
#define S_GEEX6200_BP_MSGEXP peel(pick(nPos, 109, 80), " ")
#define R_GEEX6200_BP_MSGEXP(A) put(nRec, 109, A :80.80)
!-----------------------------------------------------------
! FIELD : IGLSIT 
#define S_GEEX6200_BP_IGLSIT peel(pick(nPos, 189, 3), " ")
#define R_GEEX6200_BP_IGLSIT(A) put(nRec, 189, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : NUMTOU 
#define S_GEEX6200_BP_NUMTOU peel(pick(nPos, 192, 8), " ")
#define R_GEEX6200_BP_NUMTOU(A) put(nRec, 192, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : ZONSPF 
#define S_GEEX6200_BP_ZONSPF peel(pick(nPos, 200, 50), " ")
#define R_GEEX6200_BP_ZONSPF(A) put(nRec, 200, A :50.50)
!-----------------------------------------------------------
! FIELD : CODLDE 
#define S_GEEX6200_BP_CODLDE peel(pick(nPos, 250, 3), " ")
#define R_GEEX6200_BP_CODLDE(A) put(nRec, 250, A :3.3)
!-----------------------------------------------------------
! FIELD : TYPTPT 
#define S_GEEX6200_BP_TYPTPT peel(pick(nPos, 253, 3), " ")
#define R_GEEX6200_BP_TYPTPT(A) put(nRec, 253, A :3.3)
!-----------------------------------------------------------
! FIELD : TOPDEP 
#define S_GEEX6200_BP_TOPDEP peel(pick(nPos, 256, 1), " ")
#define R_GEEX6200_BP_TOPDEP(A) put(nRec, 256, A :1.1)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX6201 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX6201_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX6201_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX6201_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX6201_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX6201_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX6201_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX6201_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX6201_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : REFMIT 
#define S_GEEX6201_BP_REFMIT peel(pick(nPos, 7, 30), " ")
#define R_GEEX6201_BP_REFMIT(A) put(nRec, 7, A :30.30)
!-----------------------------------------------------------
! FIELD : DATARR 
#define S_GEEX6201_BP_DATARR peel(pick(nPos, 37, 8), " ")
#define R_GEEX6201_BP_DATARR(A) put(nRec, 37, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUARR 
#define S_GEEX6201_BP_HEUARR peel(pick(nPos, 45, 4), " ")
#define R_GEEX6201_BP_HEUARR(A) put(nRec, 45, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : DATSOR 
#define S_GEEX6201_BP_DATSOR peel(pick(nPos, 49, 8), " ")
#define R_GEEX6201_BP_DATSOR(A) put(nRec, 49, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUSOR 
#define S_GEEX6201_BP_HEUSOR peel(pick(nPos, 57, 4), " ")
#define R_GEEX6201_BP_HEUSOR(A) put(nRec, 57, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : ZONSPF 
#define S_GEEX6201_BP_ZONSPF peel(pick(nPos, 61, 50), " ")
#define R_GEEX6201_BP_ZONSPF(A) put(nRec, 61, A :50.50)
!-----------------------------------------------------------
! FIELD : SITRCT 
#define S_GEEX6201_BP_SITRCT peel(pick(nPos, 111, 3), " ")
#define R_GEEX6201_BP_SITRCT(A) put(nRec, 111, A :3.3)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX6201_BP_DISEXC peel(pick(nPos, 114, 143), " ")
#define R_GEEX6201_BP_DISEXC(A) put(nRec, 114, A :143.143)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX6220 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX6220_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX6220_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX6220_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX6220_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX6220_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX6220_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX6220_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX6220_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : REFMIT 
#define S_GEEX6220_BP_REFMIT peel(pick(nPos, 7, 30), " ")
#define R_GEEX6220_BP_REFMIT(A) put(nRec, 7, A :30.30)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX6220_BP_NUMLIV peel(pick(nPos, 37, 8), " ")
#define R_GEEX6220_BP_NUMLIV(A) put(nRec, 37, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX6220_BP_SNULIV peel(pick(nPos, 45, 3), " ")
#define R_GEEX6220_BP_SNULIV(A) put(nRec, 45, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX6220_BP_REFLIV peel(pick(nPos, 48, 30), " ")
#define R_GEEX6220_BP_REFLIV(A) put(nRec, 48, A :30.30)
!-----------------------------------------------------------
! FIELD : ORDLIV 
#define S_GEEX6220_BP_ORDLIV peel(pick(nPos, 78, 4), " ")
#define R_GEEX6220_BP_ORDLIV(A) put(nRec, 78, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : CLILIV 
#define S_GEEX6220_BP_CLILIV peel(pick(nPos, 82, 14), " ")
#define R_GEEX6220_BP_CLILIV(A) put(nRec, 82, A :14.14)
!-----------------------------------------------------------
! FIELD : CIRPIC 
#define S_GEEX6220_BP_CIRPIC peel(pick(nPos, 96, 3), " ")
#define R_GEEX6220_BP_CIRPIC(A) put(nRec, 96, A :3.3)
!-----------------------------------------------------------
! FIELD : TOTSUP 
#define S_GEEX6220_BP_TOTSUP peel(pick(nPos, 99, 3), " ")
#define R_GEEX6220_BP_TOTSUP(A) put(nRec, 99, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CUMPOI 
#define S_GEEX6220_BP_CUMPOI peel(pick(nPos, 102, 11), " ")
#define R_GEEX6220_BP_CUMPOI(A) put(nRec, 102, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : CUMVOL 
#define S_GEEX6220_BP_CUMVOL peel(pick(nPos, 113, 11), " ")
#define R_GEEX6220_BP_CUMVOL(A) put(nRec, 113, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : NUMSUP 
#define S_GEEX6220_BP_NUMSUP peel(pick(nPos, 124, 8), " ")
#define R_GEEX6220_BP_NUMSUP(A) put(nRec, 124, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUSUP 
#define S_GEEX6220_BP_SNUSUP peel(pick(nPos, 132, 3), " ")
#define R_GEEX6220_BP_SNUSUP(A) put(nRec, 132, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX6220_BP_CODPAL peel(pick(nPos, 135, 18), " ")
#define R_GEEX6220_BP_CODPAL(A) put(nRec, 135, A :18.18)
!-----------------------------------------------------------
! FIELD : KAILIV 
#define S_GEEX6220_BP_KAILIV peel(pick(nPos, 153, 3), " ")
#define R_GEEX6220_BP_KAILIV(A) put(nRec, 153, A :3.3)
!-----------------------------------------------------------
! FIELD : PTYMIS 
#define S_GEEX6220_BP_PTYMIS peel(pick(nPos, 156, 2), " ")
#define R_GEEX6220_BP_PTYMIS(A) put(nRec, 156, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : DATCHT 
#define S_GEEX6220_BP_DATCHT peel(pick(nPos, 158, 8), " ")
#define R_GEEX6220_BP_DATCHT(A) put(nRec, 158, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUCHT 
#define S_GEEX6220_BP_HEUCHT peel(pick(nPos, 166, 6), " ")
#define R_GEEX6220_BP_HEUCHT(A) put(nRec, 166, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : SITRCT 
#define S_GEEX6220_BP_SITRCT peel(pick(nPos, 172, 3), " ")
#define R_GEEX6220_BP_SITRCT(A) put(nRec, 172, A :3.3)
!-----------------------------------------------------------
! FIELD : CODTYR 
#define S_GEEX6220_BP_CODTYR peel(pick(nPos, 175, 3), " ")
#define R_GEEX6220_BP_CODTYR(A) put(nRec, 175, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMTOU 
#define S_GEEX6220_BP_NUMTOU peel(pick(nPos, 178, 8), " ")
#define R_GEEX6220_BP_NUMTOU(A) put(nRec, 178, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : ZONSPF 
#define S_GEEX6220_BP_ZONSPF peel(pick(nPos, 186, 50), " ")
#define R_GEEX6220_BP_ZONSPF(A) put(nRec, 186, A :50.50)
!-----------------------------------------------------------
! FIELD : CODPRT 
#define S_GEEX6220_BP_CODPRT peel(pick(nPos, 236, 3), " ")
#define R_GEEX6220_BP_CODPRT(A) put(nRec, 236, A :3.3)
!-----------------------------------------------------------
! FIELD : CLIVIA 
#define S_GEEX6220_BP_CLIVIA peel(pick(nPos, 239, 14), " ")
#define R_GEEX6220_BP_CLIVIA(A) put(nRec, 239, A :14.14)
!-----------------------------------------------------------
! FIELD : INDCHT 
#define S_GEEX6220_BP_INDCHT peel(pick(nPos, 253, 1), " ")
#define R_GEEX6220_BP_INDCHT(A) put(nRec, 253, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX6220_BP_DISEXC peel(pick(nPos, 254, 3), " ")
#define R_GEEX6220_BP_DISEXC(A) put(nRec, 254, A :3.3)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX6221 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX6221_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX6221_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX6221_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX6221_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX6221_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX6221_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX6221_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX6221_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : REFMIT 
#define S_GEEX6221_BP_REFMIT peel(pick(nPos, 7, 30), " ")
#define R_GEEX6221_BP_REFMIT(A) put(nRec, 7, A :30.30)
!-----------------------------------------------------------
! FIELD : DATLIV 
#define S_GEEX6221_BP_DATLIV peel(pick(nPos, 37, 8), " ")
#define R_GEEX6221_BP_DATLIV(A) put(nRec, 37, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEULIV 
#define S_GEEX6221_BP_HEULIV peel(pick(nPos, 45, 6), " ")
#define R_GEEX6221_BP_HEULIV(A) put(nRec, 45, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : DATPTD 
#define S_GEEX6221_BP_DATPTD peel(pick(nPos, 51, 8), " ")
#define R_GEEX6221_BP_DATPTD(A) put(nRec, 51, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUPTD 
#define S_GEEX6221_BP_HEUPTD peel(pick(nPos, 59, 6), " ")
#define R_GEEX6221_BP_HEUPTD(A) put(nRec, 59, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX6221_BP_DISEXC peel(pick(nPos, 65, 192), " ")
#define R_GEEX6221_BP_DISEXC(A) put(nRec, 65, A :192.192)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX6240 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX6240_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX6240_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX6240_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX6240_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX6240_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX6240_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX6240_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX6240_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : REFMIT 
#define S_GEEX6240_BP_REFMIT peel(pick(nPos, 7, 30), " ")
#define R_GEEX6240_BP_REFMIT(A) put(nRec, 7, A :30.30)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX6240_BP_NUMREC peel(pick(nPos, 37, 8), " ")
#define R_GEEX6240_BP_NUMREC(A) put(nRec, 37, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX6240_BP_SNUREC peel(pick(nPos, 45, 3), " ")
#define R_GEEX6240_BP_SNUREC(A) put(nRec, 45, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX6240_BP_REFREC peel(pick(nPos, 48, 30), " ")
#define R_GEEX6240_BP_REFREC(A) put(nRec, 48, A :30.30)
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_GEEX6240_BP_CODFOU peel(pick(nPos, 78, 14), " ")
#define R_GEEX6240_BP_CODFOU(A) put(nRec, 78, A :14.14)
!-----------------------------------------------------------
! FIELD : DTMREC 
#define S_GEEX6240_BP_DTMREC peel(pick(nPos, 92, 8), " ")
#define R_GEEX6240_BP_DTMREC(A) put(nRec, 92, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEMREC 
#define S_GEEX6240_BP_HEMREC peel(pick(nPos, 100, 4), " ")
#define R_GEEX6240_BP_HEMREC(A) put(nRec, 100, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX6240_BP_CODACT peel(pick(nPos, 104, 3), " ")
#define R_GEEX6240_BP_CODACT(A) put(nRec, 104, A :3.3)
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_GEEX6240_BP_CODTRA peel(pick(nPos, 107, 14), " ")
#define R_GEEX6240_BP_CODTRA(A) put(nRec, 107, A :14.14)
!-----------------------------------------------------------
! FIELD : CODCAM 
#define S_GEEX6240_BP_CODCAM peel(pick(nPos, 121, 14), " ")
#define R_GEEX6240_BP_CODCAM(A) put(nRec, 121, A :14.14)
!-----------------------------------------------------------
! FIELD : CODCHF 
#define S_GEEX6240_BP_CODCHF peel(pick(nPos, 135, 10), " ")
#define R_GEEX6240_BP_CODCHF(A) put(nRec, 135, A :10.10)
!-----------------------------------------------------------
! FIELD : CODPRT 
#define S_GEEX6240_BP_CODPRT peel(pick(nPos, 145, 3), " ")
#define R_GEEX6240_BP_CODPRT(A) put(nRec, 145, A :3.3)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX6240_BP_DISEXC peel(pick(nPos, 148, 109), " ")
#define R_GEEX6240_BP_DISEXC(A) put(nRec, 148, A :109.109)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX6250 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX6250_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX6250_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX6250_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX6250_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX6250_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX6250_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX6250_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX6250_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMNAV 
#define S_GEEX6250_BP_NUMNAV peel(pick(nPos, 7, 9), " ")
#define R_GEEX6250_BP_NUMNAV(A) put(nRec, 7, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : SEQNAV 
#define S_GEEX6250_BP_SEQNAV peel(pick(nPos, 16, 4), " ")
#define R_GEEX6250_BP_SEQNAV(A) put(nRec, 16, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : NUMCNT 
#define S_GEEX6250_BP_NUMCNT peel(pick(nPos, 20, 17), " ")
#define R_GEEX6250_BP_NUMCNT(A) put(nRec, 20, A :17.17)
!-----------------------------------------------------------
! FIELD : CODNAV 
#define S_GEEX6250_BP_CODNAV peel(pick(nPos, 37, 5), " ")
#define R_GEEX6250_BP_CODNAV(A) put(nRec, 37, A :5.5)
!-----------------------------------------------------------
! FIELD : NUMSHP 
#define S_GEEX6250_BP_NUMSHP peel(pick(nPos, 42, 20), " ")
#define R_GEEX6250_BP_NUMSHP(A) put(nRec, 42, A :20.20)
!-----------------------------------------------------------
! FIELD : TYPCNT 
#define S_GEEX6250_BP_TYPCNT peel(pick(nPos, 62, 2), " ")
#define R_GEEX6250_BP_TYPCNT(A) put(nRec, 62, A :2.2)
!-----------------------------------------------------------
! FIELD : CODCIE 
#define S_GEEX6250_BP_CODCIE peel(pick(nPos, 64, 5), " ")
#define R_GEEX6250_BP_CODCIE(A) put(nRec, 64, A :5.5)
!-----------------------------------------------------------
! FIELD : DATDEP 
#define S_GEEX6250_BP_DATDEP peel(pick(nPos, 69, 8), " ")
#define R_GEEX6250_BP_DATDEP(A) put(nRec, 69, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUDEP 
#define S_GEEX6250_BP_HEUDEP peel(pick(nPos, 77, 6), " ")
#define R_GEEX6250_BP_HEUDEP(A) put(nRec, 77, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : DATARR 
#define S_GEEX6250_BP_DATARR peel(pick(nPos, 83, 8), " ")
#define R_GEEX6250_BP_DATARR(A) put(nRec, 83, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODTRS 
#define S_GEEX6250_BP_CODTRS peel(pick(nPos, 91, 5), " ")
#define R_GEEX6250_BP_CODTRS(A) put(nRec, 91, A :5.5)
!-----------------------------------------------------------
! FIELD : GABCNT 
#define S_GEEX6250_BP_GABCNT peel(pick(nPos, 96, 3), " ")
#define R_GEEX6250_BP_GABCNT(A) put(nRec, 96, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : INDDNG 
#define S_GEEX6250_BP_INDDNG peel(pick(nPos, 99, 1), " ")
#define R_GEEX6250_BP_INDDNG(A) put(nRec, 99, A :1.1)
!-----------------------------------------------------------
! FIELD : DATCHT 
#define S_GEEX6250_BP_DATCHT peel(pick(nPos, 100, 8), " ")
#define R_GEEX6250_BP_DATCHT(A) put(nRec, 100, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUCHT 
#define S_GEEX6250_BP_HEUCHT peel(pick(nPos, 108, 6), " ")
#define R_GEEX6250_BP_HEUCHT(A) put(nRec, 108, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : TYPTTR 
#define S_GEEX6250_BP_TYPTTR peel(pick(nPos, 114, 3), " ")
#define R_GEEX6250_BP_TYPTTR(A) put(nRec, 114, A :3.3)
!-----------------------------------------------------------
! FIELD : INFCPL 
#define S_GEEX6250_BP_INFCPL peel(pick(nPos, 117, 70), " ")
#define R_GEEX6250_BP_INFCPL(A) put(nRec, 117, A :70.70)
!-----------------------------------------------------------
! FIELD : SITDES 
#define S_GEEX6250_BP_SITDES peel(pick(nPos, 187, 3), " ")
#define R_GEEX6250_BP_SITDES(A) put(nRec, 187, A :3.3)
!-----------------------------------------------------------
! FIELD : REFPLB 
#define S_GEEX6250_BP_REFPLB peel(pick(nPos, 190, 10), " ")
#define R_GEEX6250_BP_REFPLB(A) put(nRec, 190, A :10.10)
!-----------------------------------------------------------
! FIELD : ETACNT 
#define S_GEEX6250_BP_ETACNT peel(pick(nPos, 200, 2), " ")
#define R_GEEX6250_BP_ETACNT(A) put(nRec, 200, A :2.2)
!-----------------------------------------------------------
! FIELD : ETANAV 
#define S_GEEX6250_BP_ETANAV peel(pick(nPos, 202, 2), " ")
#define R_GEEX6250_BP_ETANAV(A) put(nRec, 202, A :2.2)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX6250_BP_NUMREC peel(pick(nPos, 204, 8), " ")
#define R_GEEX6250_BP_NUMREC(A) put(nRec, 204, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX6250_BP_SNUREC peel(pick(nPos, 212, 3), " ")
#define R_GEEX6250_BP_SNUREC(A) put(nRec, 212, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODSIT 
#define S_GEEX6250_BP_CODSIT peel(pick(nPos, 215, 3), " ")
#define R_GEEX6250_BP_CODSIT(A) put(nRec, 215, A :3.3)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX6250_BP_DISEXC peel(pick(nPos, 218, 39), " ")
#define R_GEEX6250_BP_DISEXC(A) put(nRec, 218, A :39.39)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX6260 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX6260_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX6260_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX6260_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX6260_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX6260_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX6260_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX6260_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX6260_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMNAV 
#define S_GEEX6260_BP_NUMNAV peel(pick(nPos, 7, 9), " ")
#define R_GEEX6260_BP_NUMNAV(A) put(nRec, 7, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : SEQNAV 
#define S_GEEX6260_BP_SEQNAV peel(pick(nPos, 16, 4), " ")
#define R_GEEX6260_BP_SEQNAV(A) put(nRec, 16, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : NUMCNT 
#define S_GEEX6260_BP_NUMCNT peel(pick(nPos, 20, 17), " ")
#define R_GEEX6260_BP_NUMCNT(A) put(nRec, 20, A :17.17)
!-----------------------------------------------------------
! FIELD : CODNAV 
#define S_GEEX6260_BP_CODNAV peel(pick(nPos, 37, 5), " ")
#define R_GEEX6260_BP_CODNAV(A) put(nRec, 37, A :5.5)
!-----------------------------------------------------------
! FIELD : NUMSHP 
#define S_GEEX6260_BP_NUMSHP peel(pick(nPos, 42, 20), " ")
#define R_GEEX6260_BP_NUMSHP(A) put(nRec, 42, A :20.20)
!-----------------------------------------------------------
! FIELD : NUMSUP 
#define S_GEEX6260_BP_NUMSUP peel(pick(nPos, 62, 8), " ")
#define R_GEEX6260_BP_NUMSUP(A) put(nRec, 62, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUSUP 
#define S_GEEX6260_BP_SNUSUP peel(pick(nPos, 70, 3), " ")
#define R_GEEX6260_BP_SNUSUP(A) put(nRec, 70, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX6260_BP_CODACT peel(pick(nPos, 73, 3), " ")
#define R_GEEX6260_BP_CODACT(A) put(nRec, 73, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX6260_BP_CODPAL peel(pick(nPos, 76, 18), " ")
#define R_GEEX6260_BP_CODPAL(A) put(nRec, 76, A :18.18)
!-----------------------------------------------------------
! FIELD : CLILIV 
#define S_GEEX6260_BP_CLILIV peel(pick(nPos, 94, 14), " ")
#define R_GEEX6260_BP_CLILIV(A) put(nRec, 94, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX6260_BP_REFLIV peel(pick(nPos, 108, 30), " ")
#define R_GEEX6260_BP_REFLIV(A) put(nRec, 108, A :30.30)
!-----------------------------------------------------------
! FIELD : NUMTOU 
#define S_GEEX6260_BP_NUMTOU peel(pick(nPos, 138, 8), " ")
#define R_GEEX6260_BP_NUMTOU(A) put(nRec, 138, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : TOULIV 
#define S_GEEX6260_BP_TOULIV peel(pick(nPos, 146, 4), " ")
#define R_GEEX6260_BP_TOULIV(A) put(nRec, 146, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX6260_BP_NUMLIV peel(pick(nPos, 150, 8), " ")
#define R_GEEX6260_BP_NUMLIV(A) put(nRec, 150, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX6260_BP_SNULIV peel(pick(nPos, 158, 3), " ")
#define R_GEEX6260_BP_SNULIV(A) put(nRec, 158, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : DATLIV 
#define S_GEEX6260_BP_DATLIV peel(pick(nPos, 161, 8), " ")
#define R_GEEX6260_BP_DATLIV(A) put(nRec, 161, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : LIBSUP 
#define S_GEEX6260_BP_LIBSUP peel(pick(nPos, 169, 30), " ")
#define R_GEEX6260_BP_LIBSUP(A) put(nRec, 169, A :30.30)
!-----------------------------------------------------------
! FIELD : TYPSUP 
#define S_GEEX6260_BP_TYPSUP peel(pick(nPos, 199, 1), " ")
#define R_GEEX6260_BP_TYPSUP(A) put(nRec, 199, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX6260_BP_NUMREC peel(pick(nPos, 200, 8), " ")
#define R_GEEX6260_BP_NUMREC(A) put(nRec, 200, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX6260_BP_SNUREC peel(pick(nPos, 208, 3), " ")
#define R_GEEX6260_BP_SNUREC(A) put(nRec, 208, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX6260_BP_DISEXC peel(pick(nPos, 211, 46), " ")
#define R_GEEX6260_BP_DISEXC(A) put(nRec, 211, A :46.46)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX6270 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX6270_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX6270_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX6270_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX6270_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX6270_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX6270_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX6270_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX6270_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMNAV 
#define S_GEEX6270_BP_NUMNAV peel(pick(nPos, 7, 9), " ")
#define R_GEEX6270_BP_NUMNAV(A) put(nRec, 7, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : SEQNAV 
#define S_GEEX6270_BP_SEQNAV peel(pick(nPos, 16, 4), " ")
#define R_GEEX6270_BP_SEQNAV(A) put(nRec, 16, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : NUMCNT 
#define S_GEEX6270_BP_NUMCNT peel(pick(nPos, 20, 17), " ")
#define R_GEEX6270_BP_NUMCNT(A) put(nRec, 20, A :17.17)
!-----------------------------------------------------------
! FIELD : CODNAV 
#define S_GEEX6270_BP_CODNAV peel(pick(nPos, 37, 5), " ")
#define R_GEEX6270_BP_CODNAV(A) put(nRec, 37, A :5.5)
!-----------------------------------------------------------
! FIELD : NUMSHP 
#define S_GEEX6270_BP_NUMSHP peel(pick(nPos, 42, 20), " ")
#define R_GEEX6270_BP_NUMSHP(A) put(nRec, 42, A :20.20)
!-----------------------------------------------------------
! FIELD : NUMSUP 
#define S_GEEX6270_BP_NUMSUP peel(pick(nPos, 62, 8), " ")
#define R_GEEX6270_BP_NUMSUP(A) put(nRec, 62, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUSUP 
#define S_GEEX6270_BP_SNUSUP peel(pick(nPos, 70, 3), " ")
#define R_GEEX6270_BP_SNUSUP(A) put(nRec, 70, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX6270_BP_CODACT peel(pick(nPos, 73, 3), " ")
#define R_GEEX6270_BP_CODACT(A) put(nRec, 73, A :3.3)
!-----------------------------------------------------------
! FIELD : SEQSUP 
#define S_GEEX6270_BP_SEQSUP peel(pick(nPos, 76, 4), " ")
#define R_GEEX6270_BP_SEQSUP(A) put(nRec, 76, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX6270_BP_CODPRO peel(pick(nPos, 80, 17), " ")
#define R_GEEX6270_BP_CODPRO(A) put(nRec, 80, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX6270_BP_VALPRO peel(pick(nPos, 97, 2), " ")
#define R_GEEX6270_BP_VALPRO(A) put(nRec, 97, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : DS1PRO 
#define S_GEEX6270_BP_DS1PRO peel(pick(nPos, 99, 30), " ")
#define R_GEEX6270_BP_DS1PRO(A) put(nRec, 99, A :30.30)
!-----------------------------------------------------------
! FIELD : UVCLIV 
#define S_GEEX6270_BP_UVCLIV peel(pick(nPos, 129, 9), " ")
#define R_GEEX6270_BP_UVCLIV(A) put(nRec, 129, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX6270_BP_PCBPRO peel(pick(nPos, 138, 5), " ")
#define R_GEEX6270_BP_PCBPRO(A) put(nRec, 138, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_GEEX6270_BP_NLILIV peel(pick(nPos, 143, 5), " ")
#define R_GEEX6270_BP_NLILIV(A) put(nRec, 143, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX6270_BP_CODLOT peel(pick(nPos, 148, 20), " ")
#define R_GEEX6270_BP_CODLOT(A) put(nRec, 148, A :20.20)
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_GEEX6270_BP_DATFVI peel(pick(nPos, 168, 8), " ")
#define R_GEEX6270_BP_DATFVI(A) put(nRec, 168, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : VOLCOL 
#define S_GEEX6270_BP_VOLCOL peel(pick(nPos, 176, 7), " ")
#define R_GEEX6270_BP_VOLCOL(A) put(nRec, 176, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : PDBCOL 
#define S_GEEX6270_BP_PDBCOL peel(pick(nPos, 183, 7), " ")
#define R_GEEX6270_BP_PDBCOL(A) put(nRec, 183, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : PDNLIV 
#define S_GEEX6270_BP_PDNLIV peel(pick(nPos, 190, 11), " ")
#define R_GEEX6270_BP_PDNLIV(A) put(nRec, 190, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : INDDNG 
#define S_GEEX6270_BP_INDDNG peel(pick(nPos, 201, 1), " ")
#define R_GEEX6270_BP_INDDNG(A) put(nRec, 201, A :1.1)
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_GEEX6270_BP_EDIPRO peel(pick(nPos, 202, 17), " ")
#define R_GEEX6270_BP_EDIPRO(A) put(nRec, 202, A :17.17)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX6270_BP_DISEXC peel(pick(nPos, 219, 38), " ")
#define R_GEEX6270_BP_DISEXC(A) put(nRec, 219, A :38.38)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX6299 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX6299_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX6299_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX6299_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX6299_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX6299_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX6299_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX6299_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX6299_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : REFMIT 
#define S_GEEX6299_BP_REFMIT peel(pick(nPos, 7, 30), " ")
#define R_GEEX6299_BP_REFMIT(A) put(nRec, 7, A :30.30)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX6299_BP_DISEXC peel(pick(nPos, 37, 220), " ")
#define R_GEEX6299_BP_DISEXC(A) put(nRec, 37, A :220.220)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9900 
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
!===========================================================
! Line : GEEX9999 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9999_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9999_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9999_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9999_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9999_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9999_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9999_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9999_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : EMTEXC 
#define S_GEEX9999_BP_EMTEXC peel(pick(nPos, 7, 14), " ")
#define R_GEEX9999_BP_EMTEXC(A) put(nRec, 7, A :14.14)
!-----------------------------------------------------------
! FIELD : RCTEXC 
#define S_GEEX9999_BP_RCTEXC peel(pick(nPos, 21, 14), " ")
#define R_GEEX9999_BP_RCTEXC(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXC 
#define S_GEEX9999_BP_DATEXC peel(pick(nPos, 35, 8), " ")
#define R_GEEX9999_BP_DATEXC(A) put(nRec, 35, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_GEEX9999_BP_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_GEEX9999_BP_HEUEXC(A) put(nRec, 43, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : NUMEXC 
#define S_GEEX9999_BP_NUMEXC peel(pick(nPos, 49, 7), " ")
#define R_GEEX9999_BP_NUMEXC(A) put(nRec, 49, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : CPTEXC 
#define S_GEEX9999_BP_CPTEXC peel(pick(nPos, 56, 8), " ")
#define R_GEEX9999_BP_CPTEXC(A) put(nRec, 56, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : ERREXC 
#define S_GEEX9999_BP_ERREXC peel(pick(nPos, 64, 8), " ")
#define R_GEEX9999_BP_ERREXC(A) put(nRec, 64, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : IDEMSG 
#define S_GEEX9999_BP_IDEMSG peel(pick(nPos, 72, 30), " ")
#define R_GEEX9999_BP_IDEMSG(A) put(nRec, 72, A :30.30)
!-----------------------------------------------------------
! FIELD : DEBFIN 
#define S_GEEX9999_BP_DEBFIN peel(pick(nPos, 102, 1), " ")
#define R_GEEX9999_BP_DEBFIN(A) put(nRec, 102, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9999_BP_DISEXC peel(pick(nPos, 103, 154), " ")
#define R_GEEX9999_BP_DISEXC(A) put(nRec, 103, A :154.154)
!-----------------------------------------------------------

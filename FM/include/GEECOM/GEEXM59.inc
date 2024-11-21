! File GEEXM59 : 
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
! Line : GEEX5900 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5900_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5900_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5900_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5900_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5900_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5900_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5900_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5900_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMTOU 
#define S_GEEX5900_NUMTOU peel(pick(nPos, 7, 8), " ")
#define R_GEEX5900_NUMTOU(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATLIV 
#define S_GEEX5900_DATLIV peel(pick(nPos, 15, 8), " ")
#define R_GEEX5900_DATLIV(A) put(nRec, 15, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : TOULIV 
#define S_GEEX5900_TOULIV peel(pick(nPos, 23, 4), " ")
#define R_GEEX5900_TOULIV(A) put(nRec, 23, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : NSTLIV 
#define S_GEEX5900_NSTLIV peel(pick(nPos, 27, 2), " ")
#define R_GEEX5900_NSTLIV(A) put(nRec, 27, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : ETATOU 
#define S_GEEX5900_ETATOU peel(pick(nPos, 29, 2), " ")
#define R_GEEX5900_ETATOU(A) put(nRec, 29, A :2.2)
!-----------------------------------------------------------
! FIELD : DATPRP 
#define S_GEEX5900_DATPRP peel(pick(nPos, 31, 8), " ")
#define R_GEEX5900_DATPRP(A) put(nRec, 31, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : NUMVAG 
#define S_GEEX5900_NUMVAG peel(pick(nPos, 39, 8), " ")
#define R_GEEX5900_NUMVAG(A) put(nRec, 39, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CUMCDE 
#define S_GEEX5900_CUMCDE peel(pick(nPos, 47, 8), " ")
#define R_GEEX5900_CUMCDE(A) put(nRec, 47, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CUMPOI 
#define S_GEEX5900_CUMPOI peel(pick(nPos, 55, 22), " ")
#define R_GEEX5900_CUMPOI(A) put(nRec, 55, build(number(A):R022.0))
!-----------------------------------------------------------
! FIELD : CUMVOL 
#define S_GEEX5900_CUMVOL peel(pick(nPos, 77, 22), " ")
#define R_GEEX5900_CUMVOL(A) put(nRec, 77, build(number(A):R022.0))
!-----------------------------------------------------------
! FIELD : CUMCOL 
#define S_GEEX5900_CUMCOL peel(pick(nPos, 99, 14), " ")
#define R_GEEX5900_CUMCOL(A) put(nRec, 99, build(number(A):R014.0))
!-----------------------------------------------------------
! FIELD : CUMLIG 
#define S_GEEX5900_CUMLIG peel(pick(nPos, 113, 8), " ")
#define R_GEEX5900_CUMLIG(A) put(nRec, 113, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CUMPRD 
#define S_GEEX5900_CUMPRD peel(pick(nPos, 121, 18), " ")
#define R_GEEX5900_CUMPRD(A) put(nRec, 121, build(number(A):R018.0))
!-----------------------------------------------------------
! FIELD : CUMPRP 
#define S_GEEX5900_CUMPRP peel(pick(nPos, 139, 18), " ")
#define R_GEEX5900_CUMPRP(A) put(nRec, 139, build(number(A):R018.0))
!-----------------------------------------------------------
! FIELD : CUMEQP 
#define S_GEEX5900_CUMEQP peel(pick(nPos, 157, 18), " ")
#define R_GEEX5900_CUMEQP(A) put(nRec, 157, build(number(A):R018.0))
!-----------------------------------------------------------
! FIELD : CODBAS 
#define S_GEEX5900_CODBAS peel(pick(nPos, 175, 3), " ")
#define R_GEEX5900_CODBAS(A) put(nRec, 175, A :3.3)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5900_DISEXC peel(pick(nPos, 178, 79), " ")
#define R_GEEX5900_DISEXC(A) put(nRec, 178, A :79.79)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5901 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5901_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5901_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5901_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5901_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5901_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5901_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5901_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5901_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : TPSPRD 
#define S_GEEX5901_TPSPRD peel(pick(nPos, 7, 14), " ")
#define R_GEEX5901_TPSPRD(A) put(nRec, 7, build(number(A):R014.0))
!-----------------------------------------------------------
! FIELD : TPSPRP 
#define S_GEEX5901_TPSPRP peel(pick(nPos, 21, 14), " ")
#define R_GEEX5901_TPSPRP(A) put(nRec, 21, build(number(A):R014.0))
!-----------------------------------------------------------
! FIELD : CUMUOP 
#define S_GEEX5901_CUMUOP peel(pick(nPos, 35, 14), " ")
#define R_GEEX5901_CUMUOP(A) put(nRec, 35, build(number(A):R014.0))
!-----------------------------------------------------------
! FIELD : CUMUOT 
#define S_GEEX5901_CUMUOT peel(pick(nPos, 49, 18), " ")
#define R_GEEX5901_CUMUOT(A) put(nRec, 49, build(number(A):R018.0))
!-----------------------------------------------------------
! FIELD : DATEXP 
#define S_GEEX5901_DATEXP peel(pick(nPos, 67, 8), " ")
#define R_GEEX5901_DATEXP(A) put(nRec, 67, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXP 
#define S_GEEX5901_HEUEXP peel(pick(nPos, 75, 6), " ")
#define R_GEEX5901_HEUEXP(A) put(nRec, 75, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_GEEX5901_CODTRA peel(pick(nPos, 81, 14), " ")
#define R_GEEX5901_CODTRA(A) put(nRec, 81, A :14.14)
!-----------------------------------------------------------
! FIELD : CODCAM 
#define S_GEEX5901_CODCAM peel(pick(nPos, 95, 14), " ")
#define R_GEEX5901_CODCAM(A) put(nRec, 95, A :14.14)
!-----------------------------------------------------------
! FIELD : CODCHF 
#define S_GEEX5901_CODCHF peel(pick(nPos, 109, 10), " ")
#define R_GEEX5901_CODCHF(A) put(nRec, 109, A :10.10)
!-----------------------------------------------------------
! FIELD : MSGEXP 
#define S_GEEX5901_MSGEXP peel(pick(nPos, 119, 80), " ")
#define R_GEEX5901_MSGEXP(A) put(nRec, 119, A :80.80)
!-----------------------------------------------------------
! FIELD : TOPHIS 
#define S_GEEX5901_TOPHIS peel(pick(nPos, 199, 1), " ")
#define R_GEEX5901_TOPHIS(A) put(nRec, 199, A :1.1)
!-----------------------------------------------------------
! FIELD : CODTTO 
#define S_GEEX5901_CODTTO peel(pick(nPos, 200, 3), " ")
#define R_GEEX5901_CODTTO(A) put(nRec, 200, A :3.3)
!-----------------------------------------------------------
! FIELD : CUMACH 
#define S_GEEX5901_CUMACH peel(pick(nPos, 203, 11), " ")
#define R_GEEX5901_CUMACH(A) put(nRec, 203, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : CUMVTE 
#define S_GEEX5901_CUMVTE peel(pick(nPos, 214, 11), " ")
#define R_GEEX5901_CUMVTE(A) put(nRec, 214, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : TOPEXP 
#define S_GEEX5901_TOPEXP peel(pick(nPos, 225, 1), " ")
#define R_GEEX5901_TOPEXP(A) put(nRec, 225, A :1.1)
!-----------------------------------------------------------
! FIELD : CUMLOG 
#define S_GEEX5901_CUMLOG peel(pick(nPos, 226, 11), " ")
#define R_GEEX5901_CUMLOG(A) put(nRec, 226, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : REFCNT 
#define S_GEEX5901_REFCNT peel(pick(nPos, 237, 10), " ")
#define R_GEEX5901_REFCNT(A) put(nRec, 237, A :10.10)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5901_DISEXC peel(pick(nPos, 247, 10), " ")
#define R_GEEX5901_DISEXC(A) put(nRec, 247, A :10.10)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5902 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5902_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5902_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5902_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5902_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5902_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5902_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5902_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5902_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMPLB 
#define S_GEEX5902_NUMPLB peel(pick(nPos, 7, 16), " ")
#define R_GEEX5902_NUMPLB(A) put(nRec, 7, A :16.16)
!-----------------------------------------------------------
! FIELD : TEMCAM 
#define S_GEEX5902_TEMCAM peel(pick(nPos, 23, 4), " ")
#define R_GEEX5902_TEMCAM(A) put(nRec, 23, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : TOPAPP 
#define S_GEEX5902_TOPAPP peel(pick(nPos, 27, 1), " ")
#define R_GEEX5902_TOPAPP(A) put(nRec, 27, A :1.1)
!-----------------------------------------------------------
! FIELD : CODCAR 
#define S_GEEX5902_CODCAR peel(pick(nPos, 28, 10), " ")
#define R_GEEX5902_CODCAR(A) put(nRec, 28, A :10.10)
!-----------------------------------------------------------
! FIELD : NUMCNT 
#define S_GEEX5902_NUMCNT peel(pick(nPos, 38, 17), " ")
#define R_GEEX5902_NUMCNT(A) put(nRec, 38, A :17.17)
!-----------------------------------------------------------
! FIELD : CODSTL 
#define S_GEEX5902_CODSTL peel(pick(nPos, 55, 3), " ")
#define R_GEEX5902_CODSTL(A) put(nRec, 55, A :3.3)
!-----------------------------------------------------------
! FIELD : DTDSTL 
#define S_GEEX5902_DTDSTL peel(pick(nPos, 58, 8), " ")
#define R_GEEX5902_DTDSTL(A) put(nRec, 58, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEDSTL 
#define S_GEEX5902_HEDSTL peel(pick(nPos, 66, 6), " ")
#define R_GEEX5902_HEDSTL(A) put(nRec, 66, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : NBDSTL 
#define S_GEEX5902_NBDSTL peel(pick(nPos, 72, 4), " ")
#define R_GEEX5902_NBDSTL(A) put(nRec, 72, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : DTRSTL 
#define S_GEEX5902_DTRSTL peel(pick(nPos, 76, 8), " ")
#define R_GEEX5902_DTRSTL(A) put(nRec, 76, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HERSTL 
#define S_GEEX5902_HERSTL peel(pick(nPos, 84, 6), " ")
#define R_GEEX5902_HERSTL(A) put(nRec, 84, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : NBRSTL 
#define S_GEEX5902_NBRSTL peel(pick(nPos, 90, 4), " ")
#define R_GEEX5902_NBRSTL(A) put(nRec, 90, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : CUMLOG 
#define S_GEEX5902_CUMLOG peel(pick(nPos, 94, 11), " ")
#define R_GEEX5902_CUMLOG(A) put(nRec, 94, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : CODCNT 
#define S_GEEX5902_CODCNT peel(pick(nPos, 105, 14), " ")
#define R_GEEX5902_CODCNT(A) put(nRec, 105, A :14.14)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5902_DISEXC peel(pick(nPos, 119, 138), " ")
#define R_GEEX5902_DISEXC(A) put(nRec, 119, A :138.138)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5910 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5910_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5910_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5910_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5910_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5910_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5910_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5910_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5910_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMTOU 
#define S_GEEX5910_NUMTOU peel(pick(nPos, 7, 8), " ")
#define R_GEEX5910_NUMTOU(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : ORDLIV 
#define S_GEEX5910_ORDLIV peel(pick(nPos, 15, 4), " ")
#define R_GEEX5910_ORDLIV(A) put(nRec, 15, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5910_NUMLIV peel(pick(nPos, 19, 8), " ")
#define R_GEEX5910_NUMLIV(A) put(nRec, 19, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5910_SNULIV peel(pick(nPos, 27, 3), " ")
#define R_GEEX5910_SNULIV(A) put(nRec, 27, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : ETALIV 
#define S_GEEX5910_ETALIV peel(pick(nPos, 30, 2), " ")
#define R_GEEX5910_ETALIV(A) put(nRec, 30, A :2.2)
!-----------------------------------------------------------
! FIELD : DATLIV 
#define S_GEEX5910_DATLIV peel(pick(nPos, 32, 8), " ")
#define R_GEEX5910_DATLIV(A) put(nRec, 32, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATPRP 
#define S_GEEX5910_DATPRP peel(pick(nPos, 40, 8), " ")
#define R_GEEX5910_DATPRP(A) put(nRec, 40, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : NUMVAG 
#define S_GEEX5910_NUMVAG peel(pick(nPos, 48, 8), " ")
#define R_GEEX5910_NUMVAG(A) put(nRec, 48, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : ORICDE 
#define S_GEEX5910_ORICDE peel(pick(nPos, 56, 1), " ")
#define R_GEEX5910_ORICDE(A) put(nRec, 56, A :1.1)
!-----------------------------------------------------------
! FIELD : TOPLIV 
#define S_GEEX5910_TOPLIV peel(pick(nPos, 57, 5), " ")
#define R_GEEX5910_TOPLIV(A) put(nRec, 57, A :5.5)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5910_CODACT peel(pick(nPos, 62, 3), " ")
#define R_GEEX5910_CODACT(A) put(nRec, 62, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5910_CODCLI peel(pick(nPos, 65, 14), " ")
#define R_GEEX5910_CODCLI(A) put(nRec, 65, A :14.14)
!-----------------------------------------------------------
! FIELD : TYPCLI 
#define S_GEEX5910_TYPCLI peel(pick(nPos, 79, 1), " ")
#define R_GEEX5910_TYPCLI(A) put(nRec, 79, A :1.1)
!-----------------------------------------------------------
! FIELD : CATCLI 
#define S_GEEX5910_CATCLI peel(pick(nPos, 80, 3), " ")
#define R_GEEX5910_CATCLI(A) put(nRec, 80, A :3.3)
!-----------------------------------------------------------
! FIELD : CODMOP 
#define S_GEEX5910_CODMOP peel(pick(nPos, 83, 3), " ")
#define R_GEEX5910_CODMOP(A) put(nRec, 83, A :3.3)
!-----------------------------------------------------------
! FIELD : CLILIV 
#define S_GEEX5910_CLILIV peel(pick(nPos, 86, 14), " ")
#define R_GEEX5910_CLILIV(A) put(nRec, 86, A :14.14)
!-----------------------------------------------------------
! FIELD : NOMCLI 
#define S_GEEX5910_NOMCLI peel(pick(nPos, 100, 30), " ")
#define R_GEEX5910_NOMCLI(A) put(nRec, 100, A :30.30)
!-----------------------------------------------------------
! FIELD : AD1CLI 
#define S_GEEX5910_AD1CLI peel(pick(nPos, 130, 30), " ")
#define R_GEEX5910_AD1CLI(A) put(nRec, 130, A :30.30)
!-----------------------------------------------------------
! FIELD : AD2CLI 
#define S_GEEX5910_AD2CLI peel(pick(nPos, 160, 30), " ")
#define R_GEEX5910_AD2CLI(A) put(nRec, 160, A :30.30)
!-----------------------------------------------------------
! FIELD : CPOCLI 
#define S_GEEX5910_CPOCLI peel(pick(nPos, 190, 5), " ")
#define R_GEEX5910_CPOCLI(A) put(nRec, 190, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : VILCLI 
#define S_GEEX5910_VILCLI peel(pick(nPos, 195, 26), " ")
#define R_GEEX5910_VILCLI(A) put(nRec, 195, A :26.26)
!-----------------------------------------------------------
! FIELD : PAYCLI 
#define S_GEEX5910_PAYCLI peel(pick(nPos, 221, 3), " ")
#define R_GEEX5910_PAYCLI(A) put(nRec, 221, A :3.3)
!-----------------------------------------------------------
! FIELD : CODRGT 
#define S_GEEX5910_CODRGT peel(pick(nPos, 224, 3), " ")
#define R_GEEX5910_CODRGT(A) put(nRec, 224, A :3.3)
!-----------------------------------------------------------
! FIELD : TELCLI 
#define S_GEEX5910_TELCLI peel(pick(nPos, 227, 20), " ")
#define R_GEEX5910_TELCLI(A) put(nRec, 227, A :20.20)
!-----------------------------------------------------------
! FIELD : CPICLI 
#define S_GEEX5910_CPICLI peel(pick(nPos, 247, 10), " ")
#define R_GEEX5910_CPICLI(A) put(nRec, 247, A :10.10)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5911 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5911_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5911_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5911_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5911_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5911_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5911_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5911_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5911_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : FAXCLI 
#define S_GEEX5911_FAXCLI peel(pick(nPos, 7, 20), " ")
#define R_GEEX5911_FAXCLI(A) put(nRec, 7, A :20.20)
!-----------------------------------------------------------
! FIELD : TLXCLI 
#define S_GEEX5911_TLXCLI peel(pick(nPos, 27, 15), " ")
#define R_GEEX5911_TLXCLI(A) put(nRec, 27, A :15.15)
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_GEEX5911_CODTRA peel(pick(nPos, 42, 14), " ")
#define R_GEEX5911_CODTRA(A) put(nRec, 42, A :14.14)
!-----------------------------------------------------------
! FIELD : TYPTRA 
#define S_GEEX5911_TYPTRA peel(pick(nPos, 56, 1), " ")
#define R_GEEX5911_TYPTRA(A) put(nRec, 56, A :1.1)
!-----------------------------------------------------------
! FIELD : NOMTRA 
#define S_GEEX5911_NOMTRA peel(pick(nPos, 57, 30), " ")
#define R_GEEX5911_NOMTRA(A) put(nRec, 57, A :30.30)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5911_REFLIV peel(pick(nPos, 87, 30), " ")
#define R_GEEX5911_REFLIV(A) put(nRec, 87, A :30.30)
!-----------------------------------------------------------
! FIELD : TYPLIV 
#define S_GEEX5911_TYPLIV peel(pick(nPos, 117, 1), " ")
#define R_GEEX5911_TYPLIV(A) put(nRec, 117, A :1.1)
!-----------------------------------------------------------
! FIELD : KAILIV 
#define S_GEEX5911_KAILIV peel(pick(nPos, 118, 3), " ")
#define R_GEEX5911_KAILIV(A) put(nRec, 118, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : DTILIV 
#define S_GEEX5911_DTILIV peel(pick(nPos, 121, 8), " ")
#define R_GEEX5911_DTILIV(A) put(nRec, 121, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEILIV 
#define S_GEEX5911_HEILIV peel(pick(nPos, 129, 4), " ")
#define R_GEEX5911_HEILIV(A) put(nRec, 129, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : HEULIV 
#define S_GEEX5911_HEULIV peel(pick(nPos, 133, 6), " ")
#define R_GEEX5911_HEULIV(A) put(nRec, 133, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : MSGPRP 
#define S_GEEX5911_MSGPRP peel(pick(nPos, 139, 60), " ")
#define R_GEEX5911_MSGPRP(A) put(nRec, 139, A :60.60)
!-----------------------------------------------------------
! FIELD : CUMPOI 
#define S_GEEX5911_CUMPOI peel(pick(nPos, 199, 11), " ")
#define R_GEEX5911_CUMPOI(A) put(nRec, 199, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : CUMVOL 
#define S_GEEX5911_CUMVOL peel(pick(nPos, 210, 11), " ")
#define R_GEEX5911_CUMVOL(A) put(nRec, 210, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : CUMCOL 
#define S_GEEX5911_CUMCOL peel(pick(nPos, 221, 7), " ")
#define R_GEEX5911_CUMCOL(A) put(nRec, 221, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : CUMLIG 
#define S_GEEX5911_CUMLIG peel(pick(nPos, 228, 4), " ")
#define R_GEEX5911_CUMLIG(A) put(nRec, 228, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : CUMPRD 
#define S_GEEX5911_CUMPRD peel(pick(nPos, 232, 9), " ")
#define R_GEEX5911_CUMPRD(A) put(nRec, 232, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CUMPRP 
#define S_GEEX5911_CUMPRP peel(pick(nPos, 241, 9), " ")
#define R_GEEX5911_CUMPRP(A) put(nRec, 241, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5911_DISEXC peel(pick(nPos, 250, 7), " ")
#define R_GEEX5911_DISEXC(A) put(nRec, 250, A :7.7)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5912 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5912_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5912_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5912_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5912_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5912_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5912_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5912_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5912_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : MSGLIV 
#define S_GEEX5912_MSGLIV peel(pick(nPos, 7, 60), " ")
#define R_GEEX5912_MSGLIV(A) put(nRec, 7, A :60.60)
!-----------------------------------------------------------
! FIELD : DIPLIV 
#define S_GEEX5912_DIPLIV peel(pick(nPos, 67, 50), " ")
#define R_GEEX5912_DIPLIV(A) put(nRec, 67, A :50.50)
!-----------------------------------------------------------
! FIELD : CUMEQP 
#define S_GEEX5912_CUMEQP peel(pick(nPos, 117, 9), " ")
#define R_GEEX5912_CUMEQP(A) put(nRec, 117, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : TPSPRD 
#define S_GEEX5912_TPSPRD peel(pick(nPos, 126, 7), " ")
#define R_GEEX5912_TPSPRD(A) put(nRec, 126, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : TPSPRP 
#define S_GEEX5912_TPSPRP peel(pick(nPos, 133, 7), " ")
#define R_GEEX5912_TPSPRP(A) put(nRec, 133, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : CUMUOP 
#define S_GEEX5912_CUMUOP peel(pick(nPos, 140, 14), " ")
#define R_GEEX5912_CUMUOP(A) put(nRec, 140, build(number(A):R014.0))
!-----------------------------------------------------------
! FIELD : CUMUOT 
#define S_GEEX5912_CUMUOT peel(pick(nPos, 154, 18), " ")
#define R_GEEX5912_CUMUOT(A) put(nRec, 154, build(number(A):R018.0))
!-----------------------------------------------------------
! FIELD : TOPHIS 
#define S_GEEX5912_TOPHIS peel(pick(nPos, 172, 1), " ")
#define R_GEEX5912_TOPHIS(A) put(nRec, 172, A :1.1)
!-----------------------------------------------------------
! FIELD : CODTLI 
#define S_GEEX5912_CODTLI peel(pick(nPos, 173, 3), " ")
#define R_GEEX5912_CODTLI(A) put(nRec, 173, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMTRF 
#define S_GEEX5912_NUMTRF peel(pick(nPos, 176, 8), " ")
#define R_GEEX5912_NUMTRF(A) put(nRec, 176, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUTRF 
#define S_GEEX5912_SNUTRF peel(pick(nPos, 184, 3), " ")
#define R_GEEX5912_SNUTRF(A) put(nRec, 184, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : AIGPVA 
#define S_GEEX5912_AIGPVA peel(pick(nPos, 187, 1), " ")
#define R_GEEX5912_AIGPVA(A) put(nRec, 187, A :1.1)
!-----------------------------------------------------------
! FIELD : GSTALC 
#define S_GEEX5912_GSTALC peel(pick(nPos, 188, 1), " ")
#define R_GEEX5912_GSTALC(A) put(nRec, 188, A :1.1)
!-----------------------------------------------------------
! FIELD : REFCLI 
#define S_GEEX5912_REFCLI peel(pick(nPos, 189, 30), " ")
#define R_GEEX5912_REFCLI(A) put(nRec, 189, A :30.30)
!-----------------------------------------------------------
! FIELD : MNTCRB 
#define S_GEEX5912_MNTCRB peel(pick(nPos, 219, 14), " ")
#define R_GEEX5912_MNTCRB(A) put(nRec, 219, build(number(A):R014.0))
!-----------------------------------------------------------
! FIELD : SRVPOI 
#define S_GEEX5912_SRVPOI peel(pick(nPos, 233, 11), " ")
#define R_GEEX5912_SRVPOI(A) put(nRec, 233, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : SRVVOL 
#define S_GEEX5912_SRVVOL peel(pick(nPos, 244, 11), " ")
#define R_GEEX5912_SRVVOL(A) put(nRec, 244, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5912_DISEXC peel(pick(nPos, 255, 2), " ")
#define R_GEEX5912_DISEXC(A) put(nRec, 255, A :2.2)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5913 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5913_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5913_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5913_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5913_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5913_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5913_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5913_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5913_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : SRVCOL 
#define S_GEEX5913_SRVCOL peel(pick(nPos, 7, 7), " ")
#define R_GEEX5913_SRVCOL(A) put(nRec, 7, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : SRVLIG 
#define S_GEEX5913_SRVLIG peel(pick(nPos, 14, 4), " ")
#define R_GEEX5913_SRVLIG(A) put(nRec, 14, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : SRVEQP 
#define S_GEEX5913_SRVEQP peel(pick(nPos, 18, 9), " ")
#define R_GEEX5913_SRVEQP(A) put(nRec, 18, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CUMACH 
#define S_GEEX5913_CUMACH peel(pick(nPos, 27, 11), " ")
#define R_GEEX5913_CUMACH(A) put(nRec, 27, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : CUMVTE 
#define S_GEEX5913_CUMVTE peel(pick(nPos, 38, 11), " ")
#define R_GEEX5913_CUMVTE(A) put(nRec, 38, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : SRVLOG 
#define S_GEEX5913_SRVLOG peel(pick(nPos, 49, 11), " ")
#define R_GEEX5913_SRVLOG(A) put(nRec, 49, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : CUMLOG 
#define S_GEEX5913_CUMLOG peel(pick(nPos, 60, 11), " ")
#define R_GEEX5913_CUMLOG(A) put(nRec, 60, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : TOPBDL 
#define S_GEEX5913_TOPBDL peel(pick(nPos, 71, 1), " ")
#define R_GEEX5913_TOPBDL(A) put(nRec, 71, A :1.1)
!-----------------------------------------------------------
! FIELD : CODSIT 
#define S_GEEX5913_CODSIT peel(pick(nPos, 72, 3), " ")
#define R_GEEX5913_CODSIT(A) put(nRec, 72, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMTOI 
#define S_GEEX5913_NUMTOI peel(pick(nPos, 75, 8), " ")
#define R_GEEX5913_NUMTOI(A) put(nRec, 75, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : NUMCNT 
#define S_GEEX5913_NUMCNT peel(pick(nPos, 83, 17), " ")
#define R_GEEX5913_NUMCNT(A) put(nRec, 83, A :17.17)
!-----------------------------------------------------------
! FIELD : TOPCHT 
#define S_GEEX5913_TOPCHT peel(pick(nPos, 100, 1), " ")
#define R_GEEX5913_TOPCHT(A) put(nRec, 100, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5913_DISEXC peel(pick(nPos, 101, 156), " ")
#define R_GEEX5913_DISEXC(A) put(nRec, 101, A :156.156)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5920 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5920_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5920_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5920_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5920_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5920_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5920_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5920_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5920_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMSUP 
#define S_GEEX5920_NUMSUP peel(pick(nPos, 7, 8), " ")
#define R_GEEX5920_NUMSUP(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUSUP 
#define S_GEEX5920_SNUSUP peel(pick(nPos, 15, 3), " ")
#define R_GEEX5920_SNUSUP(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : TYPSUP 
#define S_GEEX5920_TYPSUP peel(pick(nPos, 18, 1), " ")
#define R_GEEX5920_TYPSUP(A) put(nRec, 18, A :1.1)
!-----------------------------------------------------------
! FIELD : ETASUP 
#define S_GEEX5920_ETASUP peel(pick(nPos, 19, 2), " ")
#define R_GEEX5920_ETASUP(A) put(nRec, 19, A :2.2)
!-----------------------------------------------------------
! FIELD : LIBSUP 
#define S_GEEX5920_LIBSUP peel(pick(nPos, 21, 30), " ")
#define R_GEEX5920_LIBSUP(A) put(nRec, 21, A :30.30)
!-----------------------------------------------------------
! FIELD : CODEMB 
#define S_GEEX5920_CODEMB peel(pick(nPos, 51, 3), " ")
#define R_GEEX5920_CODEMB(A) put(nRec, 51, A :3.3)
!-----------------------------------------------------------
! FIELD : CODUOP 
#define S_GEEX5920_CODUOP peel(pick(nPos, 54, 3), " ")
#define R_GEEX5920_CODUOP(A) put(nRec, 54, A :3.3)
!-----------------------------------------------------------
! FIELD : EMBUOP 
#define S_GEEX5920_EMBUOP peel(pick(nPos, 57, 1), " ")
#define R_GEEX5920_EMBUOP(A) put(nRec, 57, build(number(A):R01.0))
!-----------------------------------------------------------
! FIELD : EMBTOU 
#define S_GEEX5920_EMBTOU peel(pick(nPos, 58, 1), " ")
#define R_GEEX5920_EMBTOU(A) put(nRec, 58, A :1.1)
!-----------------------------------------------------------
! FIELD : TOPBDL 
#define S_GEEX5920_TOPBDL peel(pick(nPos, 59, 1), " ")
#define R_GEEX5920_TOPBDL(A) put(nRec, 59, A :1.1)
!-----------------------------------------------------------
! FIELD : AIGALC 
#define S_GEEX5920_AIGALC peel(pick(nPos, 60, 1), " ")
#define R_GEEX5920_AIGALC(A) put(nRec, 60, A :1.1)
!-----------------------------------------------------------
! FIELD : AIGPRI 
#define S_GEEX5920_AIGPRI peel(pick(nPos, 61, 1), " ")
#define R_GEEX5920_AIGPRI(A) put(nRec, 61, A :1.1)
!-----------------------------------------------------------
! FIELD : AIGPVA 
#define S_GEEX5920_AIGPVA peel(pick(nPos, 62, 1), " ")
#define R_GEEX5920_AIGPVA(A) put(nRec, 62, A :1.1)
!-----------------------------------------------------------
! FIELD : NBRPVA 
#define S_GEEX5920_NBRPVA peel(pick(nPos, 63, 4), " ")
#define R_GEEX5920_NBRPVA(A) put(nRec, 63, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : DATPRP 
#define S_GEEX5920_DATPRP peel(pick(nPos, 67, 8), " ")
#define R_GEEX5920_DATPRP(A) put(nRec, 67, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : NUMVAG 
#define S_GEEX5920_NUMVAG peel(pick(nPos, 75, 8), " ")
#define R_GEEX5920_NUMVAG(A) put(nRec, 75, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : NUMTOU 
#define S_GEEX5920_NUMTOU peel(pick(nPos, 83, 8), " ")
#define R_GEEX5920_NUMTOU(A) put(nRec, 83, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATLIV 
#define S_GEEX5920_DATLIV peel(pick(nPos, 91, 8), " ")
#define R_GEEX5920_DATLIV(A) put(nRec, 91, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : TOULIV 
#define S_GEEX5920_TOULIV peel(pick(nPos, 99, 4), " ")
#define R_GEEX5920_TOULIV(A) put(nRec, 99, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : NSTLIV 
#define S_GEEX5920_NSTLIV peel(pick(nPos, 103, 2), " ")
#define R_GEEX5920_NSTLIV(A) put(nRec, 103, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : ORDLIV 
#define S_GEEX5920_ORDLIV peel(pick(nPos, 105, 4), " ")
#define R_GEEX5920_ORDLIV(A) put(nRec, 105, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : KAILIV 
#define S_GEEX5920_KAILIV peel(pick(nPos, 109, 3), " ")
#define R_GEEX5920_KAILIV(A) put(nRec, 109, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5920_NUMLIV peel(pick(nPos, 112, 8), " ")
#define R_GEEX5920_NUMLIV(A) put(nRec, 112, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5920_SNULIV peel(pick(nPos, 120, 3), " ")
#define R_GEEX5920_SNULIV(A) put(nRec, 120, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACL 
#define S_GEEX5920_CODACL peel(pick(nPos, 123, 3), " ")
#define R_GEEX5920_CODACL(A) put(nRec, 123, A :3.3)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5920_REFLIV peel(pick(nPos, 126, 30), " ")
#define R_GEEX5920_REFLIV(A) put(nRec, 126, A :30.30)
!-----------------------------------------------------------
! FIELD : ORICDE 
#define S_GEEX5920_ORICDE peel(pick(nPos, 156, 1), " ")
#define R_GEEX5920_ORICDE(A) put(nRec, 156, A :1.1)
!-----------------------------------------------------------
! FIELD : CLILIV 
#define S_GEEX5920_CLILIV peel(pick(nPos, 157, 14), " ")
#define R_GEEX5920_CLILIV(A) put(nRec, 157, A :14.14)
!-----------------------------------------------------------
! FIELD : NOMCLI 
#define S_GEEX5920_NOMCLI peel(pick(nPos, 171, 30), " ")
#define R_GEEX5920_NOMCLI(A) put(nRec, 171, A :30.30)
!-----------------------------------------------------------
! FIELD : CUMPOI 
#define S_GEEX5920_CUMPOI peel(pick(nPos, 201, 11), " ")
#define R_GEEX5920_CUMPOI(A) put(nRec, 201, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : CUMVOL 
#define S_GEEX5920_CUMVOL peel(pick(nPos, 212, 11), " ")
#define R_GEEX5920_CUMVOL(A) put(nRec, 212, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : CUMCOL 
#define S_GEEX5920_CUMCOL peel(pick(nPos, 223, 7), " ")
#define R_GEEX5920_CUMCOL(A) put(nRec, 223, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : CUMLIG 
#define S_GEEX5920_CUMLIG peel(pick(nPos, 230, 4), " ")
#define R_GEEX5920_CUMLIG(A) put(nRec, 230, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : CUMPRT 
#define S_GEEX5920_CUMPRT peel(pick(nPos, 234, 9), " ")
#define R_GEEX5920_CUMPRT(A) put(nRec, 234, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CUMEQP 
#define S_GEEX5920_CUMEQP peel(pick(nPos, 243, 9), " ")
#define R_GEEX5920_CUMEQP(A) put(nRec, 243, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5920_DISEXC peel(pick(nPos, 252, 5), " ")
#define R_GEEX5920_DISEXC(A) put(nRec, 252, A :5.5)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5921 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5921_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5921_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5921_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5921_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5921_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5921_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5921_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5921_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : TPSPRT 
#define S_GEEX5921_TPSPRT peel(pick(nPos, 7, 7), " ")
#define R_GEEX5921_TPSPRT(A) put(nRec, 7, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : CUMUOT 
#define S_GEEX5921_CUMUOT peel(pick(nPos, 14, 9), " ")
#define R_GEEX5921_CUMUOT(A) put(nRec, 14, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CODPRP 
#define S_GEEX5921_CODPRP peel(pick(nPos, 23, 10), " ")
#define R_GEEX5921_CODPRP(A) put(nRec, 23, A :10.10)
!-----------------------------------------------------------
! FIELD : CARDES 
#define S_GEEX5921_CARDES peel(pick(nPos, 33, 10), " ")
#define R_GEEX5921_CARDES(A) put(nRec, 33, A :10.10)
!-----------------------------------------------------------
! FIELD : DATSUP 
#define S_GEEX5921_DATSUP peel(pick(nPos, 43, 16), " ")
#define R_GEEX5921_DATSUP(A) put(nRec, 43, build(number(A):R016.0))
!-----------------------------------------------------------
! FIELD : HEUSUP 
#define S_GEEX5921_HEUSUP peel(pick(nPos, 59, 12), " ")
#define R_GEEX5921_HEUSUP(A) put(nRec, 59, build(number(A):R012.0))
!-----------------------------------------------------------
! FIELD : NUMPAL 
#define S_GEEX5921_NUMPAL peel(pick(nPos, 71, 9), " ")
#define R_GEEX5921_NUMPAL(A) put(nRec, 71, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : SNUPAL 
#define S_GEEX5921_SNUPAL peel(pick(nPos, 80, 2), " ")
#define R_GEEX5921_SNUPAL(A) put(nRec, 80, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX5921_CODPAL peel(pick(nPos, 82, 18), " ")
#define R_GEEX5921_CODPAL(A) put(nRec, 82, A :18.18)
!-----------------------------------------------------------
! FIELD : ETADES 
#define S_GEEX5921_ETADES peel(pick(nPos, 100, 2), " ")
#define R_GEEX5921_ETADES(A) put(nRec, 100, A :2.2)
!-----------------------------------------------------------
! FIELD : PTYDES 
#define S_GEEX5921_PTYDES peel(pick(nPos, 102, 2), " ")
#define R_GEEX5921_PTYDES(A) put(nRec, 102, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : ZONSTS 
#define S_GEEX5921_ZONSTS peel(pick(nPos, 104, 1), " ")
#define R_GEEX5921_ZONSTS(A) put(nRec, 104, A :1.1)
!-----------------------------------------------------------
! FIELD : ALLSTS 
#define S_GEEX5921_ALLSTS peel(pick(nPos, 105, 3), " ")
#define R_GEEX5921_ALLSTS(A) put(nRec, 105, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : DPLSTS 
#define S_GEEX5921_DPLSTS peel(pick(nPos, 108, 4), " ")
#define R_GEEX5921_DPLSTS(A) put(nRec, 108, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : NIVSTS 
#define S_GEEX5921_NIVSTS peel(pick(nPos, 112, 2), " ")
#define R_GEEX5921_NIVSTS(A) put(nRec, 112, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5921_CODACT peel(pick(nPos, 114, 3), " ")
#define R_GEEX5921_CODACT(A) put(nRec, 114, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX5921_CODPRO peel(pick(nPos, 117, 17), " ")
#define R_GEEX5921_CODPRO(A) put(nRec, 117, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX5921_VALPRO peel(pick(nPos, 134, 2), " ")
#define R_GEEX5921_VALPRO(A) put(nRec, 134, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SPCPRO 
#define S_GEEX5921_SPCPRO peel(pick(nPos, 136, 4), " ")
#define R_GEEX5921_SPCPRO(A) put(nRec, 136, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX5921_PCBPRO peel(pick(nPos, 140, 5), " ")
#define R_GEEX5921_PCBPRO(A) put(nRec, 140, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CIRPIC 
#define S_GEEX5921_CIRPIC peel(pick(nPos, 145, 3), " ")
#define R_GEEX5921_CIRPIC(A) put(nRec, 145, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMPIC 
#define S_GEEX5921_NUMPIC peel(pick(nPos, 148, 9), " ")
#define R_GEEX5921_NUMPIC(A) put(nRec, 148, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : PRPPIC 
#define S_GEEX5921_PRPPIC peel(pick(nPos, 157, 1), " ")
#define R_GEEX5921_PRPPIC(A) put(nRec, 157, A :1.1)
!-----------------------------------------------------------
! FIELD : ZONPIC 
#define S_GEEX5921_ZONPIC peel(pick(nPos, 158, 1), " ")
#define R_GEEX5921_ZONPIC(A) put(nRec, 158, A :1.1)
!-----------------------------------------------------------
! FIELD : ALLPIC 
#define S_GEEX5921_ALLPIC peel(pick(nPos, 159, 3), " ")
#define R_GEEX5921_ALLPIC(A) put(nRec, 159, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : DPLPIC 
#define S_GEEX5921_DPLPIC peel(pick(nPos, 162, 4), " ")
#define R_GEEX5921_DPLPIC(A) put(nRec, 162, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : NIVPIC 
#define S_GEEX5921_NIVPIC peel(pick(nPos, 166, 2), " ")
#define R_GEEX5921_NIVPIC(A) put(nRec, 166, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : ZONREA 
#define S_GEEX5921_ZONREA peel(pick(nPos, 168, 1), " ")
#define R_GEEX5921_ZONREA(A) put(nRec, 168, A :1.1)
!-----------------------------------------------------------
! FIELD : ALLREA 
#define S_GEEX5921_ALLREA peel(pick(nPos, 169, 3), " ")
#define R_GEEX5921_ALLREA(A) put(nRec, 169, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : DPLREA 
#define S_GEEX5921_DPLREA peel(pick(nPos, 172, 4), " ")
#define R_GEEX5921_DPLREA(A) put(nRec, 172, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : NIVREA 
#define S_GEEX5921_NIVREA peel(pick(nPos, 176, 2), " ")
#define R_GEEX5921_NIVREA(A) put(nRec, 176, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTCLS 
#define S_GEEX5921_TRTCLS peel(pick(nPos, 178, 3), " ")
#define R_GEEX5921_TRTCLS(A) put(nRec, 178, A :3.3)
!-----------------------------------------------------------
! FIELD : TOPCLS 
#define S_GEEX5921_TOPCLS peel(pick(nPos, 181, 1), " ")
#define R_GEEX5921_TOPCLS(A) put(nRec, 181, A :1.1)
!-----------------------------------------------------------
! FIELD : ERRCLS 
#define S_GEEX5921_ERRCLS peel(pick(nPos, 182, 1), " ")
#define R_GEEX5921_ERRCLS(A) put(nRec, 182, A :1.1)
!-----------------------------------------------------------
! FIELD : TRTUOP 
#define S_GEEX5921_TRTUOP peel(pick(nPos, 183, 3), " ")
#define R_GEEX5921_TRTUOP(A) put(nRec, 183, A :3.3)
!-----------------------------------------------------------
! FIELD : TOPUOP 
#define S_GEEX5921_TOPUOP peel(pick(nPos, 186, 1), " ")
#define R_GEEX5921_TOPUOP(A) put(nRec, 186, A :1.1)
!-----------------------------------------------------------
! FIELD : ERRUOP 
#define S_GEEX5921_ERRUOP peel(pick(nPos, 187, 1), " ")
#define R_GEEX5921_ERRUOP(A) put(nRec, 187, A :1.1)
!-----------------------------------------------------------
! FIELD : TRTPRP 
#define S_GEEX5921_TRTPRP peel(pick(nPos, 188, 3), " ")
#define R_GEEX5921_TRTPRP(A) put(nRec, 188, A :3.3)
!-----------------------------------------------------------
! FIELD : TOPPRP 
#define S_GEEX5921_TOPPRP peel(pick(nPos, 191, 1), " ")
#define R_GEEX5921_TOPPRP(A) put(nRec, 191, A :1.1)
!-----------------------------------------------------------
! FIELD : ERRPRP 
#define S_GEEX5921_ERRPRP peel(pick(nPos, 192, 1), " ")
#define R_GEEX5921_ERRPRP(A) put(nRec, 192, A :1.1)
!-----------------------------------------------------------
! FIELD : TRTTOU 
#define S_GEEX5921_TRTTOU peel(pick(nPos, 193, 3), " ")
#define R_GEEX5921_TRTTOU(A) put(nRec, 193, A :3.3)
!-----------------------------------------------------------
! FIELD : TOPTOU 
#define S_GEEX5921_TOPTOU peel(pick(nPos, 196, 1), " ")
#define R_GEEX5921_TOPTOU(A) put(nRec, 196, A :1.1)
!-----------------------------------------------------------
! FIELD : ERRTOU 
#define S_GEEX5921_ERRTOU peel(pick(nPos, 197, 1), " ")
#define R_GEEX5921_ERRTOU(A) put(nRec, 197, A :1.1)
!-----------------------------------------------------------
! FIELD : CNFSUP 
#define S_GEEX5921_CNFSUP peel(pick(nPos, 198, 1), " ")
#define R_GEEX5921_CNFSUP(A) put(nRec, 198, A :1.1)
!-----------------------------------------------------------
! FIELD : TOPHIS 
#define S_GEEX5921_TOPHIS peel(pick(nPos, 199, 1), " ")
#define R_GEEX5921_TOPHIS(A) put(nRec, 199, A :1.1)
!-----------------------------------------------------------
! FIELD : CUMLOG 
#define S_GEEX5921_CUMLOG peel(pick(nPos, 200, 11), " ")
#define R_GEEX5921_CUMLOG(A) put(nRec, 200, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : DATLIM 
#define S_GEEX5921_DATLIM peel(pick(nPos, 211, 8), " ")
#define R_GEEX5921_DATLIM(A) put(nRec, 211, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEULIM 
#define S_GEEX5921_HEULIM peel(pick(nPos, 219, 6), " ")
#define R_GEEX5921_HEULIM(A) put(nRec, 219, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : TOPMNQ 
#define S_GEEX5921_TOPMNQ peel(pick(nPos, 225, 1), " ")
#define R_GEEX5921_TOPMNQ(A) put(nRec, 225, A :1.1)
!-----------------------------------------------------------
! FIELD : PTYORI 
#define S_GEEX5921_PTYORI peel(pick(nPos, 226, 2), " ")
#define R_GEEX5921_PTYORI(A) put(nRec, 226, A :2.2)
!-----------------------------------------------------------
! FIELD : NUMTOI 
#define S_GEEX5921_NUMTOI peel(pick(nPos, 228, 8), " ")
#define R_GEEX5921_NUMTOI(A) put(nRec, 228, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : NUMCNT 
#define S_GEEX5921_NUMCNT peel(pick(nPos, 236, 17), " ")
#define R_GEEX5921_NUMCNT(A) put(nRec, 236, A :17.17)
!-----------------------------------------------------------
! FIELD : CODSTL 
#define S_GEEX5921_CODSTL peel(pick(nPos, 253, 3), " ")
#define R_GEEX5921_CODSTL(A) put(nRec, 253, A :3.3)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5921_DISEXC peel(pick(nPos, 256, 1), " ")
#define R_GEEX5921_DISEXC(A) put(nRec, 256, A :1.1)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5922 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5922_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5922_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5922_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5922_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5922_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5922_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5922_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5922_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODLDP 
#define S_GEEX5922_CODLDP peel(pick(nPos, 7, 3), " ")
#define R_GEEX5922_CODLDP(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCMP 
#define S_GEEX5922_CODCMP peel(pick(nPos, 10, 3), " ")
#define R_GEEX5922_CODCMP(A) put(nRec, 10, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMCMP 
#define S_GEEX5922_NUMCMP peel(pick(nPos, 13, 8), " ")
#define R_GEEX5922_NUMCMP(A) put(nRec, 13, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUCMP 
#define S_GEEX5922_SNUCMP peel(pick(nPos, 21, 3), " ")
#define R_GEEX5922_SNUCMP(A) put(nRec, 21, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : NIVITR 
#define S_GEEX5922_NIVITR peel(pick(nPos, 24, 2), " ")
#define R_GEEX5922_NIVITR(A) put(nRec, 24, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TOPETI 
#define S_GEEX5922_TOPETI peel(pick(nPos, 26, 1), " ")
#define R_GEEX5922_TOPETI(A) put(nRec, 26, A :1.1)
!-----------------------------------------------------------
! FIELD : CATREF 
#define S_GEEX5922_CATREF peel(pick(nPos, 27, 1), " ")
#define R_GEEX5922_CATREF(A) put(nRec, 27, A :1.1)
!-----------------------------------------------------------
! FIELD : INDCHT 
#define S_GEEX5922_INDCHT peel(pick(nPos, 28, 1), " ")
#define R_GEEX5922_INDCHT(A) put(nRec, 28, A :1.1)
!-----------------------------------------------------------
! FIELD : NBRDAT 
#define S_GEEX5922_NBRDAT peel(pick(nPos, 29, 4), " ")
#define R_GEEX5922_NBRDAT(A) put(nRec, 29, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : ORDEMB 
#define S_GEEX5922_ORDEMB peel(pick(nPos, 33, 4), " ")
#define R_GEEX5922_ORDEMB(A) put(nRec, 33, A :4.4)
!-----------------------------------------------------------
! FIELD : TOPPAQ 
#define S_GEEX5922_TOPPAQ peel(pick(nPos, 37, 1), " ")
#define R_GEEX5922_TOPPAQ(A) put(nRec, 37, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMPLB 
#define S_GEEX5922_NUMPLB peel(pick(nPos, 38, 8), " ")
#define R_GEEX5922_NUMPLB(A) put(nRec, 38, A :8.8)
!-----------------------------------------------------------
! FIELD : PDBEMB 
#define S_GEEX5922_PDBEMB peel(pick(nPos, 46, 5), " ")
#define R_GEEX5922_PDBEMB(A) put(nRec, 46, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : SSCCMP 
#define S_GEEX5922_SSCCMP peel(pick(nPos, 51, 18), " ")
#define R_GEEX5922_SSCCMP(A) put(nRec, 51, A :18.18)
!-----------------------------------------------------------
! FIELD : DATPAK 
#define S_GEEX5922_DATPAK peel(pick(nPos, 69, 8), " ")
#define R_GEEX5922_DATPAK(A) put(nRec, 69, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUPAK 
#define S_GEEX5922_HEUPAK peel(pick(nPos, 77, 6), " ")
#define R_GEEX5922_HEUPAK(A) put(nRec, 77, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : POITOT 
#define S_GEEX5922_POITOT peel(pick(nPos, 83, 10), " ")
#define R_GEEX5922_POITOT(A) put(nRec, 83, build(number(A):R010.0))
!-----------------------------------------------------------
! FIELD : NUMTKG 
#define S_GEEX5922_NUMTKG peel(pick(nPos, 93, 35), " ")
#define R_GEEX5922_NUMTKG(A) put(nRec, 93, A :35.35)
!-----------------------------------------------------------
! FIELD : NUMTKR 
#define S_GEEX5922_NUMTKR peel(pick(nPos, 128, 35), " ")
#define R_GEEX5922_NUMTKR(A) put(nRec, 128, A :35.35)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5922_DISEXC peel(pick(nPos, 163, 94), " ")
#define R_GEEX5922_DISEXC(A) put(nRec, 163, A :94.94)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5927 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5927_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5927_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5927_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5927_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5927_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5927_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5927_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5927_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : ZONEXC 
#define S_GEEX5927_ZONEXC peel(pick(nPos, 7, 250), " ")
#define R_GEEX5927_ZONEXC(A) put(nRec, 7, A :250.250)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5929 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5929_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5929_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5929_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5929_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5929_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5929_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5929_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5929_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : LIBVAG 
#define S_GEEX5929_LIBVAG peel(pick(nPos, 7, 30), " ")
#define R_GEEX5929_LIBVAG(A) put(nRec, 7, A :30.30)
!-----------------------------------------------------------
! FIELD : LIBCIR 
#define S_GEEX5929_LIBCIR peel(pick(nPos, 37, 30), " ")
#define R_GEEX5929_LIBCIR(A) put(nRec, 37, A :30.30)
!-----------------------------------------------------------
! FIELD : TYPLIV 
#define S_GEEX5929_TYPLIV peel(pick(nPos, 67, 1), " ")
#define R_GEEX5929_TYPLIV(A) put(nRec, 67, A :1.1)
!-----------------------------------------------------------
! FIELD : VOLUOP 
#define S_GEEX5929_VOLUOP peel(pick(nPos, 68, 8), " ")
#define R_GEEX5929_VOLUOP(A) put(nRec, 68, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : EDISIT 
#define S_GEEX5929_EDISIT peel(pick(nPos, 76, 14), " ")
#define R_GEEX5929_EDISIT(A) put(nRec, 76, A :14.14)
!-----------------------------------------------------------
! FIELD : EDICLI 
#define S_GEEX5929_EDICLI peel(pick(nPos, 90, 14), " ")
#define R_GEEX5929_EDICLI(A) put(nRec, 90, A :14.14)
!-----------------------------------------------------------
! FIELD : TYPACT 
#define S_GEEX5929_TYPACT peel(pick(nPos, 104, 1), " ")
#define R_GEEX5929_TYPACT(A) put(nRec, 104, A :1.1)
!-----------------------------------------------------------
! FIELD : REFMIT 
#define S_GEEX5929_REFMIT peel(pick(nPos, 105, 30), " ")
#define R_GEEX5929_REFMIT(A) put(nRec, 105, A :30.30)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX5929_NUMREC peel(pick(nPos, 135, 8), " ")
#define R_GEEX5929_NUMREC(A) put(nRec, 135, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX5929_SNUREC peel(pick(nPos, 143, 3), " ")
#define R_GEEX5929_SNUREC(A) put(nRec, 143, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : TYPCIR 
#define S_GEEX5929_TYPCIR peel(pick(nPos, 146, 1), " ")
#define R_GEEX5929_TYPCIR(A) put(nRec, 146, A :1.1)
!-----------------------------------------------------------
! FIELD : CODTLI 
#define S_GEEX5929_CODTLI peel(pick(nPos, 147, 3), " ")
#define R_GEEX5929_CODTLI(A) put(nRec, 147, A :3.3)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5929_DISEXC peel(pick(nPos, 150, 107), " ")
#define R_GEEX5929_DISEXC(A) put(nRec, 150, A :107.107)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5940 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5940_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5940_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5940_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5940_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5940_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5940_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5940_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5940_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMSUP 
#define S_GEEX5940_NUMSUP peel(pick(nPos, 7, 8), " ")
#define R_GEEX5940_NUMSUP(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUSUP 
#define S_GEEX5940_SNUSUP peel(pick(nPos, 15, 3), " ")
#define R_GEEX5940_SNUSUP(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : SEQSUP 
#define S_GEEX5940_SEQSUP peel(pick(nPos, 18, 4), " ")
#define R_GEEX5940_SEQSUP(A) put(nRec, 18, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5940_NUMLIV peel(pick(nPos, 22, 8), " ")
#define R_GEEX5940_NUMLIV(A) put(nRec, 22, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5940_SNULIV peel(pick(nPos, 30, 3), " ")
#define R_GEEX5940_SNULIV(A) put(nRec, 30, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : SEQLIV 
#define S_GEEX5940_SEQLIV peel(pick(nPos, 33, 4), " ")
#define R_GEEX5940_SEQLIV(A) put(nRec, 33, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : TOPLIV 
#define S_GEEX5940_TOPLIV peel(pick(nPos, 37, 5), " ")
#define R_GEEX5940_TOPLIV(A) put(nRec, 37, A :5.5)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5940_CODCLI peel(pick(nPos, 42, 14), " ")
#define R_GEEX5940_CODCLI(A) put(nRec, 42, A :14.14)
!-----------------------------------------------------------
! FIELD : CLILIV 
#define S_GEEX5940_CLILIV peel(pick(nPos, 56, 14), " ")
#define R_GEEX5940_CLILIV(A) put(nRec, 56, A :14.14)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5940_CODACT peel(pick(nPos, 70, 3), " ")
#define R_GEEX5940_CODACT(A) put(nRec, 70, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX5940_CODPRO peel(pick(nPos, 73, 17), " ")
#define R_GEEX5940_CODPRO(A) put(nRec, 73, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX5940_VALPRO peel(pick(nPos, 90, 2), " ")
#define R_GEEX5940_VALPRO(A) put(nRec, 90, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : VAPPRO 
#define S_GEEX5940_VAPPRO peel(pick(nPos, 92, 2), " ")
#define R_GEEX5940_VAPPRO(A) put(nRec, 92, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : DS1PRO 
#define S_GEEX5940_DS1PRO peel(pick(nPos, 94, 30), " ")
#define R_GEEX5940_DS1PRO(A) put(nRec, 94, A :30.30)
!-----------------------------------------------------------
! FIELD : DS2PRO 
#define S_GEEX5940_DS2PRO peel(pick(nPos, 124, 30), " ")
#define R_GEEX5940_DS2PRO(A) put(nRec, 124, A :30.30)
!-----------------------------------------------------------
! FIELD : FAMPRO 
#define S_GEEX5940_FAMPRO peel(pick(nPos, 154, 10), " ")
#define R_GEEX5940_FAMPRO(A) put(nRec, 154, A :10.10)
!-----------------------------------------------------------
! FIELD : ANAPRO 
#define S_GEEX5940_ANAPRO peel(pick(nPos, 164, 15), " ")
#define R_GEEX5940_ANAPRO(A) put(nRec, 164, A :15.15)
!-----------------------------------------------------------
! FIELD : UNIPRO 
#define S_GEEX5940_UNIPRO peel(pick(nPos, 179, 3), " ")
#define R_GEEX5940_UNIPRO(A) put(nRec, 179, A :3.3)
!-----------------------------------------------------------
! FIELD : MESPRO 
#define S_GEEX5940_MESPRO peel(pick(nPos, 182, 1), " ")
#define R_GEEX5940_MESPRO(A) put(nRec, 182, A :1.1)
!-----------------------------------------------------------
! FIELD : PDBCOL 
#define S_GEEX5940_PDBCOL peel(pick(nPos, 183, 7), " ")
#define R_GEEX5940_PDBCOL(A) put(nRec, 183, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : VOLCOL 
#define S_GEEX5940_VOLCOL peel(pick(nPos, 190, 7), " ")
#define R_GEEX5940_VOLCOL(A) put(nRec, 190, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : COECOL 
#define S_GEEX5940_COECOL peel(pick(nPos, 197, 4), " ")
#define R_GEEX5940_COECOL(A) put(nRec, 197, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : CODALC 
#define S_GEEX5940_CODALC peel(pick(nPos, 201, 4), " ")
#define R_GEEX5940_CODALC(A) put(nRec, 201, A :4.4)
!-----------------------------------------------------------
! FIELD : DEGALC 
#define S_GEEX5940_DEGALC peel(pick(nPos, 205, 5), " ")
#define R_GEEX5940_DEGALC(A) put(nRec, 205, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : VOLALC 
#define S_GEEX5940_VOLALC peel(pick(nPos, 210, 6), " ")
#define R_GEEX5940_VOLALC(A) put(nRec, 210, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODEAP 
#define S_GEEX5940_CODEAP peel(pick(nPos, 216, 3), " ")
#define R_GEEX5940_CODEAP(A) put(nRec, 216, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRN 
#define S_GEEX5940_CODPRN peel(pick(nPos, 219, 17), " ")
#define R_GEEX5940_CODPRN(A) put(nRec, 219, A :17.17)
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_GEEX5940_EDIPRO peel(pick(nPos, 236, 17), " ")
#define R_GEEX5940_EDIPRO(A) put(nRec, 236, A :17.17)
!-----------------------------------------------------------
! FIELD : UNICDE 
#define S_GEEX5940_UNICDE peel(pick(nPos, 253, 3), " ")
#define R_GEEX5940_UNICDE(A) put(nRec, 253, A :3.3)
!-----------------------------------------------------------
! FIELD : CVTUVC 
#define S_GEEX5940_CVTUVC peel(pick(nPos, 256, 1), " ")
#define R_GEEX5940_CVTUVC(A) put(nRec, 256, A :1.1)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5941 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5941_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5941_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5941_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5941_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5941_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5941_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5941_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5941_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : TYPSTK 
#define S_GEEX5941_TYPSTK peel(pick(nPos, 7, 1), " ")
#define R_GEEX5941_TYPSTK(A) put(nRec, 7, A :1.1)
!-----------------------------------------------------------
! FIELD : AIGPRI 
#define S_GEEX5941_AIGPRI peel(pick(nPos, 8, 1), " ")
#define R_GEEX5941_AIGPRI(A) put(nRec, 8, A :1.1)
!-----------------------------------------------------------
! FIELD : PRILIV 
#define S_GEEX5941_PRILIV peel(pick(nPos, 9, 9), " ")
#define R_GEEX5941_PRILIV(A) put(nRec, 9, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : TYPOPE 
#define S_GEEX5941_TYPOPE peel(pick(nPos, 18, 1), " ")
#define R_GEEX5941_TYPOPE(A) put(nRec, 18, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMOPE 
#define S_GEEX5941_NUMOPE peel(pick(nPos, 19, 6), " ")
#define R_GEEX5941_NUMOPE(A) put(nRec, 19, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : MSGLIG 
#define S_GEEX5941_MSGLIG peel(pick(nPos, 25, 30), " ")
#define R_GEEX5941_MSGLIG(A) put(nRec, 25, A :30.30)
!-----------------------------------------------------------
! FIELD : DIPLIV 
#define S_GEEX5941_DIPLIV peel(pick(nPos, 55, 50), " ")
#define R_GEEX5941_DIPLIV(A) put(nRec, 55, A :50.50)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_GEEX5941_NLILIV peel(pick(nPos, 105, 5), " ")
#define R_GEEX5941_NLILIV(A) put(nRec, 105, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : PRPPIC 
#define S_GEEX5941_PRPPIC peel(pick(nPos, 110, 1), " ")
#define R_GEEX5941_PRPPIC(A) put(nRec, 110, A :1.1)
!-----------------------------------------------------------
! FIELD : ZONPIC 
#define S_GEEX5941_ZONPIC peel(pick(nPos, 111, 1), " ")
#define R_GEEX5941_ZONPIC(A) put(nRec, 111, A :1.1)
!-----------------------------------------------------------
! FIELD : ALLPIC 
#define S_GEEX5941_ALLPIC peel(pick(nPos, 112, 3), " ")
#define R_GEEX5941_ALLPIC(A) put(nRec, 112, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : DPLPIC 
#define S_GEEX5941_DPLPIC peel(pick(nPos, 115, 4), " ")
#define R_GEEX5941_DPLPIC(A) put(nRec, 115, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : NIVPIC 
#define S_GEEX5941_NIVPIC peel(pick(nPos, 119, 2), " ")
#define R_GEEX5941_NIVPIC(A) put(nRec, 119, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : NUMPIC 
#define S_GEEX5941_NUMPIC peel(pick(nPos, 121, 9), " ")
#define R_GEEX5941_NUMPIC(A) put(nRec, 121, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UVCCDE 
#define S_GEEX5941_UVCCDE peel(pick(nPos, 130, 9), " ")
#define R_GEEX5941_UVCCDE(A) put(nRec, 130, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UVCSRV 
#define S_GEEX5941_UVCSRV peel(pick(nPos, 139, 9), " ")
#define R_GEEX5941_UVCSRV(A) put(nRec, 139, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UVCLIV 
#define S_GEEX5941_UVCLIV peel(pick(nPos, 148, 9), " ")
#define R_GEEX5941_UVCLIV(A) put(nRec, 148, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : PDNLIV 
#define S_GEEX5941_PDNLIV peel(pick(nPos, 157, 11), " ")
#define R_GEEX5941_PDNLIV(A) put(nRec, 157, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : SPCPRO 
#define S_GEEX5941_SPCPRO peel(pick(nPos, 168, 4), " ")
#define R_GEEX5941_SPCPRO(A) put(nRec, 168, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX5941_PCBPRO peel(pick(nPos, 172, 5), " ")
#define R_GEEX5941_PCBPRO(A) put(nRec, 172, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : COLCOU 
#define S_GEEX5941_COLCOU peel(pick(nPos, 177, 4), " ")
#define R_GEEX5941_COLCOU(A) put(nRec, 177, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : COUPAL 
#define S_GEEX5941_COUPAL peel(pick(nPos, 181, 4), " ")
#define R_GEEX5941_COUPAL(A) put(nRec, 181, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : GERPAL 
#define S_GEEX5941_GERPAL peel(pick(nPos, 185, 2), " ")
#define R_GEEX5941_GERPAL(A) put(nRec, 185, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : GERHAU 
#define S_GEEX5941_GERHAU peel(pick(nPos, 187, 2), " ")
#define R_GEEX5941_GERHAU(A) put(nRec, 187, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : NUMPAL 
#define S_GEEX5941_NUMPAL peel(pick(nPos, 189, 9), " ")
#define R_GEEX5941_NUMPAL(A) put(nRec, 189, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : SNUPAL 
#define S_GEEX5941_SNUPAL peel(pick(nPos, 198, 2), " ")
#define R_GEEX5941_SNUPAL(A) put(nRec, 198, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX5941_CODPAL peel(pick(nPos, 200, 18), " ")
#define R_GEEX5941_CODPAL(A) put(nRec, 200, A :18.18)
!-----------------------------------------------------------
! FIELD : NUMLOT 
#define S_GEEX5941_NUMLOT peel(pick(nPos, 218, 9), " ")
#define R_GEEX5941_NUMLOT(A) put(nRec, 218, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX5941_CODLOT peel(pick(nPos, 227, 20), " ")
#define R_GEEX5941_CODLOT(A) put(nRec, 227, A :20.20)
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_GEEX5941_DATFVI peel(pick(nPos, 247, 8), " ")
#define R_GEEX5941_DATFVI(A) put(nRec, 247, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5941_DISEXC peel(pick(nPos, 255, 2), " ")
#define R_GEEX5941_DISEXC(A) put(nRec, 255, A :2.2)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5942 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5942_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5942_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5942_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5942_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5942_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5942_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5942_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5942_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : ZONSTS 
#define S_GEEX5942_ZONSTS peel(pick(nPos, 7, 1), " ")
#define R_GEEX5942_ZONSTS(A) put(nRec, 7, A :1.1)
!-----------------------------------------------------------
! FIELD : ALLSTS 
#define S_GEEX5942_ALLSTS peel(pick(nPos, 8, 3), " ")
#define R_GEEX5942_ALLSTS(A) put(nRec, 8, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : DPLSTS 
#define S_GEEX5942_DPLSTS peel(pick(nPos, 11, 4), " ")
#define R_GEEX5942_DPLSTS(A) put(nRec, 11, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : NIVSTS 
#define S_GEEX5942_NIVSTS peel(pick(nPos, 15, 2), " ")
#define R_GEEX5942_NIVSTS(A) put(nRec, 15, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODACL 
#define S_GEEX5942_CODACL peel(pick(nPos, 17, 3), " ")
#define R_GEEX5942_CODACL(A) put(nRec, 17, A :3.3)
!-----------------------------------------------------------
! FIELD : MOTMVT 
#define S_GEEX5942_MOTMVT peel(pick(nPos, 20, 3), " ")
#define R_GEEX5942_MOTMVT(A) put(nRec, 20, A :3.3)
!-----------------------------------------------------------
! FIELD : ZONORI 
#define S_GEEX5942_ZONORI peel(pick(nPos, 23, 1), " ")
#define R_GEEX5942_ZONORI(A) put(nRec, 23, A :1.1)
!-----------------------------------------------------------
! FIELD : ALLORI 
#define S_GEEX5942_ALLORI peel(pick(nPos, 24, 3), " ")
#define R_GEEX5942_ALLORI(A) put(nRec, 24, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : DPLORI 
#define S_GEEX5942_DPLORI peel(pick(nPos, 27, 4), " ")
#define R_GEEX5942_DPLORI(A) put(nRec, 27, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : NIVORI 
#define S_GEEX5942_NIVORI peel(pick(nPos, 31, 2), " ")
#define R_GEEX5942_NIVORI(A) put(nRec, 31, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : UVCMNQ 
#define S_GEEX5942_UVCMNQ peel(pick(nPos, 33, 9), " ")
#define R_GEEX5942_UVCMNQ(A) put(nRec, 33, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : PDNUVC 
#define S_GEEX5942_PDNUVC peel(pick(nPos, 42, 7), " ")
#define R_GEEX5942_PDNUVC(A) put(nRec, 42, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : NUMCLS 
#define S_GEEX5942_NUMCLS peel(pick(nPos, 49, 4), " ")
#define R_GEEX5942_NUMCLS(A) put(nRec, 49, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : CODCLS 
#define S_GEEX5942_CODCLS peel(pick(nPos, 53, 3), " ")
#define R_GEEX5942_CODCLS(A) put(nRec, 53, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMRPT 
#define S_GEEX5942_NUMRPT peel(pick(nPos, 56, 8), " ")
#define R_GEEX5942_NUMRPT(A) put(nRec, 56, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNURPT 
#define S_GEEX5942_SNURPT peel(pick(nPos, 64, 3), " ")
#define R_GEEX5942_SNURPT(A) put(nRec, 64, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : TOPRPT 
#define S_GEEX5942_TOPRPT peel(pick(nPos, 67, 1), " ")
#define R_GEEX5942_TOPRPT(A) put(nRec, 67, A :1.1)
!-----------------------------------------------------------
! FIELD : COELOG 
#define S_GEEX5942_COELOG peel(pick(nPos, 68, 5), " ")
#define R_GEEX5942_COELOG(A) put(nRec, 68, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CNFLIG 
#define S_GEEX5942_CNFLIG peel(pick(nPos, 73, 1), " ")
#define R_GEEX5942_CNFLIG(A) put(nRec, 73, A :1.1)
!-----------------------------------------------------------
! FIELD : UVCDIF 
#define S_GEEX5942_UVCDIF peel(pick(nPos, 74, 9), " ")
#define R_GEEX5942_UVCDIF(A) put(nRec, 74, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : PDBUVC 
#define S_GEEX5942_PDBUVC peel(pick(nPos, 83, 7), " ")
#define R_GEEX5942_PDBUVC(A) put(nRec, 83, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5942_REFLIV peel(pick(nPos, 90, 30), " ")
#define R_GEEX5942_REFLIV(A) put(nRec, 90, A :30.30)
!-----------------------------------------------------------
! FIELD : UVCEMB 
#define S_GEEX5942_UVCEMB peel(pick(nPos, 120, 9), " ")
#define R_GEEX5942_UVCEMB(A) put(nRec, 120, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : MAJPOI 
#define S_GEEX5942_MAJPOI peel(pick(nPos, 129, 1), " ")
#define R_GEEX5942_MAJPOI(A) put(nRec, 129, A :1.1)
!-----------------------------------------------------------
! FIELD : STKOUV 
#define S_GEEX5942_STKOUV peel(pick(nPos, 130, 1), " ")
#define R_GEEX5942_STKOUV(A) put(nRec, 130, A :1.1)
!-----------------------------------------------------------
! FIELD : CODSUP 
#define S_GEEX5942_CODSUP peel(pick(nPos, 131, 2), " ")
#define R_GEEX5942_CODSUP(A) put(nRec, 131, A :2.2)
!-----------------------------------------------------------
! FIELD : DATFAB 
#define S_GEEX5942_DATFAB peel(pick(nPos, 133, 8), " ")
#define R_GEEX5942_DATFAB(A) put(nRec, 133, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : VLDDAT 
#define S_GEEX5942_VLDDAT peel(pick(nPos, 141, 1), " ")
#define R_GEEX5942_VLDDAT(A) put(nRec, 141, A :1.1)
!-----------------------------------------------------------
! FIELD : TOPCOL 
#define S_GEEX5942_TOPCOL peel(pick(nPos, 142, 1), " ")
#define R_GEEX5942_TOPCOL(A) put(nRec, 142, A :1.1)
!-----------------------------------------------------------
! FIELD : VTLSEQ 
#define S_GEEX5942_VTLSEQ peel(pick(nPos, 143, 5), " ")
#define R_GEEX5942_VTLSEQ(A) put(nRec, 143, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : REFORI 
#define S_GEEX5942_REFORI peel(pick(nPos, 148, 30), " ")
#define R_GEEX5942_REFORI(A) put(nRec, 148, A :30.30)
!-----------------------------------------------------------
! FIELD : CODOPE 
#define S_GEEX5942_CODOPE peel(pick(nPos, 178, 14), " ")
#define R_GEEX5942_CODOPE(A) put(nRec, 178, A :14.14)
!-----------------------------------------------------------
! FIELD : NUMORI 
#define S_GEEX5942_NUMORI peel(pick(nPos, 192, 8), " ")
#define R_GEEX5942_NUMORI(A) put(nRec, 192, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUORI 
#define S_GEEX5942_SNUORI peel(pick(nPos, 200, 3), " ")
#define R_GEEX5942_SNUORI(A) put(nRec, 200, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5942_DISEXC peel(pick(nPos, 203, 54), " ")
#define R_GEEX5942_DISEXC(A) put(nRec, 203, A :54.54)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5943 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5943_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5943_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5943_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5943_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5943_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5943_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5943_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5943_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMSUP 
#define S_GEEX5943_NUMSUP peel(pick(nPos, 7, 8), " ")
#define R_GEEX5943_NUMSUP(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUSUP 
#define S_GEEX5943_SNUSUP peel(pick(nPos, 15, 3), " ")
#define R_GEEX5943_SNUSUP(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5943_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5943_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX5943_CODPRO peel(pick(nPos, 21, 17), " ")
#define R_GEEX5943_CODPRO(A) put(nRec, 21, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX5943_VALPRO peel(pick(nPos, 38, 2), " ")
#define R_GEEX5943_VALPRO(A) put(nRec, 38, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : DS1PRO 
#define S_GEEX5943_DS1PRO peel(pick(nPos, 40, 35), " ")
#define R_GEEX5943_DS1PRO(A) put(nRec, 40, A :35.35)
!-----------------------------------------------------------
! FIELD : DS2PRO 
#define S_GEEX5943_DS2PRO peel(pick(nPos, 75, 35), " ")
#define R_GEEX5943_DS2PRO(A) put(nRec, 75, A :35.35)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX5943_VALRUB peel(pick(nPos, 110, 105), " ")
#define R_GEEX5943_VALRUB(A) put(nRec, 110, A :105.105)
!-----------------------------------------------------------
! FIELD : CLAACO 
#define S_GEEX5943_CLAACO peel(pick(nPos, 215, 7), " ")
#define R_GEEX5943_CLAACO(A) put(nRec, 215, A :7.7)
!-----------------------------------------------------------
! FIELD : GRPEMB 
#define S_GEEX5943_GRPEMB peel(pick(nPos, 222, 5), " ")
#define R_GEEX5943_GRPEMB(A) put(nRec, 222, A :5.5)
!-----------------------------------------------------------
! FIELD : GRPRTM 
#define S_GEEX5943_GRPRTM peel(pick(nPos, 227, 7), " ")
#define R_GEEX5943_GRPRTM(A) put(nRec, 227, A :7.7)
!-----------------------------------------------------------
! FIELD : RTNTUN 
#define S_GEEX5943_RTNTUN peel(pick(nPos, 234, 8), " ")
#define R_GEEX5943_RTNTUN(A) put(nRec, 234, A :8.8)
!-----------------------------------------------------------
! FIELD : CODEAP 
#define S_GEEX5943_CODEAP peel(pick(nPos, 242, 3), " ")
#define R_GEEX5943_CODEAP(A) put(nRec, 242, A :3.3)
!-----------------------------------------------------------
! FIELD : NBREMB 
#define S_GEEX5943_NBREMB peel(pick(nPos, 245, 9), " ")
#define R_GEEX5943_NBREMB(A) put(nRec, 245, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5943_DISEXC peel(pick(nPos, 254, 3), " ")
#define R_GEEX5943_DISEXC(A) put(nRec, 254, A :3.3)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5944 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5944_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5944_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5944_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5944_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5944_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5944_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5944_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5944_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODONU 
#define S_GEEX5944_CODONU peel(pick(nPos, 7, 4), " ")
#define R_GEEX5944_CODONU(A) put(nRec, 7, A :4.4)
!-----------------------------------------------------------
! FIELD : LIBONU1 
#define S_GEEX5944_LIBONU1 peel(pick(nPos, 11, 35), " ")
#define R_GEEX5944_LIBONU1(A) put(nRec, 11, A :35.35)
!-----------------------------------------------------------
! FIELD : LIBONU2 
#define S_GEEX5944_LIBONU2 peel(pick(nPos, 46, 35), " ")
#define R_GEEX5944_LIBONU2(A) put(nRec, 46, A :35.35)
!-----------------------------------------------------------
! FIELD : LIBONU3 
#define S_GEEX5944_LIBONU3 peel(pick(nPos, 81, 35), " ")
#define R_GEEX5944_LIBONU3(A) put(nRec, 81, A :35.35)
!-----------------------------------------------------------
! FIELD : LIBONU4 
#define S_GEEX5944_LIBONU4 peel(pick(nPos, 116, 35), " ")
#define R_GEEX5944_LIBONU4(A) put(nRec, 116, A :35.35)
!-----------------------------------------------------------
! FIELD : QTELIM 
#define S_GEEX5944_QTELIM peel(pick(nPos, 151, 9), " ")
#define R_GEEX5944_QTELIM(A) put(nRec, 151, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : QTEADR 
#define S_GEEX5944_QTEADR peel(pick(nPos, 160, 10), " ")
#define R_GEEX5944_QTEADR(A) put(nRec, 160, build(number(A):R010.0))
!-----------------------------------------------------------
! FIELD : UNIADR 
#define S_GEEX5944_UNIADR peel(pick(nPos, 170, 11), " ")
#define R_GEEX5944_UNIADR(A) put(nRec, 170, A :11.11)
!-----------------------------------------------------------
! FIELD : POILIV 
#define S_GEEX5944_POILIV peel(pick(nPos, 181, 11), " ")
#define R_GEEX5944_POILIV(A) put(nRec, 181, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : POITOT 
#define S_GEEX5944_POITOT peel(pick(nPos, 192, 11), " ")
#define R_GEEX5944_POITOT(A) put(nRec, 192, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : ETITMD 
#define S_GEEX5944_ETITMD peel(pick(nPos, 203, 42), " ")
#define R_GEEX5944_ETITMD(A) put(nRec, 203, A :42.42)
!-----------------------------------------------------------
! FIELD : INDENV 
#define S_GEEX5944_INDENV peel(pick(nPos, 245, 1), " ")
#define R_GEEX5944_INDENV(A) put(nRec, 245, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5944_DISEXC peel(pick(nPos, 246, 11), " ")
#define R_GEEX5944_DISEXC(A) put(nRec, 246, A :11.11)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5945 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5945_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5945_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5945_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5945_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5945_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5945_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5945_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5945_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5945_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5945_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5945_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5945_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5945_REFLIV peel(pick(nPos, 18, 30), " ")
#define R_GEEX5945_REFLIV(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_GEEX5945_NLILIV peel(pick(nPos, 48, 5), " ")
#define R_GEEX5945_NLILIV(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5945_CODACT peel(pick(nPos, 53, 3), " ")
#define R_GEEX5945_CODACT(A) put(nRec, 53, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5945_CODCLI peel(pick(nPos, 56, 14), " ")
#define R_GEEX5945_CODCLI(A) put(nRec, 56, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX5945_CODPRO peel(pick(nPos, 70, 17), " ")
#define R_GEEX5945_CODPRO(A) put(nRec, 70, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX5945_VALPRO peel(pick(nPos, 87, 2), " ")
#define R_GEEX5945_VALPRO(A) put(nRec, 87, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : DS1PRO 
#define S_GEEX5945_DS1PRO peel(pick(nPos, 89, 30), " ")
#define R_GEEX5945_DS1PRO(A) put(nRec, 89, A :30.30)
!-----------------------------------------------------------
! FIELD : DS2PRO 
#define S_GEEX5945_DS2PRO peel(pick(nPos, 119, 30), " ")
#define R_GEEX5945_DS2PRO(A) put(nRec, 119, A :30.30)
!-----------------------------------------------------------
! FIELD : DS3PRO 
#define S_GEEX5945_DS3PRO peel(pick(nPos, 149, 35), " ")
#define R_GEEX5945_DS3PRO(A) put(nRec, 149, A :35.35)
!-----------------------------------------------------------
! FIELD : FAMPRO 
#define S_GEEX5945_FAMPRO peel(pick(nPos, 184, 10), " ")
#define R_GEEX5945_FAMPRO(A) put(nRec, 184, A :10.10)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5945_DISEXC peel(pick(nPos, 194, 63), " ")
#define R_GEEX5945_DISEXC(A) put(nRec, 194, A :63.63)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5950 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5950_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5950_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5950_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5950_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5950_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5950_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5950_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5950_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMSUP 
#define S_GEEX5950_NUMSUP peel(pick(nPos, 7, 8), " ")
#define R_GEEX5950_NUMSUP(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUSUP 
#define S_GEEX5950_SNUSUP peel(pick(nPos, 15, 3), " ")
#define R_GEEX5950_SNUSUP(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : TYPSUP 
#define S_GEEX5950_TYPSUP peel(pick(nPos, 18, 1), " ")
#define R_GEEX5950_TYPSUP(A) put(nRec, 18, A :1.1)
!-----------------------------------------------------------
! FIELD : ETASUP 
#define S_GEEX5950_ETASUP peel(pick(nPos, 19, 2), " ")
#define R_GEEX5950_ETASUP(A) put(nRec, 19, A :2.2)
!-----------------------------------------------------------
! FIELD : TOPMNQ 
#define S_GEEX5950_TOPMNQ peel(pick(nPos, 21, 1), " ")
#define R_GEEX5950_TOPMNQ(A) put(nRec, 21, A :1.1)
!-----------------------------------------------------------
! FIELD : LIBSUP 
#define S_GEEX5950_LIBSUP peel(pick(nPos, 22, 30), " ")
#define R_GEEX5950_LIBSUP(A) put(nRec, 22, A :30.30)
!-----------------------------------------------------------
! FIELD : CODEMB 
#define S_GEEX5950_CODEMB peel(pick(nPos, 52, 3), " ")
#define R_GEEX5950_CODEMB(A) put(nRec, 52, A :3.3)
!-----------------------------------------------------------
! FIELD : DATPRP 
#define S_GEEX5950_DATPRP peel(pick(nPos, 55, 8), " ")
#define R_GEEX5950_DATPRP(A) put(nRec, 55, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : NUMVAG 
#define S_GEEX5950_NUMVAG peel(pick(nPos, 63, 8), " ")
#define R_GEEX5950_NUMVAG(A) put(nRec, 63, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : NUMTOU 
#define S_GEEX5950_NUMTOU peel(pick(nPos, 71, 8), " ")
#define R_GEEX5950_NUMTOU(A) put(nRec, 71, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATLIV 
#define S_GEEX5950_DATLIV peel(pick(nPos, 79, 8), " ")
#define R_GEEX5950_DATLIV(A) put(nRec, 79, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : TOULIV 
#define S_GEEX5950_TOULIV peel(pick(nPos, 87, 4), " ")
#define R_GEEX5950_TOULIV(A) put(nRec, 87, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : ORDLIV 
#define S_GEEX5950_ORDLIV peel(pick(nPos, 91, 4), " ")
#define R_GEEX5950_ORDLIV(A) put(nRec, 91, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : KAILIV 
#define S_GEEX5950_KAILIV peel(pick(nPos, 95, 3), " ")
#define R_GEEX5950_KAILIV(A) put(nRec, 95, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5950_NUMLIV peel(pick(nPos, 98, 8), " ")
#define R_GEEX5950_NUMLIV(A) put(nRec, 98, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5950_SNULIV peel(pick(nPos, 106, 3), " ")
#define R_GEEX5950_SNULIV(A) put(nRec, 106, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5950_REFLIV peel(pick(nPos, 109, 30), " ")
#define R_GEEX5950_REFLIV(A) put(nRec, 109, A :30.30)
!-----------------------------------------------------------
! FIELD : CLILIV 
#define S_GEEX5950_CLILIV peel(pick(nPos, 139, 14), " ")
#define R_GEEX5950_CLILIV(A) put(nRec, 139, A :14.14)
!-----------------------------------------------------------
! FIELD : CUMPOI 
#define S_GEEX5950_CUMPOI peel(pick(nPos, 153, 11), " ")
#define R_GEEX5950_CUMPOI(A) put(nRec, 153, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : CUMVOL 
#define S_GEEX5950_CUMVOL peel(pick(nPos, 164, 11), " ")
#define R_GEEX5950_CUMVOL(A) put(nRec, 164, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5950_CODACT peel(pick(nPos, 175, 3), " ")
#define R_GEEX5950_CODACT(A) put(nRec, 175, A :3.3)
!-----------------------------------------------------------
! FIELD : CIRPIC 
#define S_GEEX5950_CIRPIC peel(pick(nPos, 178, 3), " ")
#define R_GEEX5950_CIRPIC(A) put(nRec, 178, A :3.3)
!-----------------------------------------------------------
! FIELD : REFMIT 
#define S_GEEX5950_REFMIT peel(pick(nPos, 181, 30), " ")
#define R_GEEX5950_REFMIT(A) put(nRec, 181, A :30.30)
!-----------------------------------------------------------
! FIELD : DATCRE 
#define S_GEEX5950_DATCRE peel(pick(nPos, 211, 8), " ")
#define R_GEEX5950_DATCRE(A) put(nRec, 211, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : NUMSUG 
#define S_GEEX5950_NUMSUG peel(pick(nPos, 219, 8), " ")
#define R_GEEX5950_NUMSUG(A) put(nRec, 219, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUSUG 
#define S_GEEX5950_SNUSUG peel(pick(nPos, 227, 3), " ")
#define R_GEEX5950_SNUSUG(A) put(nRec, 227, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : SURTPT 
#define S_GEEX5950_SURTPT peel(pick(nPos, 230, 5), " ")
#define R_GEEX5950_SURTPT(A) put(nRec, 230, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : TOPPAQ 
#define S_GEEX5950_TOPPAQ peel(pick(nPos, 235, 1), " ")
#define R_GEEX5950_TOPPAQ(A) put(nRec, 235, A :1.1)
!-----------------------------------------------------------
! FIELD : CODLDE 
#define S_GEEX5950_CODLDE peel(pick(nPos, 236, 3), " ")
#define R_GEEX5950_CODLDE(A) put(nRec, 236, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMCMP 
#define S_GEEX5950_NUMCMP peel(pick(nPos, 239, 8), " ")
#define R_GEEX5950_NUMCMP(A) put(nRec, 239, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUCMP 
#define S_GEEX5950_SNUCMP peel(pick(nPos, 247, 3), " ")
#define R_GEEX5950_SNUCMP(A) put(nRec, 247, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : TOPRCN 
#define S_GEEX5950_TOPRCN peel(pick(nPos, 250, 1), " ")
#define R_GEEX5950_TOPRCN(A) put(nRec, 250, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5950_DISEXC peel(pick(nPos, 251, 6), " ")
#define R_GEEX5950_DISEXC(A) put(nRec, 251, A :6.6)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5951 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5951_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5951_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5951_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5951_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5951_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5951_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5951_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5951_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMSUP 
#define S_GEEX5951_NUMSUP peel(pick(nPos, 7, 8), " ")
#define R_GEEX5951_NUMSUP(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUSUP 
#define S_GEEX5951_SNUSUP peel(pick(nPos, 15, 3), " ")
#define R_GEEX5951_SNUSUP(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX5951_CODPAL peel(pick(nPos, 18, 18), " ")
#define R_GEEX5951_CODPAL(A) put(nRec, 18, A :18.18)
!-----------------------------------------------------------
! FIELD : CODTLI 
#define S_GEEX5951_CODTLI peel(pick(nPos, 36, 3), " ")
#define R_GEEX5951_CODTLI(A) put(nRec, 36, A :3.3)
!-----------------------------------------------------------
! FIELD : ZONSPF 
#define S_GEEX5951_ZONSPF peel(pick(nPos, 39, 50), " ")
#define R_GEEX5951_ZONSPF(A) put(nRec, 39, A :50.50)
!-----------------------------------------------------------
! FIELD : DATDEB 
#define S_GEEX5951_DATDEB peel(pick(nPos, 89, 8), " ")
#define R_GEEX5951_DATDEB(A) put(nRec, 89, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATFIN 
#define S_GEEX5951_DATFIN peel(pick(nPos, 97, 8), " ")
#define R_GEEX5951_DATFIN(A) put(nRec, 97, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SITRCT 
#define S_GEEX5951_SITRCT peel(pick(nPos, 105, 3), " ")
#define R_GEEX5951_SITRCT(A) put(nRec, 105, A :3.3)
!-----------------------------------------------------------
! FIELD : CODTYR 
#define S_GEEX5951_CODTYR peel(pick(nPos, 108, 3), " ")
#define R_GEEX5951_CODTYR(A) put(nRec, 108, A :3.3)
!-----------------------------------------------------------
! FIELD : LIBCIR 
#define S_GEEX5951_LIBCIR peel(pick(nPos, 111, 30), " ")
#define R_GEEX5951_LIBCIR(A) put(nRec, 111, A :30.30)
!-----------------------------------------------------------
! FIELD : CUMCOL 
#define S_GEEX5951_CUMCOL peel(pick(nPos, 141, 7), " ")
#define R_GEEX5951_CUMCOL(A) put(nRec, 141, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : CUMPRT 
#define S_GEEX5951_CUMPRT peel(pick(nPos, 148, 9), " ")
#define R_GEEX5951_CUMPRT(A) put(nRec, 148, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CUMEQP 
#define S_GEEX5951_CUMEQP peel(pick(nPos, 157, 9), " ")
#define R_GEEX5951_CUMEQP(A) put(nRec, 157, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CUMUOT 
#define S_GEEX5951_CUMUOT peel(pick(nPos, 166, 9), " ")
#define R_GEEX5951_CUMUOT(A) put(nRec, 166, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : TRTPRP 
#define S_GEEX5951_TRTPRP peel(pick(nPos, 175, 3), " ")
#define R_GEEX5951_TRTPRP(A) put(nRec, 175, A :3.3)
!-----------------------------------------------------------
! FIELD : TRTCLS 
#define S_GEEX5951_TRTCLS peel(pick(nPos, 178, 3), " ")
#define R_GEEX5951_TRTCLS(A) put(nRec, 178, A :3.3)
!-----------------------------------------------------------
! FIELD : TRTUOP 
#define S_GEEX5951_TRTUOP peel(pick(nPos, 181, 3), " ")
#define R_GEEX5951_TRTUOP(A) put(nRec, 181, A :3.3)
!-----------------------------------------------------------
! FIELD : TRTTOU 
#define S_GEEX5951_TRTTOU peel(pick(nPos, 184, 3), " ")
#define R_GEEX5951_TRTTOU(A) put(nRec, 184, A :3.3)
!-----------------------------------------------------------
! FIELD : INDGER 
#define S_GEEX5951_INDGER peel(pick(nPos, 187, 1), " ")
#define R_GEEX5951_INDGER(A) put(nRec, 187, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5951_DISEXC peel(pick(nPos, 188, 69), " ")
#define R_GEEX5951_DISEXC(A) put(nRec, 188, A :69.69)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5952 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5952_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5952_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5952_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5952_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5952_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5952_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5952_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5952_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMSUP 
#define S_GEEX5952_NUMSUP peel(pick(nPos, 7, 8), " ")
#define R_GEEX5952_NUMSUP(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUSUP 
#define S_GEEX5952_SNUSUP peel(pick(nPos, 15, 3), " ")
#define R_GEEX5952_SNUSUP(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : HEULIV 
#define S_GEEX5952_HEULIV peel(pick(nPos, 18, 6), " ")
#define R_GEEX5952_HEULIV(A) put(nRec, 18, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : NOMCLI 
#define S_GEEX5952_NOMCLI peel(pick(nPos, 24, 30), " ")
#define R_GEEX5952_NOMCLI(A) put(nRec, 24, A :30.30)
!-----------------------------------------------------------
! FIELD : AD1CLI 
#define S_GEEX5952_AD1CLI peel(pick(nPos, 54, 38), " ")
#define R_GEEX5952_AD1CLI(A) put(nRec, 54, A :38.38)
!-----------------------------------------------------------
! FIELD : AD2CLI 
#define S_GEEX5952_AD2CLI peel(pick(nPos, 92, 38), " ")
#define R_GEEX5952_AD2CLI(A) put(nRec, 92, A :38.38)
!-----------------------------------------------------------
! FIELD : CPOCLI 
#define S_GEEX5952_CPOCLI peel(pick(nPos, 130, 5), " ")
#define R_GEEX5952_CPOCLI(A) put(nRec, 130, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : VILCLI 
#define S_GEEX5952_VILCLI peel(pick(nPos, 135, 26), " ")
#define R_GEEX5952_VILCLI(A) put(nRec, 135, A :26.26)
!-----------------------------------------------------------
! FIELD : PAYCLI 
#define S_GEEX5952_PAYCLI peel(pick(nPos, 161, 3), " ")
#define R_GEEX5952_PAYCLI(A) put(nRec, 161, A :3.3)
!-----------------------------------------------------------
! FIELD : MSGLIV 
#define S_GEEX5952_MSGLIV peel(pick(nPos, 164, 60), " ")
#define R_GEEX5952_MSGLIV(A) put(nRec, 164, A :60.60)
!-----------------------------------------------------------
! FIELD : CODTLI 
#define S_GEEX5952_CODTLI peel(pick(nPos, 224, 3), " ")
#define R_GEEX5952_CODTLI(A) put(nRec, 224, A :3.3)
!-----------------------------------------------------------
! FIELD : CPICLI 
#define S_GEEX5952_CPICLI peel(pick(nPos, 227, 10), " ")
#define R_GEEX5952_CPICLI(A) put(nRec, 227, A :10.10)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5952_DISEXC peel(pick(nPos, 237, 20), " ")
#define R_GEEX5952_DISEXC(A) put(nRec, 237, A :20.20)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5955 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5955_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5955_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5955_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5955_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5955_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5955_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5955_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5955_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMSUP 
#define S_GEEX5955_NUMSUP peel(pick(nPos, 7, 8), " ")
#define R_GEEX5955_NUMSUP(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUSUP 
#define S_GEEX5955_SNUSUP peel(pick(nPos, 15, 3), " ")
#define R_GEEX5955_SNUSUP(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5955_NUMLIV peel(pick(nPos, 18, 8), " ")
#define R_GEEX5955_NUMLIV(A) put(nRec, 18, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5955_SNULIV peel(pick(nPos, 26, 3), " ")
#define R_GEEX5955_SNULIV(A) put(nRec, 26, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5955_REFLIV peel(pick(nPos, 29, 30), " ")
#define R_GEEX5955_REFLIV(A) put(nRec, 29, A :30.30)
!-----------------------------------------------------------
! FIELD : TYPRUB 
#define S_GEEX5955_TYPRUB peel(pick(nPos, 59, 3), " ")
#define R_GEEX5955_TYPRUB(A) put(nRec, 59, A :3.3)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX5955_VALRUB peel(pick(nPos, 62, 105), " ")
#define R_GEEX5955_VALRUB(A) put(nRec, 62, A :105.105)
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_GEEX5955_CODRUB peel(pick(nPos, 167, 12), " ")
#define R_GEEX5955_CODRUB(A) put(nRec, 167, A :12.12)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5955_DISEXC peel(pick(nPos, 179, 78), " ")
#define R_GEEX5955_DISEXC(A) put(nRec, 179, A :78.78)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5960 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5960_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5960_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5960_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5960_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5960_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5960_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5960_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5960_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMSUP 
#define S_GEEX5960_NUMSUP peel(pick(nPos, 7, 8), " ")
#define R_GEEX5960_NUMSUP(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUSUP 
#define S_GEEX5960_SNUSUP peel(pick(nPos, 15, 3), " ")
#define R_GEEX5960_SNUSUP(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5960_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5960_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX5960_CODPRO peel(pick(nPos, 21, 17), " ")
#define R_GEEX5960_CODPRO(A) put(nRec, 21, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX5960_VALPRO peel(pick(nPos, 38, 2), " ")
#define R_GEEX5960_VALPRO(A) put(nRec, 38, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : UVCLIV 
#define S_GEEX5960_UVCLIV peel(pick(nPos, 40, 9), " ")
#define R_GEEX5960_UVCLIV(A) put(nRec, 40, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : SEQSUP 
#define S_GEEX5960_SEQSUP peel(pick(nPos, 49, 4), " ")
#define R_GEEX5960_SEQSUP(A) put(nRec, 49, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5960_NUMLIV peel(pick(nPos, 53, 8), " ")
#define R_GEEX5960_NUMLIV(A) put(nRec, 53, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5960_SNULIV peel(pick(nPos, 61, 3), " ")
#define R_GEEX5960_SNULIV(A) put(nRec, 61, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : SEQLIV 
#define S_GEEX5960_SEQLIV peel(pick(nPos, 64, 4), " ")
#define R_GEEX5960_SEQLIV(A) put(nRec, 64, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_GEEX5960_NLILIV peel(pick(nPos, 68, 5), " ")
#define R_GEEX5960_NLILIV(A) put(nRec, 68, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5960_CODCLI peel(pick(nPos, 73, 14), " ")
#define R_GEEX5960_CODCLI(A) put(nRec, 73, A :14.14)
!-----------------------------------------------------------
! FIELD : CLILIV 
#define S_GEEX5960_CLILIV peel(pick(nPos, 87, 14), " ")
#define R_GEEX5960_CLILIV(A) put(nRec, 87, A :14.14)
!-----------------------------------------------------------
! FIELD : NUMORI 
#define S_GEEX5960_NUMORI peel(pick(nPos, 101, 8), " ")
#define R_GEEX5960_NUMORI(A) put(nRec, 101, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUORI 
#define S_GEEX5960_SNUORI peel(pick(nPos, 109, 3), " ")
#define R_GEEX5960_SNUORI(A) put(nRec, 109, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_GEEX5960_EDIPRO peel(pick(nPos, 112, 17), " ")
#define R_GEEX5960_EDIPRO(A) put(nRec, 112, A :17.17)
!-----------------------------------------------------------
! FIELD : UVCCDE 
#define S_GEEX5960_UVCCDE peel(pick(nPos, 129, 9), " ")
#define R_GEEX5960_UVCCDE(A) put(nRec, 129, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : PDNLIV 
#define S_GEEX5960_PDNLIV peel(pick(nPos, 138, 11), " ")
#define R_GEEX5960_PDNLIV(A) put(nRec, 138, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX5960_PCBPRO peel(pick(nPos, 149, 5), " ")
#define R_GEEX5960_PCBPRO(A) put(nRec, 149, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : SPCPRO 
#define S_GEEX5960_SPCPRO peel(pick(nPos, 154, 4), " ")
#define R_GEEX5960_SPCPRO(A) put(nRec, 154, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : PRPPIC 
#define S_GEEX5960_PRPPIC peel(pick(nPos, 158, 1), " ")
#define R_GEEX5960_PRPPIC(A) put(nRec, 158, A :1.1)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX5960_CODPAL peel(pick(nPos, 159, 18), " ")
#define R_GEEX5960_CODPAL(A) put(nRec, 159, A :18.18)
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX5960_CODLOT peel(pick(nPos, 177, 20), " ")
#define R_GEEX5960_CODLOT(A) put(nRec, 177, A :20.20)
!-----------------------------------------------------------
! FIELD : NUMCLS 
#define S_GEEX5960_NUMCLS peel(pick(nPos, 197, 4), " ")
#define R_GEEX5960_NUMCLS(A) put(nRec, 197, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : DATFAB 
#define S_GEEX5960_DATFAB peel(pick(nPos, 201, 8), " ")
#define R_GEEX5960_DATFAB(A) put(nRec, 201, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_GEEX5960_DATFVI peel(pick(nPos, 209, 8), " ")
#define R_GEEX5960_DATFVI(A) put(nRec, 209, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5960_REFLIV peel(pick(nPos, 217, 30), " ")
#define R_GEEX5960_REFLIV(A) put(nRec, 217, A :30.30)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5960_DISEXC peel(pick(nPos, 247, 10), " ")
#define R_GEEX5960_DISEXC(A) put(nRec, 247, A :10.10)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5965 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5965_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5965_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5965_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5965_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5965_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5965_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5965_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5965_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMSUP 
#define S_GEEX5965_NUMSUP peel(pick(nPos, 7, 8), " ")
#define R_GEEX5965_NUMSUP(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUSUP 
#define S_GEEX5965_SNUSUP peel(pick(nPos, 15, 3), " ")
#define R_GEEX5965_SNUSUP(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5965_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5965_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX5965_CODPRO peel(pick(nPos, 21, 17), " ")
#define R_GEEX5965_CODPRO(A) put(nRec, 21, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX5965_VALPRO peel(pick(nPos, 38, 2), " ")
#define R_GEEX5965_VALPRO(A) put(nRec, 38, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TYPRUB 
#define S_GEEX5965_TYPRUB peel(pick(nPos, 40, 5), " ")
#define R_GEEX5965_TYPRUB(A) put(nRec, 40, A :5.5)
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_GEEX5965_CODRUB peel(pick(nPos, 45, 20), " ")
#define R_GEEX5965_CODRUB(A) put(nRec, 45, A :20.20)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX5965_VALRUB peel(pick(nPos, 65, 175), " ")
#define R_GEEX5965_VALRUB(A) put(nRec, 65, A :175.175)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5965_DISEXC peel(pick(nPos, 240, 17), " ")
#define R_GEEX5965_DISEXC(A) put(nRec, 240, A :17.17)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5967 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5967_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5967_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5967_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5967_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5967_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5967_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5967_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5967_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMSUP 
#define S_GEEX5967_NUMSUP peel(pick(nPos, 7, 8), " ")
#define R_GEEX5967_NUMSUP(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUSUP 
#define S_GEEX5967_SNUSUP peel(pick(nPos, 15, 3), " ")
#define R_GEEX5967_SNUSUP(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5967_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5967_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX5967_CODPRO peel(pick(nPos, 21, 17), " ")
#define R_GEEX5967_CODPRO(A) put(nRec, 21, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX5967_VALPRO peel(pick(nPos, 38, 2), " ")
#define R_GEEX5967_VALPRO(A) put(nRec, 38, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TYPRUB 
#define S_GEEX5967_TYPRUB peel(pick(nPos, 40, 5), " ")
#define R_GEEX5967_TYPRUB(A) put(nRec, 40, A :5.5)
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_GEEX5967_CODRUB peel(pick(nPos, 45, 20), " ")
#define R_GEEX5967_CODRUB(A) put(nRec, 45, A :20.20)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX5967_VALRUB peel(pick(nPos, 65, 175), " ")
#define R_GEEX5967_VALRUB(A) put(nRec, 65, A :175.175)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5967_DISEXC peel(pick(nPos, 240, 17), " ")
#define R_GEEX5967_DISEXC(A) put(nRec, 240, A :17.17)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5969 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5969_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5969_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5969_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5969_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5969_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5969_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5969_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5969_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMSUP 
#define S_GEEX5969_NUMSUP peel(pick(nPos, 7, 8), " ")
#define R_GEEX5969_NUMSUP(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUSUP 
#define S_GEEX5969_SNUSUP peel(pick(nPos, 15, 3), " ")
#define R_GEEX5969_SNUSUP(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5969_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5969_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX5969_CODPRO peel(pick(nPos, 21, 17), " ")
#define R_GEEX5969_CODPRO(A) put(nRec, 21, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX5969_VALPRO peel(pick(nPos, 38, 2), " ")
#define R_GEEX5969_VALPRO(A) put(nRec, 38, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TYPRUB 
#define S_GEEX5969_TYPRUB peel(pick(nPos, 40, 5), " ")
#define R_GEEX5969_TYPRUB(A) put(nRec, 40, A :5.5)
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_GEEX5969_CODRUB peel(pick(nPos, 45, 20), " ")
#define R_GEEX5969_CODRUB(A) put(nRec, 45, A :20.20)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX5969_VALRUB peel(pick(nPos, 65, 175), " ")
#define R_GEEX5969_VALRUB(A) put(nRec, 65, A :175.175)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5969_DISEXC peel(pick(nPos, 240, 17), " ")
#define R_GEEX5969_DISEXC(A) put(nRec, 240, A :17.17)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5970 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5970_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5970_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5970_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5970_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5970_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5970_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5970_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5970_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5970_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5970_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5970_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5970_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5970_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5970_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5970_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5970_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5970_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5970_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_GEEX5970_NLILIV peel(pick(nPos, 65, 5), " ")
#define R_GEEX5970_NLILIV(A) put(nRec, 65, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX5970_CODPRO peel(pick(nPos, 70, 17), " ")
#define R_GEEX5970_CODPRO(A) put(nRec, 70, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX5970_VALPRO peel(pick(nPos, 87, 2), " ")
#define R_GEEX5970_VALPRO(A) put(nRec, 87, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : NUMSUP 
#define S_GEEX5970_NUMSUP peel(pick(nPos, 89, 8), " ")
#define R_GEEX5970_NUMSUP(A) put(nRec, 89, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUSUP 
#define S_GEEX5970_SNUSUP peel(pick(nPos, 97, 3), " ")
#define R_GEEX5970_SNUSUP(A) put(nRec, 97, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX5970_CODPAL peel(pick(nPos, 100, 18), " ")
#define R_GEEX5970_CODPAL(A) put(nRec, 100, A :18.18)
!-----------------------------------------------------------
! FIELD : CODSER 
#define S_GEEX5970_CODSER peel(pick(nPos, 118, 30), " ")
#define R_GEEX5970_CODSER(A) put(nRec, 118, A :30.30)
!-----------------------------------------------------------
! FIELD : NUMSER 
#define S_GEEX5970_NUMSER peel(pick(nPos, 148, 9), " ")
#define R_GEEX5970_NUMSER(A) put(nRec, 148, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : SNUSER 
#define S_GEEX5970_SNUSER peel(pick(nPos, 157, 3), " ")
#define R_GEEX5970_SNUSER(A) put(nRec, 157, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : NUMPAL 
#define S_GEEX5970_NUMPAL peel(pick(nPos, 160, 9), " ")
#define R_GEEX5970_NUMPAL(A) put(nRec, 160, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : SNUPAL 
#define S_GEEX5970_SNUPAL peel(pick(nPos, 169, 2), " ")
#define R_GEEX5970_SNUPAL(A) put(nRec, 169, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : NUMTOU 
#define S_GEEX5970_NUMTOU peel(pick(nPos, 171, 8), " ")
#define R_GEEX5970_NUMTOU(A) put(nRec, 171, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATEXP 
#define S_GEEX5970_DATEXP peel(pick(nPos, 179, 8), " ")
#define R_GEEX5970_DATEXP(A) put(nRec, 179, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXP 
#define S_GEEX5970_HEUEXP peel(pick(nPos, 187, 6), " ")
#define R_GEEX5970_HEUEXP(A) put(nRec, 187, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5970_DISEXC peel(pick(nPos, 193, 64), " ")
#define R_GEEX5970_DISEXC(A) put(nRec, 193, A :64.64)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5980 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5980_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5980_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5980_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5980_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5980_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5980_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5980_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5980_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMTOU 
#define S_GEEX5980_NUMTOU peel(pick(nPos, 7, 8), " ")
#define R_GEEX5980_NUMTOU(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATEXP 
#define S_GEEX5980_DATEXP peel(pick(nPos, 15, 8), " ")
#define R_GEEX5980_DATEXP(A) put(nRec, 15, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXP 
#define S_GEEX5980_HEUEXP peel(pick(nPos, 23, 6), " ")
#define R_GEEX5980_HEUEXP(A) put(nRec, 23, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CLILIV 
#define S_GEEX5980_CLILIV peel(pick(nPos, 29, 14), " ")
#define R_GEEX5980_CLILIV(A) put(nRec, 29, A :14.14)
!-----------------------------------------------------------
! FIELD : CODSSC 
#define S_GEEX5980_CODSSC peel(pick(nPos, 43, 18), " ")
#define R_GEEX5980_CODSSC(A) put(nRec, 43, A :18.18)
!-----------------------------------------------------------
! FIELD : TYPENV 
#define S_GEEX5980_TYPENV peel(pick(nPos, 61, 1), " ")
#define R_GEEX5980_TYPENV(A) put(nRec, 61, A :1.1)
!-----------------------------------------------------------
! FIELD : CODEMB 
#define S_GEEX5980_CODEMB peel(pick(nPos, 62, 3), " ")
#define R_GEEX5980_CODEMB(A) put(nRec, 62, A :3.3)
!-----------------------------------------------------------
! FIELD : LIBEMB 
#define S_GEEX5980_LIBEMB peel(pick(nPos, 65, 30), " ")
#define R_GEEX5980_LIBEMB(A) put(nRec, 65, A :30.30)
!-----------------------------------------------------------
! FIELD : CODIMA 
#define S_GEEX5980_CODIMA peel(pick(nPos, 95, 35), " ")
#define R_GEEX5980_CODIMA(A) put(nRec, 95, A :35.35)
!-----------------------------------------------------------
! FIELD : CUMPOI 
#define S_GEEX5980_CUMPOI peel(pick(nPos, 130, 11), " ")
#define R_GEEX5980_CUMPOI(A) put(nRec, 130, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : SITRCT 
#define S_GEEX5980_SITRCT peel(pick(nPos, 141, 3), " ")
#define R_GEEX5980_SITRCT(A) put(nRec, 141, A :3.3)
!-----------------------------------------------------------
! FIELD : DATPRP 
#define S_GEEX5980_DATPRP peel(pick(nPos, 144, 8), " ")
#define R_GEEX5980_DATPRP(A) put(nRec, 144, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5980_DISEXC peel(pick(nPos, 152, 105), " ")
#define R_GEEX5980_DISEXC(A) put(nRec, 152, A :105.105)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5981 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5981_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5981_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5981_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5981_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5981_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5981_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5981_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5981_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMTOU 
#define S_GEEX5981_NUMTOU peel(pick(nPos, 7, 8), " ")
#define R_GEEX5981_NUMTOU(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATEXP 
#define S_GEEX5981_DATEXP peel(pick(nPos, 15, 8), " ")
#define R_GEEX5981_DATEXP(A) put(nRec, 15, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXP 
#define S_GEEX5981_HEUEXP peel(pick(nPos, 23, 6), " ")
#define R_GEEX5981_HEUEXP(A) put(nRec, 23, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CLILIV 
#define S_GEEX5981_CLILIV peel(pick(nPos, 29, 14), " ")
#define R_GEEX5981_CLILIV(A) put(nRec, 29, A :14.14)
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_GEEX5981_EDIPRO peel(pick(nPos, 43, 85), " ")
#define R_GEEX5981_EDIPRO(A) put(nRec, 43, A :85.85)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX5981_CODPRO peel(pick(nPos, 128, 17), " ")
#define R_GEEX5981_CODPRO(A) put(nRec, 128, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX5981_VALPRO peel(pick(nPos, 145, 2), " ")
#define R_GEEX5981_VALPRO(A) put(nRec, 145, A :2.2)
!-----------------------------------------------------------
! FIELD : DS1PRO 
#define S_GEEX5981_DS1PRO peel(pick(nPos, 147, 30), " ")
#define R_GEEX5981_DS1PRO(A) put(nRec, 147, A :30.30)
!-----------------------------------------------------------
! FIELD : QTECOL 
#define S_GEEX5981_QTECOL peel(pick(nPos, 177, 9), " ")
#define R_GEEX5981_QTECOL(A) put(nRec, 177, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : QTEUVC 
#define S_GEEX5981_QTEUVC peel(pick(nPos, 186, 9), " ")
#define R_GEEX5981_QTEUVC(A) put(nRec, 186, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CUMPOI 
#define S_GEEX5981_CUMPOI peel(pick(nPos, 195, 11), " ")
#define R_GEEX5981_CUMPOI(A) put(nRec, 195, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : SITRCT 
#define S_GEEX5981_SITRCT peel(pick(nPos, 206, 3), " ")
#define R_GEEX5981_SITRCT(A) put(nRec, 206, A :3.3)
!-----------------------------------------------------------
! FIELD : DATPRP 
#define S_GEEX5981_DATPRP peel(pick(nPos, 209, 8), " ")
#define R_GEEX5981_DATPRP(A) put(nRec, 209, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : VALVAR 
#define S_GEEX5981_VALVAR peel(pick(nPos, 217, 18), " ")
#define R_GEEX5981_VALVAR(A) put(nRec, 217, A :18.18)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5981_DISEXC peel(pick(nPos, 235, 22), " ")
#define R_GEEX5981_DISEXC(A) put(nRec, 235, A :22.22)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5990 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5990_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5990_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5990_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5990_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5990_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5990_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5990_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5990_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMPAL 
#define S_GEEX5990_NUMPAL peel(pick(nPos, 7, 9), " ")
#define R_GEEX5990_NUMPAL(A) put(nRec, 7, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : SNUPAL 
#define S_GEEX5990_SNUPAL peel(pick(nPos, 16, 2), " ")
#define R_GEEX5990_SNUPAL(A) put(nRec, 16, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5990_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5990_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5990_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5990_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX5990_CODPRO peel(pick(nPos, 35, 17), " ")
#define R_GEEX5990_CODPRO(A) put(nRec, 35, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX5990_VALPRO peel(pick(nPos, 52, 2), " ")
#define R_GEEX5990_VALPRO(A) put(nRec, 52, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX5990_CODPAL peel(pick(nPos, 54, 18), " ")
#define R_GEEX5990_CODPAL(A) put(nRec, 54, A :18.18)
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GEEX5990_MOTIMM peel(pick(nPos, 72, 9), " ")
#define R_GEEX5990_MOTIMM(A) put(nRec, 72, A :9.9)
!-----------------------------------------------------------
! FIELD : DATLIB 
#define S_GEEX5990_DATLIB peel(pick(nPos, 81, 24), " ")
#define R_GEEX5990_DATLIB(A) put(nRec, 81, build(number(A):R024.0))
!-----------------------------------------------------------
! FIELD : HEULIB 
#define S_GEEX5990_HEULIB peel(pick(nPos, 105, 18), " ")
#define R_GEEX5990_HEULIB(A) put(nRec, 105, build(number(A):R018.0))
!-----------------------------------------------------------
! FIELD : INDLIB 
#define S_GEEX5990_INDLIB peel(pick(nPos, 123, 3), " ")
#define R_GEEX5990_INDLIB(A) put(nRec, 123, A :3.3)
!-----------------------------------------------------------
! FIELD : IMMBKL 
#define S_GEEX5990_IMMBKL peel(pick(nPos, 126, 3), " ")
#define R_GEEX5990_IMMBKL(A) put(nRec, 126, A :3.3)
!-----------------------------------------------------------
! FIELD : PALIMM 
#define S_GEEX5990_PALIMM peel(pick(nPos, 129, 3), " ")
#define R_GEEX5990_PALIMM(A) put(nRec, 129, A :3.3)
!-----------------------------------------------------------
! FIELD : DATBKL 
#define S_GEEX5990_DATBKL peel(pick(nPos, 132, 8), " ")
#define R_GEEX5990_DATBKL(A) put(nRec, 132, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUBKL 
#define S_GEEX5990_HEUBKL peel(pick(nPos, 140, 6), " ")
#define R_GEEX5990_HEUBKL(A) put(nRec, 140, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : DATIMM 
#define S_GEEX5990_DATIMM peel(pick(nPos, 146, 8), " ")
#define R_GEEX5990_DATIMM(A) put(nRec, 146, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUIMM 
#define S_GEEX5990_HEUIMM peel(pick(nPos, 154, 6), " ")
#define R_GEEX5990_HEUIMM(A) put(nRec, 154, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5990_DISEXC peel(pick(nPos, 160, 97), " ")
#define R_GEEX5990_DISEXC(A) put(nRec, 160, A :97.97)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5998 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5998_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5998_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5998_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5998_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5998_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5998_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5998_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5998_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODPRP 
#define S_GEEX5998_CODPRP peel(pick(nPos, 7, 10), " ")
#define R_GEEX5998_CODPRP(A) put(nRec, 7, A :10.10)
!-----------------------------------------------------------
! FIELD : IPMOUT 
#define S_GEEX5998_IPMOUT peel(pick(nPos, 17, 20), " ")
#define R_GEEX5998_IPMOUT(A) put(nRec, 17, A :20.20)
!-----------------------------------------------------------
! FIELD : PDNLIV 
#define S_GEEX5998_PDNLIV peel(pick(nPos, 37, 11), " ")
#define R_GEEX5998_PDNLIV(A) put(nRec, 37, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : PDBLIV 
#define S_GEEX5998_PDBLIV peel(pick(nPos, 48, 11), " ")
#define R_GEEX5998_PDBLIV(A) put(nRec, 48, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : TOTPRO 
#define S_GEEX5998_TOTPRO peel(pick(nPos, 59, 3), " ")
#define R_GEEX5998_TOTPRO(A) put(nRec, 59, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CUMSUP 
#define S_GEEX5998_CUMSUP peel(pick(nPos, 62, 5), " ")
#define R_GEEX5998_CUMSUP(A) put(nRec, 62, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : TYPMVT 
#define S_GEEX5998_TYPMVT peel(pick(nPos, 67, 1), " ")
#define R_GEEX5998_TYPMVT(A) put(nRec, 67, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5998_DISEXC peel(pick(nPos, 68, 189), " ")
#define R_GEEX5998_DISEXC(A) put(nRec, 68, A :189.189)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5999 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5999_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5999_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5999_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5999_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5999_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5999_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5999_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5999_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMTOU 
#define S_GEEX5999_NUMTOU peel(pick(nPos, 7, 8), " ")
#define R_GEEX5999_NUMTOU(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODBAS 
#define S_GEEX5999_CODBAS peel(pick(nPos, 15, 3), " ")
#define R_GEEX5999_CODBAS(A) put(nRec, 15, A :3.3)
!-----------------------------------------------------------
! FIELD : CPTEXC 
#define S_GEEX5999_CPTEXC peel(pick(nPos, 18, 8), " ")
#define R_GEEX5999_CPTEXC(A) put(nRec, 18, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : ERREXC 
#define S_GEEX5999_ERREXC peel(pick(nPos, 26, 8), " ")
#define R_GEEX5999_ERREXC(A) put(nRec, 26, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5999_DISEXC peel(pick(nPos, 34, 223), " ")
#define R_GEEX5999_DISEXC(A) put(nRec, 34, A :223.223)
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
!===========================================================
! Line : GEEX9999 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9999_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9999_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9999_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9999_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9999_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9999_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9999_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9999_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : EMTEXC 
#define S_GEEX9999_EMTEXC peel(pick(nPos, 7, 14), " ")
#define R_GEEX9999_EMTEXC(A) put(nRec, 7, A :14.14)
!-----------------------------------------------------------
! FIELD : RCTEXC 
#define S_GEEX9999_RCTEXC peel(pick(nPos, 21, 14), " ")
#define R_GEEX9999_RCTEXC(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXC 
#define S_GEEX9999_DATEXC peel(pick(nPos, 35, 8), " ")
#define R_GEEX9999_DATEXC(A) put(nRec, 35, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_GEEX9999_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_GEEX9999_HEUEXC(A) put(nRec, 43, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : NUMEXC 
#define S_GEEX9999_NUMEXC peel(pick(nPos, 49, 7), " ")
#define R_GEEX9999_NUMEXC(A) put(nRec, 49, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : CPTEXC 
#define S_GEEX9999_CPTEXC peel(pick(nPos, 56, 8), " ")
#define R_GEEX9999_CPTEXC(A) put(nRec, 56, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : ERREXC 
#define S_GEEX9999_ERREXC peel(pick(nPos, 64, 8), " ")
#define R_GEEX9999_ERREXC(A) put(nRec, 64, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : IDEMSG 
#define S_GEEX9999_IDEMSG peel(pick(nPos, 72, 30), " ")
#define R_GEEX9999_IDEMSG(A) put(nRec, 72, A :30.30)
!-----------------------------------------------------------
! FIELD : DEBFIN 
#define S_GEEX9999_DEBFIN peel(pick(nPos, 102, 1), " ")
#define R_GEEX9999_DEBFIN(A) put(nRec, 102, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9999_DISEXC peel(pick(nPos, 103, 154), " ")
#define R_GEEX9999_DISEXC(A) put(nRec, 103, A :154.154)
!-----------------------------------------------------------

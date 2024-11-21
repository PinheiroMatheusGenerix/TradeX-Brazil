! File GEEXM50 : 
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
! Line : GEEX5000 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5000_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5000_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5000_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5000_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5000_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5000_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5000_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5000_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5000_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5000_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5000_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5000_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5000_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5000_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5000_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5000_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5000_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5000_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : CODTLI 
#define S_GEEX5000_CODTLI peel(pick(nPos, 65, 3), " ")
#define R_GEEX5000_CODTLI(A) put(nRec, 65, A :3.3)
!-----------------------------------------------------------
! FIELD : DTILIV 
#define S_GEEX5000_DTILIV peel(pick(nPos, 68, 8), " ")
#define R_GEEX5000_DTILIV(A) put(nRec, 68, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEILIV 
#define S_GEEX5000_HEILIV peel(pick(nPos, 76, 4), " ")
#define R_GEEX5000_HEILIV(A) put(nRec, 76, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : CLILIV 
#define S_GEEX5000_CLILIV peel(pick(nPos, 80, 14), " ")
#define R_GEEX5000_CLILIV(A) put(nRec, 80, A :14.14)
!-----------------------------------------------------------
! FIELD : TYPLIV 
#define S_GEEX5000_TYPLIV peel(pick(nPos, 94, 1), " ")
#define R_GEEX5000_TYPLIV(A) put(nRec, 94, A :1.1)
!-----------------------------------------------------------
! FIELD : CODMOP 
#define S_GEEX5000_CODMOP peel(pick(nPos, 95, 3), " ")
#define R_GEEX5000_CODMOP(A) put(nRec, 95, A :3.3)
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_GEEX5000_CODTRA peel(pick(nPos, 98, 14), " ")
#define R_GEEX5000_CODTRA(A) put(nRec, 98, A :14.14)
!-----------------------------------------------------------
! FIELD : CODRGT 
#define S_GEEX5000_CODRGT peel(pick(nPos, 112, 3), " ")
#define R_GEEX5000_CODRGT(A) put(nRec, 112, A :3.3)
!-----------------------------------------------------------
! FIELD : TOULIV 
#define S_GEEX5000_TOULIV peel(pick(nPos, 115, 4), " ")
#define R_GEEX5000_TOULIV(A) put(nRec, 115, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : ORDLIV 
#define S_GEEX5000_ORDLIV peel(pick(nPos, 119, 4), " ")
#define R_GEEX5000_ORDLIV(A) put(nRec, 119, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : KAILIV 
#define S_GEEX5000_KAILIV peel(pick(nPos, 123, 3), " ")
#define R_GEEX5000_KAILIV(A) put(nRec, 123, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : MSGPRP1 
#define S_GEEX5000_MSGPRP1 peel(pick(nPos, 126, 30), " ")
#define R_GEEX5000_MSGPRP1(A) put(nRec, 126, A :30.30)
!-----------------------------------------------------------
! FIELD : MSGPRP2 
#define S_GEEX5000_MSGPRP2 peel(pick(nPos, 156, 30), " ")
#define R_GEEX5000_MSGPRP2(A) put(nRec, 126, A :30.30)
!-----------------------------------------------------------
! FIELD : MSGLIV1 
#define S_GEEX5000_MSGLIV1 peel(pick(nPos, 186, 30), " ")
#define R_GEEX5000_MSGLIV1(A) put(nRec, 186, A :30.30)
!-----------------------------------------------------------
! FIELD : MSGLIV2 
#define S_GEEX5000_MSGLIV2 peel(pick(nPos, 186, 30), " ")
#define R_GEEX5000_MSGLIV2(A) put(nRec, 186, A :30.30)
!-----------------------------------------------------------
! FIELD : GSTALC 
#define S_GEEX5000_GSTALC peel(pick(nPos, 246, 1), " ")
#define R_GEEX5000_GSTALC(A) put(nRec, 246, A :1.1)
!-----------------------------------------------------------
! FIELD : CODSIT 
#define S_GEEX5000_CODSIT peel(pick(nPos, 247, 3), " ")
#define R_GEEX5000_CODSIT(A) put(nRec, 247, A :3.3)
!-----------------------------------------------------------
! FIELD : IGLSIT 
#define S_GEEX5000_IGLSIT peel(pick(nPos, 250, 3), " ")
#define R_GEEX5000_IGLSIT(A) put(nRec, 250, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODBAS 
#define S_GEEX5000_CODBAS peel(pick(nPos, 253, 3), " ")
#define R_GEEX5000_CODBAS(A) put(nRec, 253, A :3.3)
!-----------------------------------------------------------
! FIELD : TYPCDE 
#define S_GEEX5000_TYPCDE peel(pick(nPos, 256, 1), " ")
#define R_GEEX5000_TYPCDE(A) put(nRec, 256, A :1.1)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5001 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5001_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5001_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5001_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5001_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5001_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5001_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5001_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5001_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5001_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5001_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5001_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5001_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5001_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5001_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5001_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5001_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5001_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5001_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : TOPLIV 
#define S_GEEX5001_TOPLIV peel(pick(nPos, 65, 5), " ")
#define R_GEEX5001_TOPLIV(A) put(nRec, 65, A :5.5)
!-----------------------------------------------------------
! FIELD : DIPLIV 
#define S_GEEX5001_DIPLIV peel(pick(nPos, 70, 50), " ")
#define R_GEEX5001_DIPLIV(A) put(nRec, 70, A :50.50)
!-----------------------------------------------------------
! FIELD : DATEXP 
#define S_GEEX5001_DATEXP peel(pick(nPos, 120, 8), " ")
#define R_GEEX5001_DATEXP(A) put(nRec, 120, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXP 
#define S_GEEX5001_HEUEXP peel(pick(nPos, 128, 4), " ")
#define R_GEEX5001_HEUEXP(A) put(nRec, 128, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : MNTCRB 
#define S_GEEX5001_MNTCRB peel(pick(nPos, 132, 14), " ")
#define R_GEEX5001_MNTCRB(A) put(nRec, 132, build(number(A):R014.0))
!-----------------------------------------------------------
! FIELD : REFCLI 
#define S_GEEX5001_REFCLI peel(pick(nPos, 146, 30), " ")
#define R_GEEX5001_REFCLI(A) put(nRec, 146, A :30.30)
!-----------------------------------------------------------
! FIELD : CRILIV 
#define S_GEEX5001_CRILIV peel(pick(nPos, 176, 20), " ")
#define R_GEEX5001_CRILIV(A) put(nRec, 176, A :20.20)
!-----------------------------------------------------------
! FIELD : PTYCLI 
#define S_GEEX5001_PTYCLI peel(pick(nPos, 196, 3), " ")
#define R_GEEX5001_PTYCLI(A) put(nRec, 196, A :3.3)
!-----------------------------------------------------------
! FIELD : CODLDP 
#define S_GEEX5001_CODLDP peel(pick(nPos, 199, 3), " ")
#define R_GEEX5001_CODLDP(A) put(nRec, 199, A :3.3)
!-----------------------------------------------------------
! FIELD : EDICLF 
#define S_GEEX5001_EDICLF peel(pick(nPos, 202, 14), " ")
#define R_GEEX5001_EDICLF(A) put(nRec, 202, A :14.14)
!-----------------------------------------------------------
! FIELD : EDICLI 
#define S_GEEX5001_EDICLI peel(pick(nPos, 216, 14), " ")
#define R_GEEX5001_EDICLI(A) put(nRec, 216, A :14.14)
!-----------------------------------------------------------
! FIELD : EDITRA 
#define S_GEEX5001_EDITRA peel(pick(nPos, 230, 14), " ")
#define R_GEEX5001_EDITRA(A) put(nRec, 230, A :14.14)
!-----------------------------------------------------------
! FIELD : DATCHT 
#define S_GEEX5001_DATCHT peel(pick(nPos, 244, 8), " ")
#define R_GEEX5001_DATCHT(A) put(nRec, 244, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUCHT 
#define S_GEEX5001_HEUCHT peel(pick(nPos, 252, 4), " ")
#define R_GEEX5001_HEUCHT(A) put(nRec, 252, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5001_DISEXC peel(pick(nPos, 256, 1), " ")
#define R_GEEX5001_DISEXC(A) put(nRec, 256, A :1.1)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5002 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5002_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5002_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5002_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5002_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5002_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5002_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5002_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5002_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5002_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5002_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5002_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5002_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5002_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5002_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5002_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5002_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5002_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5002_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : NUMTOU 
#define S_GEEX5002_NUMTOU peel(pick(nPos, 65, 8), " ")
#define R_GEEX5002_NUMTOU(A) put(nRec, 65, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATPTD 
#define S_GEEX5002_DATPTD peel(pick(nPos, 73, 8), " ")
#define R_GEEX5002_DATPTD(A) put(nRec, 73, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUPTD 
#define S_GEEX5002_HEUPTD peel(pick(nPos, 81, 6), " ")
#define R_GEEX5002_HEUPTD(A) put(nRec, 81, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODAFI 
#define S_GEEX5002_CODAFI peel(pick(nPos, 87, 10), " ")
#define R_GEEX5002_CODAFI(A) put(nRec, 87, A :10.10)
!-----------------------------------------------------------
! FIELD : CODDDO 
#define S_GEEX5002_CODDDO peel(pick(nPos, 97, 14), " ")
#define R_GEEX5002_CODDDO(A) put(nRec, 97, A :14.14)
!-----------------------------------------------------------
! FIELD : SITPAL 
#define S_GEEX5002_SITPAL peel(pick(nPos, 111, 3), " ")
#define R_GEEX5002_SITPAL(A) put(nRec, 111, A :3.3)
!-----------------------------------------------------------
! FIELD : CLIVIA 
#define S_GEEX5002_CLIVIA peel(pick(nPos, 114, 14), " ")
#define R_GEEX5002_CLIVIA(A) put(nRec, 114, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXC 
#define S_GEEX5002_DATEXC peel(pick(nPos, 128, 8), " ")
#define R_GEEX5002_DATEXC(A) put(nRec, 128, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_GEEX5002_HEUEXC peel(pick(nPos, 136, 6), " ")
#define R_GEEX5002_HEUEXC(A) put(nRec, 136, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODCLV 
#define S_GEEX5002_CODCLV peel(pick(nPos, 142, 3), " ")
#define R_GEEX5002_CODCLV(A) put(nRec, 142, A :3.3)
!-----------------------------------------------------------
! FIELD : CODOWN 
#define S_GEEX5002_CODOWN peel(pick(nPos, 145, 14), " ")
#define R_GEEX5002_CODOWN(A) put(nRec, 145, A :14.14)
!-----------------------------------------------------------
! FIELD : CODOFT 
#define S_GEEX5002_CODOFT peel(pick(nPos, 159, 14), " ")
#define R_GEEX5002_CODOFT(A) put(nRec, 159, A :14.14)
!-----------------------------------------------------------
! FIELD : SITRCT 
#define S_GEEX5002_SITRCT peel(pick(nPos, 173, 3), " ")
#define R_GEEX5002_SITRCT(A) put(nRec, 173, A :3.3)
!-----------------------------------------------------------
! FIELD : TOPVIA 
#define S_GEEX5002_TOPVIA peel(pick(nPos, 176, 1), " ")
#define R_GEEX5002_TOPVIA(A) put(nRec, 176, A :1.1)
!-----------------------------------------------------------
! FIELD : CODGLN 
#define S_GEEX5002_CODGLN peel(pick(nPos, 177, 14), " ")
#define R_GEEX5002_CODGLN(A) put(nRec, 177, A :14.14)
!-----------------------------------------------------------
! FIELD : REFEXT 
#define S_GEEX5002_REFEXT peel(pick(nPos, 191, 30), " ")
#define R_GEEX5002_REFEXT(A) put(nRec, 191, A :30.30)
!-----------------------------------------------------------
! FIELD : HLIMIN 
#define S_GEEX5002_HLIMIN peel(pick(nPos, 221, 4), " ")
#define R_GEEX5002_HLIMIN(A) put(nRec, 221, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : HLIMAX 
#define S_GEEX5002_HLIMAX peel(pick(nPos, 225, 4), " ")
#define R_GEEX5002_HLIMAX(A) put(nRec, 225, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : CODACL 
#define S_GEEX5002_CODACL peel(pick(nPos, 229, 3), " ")
#define R_GEEX5002_CODACL(A) put(nRec, 229, A :3.3)
!-----------------------------------------------------------
! FIELD : CODTTO 
#define S_GEEX5002_CODTTO peel(pick(nPos, 232, 3), " ")
#define R_GEEX5002_CODTTO(A) put(nRec, 232, A :3.3)
!-----------------------------------------------------------
! FIELD : DATLIV 
#define S_GEEX5002_DATLIV peel(pick(nPos, 235, 8), " ")
#define R_GEEX5002_DATLIV(A) put(nRec, 235, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5002_DISEXC peel(pick(nPos, 243, 14), " ")
#define R_GEEX5002_DISEXC(A) put(nRec, 243, A :14.14)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5003 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5003_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5003_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5003_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5003_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5003_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5003_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5003_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5003_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5003_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5003_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5003_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5003_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5003_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5003_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5003_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5003_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5003_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5003_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : CODSITC 
#define S_GEEX5003_CODSITC peel(pick(nPos, 65, 3), " ")
#define R_GEEX5003_CODSITC(A) put(nRec, 65, A :3.3)
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_GEEX5003_CODFOU peel(pick(nPos, 68, 14), " ")
#define R_GEEX5003_CODFOU(A) put(nRec, 68, A :14.14)
!-----------------------------------------------------------
! FIELD : CODLDR 
#define S_GEEX5003_CODLDR peel(pick(nPos, 82, 3), " ")
#define R_GEEX5003_CODLDR(A) put(nRec, 82, A :3.3)
!-----------------------------------------------------------
! FIELD : MSGAPV 
#define S_GEEX5003_MSGAPV peel(pick(nPos, 85, 30), " ")
#define R_GEEX5003_MSGAPV(A) put(nRec, 85, A :30.30)
!-----------------------------------------------------------
! FIELD : CODTRE 
#define S_GEEX5003_CODTRE peel(pick(nPos, 115, 3), " ")
#define R_GEEX5003_CODTRE(A) put(nRec, 115, A :3.3)
!-----------------------------------------------------------
! FIELD : DATLIV 
#define S_GEEX5003_DATLIV peel(pick(nPos, 118, 8), " ")
#define R_GEEX5003_DATLIV(A) put(nRec, 118, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATPRP 
#define S_GEEX5003_DATPRP peel(pick(nPos, 126, 8), " ")
#define R_GEEX5003_DATPRP(A) put(nRec, 126, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEULIV 
#define S_GEEX5003_HEULIV peel(pick(nPos, 134, 6), " ")
#define R_GEEX5003_HEULIV(A) put(nRec, 134, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5003_DISEXC peel(pick(nPos, 140, 117), " ")
#define R_GEEX5003_DISEXC(A) put(nRec, 140, A :117.117)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5005 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5005_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5005_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5005_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5005_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5005_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5005_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5005_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5005_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5005_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5005_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5005_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5005_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5005_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5005_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5005_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5005_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5005_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5005_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_GEEX5005_CODRUB peel(pick(nPos, 65, 16), " ")
#define R_GEEX5005_CODRUB(A) put(nRec, 65, A :16.16)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX5005_VALRUB peel(pick(nPos, 81, 140), " ")
#define R_GEEX5005_VALRUB(A) put(nRec, 81, A :140.140)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5005_DISEXC peel(pick(nPos, 221, 36), " ")
#define R_GEEX5005_DISEXC(A) put(nRec, 221, A :36.36)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5006 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5006_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5006_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5006_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5006_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5006_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5006_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5006_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5006_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5006_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5006_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5006_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5006_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5006_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5006_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5006_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5006_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5006_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5006_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIINP 
#define S_GEEX5006_NLIINP peel(pick(nPos, 65, 8), " ")
#define R_GEEX5006_NLIINP(A) put(nRec, 65, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : LIGINP 
#define S_GEEX5006_LIGINP peel(pick(nPos, 73, 140), " ")
#define R_GEEX5006_LIGINP(A) put(nRec, 73, A :140.140)
!-----------------------------------------------------------
! FIELD : TYPINP 
#define S_GEEX5006_TYPINP peel(pick(nPos, 213, 1), " ")
#define R_GEEX5006_TYPINP(A) put(nRec, 213, A :1.1)
!-----------------------------------------------------------
! FIELD : VALINP 
#define S_GEEX5006_VALINP peel(pick(nPos, 214, 30), " ")
#define R_GEEX5006_VALINP(A) put(nRec, 214, A :30.30)
!-----------------------------------------------------------
! FIELD : CODIMP 
#define S_GEEX5006_CODIMP peel(pick(nPos, 244, 3), " ")
#define R_GEEX5006_CODIMP(A) put(nRec, 244, A :3.3)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5006_DISEXC peel(pick(nPos, 247, 10), " ")
#define R_GEEX5006_DISEXC(A) put(nRec, 247, A :10.10)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5010 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5010_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5010_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5010_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5010_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5010_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5010_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5010_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5010_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5010_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5010_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5010_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5010_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5010_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5010_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5010_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5010_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5010_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5010_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : NOMCLI 
#define S_GEEX5010_NOMCLI peel(pick(nPos, 65, 30), " ")
#define R_GEEX5010_NOMCLI(A) put(nRec, 65, A :30.30)
!-----------------------------------------------------------
! FIELD : AD1CLI 
#define S_GEEX5010_AD1CLI peel(pick(nPos, 95, 30), " ")
#define R_GEEX5010_AD1CLI(A) put(nRec, 95, A :30.30)
!-----------------------------------------------------------
! FIELD : AD2CLI 
#define S_GEEX5010_AD2CLI peel(pick(nPos, 125, 30), " ")
#define R_GEEX5010_AD2CLI(A) put(nRec, 125, A :30.30)
!-----------------------------------------------------------
! FIELD : CPOCLI 
#define S_GEEX5010_CPOCLI peel(pick(nPos, 155, 5), " ")
#define R_GEEX5010_CPOCLI(A) put(nRec, 155, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : VILCLI 
#define S_GEEX5010_VILCLI peel(pick(nPos, 160, 26), " ")
#define R_GEEX5010_VILCLI(A) put(nRec, 160, A :26.26)
!-----------------------------------------------------------
! FIELD : TELCLI 
#define S_GEEX5010_TELCLI peel(pick(nPos, 186, 20), " ")
#define R_GEEX5010_TELCLI(A) put(nRec, 186, A :20.20)
!-----------------------------------------------------------
! FIELD : PAYCLI 
#define S_GEEX5010_PAYCLI peel(pick(nPos, 206, 3), " ")
#define R_GEEX5010_PAYCLI(A) put(nRec, 206, A :3.3)
!-----------------------------------------------------------
! FIELD : CATCLI 
#define S_GEEX5010_CATCLI peel(pick(nPos, 209, 3), " ")
#define R_GEEX5010_CATCLI(A) put(nRec, 209, A :3.3)
!-----------------------------------------------------------
! FIELD : CPICLI 
#define S_GEEX5010_CPICLI peel(pick(nPos, 212, 10), " ")
#define R_GEEX5010_CPICLI(A) put(nRec, 212, A :10.10)
!-----------------------------------------------------------
! FIELD : EDICLI 
#define S_GEEX5010_EDICLI peel(pick(nPos, 222, 14), " ")
#define R_GEEX5010_EDICLI(A) put(nRec, 222, A :14.14)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5010_DISEXC peel(pick(nPos, 236, 21), " ")
#define R_GEEX5010_DISEXC(A) put(nRec, 236, A :21.21)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5011 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5011_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5011_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5011_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5011_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5011_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5011_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5011_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5011_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5011_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5011_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5011_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5011_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5011_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5011_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5011_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5011_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5011_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5011_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : EMLADR 
#define S_GEEX5011_EMLADR peel(pick(nPos, 65, 50), " ")
#define R_GEEX5011_EMLADR(A) put(nRec, 65, A :50.50)
!-----------------------------------------------------------
! FIELD : AD1CLI 
#define S_GEEX5011_AD1CLI peel(pick(nPos, 115, 38), " ")
#define R_GEEX5011_AD1CLI(A) put(nRec, 115, A :38.38)
!-----------------------------------------------------------
! FIELD : AD2CLI 
#define S_GEEX5011_AD2CLI peel(pick(nPos, 153, 38), " ")
#define R_GEEX5011_AD2CLI(A) put(nRec, 153, A :38.38)
!-----------------------------------------------------------
! FIELD : AD3CLI 
#define S_GEEX5011_AD3CLI peel(pick(nPos, 191, 38), " ")
#define R_GEEX5011_AD3CLI(A) put(nRec, 191, A :38.38)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5011_DISEXC peel(pick(nPos, 229, 28), " ")
#define R_GEEX5011_DISEXC(A) put(nRec, 229, A :28.28)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5020 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5020_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5020_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5020_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5020_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5020_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5020_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5020_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5020_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5020_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5020_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5020_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5020_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5020_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5020_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5020_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5020_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5020_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5020_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_GEEX5020_NLILIV peel(pick(nPos, 65, 5), " ")
#define R_GEEX5020_NLILIV(A) put(nRec, 65, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX5020_CODPRO peel(pick(nPos, 70, 17), " ")
#define R_GEEX5020_CODPRO(A) put(nRec, 70, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX5020_VALPRO peel(pick(nPos, 87, 2), " ")
#define R_GEEX5020_VALPRO(A) put(nRec, 87, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : METRPL 
#define S_GEEX5020_METRPL peel(pick(nPos, 89, 1), " ")
#define R_GEEX5020_METRPL(A) put(nRec, 89, A :1.1)
!-----------------------------------------------------------
! FIELD : CODRPL 
#define S_GEEX5020_CODRPL peel(pick(nPos, 90, 17), " ")
#define R_GEEX5020_CODRPL(A) put(nRec, 90, A :17.17)
!-----------------------------------------------------------
! FIELD : VALRPL 
#define S_GEEX5020_VALRPL peel(pick(nPos, 107, 2), " ")
#define R_GEEX5020_VALRPL(A) put(nRec, 107, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODPRN 
#define S_GEEX5020_CODPRN peel(pick(nPos, 109, 17), " ")
#define R_GEEX5020_CODPRN(A) put(nRec, 109, A :17.17)
!-----------------------------------------------------------
! FIELD : UVCCDE 
#define S_GEEX5020_UVCCDE peel(pick(nPos, 126, 9), " ")
#define R_GEEX5020_UVCCDE(A) put(nRec, 126, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UNICDE 
#define S_GEEX5020_UNICDE peel(pick(nPos, 135, 3), " ")
#define R_GEEX5020_UNICDE(A) put(nRec, 135, A :3.3)
!-----------------------------------------------------------
! FIELD : TYPSTK 
#define S_GEEX5020_TYPSTK peel(pick(nPos, 138, 1), " ")
#define R_GEEX5020_TYPSTK(A) put(nRec, 138, A :1.1)
!-----------------------------------------------------------
! FIELD : AIGPRI 
#define S_GEEX5020_AIGPRI peel(pick(nPos, 139, 1), " ")
#define R_GEEX5020_AIGPRI(A) put(nRec, 139, A :1.1)
!-----------------------------------------------------------
! FIELD : PRILIV 
#define S_GEEX5020_PRILIV peel(pick(nPos, 140, 8), " ")
#define R_GEEX5020_PRILIV(A) put(nRec, 140, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : TYPOPE 
#define S_GEEX5020_TYPOPE peel(pick(nPos, 148, 1), " ")
#define R_GEEX5020_TYPOPE(A) put(nRec, 148, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMOPE 
#define S_GEEX5020_NUMOPE peel(pick(nPos, 149, 6), " ")
#define R_GEEX5020_NUMOPE(A) put(nRec, 149, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : SPCPRO 
#define S_GEEX5020_SPCPRO peel(pick(nPos, 155, 4), " ")
#define R_GEEX5020_SPCPRO(A) put(nRec, 155, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX5020_PCBPRO peel(pick(nPos, 159, 5), " ")
#define R_GEEX5020_PCBPRO(A) put(nRec, 159, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX5020_CODLOT peel(pick(nPos, 164, 20), " ")
#define R_GEEX5020_CODLOT(A) put(nRec, 164, A :20.20)
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_GEEX5020_DATFVI peel(pick(nPos, 184, 8), " ")
#define R_GEEX5020_DATFVI(A) put(nRec, 184, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : MSGLIG 
#define S_GEEX5020_MSGLIG peel(pick(nPos, 192, 30), " ")
#define R_GEEX5020_MSGLIG(A) put(nRec, 192, A :30.30)
!-----------------------------------------------------------
! FIELD : UVCINI 
#define S_GEEX5020_UVCINI peel(pick(nPos, 222, 9), " ")
#define R_GEEX5020_UVCINI(A) put(nRec, 222, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : QTECDE 
#define S_GEEX5020_QTECDE peel(pick(nPos, 231, 9), " ")
#define R_GEEX5020_QTECDE(A) put(nRec, 231, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CODACL 
#define S_GEEX5020_CODACL peel(pick(nPos, 240, 3), " ")
#define R_GEEX5020_CODACL(A) put(nRec, 240, A :3.3)
!-----------------------------------------------------------
! FIELD : IGLSIT 
#define S_GEEX5020_IGLSIT peel(pick(nPos, 243, 3), " ")
#define R_GEEX5020_IGLSIT(A) put(nRec, 243, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : DATFVI2 
#define S_GEEX5020_DATFVI2 peel(pick(nPos, 246, 8), " ")
#define R_GEEX5020_DATFVI2(A) put(nRec, 246, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : IMMFRG 
#define S_GEEX5020_IMMFRG peel(pick(nPos, 254, 3), " ")
#define R_GEEX5020_IMMFRG(A) put(nRec, 254, A :3.3)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5021 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5021_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5021_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5021_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5021_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5021_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5021_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5021_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5021_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5021_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5021_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5021_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5021_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5021_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5021_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5021_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5021_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5021_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5021_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_GEEX5021_NLILIV peel(pick(nPos, 65, 5), " ")
#define R_GEEX5021_NLILIV(A) put(nRec, 65, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : TOPLIV 
#define S_GEEX5021_TOPLIV peel(pick(nPos, 70, 5), " ")
#define R_GEEX5021_TOPLIV(A) put(nRec, 70, A :5.5)
!-----------------------------------------------------------
! FIELD : DIPLIV 
#define S_GEEX5021_DIPLIV peel(pick(nPos, 75, 50), " ")
#define R_GEEX5021_DIPLIV(A) put(nRec, 75, A :50.50)
!-----------------------------------------------------------
! FIELD : DS1PRO 
#define S_GEEX5021_DS1PRO peel(pick(nPos, 125, 30), " ")
#define R_GEEX5021_DS1PRO(A) put(nRec, 125, A :30.30)
!-----------------------------------------------------------
! FIELD : DS2PRO 
#define S_GEEX5021_DS2PRO peel(pick(nPos, 155, 30), " ")
#define R_GEEX5021_DS2PRO(A) put(nRec, 155, A :30.30)
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX5021_REFREC peel(pick(nPos, 185, 30), " ")
#define R_GEEX5021_REFREC(A) put(nRec, 185, A :30.30)
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_GEEX5021_EDIPRO peel(pick(nPos, 215, 17), " ")
#define R_GEEX5021_EDIPRO(A) put(nRec, 215, A :17.17)
!-----------------------------------------------------------
! FIELD : CODOPE 
#define S_GEEX5021_CODOPE peel(pick(nPos, 232, 14), " ")
#define R_GEEX5021_CODOPE(A) put(nRec, 232, A :14.14)
!-----------------------------------------------------------
! FIELD : PRILIV 
#define S_GEEX5021_PRILIV peel(pick(nPos, 246, 9), " ")
#define R_GEEX5021_PRILIV(A) put(nRec, 246, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : TYPDAT 
#define S_GEEX5021_TYPDAT peel(pick(nPos, 255, 1), " ")
#define R_GEEX5021_TYPDAT(A) put(nRec, 255, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5021_DISEXC peel(pick(nPos, 256, 1), " ")
#define R_GEEX5021_DISEXC(A) put(nRec, 256, A :1.1)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5022 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5022_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5022_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5022_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5022_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5022_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5022_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5022_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5022_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5022_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5022_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5022_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5022_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5022_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5022_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5022_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5022_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5022_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5022_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_GEEX5022_NLILIV peel(pick(nPos, 65, 5), " ")
#define R_GEEX5022_NLILIV(A) put(nRec, 65, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODPPR 
#define S_GEEX5022_CODPPR peel(pick(nPos, 70, 14), " ")
#define R_GEEX5022_CODPPR(A) put(nRec, 70, A :14.14)
!-----------------------------------------------------------
! FIELD : TYPOPE 
#define S_GEEX5022_TYPOPE peel(pick(nPos, 84, 1), " ")
#define R_GEEX5022_TYPOPE(A) put(nRec, 84, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMOPE 
#define S_GEEX5022_NUMOPE peel(pick(nPos, 85, 6), " ")
#define R_GEEX5022_NUMOPE(A) put(nRec, 85, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODEMB 
#define S_GEEX5022_CODEMB peel(pick(nPos, 91, 3), " ")
#define R_GEEX5022_CODEMB(A) put(nRec, 91, A :3.3)
!-----------------------------------------------------------
! FIELD : CODOWN 
#define S_GEEX5022_CODOWN peel(pick(nPos, 94, 14), " ")
#define R_GEEX5022_CODOWN(A) put(nRec, 94, A :14.14)
!-----------------------------------------------------------
! FIELD : DS3PRO 
#define S_GEEX5022_DS3PRO peel(pick(nPos, 108, 35), " ")
#define R_GEEX5022_DS3PRO(A) put(nRec, 108, A :35.35)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5022_DISEXC peel(pick(nPos, 143, 114), " ")
#define R_GEEX5022_DISEXC(A) put(nRec, 143, A :114.114)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5025 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5025_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5025_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5025_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5025_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5025_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5025_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5025_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5025_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5025_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5025_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5025_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5025_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5025_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5025_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5025_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5025_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5025_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5025_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_GEEX5025_NLILIV peel(pick(nPos, 65, 5), " ")
#define R_GEEX5025_NLILIV(A) put(nRec, 65, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : TYPRUB 
#define S_GEEX5025_TYPRUB peel(pick(nPos, 70, 1), " ")
#define R_GEEX5025_TYPRUB(A) put(nRec, 70, A :1.1)
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_GEEX5025_CODRUB peel(pick(nPos, 71, 4), " ")
#define R_GEEX5025_CODRUB(A) put(nRec, 71, A :4.4)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX5025_VALRUB peel(pick(nPos, 75, 35), " ")
#define R_GEEX5025_VALRUB(A) put(nRec, 75, A :35.35)
!-----------------------------------------------------------
! FIELD : SIGMIN 
#define S_GEEX5025_SIGMIN peel(pick(nPos, 110, 1), " ")
#define R_GEEX5025_SIGMIN(A) put(nRec, 110, A :1.1)
!-----------------------------------------------------------
! FIELD : VALMIN 
#define S_GEEX5025_VALMIN peel(pick(nPos, 111, 18), " ")
#define R_GEEX5025_VALMIN(A) put(nRec, 111, build(number(A):R018.0))
!-----------------------------------------------------------
! FIELD : SIGMAX 
#define S_GEEX5025_SIGMAX peel(pick(nPos, 129, 1), " ")
#define R_GEEX5025_SIGMAX(A) put(nRec, 129, A :1.1)
!-----------------------------------------------------------
! FIELD : VALMAX 
#define S_GEEX5025_VALMAX peel(pick(nPos, 130, 18), " ")
#define R_GEEX5025_VALMAX(A) put(nRec, 130, build(number(A):R018.0))
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX5025_CODPAL peel(pick(nPos, 148, 18), " ")
#define R_GEEX5025_CODPAL(A) put(nRec, 148, A :18.18)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5025_DISEXC peel(pick(nPos, 166, 91), " ")
#define R_GEEX5025_DISEXC(A) put(nRec, 166, A :91.91)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5026 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5026_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5026_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5026_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5026_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5026_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5026_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5026_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5026_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5026_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5026_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5026_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5026_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5026_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5026_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5026_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5026_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5026_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5026_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_GEEX5026_NLILIV peel(pick(nPos, 65, 5), " ")
#define R_GEEX5026_NLILIV(A) put(nRec, 65, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : NLIINP 
#define S_GEEX5026_NLIINP peel(pick(nPos, 70, 8), " ")
#define R_GEEX5026_NLIINP(A) put(nRec, 70, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : LIGINP 
#define S_GEEX5026_LIGINP peel(pick(nPos, 78, 140), " ")
#define R_GEEX5026_LIGINP(A) put(nRec, 78, A :140.140)
!-----------------------------------------------------------
! FIELD : TYPINP 
#define S_GEEX5026_TYPINP peel(pick(nPos, 218, 1), " ")
#define R_GEEX5026_TYPINP(A) put(nRec, 218, A :1.1)
!-----------------------------------------------------------
! FIELD : VALINP 
#define S_GEEX5026_VALINP peel(pick(nPos, 219, 30), " ")
#define R_GEEX5026_VALINP(A) put(nRec, 219, A :30.30)
!-----------------------------------------------------------
! FIELD : CODIMP 
#define S_GEEX5026_CODIMP peel(pick(nPos, 249, 3), " ")
#define R_GEEX5026_CODIMP(A) put(nRec, 249, A :3.3)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5026_DISEXC peel(pick(nPos, 252, 5), " ")
#define R_GEEX5026_DISEXC(A) put(nRec, 252, A :5.5)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5027 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5027_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5027_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5027_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5027_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5027_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5027_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5027_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5027_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5027_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5027_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5027_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5027_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5027_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5027_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5027_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5027_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5027_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5027_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_GEEX5027_NLILIV peel(pick(nPos, 65, 5), " ")
#define R_GEEX5027_NLILIV(A) put(nRec, 65, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : TYPRUB 
#define S_GEEX5027_TYPRUB peel(pick(nPos, 70, 4), " ")
#define R_GEEX5027_TYPRUB(A) put(nRec, 70, A :4.4)
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_GEEX5027_CODRUB peel(pick(nPos, 74, 16), " ")
#define R_GEEX5027_CODRUB(A) put(nRec, 74, A :16.16)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX5027_VALRUB peel(pick(nPos, 90, 140), " ")
#define R_GEEX5027_VALRUB(A) put(nRec, 90, A :140.140)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5027_DISEXC peel(pick(nPos, 230, 27), " ")
#define R_GEEX5027_DISEXC(A) put(nRec, 230, A :27.27)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5028 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5028_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5028_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5028_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5028_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5028_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5028_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5028_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5028_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5028_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5028_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5028_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5028_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5028_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5028_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5028_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5028_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5028_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5028_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_GEEX5028_NLILIV peel(pick(nPos, 65, 5), " ")
#define R_GEEX5028_NLILIV(A) put(nRec, 65, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : NLIINP 
#define S_GEEX5028_NLIINP peel(pick(nPos, 70, 4), " ")
#define R_GEEX5028_NLIINP(A) put(nRec, 70, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : LIGINP 
#define S_GEEX5028_LIGINP peel(pick(nPos, 74, 90), " ")
#define R_GEEX5028_LIGINP(A) put(nRec, 74, A :90.90)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX5028_CODPRO peel(pick(nPos, 164, 17), " ")
#define R_GEEX5028_CODPRO(A) put(nRec, 164, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX5028_VALPRO peel(pick(nPos, 181, 2), " ")
#define R_GEEX5028_VALPRO(A) put(nRec, 181, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : INDPRO 
#define S_GEEX5028_INDPRO peel(pick(nPos, 183, 2), " ")
#define R_GEEX5028_INDPRO(A) put(nRec, 183, A :2.2)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5030 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5030_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5030_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5030_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5030_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5030_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5030_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5030_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5030_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5030_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5030_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5030_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5030_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5030_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5030_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5030_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5030_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5030_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5030_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_GEEX5030_NLILIV peel(pick(nPos, 65, 5), " ")
#define R_GEEX5030_NLILIV(A) put(nRec, 65, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : NUMSUP 
#define S_GEEX5030_NUMSUP peel(pick(nPos, 70, 8), " ")
#define R_GEEX5030_NUMSUP(A) put(nRec, 70, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5030_DISEXC peel(pick(nPos, 78, 179), " ")
#define R_GEEX5030_DISEXC(A) put(nRec, 78, A :179.179)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5080 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5080_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5080_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5080_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5080_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5080_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5080_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5080_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5080_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5080_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5080_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5080_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5080_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5080_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5080_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5080_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5080_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5080_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5080_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : SEQTXL 
#define S_GEEX5080_SEQTXL peel(pick(nPos, 65, 4), " ")
#define R_GEEX5080_SEQTXL(A) put(nRec, 65, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : LIBTXL 
#define S_GEEX5080_LIBTXL peel(pick(nPos, 69, 120), " ")
#define R_GEEX5080_LIBTXL(A) put(nRec, 69, A :120.120)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5080_DISEXC peel(pick(nPos, 189, 68), " ")
#define R_GEEX5080_DISEXC(A) put(nRec, 189, A :68.68)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5099 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5099_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5099_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5099_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5099_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5099_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5099_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5099_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5099_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5099_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5099_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5099_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5099_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5099_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5099_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5099_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5099_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5099_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5099_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : CUMLIG 
#define S_GEEX5099_CUMLIG peel(pick(nPos, 65, 4), " ")
#define R_GEEX5099_CUMLIG(A) put(nRec, 65, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : CUMPOI 
#define S_GEEX5099_CUMPOI peel(pick(nPos, 69, 11), " ")
#define R_GEEX5099_CUMPOI(A) put(nRec, 69, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : CUMVOL 
#define S_GEEX5099_CUMVOL peel(pick(nPos, 80, 11), " ")
#define R_GEEX5099_CUMVOL(A) put(nRec, 80, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : CUMCOL 
#define S_GEEX5099_CUMCOL peel(pick(nPos, 91, 7), " ")
#define R_GEEX5099_CUMCOL(A) put(nRec, 91, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5099_DISEXC peel(pick(nPos, 98, 159), " ")
#define R_GEEX5099_DISEXC(A) put(nRec, 98, A :159.159)
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

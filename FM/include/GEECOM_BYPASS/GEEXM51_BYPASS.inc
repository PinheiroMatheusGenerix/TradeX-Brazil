! File GEEXM51 : 
!===========================================================
! Line : GEEX0000_BP 
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
! Line : GEEX5100_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5100_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5100_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5100_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5100_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5100_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5100_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5100_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5100_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5100_BP_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5100_BP_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5100_BP_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5100_BP_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5100_BP_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5100_BP_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5100_BP_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5100_BP_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5100_BP_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5100_BP_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : CODTLI 
#define S_GEEX5100_BP_CODTLI peel(pick(nPos, 65, 3), " ")
#define R_GEEX5100_BP_CODTLI(A) put(nRec, 65, A :3.3)
!-----------------------------------------------------------
! FIELD : CODACL 
#define S_GEEX5100_BP_CODACL peel(pick(nPos, 68, 3), " ")
#define R_GEEX5100_BP_CODACL(A) put(nRec, 68, A :3.3)
!-----------------------------------------------------------
! FIELD : ORICDE 
#define S_GEEX5100_BP_ORICDE peel(pick(nPos, 71, 1), " ")
#define R_GEEX5100_BP_ORICDE(A) put(nRec, 71, A :1.1)
!-----------------------------------------------------------
! FIELD : DATLIV 
#define S_GEEX5100_BP_DATLIV peel(pick(nPos, 72, 8), " ")
#define R_GEEX5100_BP_DATLIV(A) put(nRec, 72, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEULIV 
#define S_GEEX5100_BP_HEULIV peel(pick(nPos, 80, 4), " ")
#define R_GEEX5100_BP_HEULIV(A) put(nRec, 80, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : CLILIV 
#define S_GEEX5100_BP_CLILIV peel(pick(nPos, 84, 14), " ")
#define R_GEEX5100_BP_CLILIV(A) put(nRec, 84, A :14.14)
!-----------------------------------------------------------
! FIELD : TYPLIV 
#define S_GEEX5100_BP_TYPLIV peel(pick(nPos, 98, 1), " ")
#define R_GEEX5100_BP_TYPLIV(A) put(nRec, 98, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMVAG 
#define S_GEEX5100_BP_NUMVAG peel(pick(nPos, 99, 8), " ")
#define R_GEEX5100_BP_NUMVAG(A) put(nRec, 99, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATPRP 
#define S_GEEX5100_BP_DATPRP peel(pick(nPos, 107, 8), " ")
#define R_GEEX5100_BP_DATPRP(A) put(nRec, 107, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODRGT 
#define S_GEEX5100_BP_CODRGT peel(pick(nPos, 115, 3), " ")
#define R_GEEX5100_BP_CODRGT(A) put(nRec, 115, A :3.3)
!-----------------------------------------------------------
! FIELD : TOULIV 
#define S_GEEX5100_BP_TOULIV peel(pick(nPos, 118, 4), " ")
#define R_GEEX5100_BP_TOULIV(A) put(nRec, 118, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : ORDLIV 
#define S_GEEX5100_BP_ORDLIV peel(pick(nPos, 122, 4), " ")
#define R_GEEX5100_BP_ORDLIV(A) put(nRec, 122, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : NUMTOU 
#define S_GEEX5100_BP_NUMTOU peel(pick(nPos, 126, 8), " ")
#define R_GEEX5100_BP_NUMTOU(A) put(nRec, 126, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATEXP 
#define S_GEEX5100_BP_DATEXP peel(pick(nPos, 134, 8), " ")
#define R_GEEX5100_BP_DATEXP(A) put(nRec, 134, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXP 
#define S_GEEX5100_BP_HEUEXP peel(pick(nPos, 142, 6), " ")
#define R_GEEX5100_BP_HEUEXP(A) put(nRec, 142, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_GEEX5100_BP_CODTRA peel(pick(nPos, 148, 14), " ")
#define R_GEEX5100_BP_CODTRA(A) put(nRec, 148, A :14.14)
!-----------------------------------------------------------
! FIELD : CODCAM 
#define S_GEEX5100_BP_CODCAM peel(pick(nPos, 162, 14), " ")
#define R_GEEX5100_BP_CODCAM(A) put(nRec, 162, A :14.14)
!-----------------------------------------------------------
! FIELD : CODCHF 
#define S_GEEX5100_BP_CODCHF peel(pick(nPos, 176, 10), " ")
#define R_GEEX5100_BP_CODCHF(A) put(nRec, 176, A :10.10)
!-----------------------------------------------------------
! FIELD : CTRLIV 
#define S_GEEX5100_BP_CTRLIV peel(pick(nPos, 186, 10), " ")
#define R_GEEX5100_BP_CTRLIV(A) put(nRec, 186, A :10.10)
!-----------------------------------------------------------
! FIELD : REFCNT 
#define S_GEEX5100_BP_REFCNT peel(pick(nPos, 196, 10), " ")
#define R_GEEX5100_BP_REFCNT(A) put(nRec, 196, A :10.10)
!-----------------------------------------------------------
! FIELD : CODSIT 
#define S_GEEX5100_BP_CODSIT peel(pick(nPos, 206, 3), " ")
#define R_GEEX5100_BP_CODSIT(A) put(nRec, 206, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMPLB 
#define S_GEEX5100_BP_NUMPLB peel(pick(nPos, 209, 16), " ")
#define R_GEEX5100_BP_NUMPLB(A) put(nRec, 209, A :16.16)
!-----------------------------------------------------------
! FIELD : CODLDR 
#define S_GEEX5100_BP_CODLDR peel(pick(nPos, 225, 3), " ")
#define R_GEEX5100_BP_CODLDR(A) put(nRec, 225, A :3.3)
!-----------------------------------------------------------
! FIELD : LIVSOL 
#define S_GEEX5100_BP_LIVSOL peel(pick(nPos, 228, 1), " ")
#define R_GEEX5100_BP_LIVSOL(A) put(nRec, 228, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMCNT 
#define S_GEEX5100_BP_NUMCNT peel(pick(nPos, 229, 17), " ")
#define R_GEEX5100_BP_NUMCNT(A) put(nRec, 229, A :17.17)
!-----------------------------------------------------------
! FIELD : NUMTPT 
#define S_GEEX5100_BP_NUMTPT peel(pick(nPos, 246, 10), " ")
#define R_GEEX5100_BP_NUMTPT(A) put(nRec, 246, build(number(A):R010.0))
!-----------------------------------------------------------
! FIELD : INDRLQ 
#define S_GEEX5100_BP_INDRLQ peel(pick(nPos, 256, 1), " ")
#define R_GEEX5100_BP_INDRLQ(A) put(nRec, 256, A :1.1)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5101_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5101_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5101_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5101_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5101_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5101_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5101_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5101_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5101_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5101_BP_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5101_BP_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5101_BP_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5101_BP_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5101_BP_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5101_BP_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5101_BP_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5101_BP_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5101_BP_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5101_BP_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : TOPLIV 
#define S_GEEX5101_BP_TOPLIV peel(pick(nPos, 65, 5), " ")
#define R_GEEX5101_BP_TOPLIV(A) put(nRec, 65, A :5.5)
!-----------------------------------------------------------
! FIELD : DIPLIV 
#define S_GEEX5101_BP_DIPLIV peel(pick(nPos, 70, 50), " ")
#define R_GEEX5101_BP_DIPLIV(A) put(nRec, 70, A :50.50)
!-----------------------------------------------------------
! FIELD : DATDEP 
#define S_GEEX5101_BP_DATDEP peel(pick(nPos, 120, 8), " ")
#define R_GEEX5101_BP_DATDEP(A) put(nRec, 120, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODNAV 
#define S_GEEX5101_BP_CODNAV peel(pick(nPos, 128, 5), " ")
#define R_GEEX5101_BP_CODNAV(A) put(nRec, 128, A :5.5)
!-----------------------------------------------------------
! FIELD : LIBNAV 
#define S_GEEX5101_BP_LIBNAV peel(pick(nPos, 133, 30), " ")
#define R_GEEX5101_BP_LIBNAV(A) put(nRec, 133, A :30.30)
!-----------------------------------------------------------
! FIELD : DATARR 
#define S_GEEX5101_BP_DATARR peel(pick(nPos, 163, 8), " ")
#define R_GEEX5101_BP_DATARR(A) put(nRec, 163, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODCIE 
#define S_GEEX5101_BP_CODCIE peel(pick(nPos, 171, 5), " ")
#define R_GEEX5101_BP_CODCIE(A) put(nRec, 171, A :5.5)
!-----------------------------------------------------------
! FIELD : NOMCIE 
#define S_GEEX5101_BP_NOMCIE peel(pick(nPos, 176, 30), " ")
#define R_GEEX5101_BP_NOMCIE(A) put(nRec, 176, A :30.30)
!-----------------------------------------------------------
! FIELD : TYPCNT 
#define S_GEEX5101_BP_TYPCNT peel(pick(nPos, 206, 2), " ")
#define R_GEEX5101_BP_TYPCNT(A) put(nRec, 206, A :2.2)
!-----------------------------------------------------------
! FIELD : CODTRS 
#define S_GEEX5101_BP_CODTRS peel(pick(nPos, 208, 5), " ")
#define R_GEEX5101_BP_CODTRS(A) put(nRec, 208, A :5.5)
!-----------------------------------------------------------
! FIELD : NOMTRS 
#define S_GEEX5101_BP_NOMTRS peel(pick(nPos, 213, 30), " ")
#define R_GEEX5101_BP_NOMTRS(A) put(nRec, 213, A :30.30)
!-----------------------------------------------------------
! FIELD : OPEDEP 
#define S_GEEX5101_BP_OPEDEP peel(pick(nPos, 243, 10), " ")
#define R_GEEX5101_BP_OPEDEP(A) put(nRec, 243, A :10.10)
!-----------------------------------------------------------
! FIELD : TYPDSV 
#define S_GEEX5101_BP_TYPDSV peel(pick(nPos, 253, 1), " ")
#define R_GEEX5101_BP_TYPDSV(A) put(nRec, 253, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5101_BP_DISEXC peel(pick(nPos, 254, 3), " ")
#define R_GEEX5101_BP_DISEXC(A) put(nRec, 254, A :3.3)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5102_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5102_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5102_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5102_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5102_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5102_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5102_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5102_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5102_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5102_BP_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5102_BP_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5102_BP_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5102_BP_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5102_BP_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5102_BP_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5102_BP_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5102_BP_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5102_BP_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5102_BP_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : NUMPLB 
#define S_GEEX5102_BP_NUMPLB peel(pick(nPos, 65, 8), " ")
#define R_GEEX5102_BP_NUMPLB(A) put(nRec, 65, A :8.8)
!-----------------------------------------------------------
! FIELD : CUMVTE 
#define S_GEEX5102_BP_CUMVTE peel(pick(nPos, 73, 11), " ")
#define R_GEEX5102_BP_CUMVTE(A) put(nRec, 73, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : ECRUTI 
#define S_GEEX5102_BP_ECRUTI peel(pick(nPos, 84, 10), " ")
#define R_GEEX5102_BP_ECRUTI(A) put(nRec, 84, A :10.10)
!-----------------------------------------------------------
! FIELD : REFMIT 
#define S_GEEX5102_BP_REFMIT peel(pick(nPos, 94, 30), " ")
#define R_GEEX5102_BP_REFMIT(A) put(nRec, 94, A :30.30)
!-----------------------------------------------------------
! FIELD : CODCNT 
#define S_GEEX5102_BP_CODCNT peel(pick(nPos, 124, 14), " ")
#define R_GEEX5102_BP_CODCNT(A) put(nRec, 124, A :14.14)
!-----------------------------------------------------------
! FIELD : EDITRA 
#define S_GEEX5102_BP_EDITRA peel(pick(nPos, 138, 14), " ")
#define R_GEEX5102_BP_EDITRA(A) put(nRec, 138, A :14.14)
!-----------------------------------------------------------
! FIELD : EDICLI 
#define S_GEEX5102_BP_EDICLI peel(pick(nPos, 152, 14), " ")
#define R_GEEX5102_BP_EDICLI(A) put(nRec, 152, A :14.14)
!-----------------------------------------------------------
! FIELD : EDICLF 
#define S_GEEX5102_BP_EDICLF peel(pick(nPos, 166, 14), " ")
#define R_GEEX5102_BP_EDICLF(A) put(nRec, 166, A :14.14)
!-----------------------------------------------------------
! FIELD : REFCLI 
#define S_GEEX5102_BP_REFCLI peel(pick(nPos, 180, 30), " ")
#define R_GEEX5102_BP_REFCLI(A) put(nRec, 180, A :30.30)
!-----------------------------------------------------------
! FIELD : PDVCNT 
#define S_GEEX5102_BP_PDVCNT peel(pick(nPos, 210, 11), " ")
#define R_GEEX5102_BP_PDVCNT(A) put(nRec, 210, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : REFDAE 
#define S_GEEX5102_BP_REFDAE peel(pick(nPos, 221, 30), " ")
#define R_GEEX5102_BP_REFDAE(A) put(nRec, 221, A :30.30)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5102_BP_DISEXC peel(pick(nPos, 251, 6), " ")
#define R_GEEX5102_BP_DISEXC(A) put(nRec, 251, A :6.6)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5103_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5103_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5103_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5103_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5103_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5103_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5103_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5103_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5103_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5103_BP_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5103_BP_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5103_BP_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5103_BP_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5103_BP_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5103_BP_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5103_BP_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5103_BP_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5103_BP_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5103_BP_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : NUMCNT 
#define S_GEEX5103_BP_NUMCNT peel(pick(nPos, 65, 17), " ")
#define R_GEEX5103_BP_NUMCNT(A) put(nRec, 65, A :17.17)
!-----------------------------------------------------------
! FIELD : CODNAV 
#define S_GEEX5103_BP_CODNAV peel(pick(nPos, 82, 5), " ")
#define R_GEEX5103_BP_CODNAV(A) put(nRec, 82, A :5.5)
!-----------------------------------------------------------
! FIELD : NUMSHP 
#define S_GEEX5103_BP_NUMSHP peel(pick(nPos, 87, 20), " ")
#define R_GEEX5103_BP_NUMSHP(A) put(nRec, 87, A :20.20)
!-----------------------------------------------------------
! FIELD : TYPCNT 
#define S_GEEX5103_BP_TYPCNT peel(pick(nPos, 107, 2), " ")
#define R_GEEX5103_BP_TYPCNT(A) put(nRec, 107, A :2.2)
!-----------------------------------------------------------
! FIELD : CODCIE 
#define S_GEEX5103_BP_CODCIE peel(pick(nPos, 109, 5), " ")
#define R_GEEX5103_BP_CODCIE(A) put(nRec, 109, A :5.5)
!-----------------------------------------------------------
! FIELD : DATDEP 
#define S_GEEX5103_BP_DATDEP peel(pick(nPos, 114, 8), " ")
#define R_GEEX5103_BP_DATDEP(A) put(nRec, 114, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUDEP 
#define S_GEEX5103_BP_HEUDEP peel(pick(nPos, 122, 6), " ")
#define R_GEEX5103_BP_HEUDEP(A) put(nRec, 122, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : DATARR 
#define S_GEEX5103_BP_DATARR peel(pick(nPos, 128, 8), " ")
#define R_GEEX5103_BP_DATARR(A) put(nRec, 128, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODTRS 
#define S_GEEX5103_BP_CODTRS peel(pick(nPos, 136, 5), " ")
#define R_GEEX5103_BP_CODTRS(A) put(nRec, 136, A :5.5)
!-----------------------------------------------------------
! FIELD : GABCNT 
#define S_GEEX5103_BP_GABCNT peel(pick(nPos, 141, 3), " ")
#define R_GEEX5103_BP_GABCNT(A) put(nRec, 141, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : INDDNG 
#define S_GEEX5103_BP_INDDNG peel(pick(nPos, 144, 1), " ")
#define R_GEEX5103_BP_INDDNG(A) put(nRec, 144, A :1.1)
!-----------------------------------------------------------
! FIELD : DATCHT 
#define S_GEEX5103_BP_DATCHT peel(pick(nPos, 145, 8), " ")
#define R_GEEX5103_BP_DATCHT(A) put(nRec, 145, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUCHT 
#define S_GEEX5103_BP_HEUCHT peel(pick(nPos, 153, 6), " ")
#define R_GEEX5103_BP_HEUCHT(A) put(nRec, 153, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : TYPTTR 
#define S_GEEX5103_BP_TYPTTR peel(pick(nPos, 159, 3), " ")
#define R_GEEX5103_BP_TYPTTR(A) put(nRec, 159, A :3.3)
!-----------------------------------------------------------
! FIELD : INFCPL 
#define S_GEEX5103_BP_INFCPL peel(pick(nPos, 162, 70), " ")
#define R_GEEX5103_BP_INFCPL(A) put(nRec, 162, A :70.70)
!-----------------------------------------------------------
! FIELD : SITDES 
#define S_GEEX5103_BP_SITDES peel(pick(nPos, 232, 3), " ")
#define R_GEEX5103_BP_SITDES(A) put(nRec, 232, A :3.3)
!-----------------------------------------------------------
! FIELD : REFPLB 
#define S_GEEX5103_BP_REFPLB peel(pick(nPos, 235, 10), " ")
#define R_GEEX5103_BP_REFPLB(A) put(nRec, 235, A :10.10)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5103_BP_DISEXC peel(pick(nPos, 245, 12), " ")
#define R_GEEX5103_BP_DISEXC(A) put(nRec, 245, A :12.12)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5105_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5105_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5105_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5105_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5105_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5105_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5105_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5105_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5105_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5105_BP_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5105_BP_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5105_BP_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5105_BP_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5105_BP_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5105_BP_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5105_BP_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5105_BP_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5105_BP_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5105_BP_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_GEEX5105_BP_CODRUB peel(pick(nPos, 65, 16), " ")
#define R_GEEX5105_BP_CODRUB(A) put(nRec, 65, A :16.16)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX5105_BP_VALRUB peel(pick(nPos, 81, 140), " ")
#define R_GEEX5105_BP_VALRUB(A) put(nRec, 81, A :140.140)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5105_BP_DISEXC peel(pick(nPos, 221, 36), " ")
#define R_GEEX5105_BP_DISEXC(A) put(nRec, 221, A :36.36)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5110_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5110_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5110_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5110_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5110_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5110_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5110_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5110_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5110_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5110_BP_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5110_BP_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5110_BP_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5110_BP_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5110_BP_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5110_BP_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5110_BP_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5110_BP_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5110_BP_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5110_BP_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : NOMCLI 
#define S_GEEX5110_BP_NOMCLI peel(pick(nPos, 65, 30), " ")
#define R_GEEX5110_BP_NOMCLI(A) put(nRec, 65, A :30.30)
!-----------------------------------------------------------
! FIELD : AD1CLI 
#define S_GEEX5110_BP_AD1CLI peel(pick(nPos, 95, 30), " ")
#define R_GEEX5110_BP_AD1CLI(A) put(nRec, 95, A :30.30)
!-----------------------------------------------------------
! FIELD : AD2CLI 
#define S_GEEX5110_BP_AD2CLI peel(pick(nPos, 125, 30), " ")
#define R_GEEX5110_BP_AD2CLI(A) put(nRec, 125, A :30.30)
!-----------------------------------------------------------
! FIELD : CPOCLI 
#define S_GEEX5110_BP_CPOCLI peel(pick(nPos, 155, 5), " ")
#define R_GEEX5110_BP_CPOCLI(A) put(nRec, 155, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : VILCLI 
#define S_GEEX5110_BP_VILCLI peel(pick(nPos, 160, 26), " ")
#define R_GEEX5110_BP_VILCLI(A) put(nRec, 160, A :26.26)
!-----------------------------------------------------------
! FIELD : TELCLI 
#define S_GEEX5110_BP_TELCLI peel(pick(nPos, 186, 20), " ")
#define R_GEEX5110_BP_TELCLI(A) put(nRec, 186, A :20.20)
!-----------------------------------------------------------
! FIELD : PAYCLI 
#define S_GEEX5110_BP_PAYCLI peel(pick(nPos, 206, 3), " ")
#define R_GEEX5110_BP_PAYCLI(A) put(nRec, 206, A :3.3)
!-----------------------------------------------------------
! FIELD : CPICLI 
#define S_GEEX5110_BP_CPICLI peel(pick(nPos, 209, 9), " ")
#define R_GEEX5110_BP_CPICLI(A) put(nRec, 209, A :9.9)
!-----------------------------------------------------------
! FIELD : CATCLI 
#define S_GEEX5110_BP_CATCLI peel(pick(nPos, 218, 3), " ")
#define R_GEEX5110_BP_CATCLI(A) put(nRec, 218, A :3.3)
!-----------------------------------------------------------
! FIELD : CLICPI 
#define S_GEEX5110_BP_CLICPI peel(pick(nPos, 221, 10), " ")
#define R_GEEX5110_BP_CLICPI(A) put(nRec, 221, A :10.10)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5110_BP_DISEXC peel(pick(nPos, 231, 26), " ")
#define R_GEEX5110_BP_DISEXC(A) put(nRec, 231, A :26.26)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5111_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5111_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5111_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5111_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5111_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5111_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5111_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5111_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5111_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5111_BP_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5111_BP_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5111_BP_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5111_BP_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5111_BP_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5111_BP_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5111_BP_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5111_BP_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5111_BP_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5111_BP_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : AD1CLI 
#define S_GEEX5111_BP_AD1CLI peel(pick(nPos, 65, 38), " ")
#define R_GEEX5111_BP_AD1CLI(A) put(nRec, 65, A :38.38)
!-----------------------------------------------------------
! FIELD : AD2CLI 
#define S_GEEX5111_BP_AD2CLI peel(pick(nPos, 103, 38), " ")
#define R_GEEX5111_BP_AD2CLI(A) put(nRec, 103, A :38.38)
!-----------------------------------------------------------
! FIELD : AD3CLI 
#define S_GEEX5111_BP_AD3CLI peel(pick(nPos, 141, 38), " ")
#define R_GEEX5111_BP_AD3CLI(A) put(nRec, 141, A :38.38)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5111_BP_DISEXC peel(pick(nPos, 179, 78), " ")
#define R_GEEX5111_BP_DISEXC(A) put(nRec, 179, A :78.78)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5120_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5120_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5120_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5120_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5120_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5120_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5120_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5120_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5120_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5120_BP_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5120_BP_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5120_BP_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5120_BP_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5120_BP_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5120_BP_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5120_BP_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5120_BP_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5120_BP_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5120_BP_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_GEEX5120_BP_NLILIV peel(pick(nPos, 65, 5), " ")
#define R_GEEX5120_BP_NLILIV(A) put(nRec, 65, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX5120_BP_CODPRO peel(pick(nPos, 70, 17), " ")
#define R_GEEX5120_BP_CODPRO(A) put(nRec, 70, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX5120_BP_VALPRO peel(pick(nPos, 87, 2), " ")
#define R_GEEX5120_BP_VALPRO(A) put(nRec, 87, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_GEEX5120_BP_EDIPRO peel(pick(nPos, 89, 17), " ")
#define R_GEEX5120_BP_EDIPRO(A) put(nRec, 89, A :17.17)
!-----------------------------------------------------------
! FIELD : UVCCDE 
#define S_GEEX5120_BP_UVCCDE peel(pick(nPos, 106, 9), " ")
#define R_GEEX5120_BP_UVCCDE(A) put(nRec, 106, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UNICDE 
#define S_GEEX5120_BP_UNICDE peel(pick(nPos, 115, 3), " ")
#define R_GEEX5120_BP_UNICDE(A) put(nRec, 115, A :3.3)
!-----------------------------------------------------------
! FIELD : LIVSOL 
#define S_GEEX5120_BP_LIVSOL peel(pick(nPos, 118, 1), " ")
#define R_GEEX5120_BP_LIVSOL(A) put(nRec, 118, A :1.1)
!-----------------------------------------------------------
! FIELD : UVCLIV 
#define S_GEEX5120_BP_UVCLIV peel(pick(nPos, 119, 9), " ")
#define R_GEEX5120_BP_UVCLIV(A) put(nRec, 119, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : MESPRO 
#define S_GEEX5120_BP_MESPRO peel(pick(nPos, 128, 1), " ")
#define R_GEEX5120_BP_MESPRO(A) put(nRec, 128, A :1.1)
!-----------------------------------------------------------
! FIELD : PDNLIV 
#define S_GEEX5120_BP_PDNLIV peel(pick(nPos, 129, 11), " ")
#define R_GEEX5120_BP_PDNLIV(A) put(nRec, 129, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : CODACL 
#define S_GEEX5120_BP_CODACL peel(pick(nPos, 140, 3), " ")
#define R_GEEX5120_BP_CODACL(A) put(nRec, 140, A :3.3)
!-----------------------------------------------------------
! FIELD : MOTMVT 
#define S_GEEX5120_BP_MOTMVT peel(pick(nPos, 143, 3), " ")
#define R_GEEX5120_BP_MOTMVT(A) put(nRec, 143, A :3.3)
!-----------------------------------------------------------
! FIELD : TYPSTK 
#define S_GEEX5120_BP_TYPSTK peel(pick(nPos, 146, 1), " ")
#define R_GEEX5120_BP_TYPSTK(A) put(nRec, 146, A :1.1)
!-----------------------------------------------------------
! FIELD : TYPOPE 
#define S_GEEX5120_BP_TYPOPE peel(pick(nPos, 147, 1), " ")
#define R_GEEX5120_BP_TYPOPE(A) put(nRec, 147, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMOPE 
#define S_GEEX5120_BP_NUMOPE peel(pick(nPos, 148, 6), " ")
#define R_GEEX5120_BP_NUMOPE(A) put(nRec, 148, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : SPCPRO 
#define S_GEEX5120_BP_SPCPRO peel(pick(nPos, 154, 4), " ")
#define R_GEEX5120_BP_SPCPRO(A) put(nRec, 154, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX5120_BP_PCBPRO peel(pick(nPos, 158, 5), " ")
#define R_GEEX5120_BP_PCBPRO(A) put(nRec, 158, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : TOPLIV 
#define S_GEEX5120_BP_TOPLIV peel(pick(nPos, 163, 5), " ")
#define R_GEEX5120_BP_TOPLIV(A) put(nRec, 163, A :5.5)
!-----------------------------------------------------------
! FIELD : DIPLIV 
#define S_GEEX5120_BP_DIPLIV peel(pick(nPos, 168, 50), " ")
#define R_GEEX5120_BP_DIPLIV(A) put(nRec, 168, A :50.50)
!-----------------------------------------------------------
! FIELD : UVCSRV 
#define S_GEEX5120_BP_UVCSRV peel(pick(nPos, 218, 9), " ")
#define R_GEEX5120_BP_UVCSRV(A) put(nRec, 218, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UVCINI 
#define S_GEEX5120_BP_UVCINI peel(pick(nPos, 227, 9), " ")
#define R_GEEX5120_BP_UVCINI(A) put(nRec, 227, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : NUMEBL 
#define S_GEEX5120_BP_NUMEBL peel(pick(nPos, 236, 8), " ")
#define R_GEEX5120_BP_NUMEBL(A) put(nRec, 236, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUEBL 
#define S_GEEX5120_BP_SNUEBL peel(pick(nPos, 244, 3), " ")
#define R_GEEX5120_BP_SNUEBL(A) put(nRec, 244, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : INDPRO 
#define S_GEEX5120_BP_INDPRO peel(pick(nPos, 247, 10), " ")
#define R_GEEX5120_BP_INDPRO(A) put(nRec, 247, A :10.10)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5121_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5121_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5121_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5121_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5121_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5121_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5121_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5121_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5121_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5121_BP_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5121_BP_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5121_BP_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5121_BP_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5121_BP_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5121_BP_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5121_BP_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5121_BP_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5121_BP_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5121_BP_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_GEEX5121_BP_NLILIV peel(pick(nPos, 65, 5), " ")
#define R_GEEX5121_BP_NLILIV(A) put(nRec, 65, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODOPE 
#define S_GEEX5121_BP_CODOPE peel(pick(nPos, 70, 14), " ")
#define R_GEEX5121_BP_CODOPE(A) put(nRec, 70, A :14.14)
!-----------------------------------------------------------
! FIELD : CODRPL 
#define S_GEEX5121_BP_CODRPL peel(pick(nPos, 84, 17), " ")
#define R_GEEX5121_BP_CODRPL(A) put(nRec, 84, A :17.17)
!-----------------------------------------------------------
! FIELD : VALRPL 
#define S_GEEX5121_BP_VALRPL peel(pick(nPos, 101, 2), " ")
#define R_GEEX5121_BP_VALRPL(A) put(nRec, 101, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : EDIRPL 
#define S_GEEX5121_BP_EDIRPL peel(pick(nPos, 103, 17), " ")
#define R_GEEX5121_BP_EDIRPL(A) put(nRec, 103, A :17.17)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5121_BP_DISEXC peel(pick(nPos, 120, 137), " ")
#define R_GEEX5121_BP_DISEXC(A) put(nRec, 120, A :137.137)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5123_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5123_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5123_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5123_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5123_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5123_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5123_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5123_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5123_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5123_BP_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5123_BP_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5123_BP_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5123_BP_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5123_BP_REFLIV peel(pick(nPos, 18, 30), " ")
#define R_GEEX5123_BP_REFLIV(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_GEEX5123_BP_NLILIV peel(pick(nPos, 48, 5), " ")
#define R_GEEX5123_BP_NLILIV(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5123_BP_CODACT peel(pick(nPos, 53, 3), " ")
#define R_GEEX5123_BP_CODACT(A) put(nRec, 53, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5123_BP_CODCLI peel(pick(nPos, 56, 14), " ")
#define R_GEEX5123_BP_CODCLI(A) put(nRec, 56, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX5123_BP_CODPRO peel(pick(nPos, 70, 17), " ")
#define R_GEEX5123_BP_CODPRO(A) put(nRec, 70, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX5123_BP_VALPRO peel(pick(nPos, 87, 2), " ")
#define R_GEEX5123_BP_VALPRO(A) put(nRec, 87, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : DS1PRO 
#define S_GEEX5123_BP_DS1PRO peel(pick(nPos, 89, 30), " ")
#define R_GEEX5123_BP_DS1PRO(A) put(nRec, 89, A :30.30)
!-----------------------------------------------------------
! FIELD : DS2PRO 
#define S_GEEX5123_BP_DS2PRO peel(pick(nPos, 119, 30), " ")
#define R_GEEX5123_BP_DS2PRO(A) put(nRec, 119, A :30.30)
!-----------------------------------------------------------
! FIELD : DS3PRO 
#define S_GEEX5123_BP_DS3PRO peel(pick(nPos, 149, 35), " ")
#define R_GEEX5123_BP_DS3PRO(A) put(nRec, 149, A :35.35)
!-----------------------------------------------------------
! FIELD : FAMPRO 
#define S_GEEX5123_BP_FAMPRO peel(pick(nPos, 184, 10), " ")
#define R_GEEX5123_BP_FAMPRO(A) put(nRec, 184, A :10.10)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5123_BP_DISEXC peel(pick(nPos, 194, 63), " ")
#define R_GEEX5123_BP_DISEXC(A) put(nRec, 194, A :63.63)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5125_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5125_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5125_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5125_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5125_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5125_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5125_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5125_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5125_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5125_BP_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5125_BP_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5125_BP_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5125_BP_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5125_BP_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5125_BP_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5125_BP_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5125_BP_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5125_BP_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5125_BP_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_GEEX5125_BP_NLILIV peel(pick(nPos, 65, 5), " ")
#define R_GEEX5125_BP_NLILIV(A) put(nRec, 65, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : TYPRUB 
#define S_GEEX5125_BP_TYPRUB peel(pick(nPos, 70, 1), " ")
#define R_GEEX5125_BP_TYPRUB(A) put(nRec, 70, A :1.1)
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_GEEX5125_BP_CODRUB peel(pick(nPos, 71, 4), " ")
#define R_GEEX5125_BP_CODRUB(A) put(nRec, 71, A :4.4)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX5125_BP_VALRUB peel(pick(nPos, 75, 35), " ")
#define R_GEEX5125_BP_VALRUB(A) put(nRec, 75, A :35.35)
!-----------------------------------------------------------
! FIELD : SIGMIN 
#define S_GEEX5125_BP_SIGMIN peel(pick(nPos, 110, 1), " ")
#define R_GEEX5125_BP_SIGMIN(A) put(nRec, 110, A :1.1)
!-----------------------------------------------------------
! FIELD : VALMIN 
#define S_GEEX5125_BP_VALMIN peel(pick(nPos, 111, 18), " ")
#define R_GEEX5125_BP_VALMIN(A) put(nRec, 111, build(number(A):R018.0))
!-----------------------------------------------------------
! FIELD : SIGMAX 
#define S_GEEX5125_BP_SIGMAX peel(pick(nPos, 129, 1), " ")
#define R_GEEX5125_BP_SIGMAX(A) put(nRec, 129, A :1.1)
!-----------------------------------------------------------
! FIELD : VALMAX 
#define S_GEEX5125_BP_VALMAX peel(pick(nPos, 130, 18), " ")
#define R_GEEX5125_BP_VALMAX(A) put(nRec, 130, build(number(A):R018.0))
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX5125_BP_CODPAL peel(pick(nPos, 148, 18), " ")
#define R_GEEX5125_BP_CODPAL(A) put(nRec, 148, A :18.18)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5125_BP_DISEXC peel(pick(nPos, 166, 91), " ")
#define R_GEEX5125_BP_DISEXC(A) put(nRec, 166, A :91.91)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5127_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5127_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5127_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5127_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5127_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5127_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5127_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5127_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5127_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5127_BP_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5127_BP_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5127_BP_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5127_BP_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5127_BP_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5127_BP_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5127_BP_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5127_BP_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5127_BP_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5127_BP_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_GEEX5127_BP_NLILIV peel(pick(nPos, 65, 5), " ")
#define R_GEEX5127_BP_NLILIV(A) put(nRec, 65, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : TYPRUB 
#define S_GEEX5127_BP_TYPRUB peel(pick(nPos, 70, 4), " ")
#define R_GEEX5127_BP_TYPRUB(A) put(nRec, 70, A :4.4)
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_GEEX5127_BP_CODRUB peel(pick(nPos, 74, 16), " ")
#define R_GEEX5127_BP_CODRUB(A) put(nRec, 74, A :16.16)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX5127_BP_VALRUB peel(pick(nPos, 90, 140), " ")
#define R_GEEX5127_BP_VALRUB(A) put(nRec, 90, A :140.140)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5127_BP_DISEXC peel(pick(nPos, 230, 27), " ")
#define R_GEEX5127_BP_DISEXC(A) put(nRec, 230, A :27.27)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5130_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5130_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5130_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5130_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5130_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5130_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5130_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5130_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5130_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5130_BP_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5130_BP_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5130_BP_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5130_BP_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5130_BP_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5130_BP_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5130_BP_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5130_BP_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5130_BP_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5130_BP_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_GEEX5130_BP_NLILIV peel(pick(nPos, 65, 5), " ")
#define R_GEEX5130_BP_NLILIV(A) put(nRec, 65, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX5130_BP_CODPRO peel(pick(nPos, 70, 17), " ")
#define R_GEEX5130_BP_CODPRO(A) put(nRec, 70, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX5130_BP_VALPRO peel(pick(nPos, 87, 2), " ")
#define R_GEEX5130_BP_VALPRO(A) put(nRec, 87, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : UVCLIV 
#define S_GEEX5130_BP_UVCLIV peel(pick(nPos, 89, 9), " ")
#define R_GEEX5130_BP_UVCLIV(A) put(nRec, 89, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : MESPRO 
#define S_GEEX5130_BP_MESPRO peel(pick(nPos, 98, 1), " ")
#define R_GEEX5130_BP_MESPRO(A) put(nRec, 98, A :1.1)
!-----------------------------------------------------------
! FIELD : PDNLIV 
#define S_GEEX5130_BP_PDNLIV peel(pick(nPos, 99, 11), " ")
#define R_GEEX5130_BP_PDNLIV(A) put(nRec, 99, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : MOTMVT 
#define S_GEEX5130_BP_MOTMVT peel(pick(nPos, 110, 3), " ")
#define R_GEEX5130_BP_MOTMVT(A) put(nRec, 110, A :3.3)
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX5130_BP_CODLOT peel(pick(nPos, 113, 20), " ")
#define R_GEEX5130_BP_CODLOT(A) put(nRec, 113, A :20.20)
!-----------------------------------------------------------
! FIELD : NUMLOT 
#define S_GEEX5130_BP_NUMLOT peel(pick(nPos, 133, 9), " ")
#define R_GEEX5130_BP_NUMLOT(A) put(nRec, 133, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX5130_BP_CODPAL peel(pick(nPos, 142, 18), " ")
#define R_GEEX5130_BP_CODPAL(A) put(nRec, 142, A :18.18)
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_GEEX5130_BP_DATFVI peel(pick(nPos, 160, 8), " ")
#define R_GEEX5130_BP_DATFVI(A) put(nRec, 160, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : NUMSUP 
#define S_GEEX5130_BP_NUMSUP peel(pick(nPos, 168, 8), " ")
#define R_GEEX5130_BP_NUMSUP(A) put(nRec, 168, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUSUP 
#define S_GEEX5130_BP_SNUSUP peel(pick(nPos, 176, 3), " ")
#define R_GEEX5130_BP_SNUSUP(A) put(nRec, 176, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODPRP 
#define S_GEEX5130_BP_CODPRP peel(pick(nPos, 179, 10), " ")
#define R_GEEX5130_BP_CODPRP(A) put(nRec, 179, A :10.10)
!-----------------------------------------------------------
! FIELD : PRPPIC 
#define S_GEEX5130_BP_PRPPIC peel(pick(nPos, 189, 1), " ")
#define R_GEEX5130_BP_PRPPIC(A) put(nRec, 189, A :1.1)
!-----------------------------------------------------------
! FIELD : SPCPRO 
#define S_GEEX5130_BP_SPCPRO peel(pick(nPos, 190, 4), " ")
#define R_GEEX5130_BP_SPCPRO(A) put(nRec, 190, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX5130_BP_PCBPRO peel(pick(nPos, 194, 5), " ")
#define R_GEEX5130_BP_PCBPRO(A) put(nRec, 194, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : COLCOU 
#define S_GEEX5130_BP_COLCOU peel(pick(nPos, 199, 4), " ")
#define R_GEEX5130_BP_COLCOU(A) put(nRec, 199, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : COUPAL 
#define S_GEEX5130_BP_COUPAL peel(pick(nPos, 203, 4), " ")
#define R_GEEX5130_BP_COUPAL(A) put(nRec, 203, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : GERPAL 
#define S_GEEX5130_BP_GERPAL peel(pick(nPos, 207, 2), " ")
#define R_GEEX5130_BP_GERPAL(A) put(nRec, 207, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODEMB 
#define S_GEEX5130_BP_CODEMB peel(pick(nPos, 209, 3), " ")
#define R_GEEX5130_BP_CODEMB(A) put(nRec, 209, A :3.3)
!-----------------------------------------------------------
! FIELD : CODACL 
#define S_GEEX5130_BP_CODACL peel(pick(nPos, 212, 3), " ")
#define R_GEEX5130_BP_CODACL(A) put(nRec, 212, A :3.3)
!-----------------------------------------------------------
! FIELD : UVCSRV 
#define S_GEEX5130_BP_UVCSRV peel(pick(nPos, 215, 9), " ")
#define R_GEEX5130_BP_UVCSRV(A) put(nRec, 215, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : SSCHET 
#define S_GEEX5130_BP_SSCHET peel(pick(nPos, 224, 18), " ")
#define R_GEEX5130_BP_SSCHET(A) put(nRec, 224, A :18.18)
!-----------------------------------------------------------
! FIELD : HEUSUP 
#define S_GEEX5130_BP_HEUSUP peel(pick(nPos, 242, 8), " ")
#define R_GEEX5130_BP_HEUSUP(A) put(nRec, 242, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GEEX5130_BP_MOTIMM peel(pick(nPos, 250, 3), " ")
#define R_GEEX5130_BP_MOTIMM(A) put(nRec, 250, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMCLS 
#define S_GEEX5130_BP_NUMCLS peel(pick(nPos, 253, 4), " ")
#define R_GEEX5130_BP_NUMCLS(A) put(nRec, 253, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : TYPSUP 
#define S_GEEX5130_BP_TYPSUP peel(pick(nPos, 257, 1), " ")
#define R_GEEX5130_BP_TYPSUP(A) put(nRec, 257, A :1.1)
!-----------------------------------------------------------
! FIELD : DATSUP2 
#define S_GEEX5130_BP_DATSUP2 peel(pick(nPos, 258, 8), " ")
#define R_GEEX5130_BP_DATSUP2(A) put(nRec, 258, build(number(A):R08.0))
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5131_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5131_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5131_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5131_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5131_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5131_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5131_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5131_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5131_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5131_BP_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5131_BP_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5131_BP_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5131_BP_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5131_BP_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5131_BP_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5131_BP_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5131_BP_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5131_BP_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5131_BP_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_GEEX5131_BP_NLILIV peel(pick(nPos, 65, 5), " ")
#define R_GEEX5131_BP_NLILIV(A) put(nRec, 65, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX5131_BP_CODPRO peel(pick(nPos, 70, 17), " ")
#define R_GEEX5131_BP_CODPRO(A) put(nRec, 70, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX5131_BP_VALPRO peel(pick(nPos, 87, 2), " ")
#define R_GEEX5131_BP_VALPRO(A) put(nRec, 87, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEQSUP 
#define S_GEEX5131_BP_SEQSUP peel(pick(nPos, 89, 4), " ")
#define R_GEEX5131_BP_SEQSUP(A) put(nRec, 89, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : PROEMB 
#define S_GEEX5131_BP_PROEMB peel(pick(nPos, 93, 17), " ")
#define R_GEEX5131_BP_PROEMB(A) put(nRec, 93, A :17.17)
!-----------------------------------------------------------
! FIELD : NUMPLB 
#define S_GEEX5131_BP_NUMPLB peel(pick(nPos, 110, 8), " ")
#define R_GEEX5131_BP_NUMPLB(A) put(nRec, 110, A :8.8)
!-----------------------------------------------------------
! FIELD : PDBLIV 
#define S_GEEX5131_BP_PDBLIV peel(pick(nPos, 118, 11), " ")
#define R_GEEX5131_BP_PDBLIV(A) put(nRec, 118, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : PALGRP 
#define S_GEEX5131_BP_PALGRP peel(pick(nPos, 129, 18), " ")
#define R_GEEX5131_BP_PALGRP(A) put(nRec, 129, A :18.18)
!-----------------------------------------------------------
! FIELD : CODCIN 
#define S_GEEX5131_BP_CODCIN peel(pick(nPos, 147, 20), " ")
#define R_GEEX5131_BP_CODCIN(A) put(nRec, 147, A :20.20)
!-----------------------------------------------------------
! FIELD : VOLCOL 
#define S_GEEX5131_BP_VOLCOL peel(pick(nPos, 167, 7), " ")
#define R_GEEX5131_BP_VOLCOL(A) put(nRec, 167, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : TYPSUP 
#define S_GEEX5131_BP_TYPSUP peel(pick(nPos, 174, 1), " ")
#define R_GEEX5131_BP_TYPSUP(A) put(nRec, 174, A :1.1)
!-----------------------------------------------------------
! FIELD : CIRPIC 
#define S_GEEX5131_BP_CIRPIC peel(pick(nPos, 175, 3), " ")
#define R_GEEX5131_BP_CIRPIC(A) put(nRec, 175, A :3.3)
!-----------------------------------------------------------
! FIELD : DATSUP1 
#define S_GEEX5131_BP_DATSUP1 peel(pick(nPos, 178, 8), " ")
#define R_GEEX5131_BP_DATSUP1(A) put(nRec, 178, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATSUP2 
#define S_GEEX5131_BP_DATSUP2 peel(pick(nPos, 186, 8), " ")
#define R_GEEX5131_BP_DATSUP2(A) put(nRec, 186, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : LIBSUP 
#define S_GEEX5131_BP_LIBSUP peel(pick(nPos, 194, 30), " ")
#define R_GEEX5131_BP_LIBSUP(A) put(nRec, 194, A :30.30)
!-----------------------------------------------------------
! FIELD : TOPPAQ1 
#define S_GEEX5131_BP_TOPPAQ1 peel(pick(nPos, 224, 1), " ")
#define R_GEEX5131_BP_TOPPAQ1(A) put(nRec, 224, A :1.1)
!-----------------------------------------------------------
! FIELD : TOPPAQ2 
#define S_GEEX5131_BP_TOPPAQ2 peel(pick(nPos, 225, 1), " ")
#define R_GEEX5131_BP_TOPPAQ2(A) put(nRec, 225, A :1.1)
!-----------------------------------------------------------
! FIELD : PDBCOL 
#define S_GEEX5131_BP_PDBCOL peel(pick(nPos, 226, 7), " ")
#define R_GEEX5131_BP_PDBCOL(A) put(nRec, 226, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : SITRCT 
#define S_GEEX5131_BP_SITRCT peel(pick(nPos, 233, 3), " ")
#define R_GEEX5131_BP_SITRCT(A) put(nRec, 233, A :3.3)
!-----------------------------------------------------------
! FIELD : CODTOB 
#define S_GEEX5131_BP_CODTOB peel(pick(nPos, 236, 3), " ")
#define R_GEEX5131_BP_CODTOB(A) put(nRec, 236, A :3.3)
!-----------------------------------------------------------
! FIELD : DATFAB 
#define S_GEEX5131_BP_DATFAB peel(pick(nPos, 239, 8), " ")
#define R_GEEX5131_BP_DATFAB(A) put(nRec, 239, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODEAP 
#define S_GEEX5131_BP_CODEAP peel(pick(nPos, 247, 3), " ")
#define R_GEEX5131_BP_CODEAP(A) put(nRec, 247, A :3.3)
!-----------------------------------------------------------
! FIELD : HEUFAB 
#define S_GEEX5131_BP_HEUFAB peel(pick(nPos, 250, 6), " ")
#define R_GEEX5131_BP_HEUFAB(A) put(nRec, 250, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5131_BP_DISEXC peel(pick(nPos, 256, 1), " ")
#define R_GEEX5131_BP_DISEXC(A) put(nRec, 256, A :1.1)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5132_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5132_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5132_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5132_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5132_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5132_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5132_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5132_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5132_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5132_BP_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5132_BP_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5132_BP_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5132_BP_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5132_BP_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5132_BP_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5132_BP_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5132_BP_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5132_BP_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5132_BP_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_GEEX5132_BP_NLILIV peel(pick(nPos, 65, 5), " ")
#define R_GEEX5132_BP_NLILIV(A) put(nRec, 65, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX5132_BP_CODPRO peel(pick(nPos, 70, 17), " ")
#define R_GEEX5132_BP_CODPRO(A) put(nRec, 70, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX5132_BP_VALPRO peel(pick(nPos, 87, 2), " ")
#define R_GEEX5132_BP_VALPRO(A) put(nRec, 87, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : INDDNG 
#define S_GEEX5132_BP_INDDNG peel(pick(nPos, 89, 1), " ")
#define R_GEEX5132_BP_INDDNG(A) put(nRec, 89, A :1.1)
!-----------------------------------------------------------
! FIELD : CLAACO 
#define S_GEEX5132_BP_CLAACO peel(pick(nPos, 90, 7), " ")
#define R_GEEX5132_BP_CLAACO(A) put(nRec, 90, A :7.7)
!-----------------------------------------------------------
! FIELD : INDTEM 
#define S_GEEX5132_BP_INDTEM peel(pick(nPos, 97, 4), " ")
#define R_GEEX5132_BP_INDTEM(A) put(nRec, 97, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : CODONU 
#define S_GEEX5132_BP_CODONU peel(pick(nPos, 101, 4), " ")
#define R_GEEX5132_BP_CODONU(A) put(nRec, 101, A :4.4)
!-----------------------------------------------------------
! FIELD : INDTPD 
#define S_GEEX5132_BP_INDTPD peel(pick(nPos, 105, 1), " ")
#define R_GEEX5132_BP_INDTPD(A) put(nRec, 105, A :1.1)
!-----------------------------------------------------------
! FIELD : INFEXP 
#define S_GEEX5132_BP_INFEXP peel(pick(nPos, 106, 16), " ")
#define R_GEEX5132_BP_INFEXP(A) put(nRec, 106, A :16.16)
!-----------------------------------------------------------
! FIELD : NUMTKG 
#define S_GEEX5132_BP_NUMTKG peel(pick(nPos, 122, 35), " ")
#define R_GEEX5132_BP_NUMTKG(A) put(nRec, 122, A :35.35)
!-----------------------------------------------------------
! FIELD : CLIVIA 
#define S_GEEX5132_BP_CLIVIA peel(pick(nPos, 157, 14), " ")
#define R_GEEX5132_BP_CLIVIA(A) put(nRec, 157, A :14.14)
!-----------------------------------------------------------
! FIELD : PDNUVC 
#define S_GEEX5132_BP_PDNUVC peel(pick(nPos, 171, 7), " ")
#define R_GEEX5132_BP_PDNUVC(A) put(nRec, 171, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : PDBUVC 
#define S_GEEX5132_BP_PDBUVC peel(pick(nPos, 178, 7), " ")
#define R_GEEX5132_BP_PDBUVC(A) put(nRec, 178, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : ZONSPF 
#define S_GEEX5132_BP_ZONSPF peel(pick(nPos, 185, 50), " ")
#define R_GEEX5132_BP_ZONSPF(A) put(nRec, 185, A :50.50)
!-----------------------------------------------------------
! FIELD : SSCCMP 
#define S_GEEX5132_BP_SSCCMP peel(pick(nPos, 235, 18), " ")
#define R_GEEX5132_BP_SSCCMP(A) put(nRec, 235, A :18.18)
!-----------------------------------------------------------
! FIELD : CODEMB 
#define S_GEEX5132_BP_CODEMB peel(pick(nPos, 253, 3), " ")
#define R_GEEX5132_BP_CODEMB(A) put(nRec, 253, A :3.3)
!-----------------------------------------------------------
! FIELD : SENTEM 
#define S_GEEX5132_BP_SENTEM peel(pick(nPos, 256, 1), " ")
#define R_GEEX5132_BP_SENTEM(A) put(nRec, 256, A :1.1)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5133_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5133_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5133_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5133_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5133_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5133_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5133_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5133_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5133_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5133_BP_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5133_BP_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5133_BP_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5133_BP_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5133_BP_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5133_BP_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5133_BP_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5133_BP_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5133_BP_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5133_BP_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_GEEX5133_BP_NLILIV peel(pick(nPos, 65, 5), " ")
#define R_GEEX5133_BP_NLILIV(A) put(nRec, 65, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX5133_BP_CODPRO peel(pick(nPos, 70, 17), " ")
#define R_GEEX5133_BP_CODPRO(A) put(nRec, 70, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX5133_BP_VALPRO peel(pick(nPos, 87, 2), " ")
#define R_GEEX5133_BP_VALPRO(A) put(nRec, 87, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODONU 
#define S_GEEX5133_BP_CODONU peel(pick(nPos, 89, 4), " ")
#define R_GEEX5133_BP_CODONU(A) put(nRec, 89, A :4.4)
!-----------------------------------------------------------
! FIELD : CLAACO 
#define S_GEEX5133_BP_CLAACO peel(pick(nPos, 93, 7), " ")
#define R_GEEX5133_BP_CLAACO(A) put(nRec, 93, A :7.7)
!-----------------------------------------------------------
! FIELD : CODTMD 
#define S_GEEX5133_BP_CODTMD peel(pick(nPos, 100, 4), " ")
#define R_GEEX5133_BP_CODTMD(A) put(nRec, 100, A :4.4)
!-----------------------------------------------------------
! FIELD : LIBTMD 
#define S_GEEX5133_BP_LIBTMD peel(pick(nPos, 104, 30), " ")
#define R_GEEX5133_BP_LIBTMD(A) put(nRec, 104, A :30.30)
!-----------------------------------------------------------
! FIELD : NUMDNG 
#define S_GEEX5133_BP_NUMDNG peel(pick(nPos, 134, 3), " ")
#define R_GEEX5133_BP_NUMDNG(A) put(nRec, 134, A :3.3)
!-----------------------------------------------------------
! FIELD : GRPEMB 
#define S_GEEX5133_BP_GRPEMB peel(pick(nPos, 137, 5), " ")
#define R_GEEX5133_BP_GRPEMB(A) put(nRec, 137, A :5.5)
!-----------------------------------------------------------
! FIELD : VOLTMD 
#define S_GEEX5133_BP_VOLTMD peel(pick(nPos, 142, 8), " ")
#define R_GEEX5133_BP_VOLTMD(A) put(nRec, 142, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5133_BP_DISEXC peel(pick(nPos, 150, 107), " ")
#define R_GEEX5133_BP_DISEXC(A) put(nRec, 150, A :107.107)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5134_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5134_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5134_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5134_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5134_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5134_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5134_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5134_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5134_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5134_BP_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5134_BP_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5134_BP_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5134_BP_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5134_BP_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5134_BP_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5134_BP_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5134_BP_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5134_BP_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5134_BP_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_GEEX5134_BP_NLILIV peel(pick(nPos, 65, 5), " ")
#define R_GEEX5134_BP_NLILIV(A) put(nRec, 65, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : NUMTKR 
#define S_GEEX5134_BP_NUMTKR peel(pick(nPos, 70, 35), " ")
#define R_GEEX5134_BP_NUMTKR(A) put(nRec, 70, A :35.35)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5134_BP_DISEXC peel(pick(nPos, 105, 152), " ")
#define R_GEEX5134_BP_DISEXC(A) put(nRec, 105, A :152.152)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5140_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5140_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5140_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5140_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5140_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5140_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5140_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5140_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5140_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5140_BP_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5140_BP_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5140_BP_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5140_BP_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5140_BP_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5140_BP_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5140_BP_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5140_BP_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5140_BP_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5140_BP_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_GEEX5140_BP_NLILIV peel(pick(nPos, 65, 5), " ")
#define R_GEEX5140_BP_NLILIV(A) put(nRec, 65, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX5140_BP_CODPRO peel(pick(nPos, 70, 17), " ")
#define R_GEEX5140_BP_CODPRO(A) put(nRec, 70, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX5140_BP_VALPRO peel(pick(nPos, 87, 2), " ")
#define R_GEEX5140_BP_VALPRO(A) put(nRec, 87, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : NUMSUP 
#define S_GEEX5140_BP_NUMSUP peel(pick(nPos, 89, 8), " ")
#define R_GEEX5140_BP_NUMSUP(A) put(nRec, 89, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUSUP 
#define S_GEEX5140_BP_SNUSUP peel(pick(nPos, 97, 3), " ")
#define R_GEEX5140_BP_SNUSUP(A) put(nRec, 97, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX5140_BP_CODPAL peel(pick(nPos, 100, 18), " ")
#define R_GEEX5140_BP_CODPAL(A) put(nRec, 100, A :18.18)
!-----------------------------------------------------------
! FIELD : CODSER 
#define S_GEEX5140_BP_CODSER peel(pick(nPos, 118, 30), " ")
#define R_GEEX5140_BP_CODSER(A) put(nRec, 118, A :30.30)
!-----------------------------------------------------------
! FIELD : NUMSER 
#define S_GEEX5140_BP_NUMSER peel(pick(nPos, 148, 9), " ")
#define R_GEEX5140_BP_NUMSER(A) put(nRec, 148, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : SNUSER 
#define S_GEEX5140_BP_SNUSER peel(pick(nPos, 157, 3), " ")
#define R_GEEX5140_BP_SNUSER(A) put(nRec, 157, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : NUMPAL 
#define S_GEEX5140_BP_NUMPAL peel(pick(nPos, 160, 9), " ")
#define R_GEEX5140_BP_NUMPAL(A) put(nRec, 160, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : SNUPAL 
#define S_GEEX5140_BP_SNUPAL peel(pick(nPos, 169, 2), " ")
#define R_GEEX5140_BP_SNUPAL(A) put(nRec, 169, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : NUMTOU 
#define S_GEEX5140_BP_NUMTOU peel(pick(nPos, 171, 8), " ")
#define R_GEEX5140_BP_NUMTOU(A) put(nRec, 171, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATEXP 
#define S_GEEX5140_BP_DATEXP peel(pick(nPos, 179, 8), " ")
#define R_GEEX5140_BP_DATEXP(A) put(nRec, 179, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXP 
#define S_GEEX5140_BP_HEUEXP peel(pick(nPos, 187, 6), " ")
#define R_GEEX5140_BP_HEUEXP(A) put(nRec, 187, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODOBI 
#define S_GEEX5140_BP_CODOBI peel(pick(nPos, 193, 36), " ")
#define R_GEEX5140_BP_CODOBI(A) put(nRec, 193, A :36.36)
!-----------------------------------------------------------
! FIELD : PDBSER 
#define S_GEEX5140_BP_PDBSER peel(pick(nPos, 229, 7), " ")
#define R_GEEX5140_BP_PDBSER(A) put(nRec, 229, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : TYPSER 
#define S_GEEX5140_BP_TYPSER peel(pick(nPos, 236, 1), " ")
#define R_GEEX5140_BP_TYPSER(A) put(nRec, 236, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5140_BP_DISEXC peel(pick(nPos, 237, 20), " ")
#define R_GEEX5140_BP_DISEXC(A) put(nRec, 237, A :20.20)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5150_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5150_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5150_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5150_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5150_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5150_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5150_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5150_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5150_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5150_BP_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5150_BP_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5150_BP_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5150_BP_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5150_BP_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5150_BP_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5150_BP_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5150_BP_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5150_BP_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5150_BP_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_GEEX5150_BP_NLILIV peel(pick(nPos, 65, 5), " ")
#define R_GEEX5150_BP_NLILIV(A) put(nRec, 65, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX5150_BP_CODPRO peel(pick(nPos, 70, 17), " ")
#define R_GEEX5150_BP_CODPRO(A) put(nRec, 70, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX5150_BP_VALPRO peel(pick(nPos, 87, 2), " ")
#define R_GEEX5150_BP_VALPRO(A) put(nRec, 87, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : NUMSUP 
#define S_GEEX5150_BP_NUMSUP peel(pick(nPos, 89, 8), " ")
#define R_GEEX5150_BP_NUMSUP(A) put(nRec, 89, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUSUP 
#define S_GEEX5150_BP_SNUSUP peel(pick(nPos, 97, 3), " ")
#define R_GEEX5150_BP_SNUSUP(A) put(nRec, 97, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX5150_BP_CODPAL peel(pick(nPos, 100, 18), " ")
#define R_GEEX5150_BP_CODPAL(A) put(nRec, 100, A :18.18)
!-----------------------------------------------------------
! FIELD : SEQSUP 
#define S_GEEX5150_BP_SEQSUP peel(pick(nPos, 118, 4), " ")
#define R_GEEX5150_BP_SEQSUP(A) put(nRec, 118, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_GEEX5150_BP_CODRUB peel(pick(nPos, 122, 4), " ")
#define R_GEEX5150_BP_CODRUB(A) put(nRec, 122, A :4.4)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX5150_BP_VALRUB peel(pick(nPos, 126, 35), " ")
#define R_GEEX5150_BP_VALRUB(A) put(nRec, 126, A :35.35)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5150_BP_DISEXC peel(pick(nPos, 161, 96), " ")
#define R_GEEX5150_BP_DISEXC(A) put(nRec, 161, A :96.96)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5180_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5180_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5180_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5180_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5180_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5180_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5180_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5180_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5180_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5180_BP_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5180_BP_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5180_BP_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5180_BP_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5180_BP_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5180_BP_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5180_BP_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5180_BP_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5180_BP_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5180_BP_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : CODEMB 
#define S_GEEX5180_BP_CODEMB peel(pick(nPos, 65, 3), " ")
#define R_GEEX5180_BP_CODEMB(A) put(nRec, 65, A :3.3)
!-----------------------------------------------------------
! FIELD : QTBSOR 
#define S_GEEX5180_BP_QTBSOR peel(pick(nPos, 68, 9), " ")
#define R_GEEX5180_BP_QTBSOR(A) put(nRec, 68, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : QTBENT 
#define S_GEEX5180_BP_QTBENT peel(pick(nPos, 77, 9), " ")
#define R_GEEX5180_BP_QTBENT(A) put(nRec, 77, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : PRXEMB 
#define S_GEEX5180_BP_PRXEMB peel(pick(nPos, 86, 6), " ")
#define R_GEEX5180_BP_PRXEMB(A) put(nRec, 86, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_GEEX5180_BP_CODTRA peel(pick(nPos, 92, 14), " ")
#define R_GEEX5180_BP_CODTRA(A) put(nRec, 92, A :14.14)
!-----------------------------------------------------------
! FIELD : PROEMB 
#define S_GEEX5180_BP_PROEMB peel(pick(nPos, 106, 17), " ")
#define R_GEEX5180_BP_PROEMB(A) put(nRec, 106, A :17.17)
!-----------------------------------------------------------
! FIELD : DATEMB 
#define S_GEEX5180_BP_DATEMB peel(pick(nPos, 123, 8), " ")
#define R_GEEX5180_BP_DATEMB(A) put(nRec, 123, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : TYPTIE 
#define S_GEEX5180_BP_TYPTIE peel(pick(nPos, 131, 1), " ")
#define R_GEEX5180_BP_TYPTIE(A) put(nRec, 131, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5180_BP_DISEXC peel(pick(nPos, 132, 125), " ")
#define R_GEEX5180_BP_DISEXC(A) put(nRec, 132, A :125.125)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5184_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5184_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5184_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5184_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5184_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5184_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5184_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5184_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5184_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5184_BP_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5184_BP_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5184_BP_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5184_BP_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5184_BP_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5184_BP_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5184_BP_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5184_BP_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5184_BP_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5184_BP_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : CODEMB 
#define S_GEEX5184_BP_CODEMB peel(pick(nPos, 65, 3), " ")
#define R_GEEX5184_BP_CODEMB(A) put(nRec, 65, A :3.3)
!-----------------------------------------------------------
! FIELD : LIBTYP 
#define S_GEEX5184_BP_LIBTYP peel(pick(nPos, 68, 3), " ")
#define R_GEEX5184_BP_LIBTYP(A) put(nRec, 68, A :3.3)
!-----------------------------------------------------------
! FIELD : CODIMA 
#define S_GEEX5184_BP_CODIMA peel(pick(nPos, 71, 175), " ")
#define R_GEEX5184_BP_CODIMA(A) put(nRec, 71, A :175.175)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5184_BP_DISEXC peel(pick(nPos, 246, 11), " ")
#define R_GEEX5184_BP_DISEXC(A) put(nRec, 246, A :11.11)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5190_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5190_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5190_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5190_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5190_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5190_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5190_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5190_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5190_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMPAL 
#define S_GEEX5190_BP_NUMPAL peel(pick(nPos, 7, 9), " ")
#define R_GEEX5190_BP_NUMPAL(A) put(nRec, 7, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : SNUPAL 
#define S_GEEX5190_BP_SNUPAL peel(pick(nPos, 16, 2), " ")
#define R_GEEX5190_BP_SNUPAL(A) put(nRec, 16, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5190_BP_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5190_BP_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5190_BP_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5190_BP_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX5190_BP_CODPRO peel(pick(nPos, 35, 17), " ")
#define R_GEEX5190_BP_CODPRO(A) put(nRec, 35, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX5190_BP_VALPRO peel(pick(nPos, 52, 2), " ")
#define R_GEEX5190_BP_VALPRO(A) put(nRec, 52, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX5190_BP_CODPAL peel(pick(nPos, 54, 18), " ")
#define R_GEEX5190_BP_CODPAL(A) put(nRec, 54, A :18.18)
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GEEX5190_BP_MOTIMM peel(pick(nPos, 72, 9), " ")
#define R_GEEX5190_BP_MOTIMM(A) put(nRec, 72, A :9.9)
!-----------------------------------------------------------
! FIELD : DATLIB 
#define S_GEEX5190_BP_DATLIB peel(pick(nPos, 81, 24), " ")
#define R_GEEX5190_BP_DATLIB(A) put(nRec, 81, build(number(A):R024.0))
!-----------------------------------------------------------
! FIELD : HEULIB 
#define S_GEEX5190_BP_HEULIB peel(pick(nPos, 105, 18), " ")
#define R_GEEX5190_BP_HEULIB(A) put(nRec, 105, build(number(A):R018.0))
!-----------------------------------------------------------
! FIELD : INDLIB 
#define S_GEEX5190_BP_INDLIB peel(pick(nPos, 123, 3), " ")
#define R_GEEX5190_BP_INDLIB(A) put(nRec, 123, A :3.3)
!-----------------------------------------------------------
! FIELD : IMMBKL 
#define S_GEEX5190_BP_IMMBKL peel(pick(nPos, 126, 3), " ")
#define R_GEEX5190_BP_IMMBKL(A) put(nRec, 126, A :3.3)
!-----------------------------------------------------------
! FIELD : PALIMM 
#define S_GEEX5190_BP_PALIMM peel(pick(nPos, 129, 3), " ")
#define R_GEEX5190_BP_PALIMM(A) put(nRec, 129, A :3.3)
!-----------------------------------------------------------
! FIELD : DATBKL 
#define S_GEEX5190_BP_DATBKL peel(pick(nPos, 132, 8), " ")
#define R_GEEX5190_BP_DATBKL(A) put(nRec, 132, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUBKL 
#define S_GEEX5190_BP_HEUBKL peel(pick(nPos, 140, 6), " ")
#define R_GEEX5190_BP_HEUBKL(A) put(nRec, 140, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : DATIMM 
#define S_GEEX5190_BP_DATIMM peel(pick(nPos, 146, 8), " ")
#define R_GEEX5190_BP_DATIMM(A) put(nRec, 146, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUIMM 
#define S_GEEX5190_BP_HEUIMM peel(pick(nPos, 154, 6), " ")
#define R_GEEX5190_BP_HEUIMM(A) put(nRec, 154, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : LIBIMO 
#define S_GEEX5190_BP_LIBIMO peel(pick(nPos, 160, 30), " ")
#define R_GEEX5190_BP_LIBIMO(A) put(nRec, 160, A :30.30)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5190_BP_DISEXC peel(pick(nPos, 190, 67), " ")
#define R_GEEX5190_BP_DISEXC(A) put(nRec, 190, A :67.67)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX5199_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX5199_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5199_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX5199_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5199_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX5199_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5199_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX5199_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5199_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX5199_BP_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5199_BP_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX5199_BP_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5199_BP_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX5199_BP_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5199_BP_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX5199_BP_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5199_BP_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX5199_BP_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5199_BP_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : CUMLIG 
#define S_GEEX5199_BP_CUMLIG peel(pick(nPos, 65, 4), " ")
#define R_GEEX5199_BP_CUMLIG(A) put(nRec, 65, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : MVTEXC 
#define S_GEEX5199_BP_MVTEXC peel(pick(nPos, 69, 8), " ")
#define R_GEEX5199_BP_MVTEXC(A) put(nRec, 69, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CUMSUP 
#define S_GEEX5199_BP_CUMSUP peel(pick(nPos, 77, 5), " ")
#define R_GEEX5199_BP_CUMSUP(A) put(nRec, 77, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : COLTOT 
#define S_GEEX5199_BP_COLTOT peel(pick(nPos, 82, 9), " ")
#define R_GEEX5199_BP_COLTOT(A) put(nRec, 82, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : TOTPRO 
#define S_GEEX5199_BP_TOTPRO peel(pick(nPos, 91, 5), " ")
#define R_GEEX5199_BP_TOTPRO(A) put(nRec, 91, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : PDBLIV 
#define S_GEEX5199_BP_PDBLIV peel(pick(nPos, 96, 11), " ")
#define R_GEEX5199_BP_PDBLIV(A) put(nRec, 96, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : PDNLIV 
#define S_GEEX5199_BP_PDNLIV peel(pick(nPos, 107, 11), " ")
#define R_GEEX5199_BP_PDNLIV(A) put(nRec, 107, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : NUMCPT 
#define S_GEEX5199_BP_NUMCPT peel(pick(nPos, 118, 3), " ")
#define R_GEEX5199_BP_NUMCPT(A) put(nRec, 118, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX5199_BP_DISEXC peel(pick(nPos, 121, 136), " ")
#define R_GEEX5199_BP_DISEXC(A) put(nRec, 121, A :136.136)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9900_BP 
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
! Line : GEEX9999_BP 
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

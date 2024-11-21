! File M50_DHL_IN : 
!===========================================================
! Line : 0000HEADER 
!===========================================================
! FIELD : CODEXC 
#define S_0000HEADER_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_0000HEADER_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_0000HEADER_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_0000HEADER_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_0000HEADER_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_0000HEADER_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_0000HEADER_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_0000HEADER_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : EMTEXC 
#define S_0000HEADER_EMTEXC peel(pick(nPos, 7, 14), " ")
#define R_0000HEADER_EMTEXC(A) put(nRec, 7, A :14.14)
!-----------------------------------------------------------
! FIELD : RCTEXC 
#define S_0000HEADER_RCTEXC peel(pick(nPos, 21, 14), " ")
#define R_0000HEADER_RCTEXC(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXC 
#define S_0000HEADER_DATEXC peel(pick(nPos, 35, 8), " ")
#define R_0000HEADER_DATEXC(A) put(nRec, 35, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_0000HEADER_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_0000HEADER_HEUEXC(A) put(nRec, 43, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : NUMEXC 
#define S_0000HEADER_NUMEXC peel(pick(nPos, 49, 7), " ")
#define R_0000HEADER_NUMEXC(A) put(nRec, 49, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : ACQEXC 
#define S_0000HEADER_ACQEXC peel(pick(nPos, 56, 1), " ")
#define R_0000HEADER_ACQEXC(A) put(nRec, 56, A :1.1)
!-----------------------------------------------------------
! FIELD : VEREXC 
#define S_0000HEADER_VEREXC peel(pick(nPos, 57, 4), " ")
#define R_0000HEADER_VEREXC(A) put(nRec, 57, A :4.4)
!-----------------------------------------------------------
! FIELD : NOMSYS 
#define S_0000HEADER_NOMSYS peel(pick(nPos, 61, 8), " ")
#define R_0000HEADER_NOMSYS(A) put(nRec, 61, A :8.8)
!-----------------------------------------------------------
! FIELD : NOMDTQ 
#define S_0000HEADER_NOMDTQ peel(pick(nPos, 69, 10), " ")
#define R_0000HEADER_NOMDTQ(A) put(nRec, 69, A :10.10)
!-----------------------------------------------------------
! FIELD : BIBDTQ 
#define S_0000HEADER_BIBDTQ peel(pick(nPos, 79, 10), " ")
#define R_0000HEADER_BIBDTQ(A) put(nRec, 79, A :10.10)
!-----------------------------------------------------------
! FIELD : LIBEXC 
#define S_0000HEADER_LIBEXC peel(pick(nPos, 89, 30), " ")
#define R_0000HEADER_LIBEXC(A) put(nRec, 89, A :30.30)
!-----------------------------------------------------------
! FIELD : BIBDST 
#define S_0000HEADER_BIBDST peel(pick(nPos, 119, 10), " ")
#define R_0000HEADER_BIBDST(A) put(nRec, 119, A :10.10)
!-----------------------------------------------------------
! FIELD : PGMDST 
#define S_0000HEADER_PGMDST peel(pick(nPos, 129, 10), " ")
#define R_0000HEADER_PGMDST(A) put(nRec, 129, A :10.10)
!-----------------------------------------------------------
! FIELD : PARDST 
#define S_0000HEADER_PARDST peel(pick(nPos, 139, 30), " ")
#define R_0000HEADER_PARDST(A) put(nRec, 139, A :30.30)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_0000HEADER_CODACT peel(pick(nPos, 169, 3), " ")
#define R_0000HEADER_CODACT(A) put(nRec, 169, A :3.3)
!-----------------------------------------------------------
! FIELD : IGLSIT 
#define S_0000HEADER_IGLSIT peel(pick(nPos, 172, 3), " ")
#define R_0000HEADER_IGLSIT(A) put(nRec, 172, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : EDISIT 
#define S_0000HEADER_EDISIT peel(pick(nPos, 175, 14), " ")
#define R_0000HEADER_EDISIT(A) put(nRec, 175, A :14.14)
!-----------------------------------------------------------
! FIELD : IMAEXC 
#define S_0000HEADER_IMAEXC peel(pick(nPos, 189, 8), " ")
#define R_0000HEADER_IMAEXC(A) put(nRec, 189, build(number(A):R08.0))
!-----------------------------------------------------------
!===========================================================
! Line : 2000COSTUMERIDENTIFICATION 
!===========================================================
! FIELD : CODEXC 
#define S_2000COSTUMERIDENTIFICATION_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_2000COSTUMERIDENTIFICATION_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_2000COSTUMERIDENTIFICATION_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_2000COSTUMERIDENTIFICATION_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_2000COSTUMERIDENTIFICATION_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_2000COSTUMERIDENTIFICATION_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_2000COSTUMERIDENTIFICATION_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_2000COSTUMERIDENTIFICATION_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_2000COSTUMERIDENTIFICATION_CODACT peel(pick(nPos, 7, 3), " ")
#define R_2000COSTUMERIDENTIFICATION_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_2000COSTUMERIDENTIFICATION_CODCLI peel(pick(nPos, 10, 14), " ")
#define R_2000COSTUMERIDENTIFICATION_CODCLI(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : TYPCLI 
#define S_2000COSTUMERIDENTIFICATION_TYPCLI peel(pick(nPos, 24, 1), " ")
#define R_2000COSTUMERIDENTIFICATION_TYPCLI(A) put(nRec, 24, A :1.1)
!-----------------------------------------------------------
! FIELD : CATCLI 
#define S_2000COSTUMERIDENTIFICATION_CATCLI peel(pick(nPos, 25, 3), " ")
#define R_2000COSTUMERIDENTIFICATION_CATCLI(A) put(nRec, 25, A :3.3)
!-----------------------------------------------------------
! FIELD : CLILIV 
#define S_2000COSTUMERIDENTIFICATION_CLILIV peel(pick(nPos, 28, 14), " ")
#define R_2000COSTUMERIDENTIFICATION_CLILIV(A) put(nRec, 28, A :14.14)
!-----------------------------------------------------------
! FIELD : EDICLI 
#define S_2000COSTUMERIDENTIFICATION_EDICLI peel(pick(nPos, 42, 14), " ")
#define R_2000COSTUMERIDENTIFICATION_EDICLI(A) put(nRec, 42, A :14.14)
!-----------------------------------------------------------
! FIELD : NOMCLI 
#define S_2000COSTUMERIDENTIFICATION_NOMCLI peel(pick(nPos, 56, 30), " ")
#define R_2000COSTUMERIDENTIFICATION_NOMCLI(A) put(nRec, 56, A :30.30)
!-----------------------------------------------------------
! FIELD : AD1CLI 
#define S_2000COSTUMERIDENTIFICATION_AD1CLI peel(pick(nPos, 86, 30), " ")
#define R_2000COSTUMERIDENTIFICATION_AD1CLI(A) put(nRec, 86, A :30.30)
!-----------------------------------------------------------
! FIELD : AD2CLI 
#define S_2000COSTUMERIDENTIFICATION_AD2CLI peel(pick(nPos, 116, 30), " ")
#define R_2000COSTUMERIDENTIFICATION_AD2CLI(A) put(nRec, 116, A :30.30)
!-----------------------------------------------------------
! FIELD : CPOCLI 
#define S_2000COSTUMERIDENTIFICATION_CPOCLI peel(pick(nPos, 146, 5), " ")
#define R_2000COSTUMERIDENTIFICATION_CPOCLI(A) put(nRec, 146, A :5.5)
!-----------------------------------------------------------
! FIELD : VILCLI 
#define S_2000COSTUMERIDENTIFICATION_VILCLI peel(pick(nPos, 151, 26), " ")
#define R_2000COSTUMERIDENTIFICATION_VILCLI(A) put(nRec, 151, A :26.26)
!-----------------------------------------------------------
! FIELD : PAYCLI 
#define S_2000COSTUMERIDENTIFICATION_PAYCLI peel(pick(nPos, 177, 3), " ")
#define R_2000COSTUMERIDENTIFICATION_PAYCLI(A) put(nRec, 177, A :3.3)
!-----------------------------------------------------------
! FIELD : TELCLI 
#define S_2000COSTUMERIDENTIFICATION_TELCLI peel(pick(nPos, 180, 20), " ")
#define R_2000COSTUMERIDENTIFICATION_TELCLI(A) put(nRec, 180, A :20.20)
!-----------------------------------------------------------
! FIELD : FAXCLI 
#define S_2000COSTUMERIDENTIFICATION_FAXCLI peel(pick(nPos, 200, 20), " ")
#define R_2000COSTUMERIDENTIFICATION_FAXCLI(A) put(nRec, 200, A :20.20)
!-----------------------------------------------------------
! FIELD : TLXCLI 
#define S_2000COSTUMERIDENTIFICATION_TLXCLI peel(pick(nPos, 220, 15), " ")
#define R_2000COSTUMERIDENTIFICATION_TLXCLI(A) put(nRec, 220, A :15.15)
!-----------------------------------------------------------
! FIELD : CODLGE 
#define S_2000COSTUMERIDENTIFICATION_CODLGE peel(pick(nPos, 235, 3), " ")
#define R_2000COSTUMERIDENTIFICATION_CODLGE(A) put(nRec, 235, A :3.3)
!-----------------------------------------------------------
! FIELD : CODDEV 
#define S_2000COSTUMERIDENTIFICATION_CODDEV peel(pick(nPos, 238, 3), " ")
#define R_2000COSTUMERIDENTIFICATION_CODDEV(A) put(nRec, 238, A :3.3)
!-----------------------------------------------------------
! FIELD : IGLSIT 
#define S_2000COSTUMERIDENTIFICATION_IGLSIT peel(pick(nPos, 241, 3), " ")
#define R_2000COSTUMERIDENTIFICATION_IGLSIT(A) put(nRec, 241, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : PTYCLI 
#define S_2000COSTUMERIDENTIFICATION_PTYCLI peel(pick(nPos, 244, 3), " ")
#define R_2000COSTUMERIDENTIFICATION_PTYCLI(A) put(nRec, 244, A :3.3)
!-----------------------------------------------------------
! FIELD : ETACLI 
#define S_2000COSTUMERIDENTIFICATION_ETACLI peel(pick(nPos, 247, 2), " ")
#define R_2000COSTUMERIDENTIFICATION_ETACLI(A) put(nRec, 247, A :2.2)
!-----------------------------------------------------------
!===========================================================
! Line : 2001COSTUMERIDENTIFICATION_COMPLEMENT 
!===========================================================
! FIELD : CODEXC 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_CODACT peel(pick(nPos, 7, 3), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_CODCLI peel(pick(nPos, 10, 14), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_CODCLI(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : RSPCLI 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_RSPCLI peel(pick(nPos, 24, 30), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_RSPCLI(A) put(nRec, 24, A :30.30)
!-----------------------------------------------------------
! FIELD : CODMOP 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_CODMOP peel(pick(nPos, 54, 3), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_CODMOP(A) put(nRec, 54, A :3.3)
!-----------------------------------------------------------
! FIELD : CODRGT 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_CODRGT peel(pick(nPos, 57, 3), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_CODRGT(A) put(nRec, 57, A :3.3)
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_CODTRA peel(pick(nPos, 60, 14), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_CODTRA(A) put(nRec, 60, A :14.14)
!-----------------------------------------------------------
! FIELD : TOULIV 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_TOULIV peel(pick(nPos, 74, 4), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_TOULIV(A) put(nRec, 74, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : TOULIV1 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_TOULIV1 peel(pick(nPos, 78, 4), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_TOULIV1(A) put(nRec, 78, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : TOULIV2 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_TOULIV2 peel(pick(nPos, 82, 4), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_TOULIV2(A) put(nRec, 82, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : TOULIV3 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_TOULIV3 peel(pick(nPos, 86, 4), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_TOULIV3(A) put(nRec, 86, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : TOULIV4 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_TOULIV4 peel(pick(nPos, 90, 4), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_TOULIV4(A) put(nRec, 90, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : TOULIV5 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_TOULIV5 peel(pick(nPos, 94, 4), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_TOULIV5(A) put(nRec, 94, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : TOULIV6 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_TOULIV6 peel(pick(nPos, 98, 4), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_TOULIV6(A) put(nRec, 98, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : ORDLIV 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_ORDLIV peel(pick(nPos, 102, 4), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_ORDLIV(A) put(nRec, 102, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : ORDLIV1 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_ORDLIV1 peel(pick(nPos, 106, 4), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_ORDLIV1(A) put(nRec, 106, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : ORDLIV2 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_ORDLIV2 peel(pick(nPos, 110, 4), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_ORDLIV2(A) put(nRec, 110, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : ORDLIV3 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_ORDLIV3 peel(pick(nPos, 114, 4), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_ORDLIV3(A) put(nRec, 114, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : ORDLIV4 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_ORDLIV4 peel(pick(nPos, 118, 4), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_ORDLIV4(A) put(nRec, 118, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : ORDLIV5 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_ORDLIV5 peel(pick(nPos, 122, 4), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_ORDLIV5(A) put(nRec, 122, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : ORDLIV6 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_ORDLIV6 peel(pick(nPos, 126, 4), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_ORDLIV6(A) put(nRec, 126, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : KAILIV 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_KAILIV peel(pick(nPos, 130, 3), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_KAILIV(A) put(nRec, 130, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : KAILIV1 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_KAILIV1 peel(pick(nPos, 133, 3), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_KAILIV1(A) put(nRec, 133, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : KAILIV2 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_KAILIV2 peel(pick(nPos, 136, 3), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_KAILIV2(A) put(nRec, 136, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : KAILIV3 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_KAILIV3 peel(pick(nPos, 139, 3), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_KAILIV3(A) put(nRec, 139, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : KAILIV4 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_KAILIV4 peel(pick(nPos, 142, 3), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_KAILIV4(A) put(nRec, 142, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : KAILIV5 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_KAILIV5 peel(pick(nPos, 145, 3), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_KAILIV5(A) put(nRec, 145, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : KAILIV6 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_KAILIV6 peel(pick(nPos, 148, 3), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_KAILIV6(A) put(nRec, 148, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : GSTALC 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_GSTALC peel(pick(nPos, 151, 1), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_GSTALC(A) put(nRec, 151, A :1.1)
!-----------------------------------------------------------
! FIELD : PTYDES 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_PTYDES peel(pick(nPos, 152, 2), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_PTYDES(A) put(nRec, 152, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : NUMACS 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_NUMACS peel(pick(nPos, 154, 20), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_NUMACS(A) put(nRec, 154, A :20.20)
!-----------------------------------------------------------
! FIELD : CPICLI 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_CPICLI peel(pick(nPos, 174, 9), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_CPICLI(A) put(nRec, 174, A :9.9)
!-----------------------------------------------------------
! FIELD : TVACCE 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_TVACCE peel(pick(nPos, 183, 20), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_TVACCE(A) put(nRec, 183, A :20.20)
!-----------------------------------------------------------
! FIELD : IDEALC 
#define S_2001COSTUMERIDENTIFICATION_COMPLEMENT_IDEALC peel(pick(nPos, 203, 20), " ")
#define R_2001COSTUMERIDENTIFICATION_COMPLEMENT_IDEALC(A) put(nRec, 203, A :20.20)
!-----------------------------------------------------------



!===========================================================
! Line : 2002COSTUMERIDENTIFICATION_COMPLEMENT 
!===========================================================
! FIELD : CODEXC 
#define S_2002COSTUMERIDENTIFICATION_COMPLEMENT_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_2002COSTUMERIDENTIFICATION_COMPLEMENT_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_2002COSTUMERIDENTIFICATION_COMPLEMENT_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_2002COSTUMERIDENTIFICATION_COMPLEMENT_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_2002COSTUMERIDENTIFICATION_COMPLEMENT_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_2002COSTUMERIDENTIFICATION_COMPLEMENT_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_2002COSTUMERIDENTIFICATION_COMPLEMENT_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_2002COSTUMERIDENTIFICATION_COMPLEMENT_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_2002COSTUMERIDENTIFICATION_COMPLEMENT_CODACT peel(pick(nPos, 7, 3), " ")
#define R_2002COSTUMERIDENTIFICATION_COMPLEMENT_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_2002COSTUMERIDENTIFICATION_COMPLEMENT_CODCLI peel(pick(nPos, 10, 14), " ")
#define R_2002COSTUMERIDENTIFICATION_COMPLEMENT_CODCLI(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : CM1CLI 
#define S_2002COSTUMERIDENTIFICATION_COMPLEMENT_CM1CLI peel(pick(nPos, 24, 45), " ")
#define R_2002COSTUMERIDENTIFICATION_COMPLEMENT_CM1CLI(A) put(nRec, 24, A :45.45)
!-----------------------------------------------------------
! FIELD : CM2CLI 
#define S_2002COSTUMERIDENTIFICATION_COMPLEMENT_CM2CLI peel(pick(nPos, 69, 45), " ")
#define R_2002COSTUMERIDENTIFICATION_COMPLEMENT_CM2CLI(A) put(nRec, 69, A :45.45)
!-----------------------------------------------------------
! FIELD : CM3CLI 
#define S_2002COSTUMERIDENTIFICATION_COMPLEMENT_CM3CLI peel(pick(nPos, 114, 45), " ")
#define R_2002COSTUMERIDENTIFICATION_COMPLEMENT_CM3CLI(A) put(nRec, 114, A :45.45)
!-----------------------------------------------------------
! FIELD : EMLADR 
#define S_2002COSTUMERIDENTIFICATION_COMPLEMENT_EMLADR peel(pick(nPos, 159, 50), " ")
#define R_2002COSTUMERIDENTIFICATION_COMPLEMENT_EMLADR(A) put(nRec, 159, A :50.50)
!-----------------------------------------------------------
! FIELD : CPICLI 
#define S_2002COSTUMERIDENTIFICATION_COMPLEMENT_CPICLI peel(pick(nPos, 209, 10), " ")
#define R_2002COSTUMERIDENTIFICATION_COMPLEMENT_CPICLI(A) put(nRec, 209, A :10.10)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_2002COSTUMERIDENTIFICATION_COMPLEMENT_DISEXC peel(pick(nPos, 219, 4), " ")
#define R_2002COSTUMERIDENTIFICATION_COMPLEMENT_DISEXC(A) put(nRec, 219, A :38.38)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX2004 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX2004_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX2004_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX2004_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX2004_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX2004_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX2004_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX2004_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX2004_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX2004_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX2004_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX2004_CODCLI peel(pick(nPos, 10, 14), " ")
#define R_GEEX2004_CODCLI(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : AD3CLI 
#define S_GEEX2004_AD3CLI peel(pick(nPos, 138, 38), " ")
#define R_GEEX2004_AD3CLI(A) put(nRec, 138, A :38.38)
!-----------------------------------------------------------

!===========================================================
! Line : 5000ORDERHEADER 
!===========================================================
! FIELD : CODEXC 
#define S_5000ORDERHEADER_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_5000ORDERHEADER_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_5000ORDERHEADER_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_5000ORDERHEADER_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_5000ORDERHEADER_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_5000ORDERHEADER_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_5000ORDERHEADER_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_5000ORDERHEADER_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_5000ORDERHEADER_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_5000ORDERHEADER_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_5000ORDERHEADER_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_5000ORDERHEADER_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_5000ORDERHEADER_CODACT peel(pick(nPos, 18, 3), " ")
#define R_5000ORDERHEADER_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_5000ORDERHEADER_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_5000ORDERHEADER_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_5000ORDERHEADER_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_5000ORDERHEADER_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : CODTLI 
#define S_5000ORDERHEADER_CODTLI peel(pick(nPos, 65, 3), " ")
#define R_5000ORDERHEADER_CODTLI(A) put(nRec, 65, A :3.3)
!-----------------------------------------------------------
! FIELD : DTILIV 
#define S_5000ORDERHEADER_DTILIV peel(pick(nPos, 68, 8), " ")
#define R_5000ORDERHEADER_DTILIV(A) put(nRec, 68, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEILIV 
#define S_5000ORDERHEADER_HEILIV peel(pick(nPos, 76, 4), " ")
#define R_5000ORDERHEADER_HEILIV(A) put(nRec, 76, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : CLILIV 
#define S_5000ORDERHEADER_CLILIV peel(pick(nPos, 80, 14), " ")
#define R_5000ORDERHEADER_CLILIV(A) put(nRec, 80, A :14.14)
!-----------------------------------------------------------
! FIELD : TYPLIV 
#define S_5000ORDERHEADER_TYPLIV peel(pick(nPos, 94, 1), " ")
#define R_5000ORDERHEADER_TYPLIV(A) put(nRec, 94, A :1.1)
!-----------------------------------------------------------
! FIELD : CODMOP 
#define S_5000ORDERHEADER_CODMOP peel(pick(nPos, 95, 3), " ")
#define R_5000ORDERHEADER_CODMOP(A) put(nRec, 95, A :3.3)
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_5000ORDERHEADER_CODTRA peel(pick(nPos, 98, 14), " ")
#define R_5000ORDERHEADER_CODTRA(A) put(nRec, 98, A :14.14)
!-----------------------------------------------------------
! FIELD : CODRGT 
#define S_5000ORDERHEADER_CODRGT peel(pick(nPos, 112, 3), " ")
#define R_5000ORDERHEADER_CODRGT(A) put(nRec, 112, A :3.3)
!-----------------------------------------------------------
! FIELD : TOULIV 
#define S_5000ORDERHEADER_TOULIV peel(pick(nPos, 115, 4), " ")
#define R_5000ORDERHEADER_TOULIV(A) put(nRec, 115, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : ORDLIV 
#define S_5000ORDERHEADER_ORDLIV peel(pick(nPos, 119, 4), " ")
#define R_5000ORDERHEADER_ORDLIV(A) put(nRec, 119, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : KAILIV 
#define S_5000ORDERHEADER_KAILIV peel(pick(nPos, 123, 3), " ")
#define R_5000ORDERHEADER_KAILIV(A) put(nRec, 123, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : MSGPRP1 
#define S_5000ORDERHEADER_MSGPRP1 peel(pick(nPos, 126, 30), " ")
#define R_5000ORDERHEADER_MSGPRP1(A) put(nRec, 126, A :30.30)
!-----------------------------------------------------------
! FIELD : MSGPRP2 
#define S_5000ORDERHEADER_MSGPRP2 peel(pick(nPos, 156, 30), " ")
#define R_5000ORDERHEADER_MSGPRP2(A) put(nRec, 156, A :30.30)
!-----------------------------------------------------------
! FIELD : MSGLIV1 
#define S_5000ORDERHEADER_MSGLIV1 peel(pick(nPos, 186, 30), " ")
#define R_5000ORDERHEADER_MSGLIV1(A) put(nRec, 186, A :30.30)
!-----------------------------------------------------------
! FIELD : MSGLIV2 
#define S_5000ORDERHEADER_MSGLIV2 peel(pick(nPos, 216, 30), " ")
#define R_5000ORDERHEADER_MSGLIV2(A) put(nRec, 216, A :30.30)
!-----------------------------------------------------------
! FIELD : GSTALC 
#define S_5000ORDERHEADER_GSTALC peel(pick(nPos, 246, 1), " ")
#define R_5000ORDERHEADER_GSTALC(A) put(nRec, 246, A :1.1)
!-----------------------------------------------------------
! FIELD : CODSIT 
#define S_5000ORDERHEADER_CODSIT peel(pick(nPos, 247, 3), " ")
#define R_5000ORDERHEADER_CODSIT(A) put(nRec, 247, A :3.3)
!-----------------------------------------------------------
! FIELD : IGLSIT 
#define S_5000ORDERHEADER_IGLSIT peel(pick(nPos, 250, 3), " ")
#define R_5000ORDERHEADER_IGLSIT(A) put(nRec, 250, build(number(A):R03.0))
!-----------------------------------------------------------
!===========================================================
! Line : 5001ORDERHEADER_COMPLEMENT 
!===========================================================
! FIELD : CODEXC 
#define S_5001ORDERHEADER_COMPLEMENT_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_5001ORDERHEADER_COMPLEMENT_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_5001ORDERHEADER_COMPLEMENT_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_5001ORDERHEADER_COMPLEMENT_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_5001ORDERHEADER_COMPLEMENT_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_5001ORDERHEADER_COMPLEMENT_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_5001ORDERHEADER_COMPLEMENT_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_5001ORDERHEADER_COMPLEMENT_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_5001ORDERHEADER_COMPLEMENT_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_5001ORDERHEADER_COMPLEMENT_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_5001ORDERHEADER_COMPLEMENT_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_5001ORDERHEADER_COMPLEMENT_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_5001ORDERHEADER_COMPLEMENT_CODACT peel(pick(nPos, 18, 3), " ")
#define R_5001ORDERHEADER_COMPLEMENT_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_5001ORDERHEADER_COMPLEMENT_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_5001ORDERHEADER_COMPLEMENT_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_5001ORDERHEADER_COMPLEMENT_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_5001ORDERHEADER_COMPLEMENT_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : TOPLIV 
#define S_5001ORDERHEADER_COMPLEMENT_TOPLIV peel(pick(nPos, 65, 1), " ")
#define R_5001ORDERHEADER_COMPLEMENT_TOPLIV(A) put(nRec, 65, A :1.1)
!-----------------------------------------------------------
! FIELD : TOPLIV1 
#define S_5001ORDERHEADER_COMPLEMENT_TOPLIV1 peel(pick(nPos, 66, 1), " ")
#define R_5001ORDERHEADER_COMPLEMENT_TOPLIV1(A) put(nRec, 66, A :1.1)
!-----------------------------------------------------------
! FIELD : TOPLIV2 
#define S_5001ORDERHEADER_COMPLEMENT_TOPLIV2 peel(pick(nPos, 67, 1), " ")
#define R_5001ORDERHEADER_COMPLEMENT_TOPLIV2(A) put(nRec, 67, A :1.1)
!-----------------------------------------------------------
! FIELD : TOPLIV3 
#define S_5001ORDERHEADER_COMPLEMENT_TOPLIV3 peel(pick(nPos, 68, 1), " ")
#define R_5001ORDERHEADER_COMPLEMENT_TOPLIV3(A) put(nRec, 68, A :1.1)
!-----------------------------------------------------------
! FIELD : TOPLIV5 
#define S_5001ORDERHEADER_COMPLEMENT_TOPLIV5 peel(pick(nPos, 69, 1), " ")
#define R_5001ORDERHEADER_COMPLEMENT_TOPLIV5(A) put(nRec, 69, A :1.1)
!-----------------------------------------------------------
! FIELD : DIPLIV 
#define S_5001ORDERHEADER_COMPLEMENT_DIPLIV peel(pick(nPos, 70, 50), " ")
#define R_5001ORDERHEADER_COMPLEMENT_DIPLIV(A) put(nRec, 70, A :50.50)
!-----------------------------------------------------------
! FIELD : DATEXP 
#define S_5001ORDERHEADER_COMPLEMENT_DATEXP peel(pick(nPos, 120, 8), " ")
#define R_5001ORDERHEADER_COMPLEMENT_DATEXP(A) put(nRec, 120, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXP 
#define S_5001ORDERHEADER_COMPLEMENT_HEUEXP peel(pick(nPos, 128, 4), " ")
#define R_5001ORDERHEADER_COMPLEMENT_HEUEXP(A) put(nRec, 128, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : LMNTCRB 
#define S_5001ORDERHEADER_COMPLEMENT_LMNTCRB peel(pick(nPos, 132, 14), " ")
#define R_5001ORDERHEADER_COMPLEMENT_LMNTCRB(A) put(nRec, 132, build(number(A):R014.0))
!-----------------------------------------------------------
! FIELD : REFCLI 
#define S_5001ORDERHEADER_COMPLEMENT_REFCLI peel(pick(nPos, 146, 30), " ")
#define R_5001ORDERHEADER_COMPLEMENT_REFCLI(A) put(nRec, 146, A :30.30)
!-----------------------------------------------------------
! FIELD : CRILIV 
#define S_5001ORDERHEADER_COMPLEMENT_CRILIV peel(pick(nPos, 176, 20), " ")
#define R_5001ORDERHEADER_COMPLEMENT_CRILIV(A) put(nRec, 176, A :20.20)
!-----------------------------------------------------------
! FIELD : PTYCLI 
#define S_5001ORDERHEADER_COMPLEMENT_PTYCLI peel(pick(nPos, 196, 3), " ")
#define R_5001ORDERHEADER_COMPLEMENT_PTYCLI(A) put(nRec, 196, A :3.3)
!-----------------------------------------------------------
! FIELD : CODLDP 
#define S_5001ORDERHEADER_COMPLEMENT_CODLDP peel(pick(nPos, 199, 3), " ")
#define R_5001ORDERHEADER_COMPLEMENT_CODLDP(A) put(nRec, 199, A :3.3)
!-----------------------------------------------------------
! FIELD : EDICLF 
#define S_5001ORDERHEADER_COMPLEMENT_EDICLF peel(pick(nPos, 202, 14), " ")
#define R_5001ORDERHEADER_COMPLEMENT_EDICLF(A) put(nRec, 202, A :14.14)
!-----------------------------------------------------------
! FIELD : EDICLI 
#define S_5001ORDERHEADER_COMPLEMENT_EDICLI peel(pick(nPos, 216, 14), " ")
#define R_5001ORDERHEADER_COMPLEMENT_EDICLI(A) put(nRec, 216, A :14.14)
!-----------------------------------------------------------
! FIELD : EDITRA 
#define S_5001ORDERHEADER_COMPLEMENT_EDITRA peel(pick(nPos, 230, 14), " ")
#define R_5001ORDERHEADER_COMPLEMENT_EDITRA(A) put(nRec, 230, A :14.14)
!-----------------------------------------------------------
! FIELD : DATCHT 
#define S_5001ORDERHEADER_COMPLEMENT_DATCHT peel(pick(nPos, 244, 8), " ")
#define R_5001ORDERHEADER_COMPLEMENT_DATCHT(A) put(nRec, 244, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUCHT 
#define S_5001ORDERHEADER_COMPLEMENT_HEUCHT peel(pick(nPos, 252, 4), " ")
#define R_5001ORDERHEADER_COMPLEMENT_HEUCHT(A) put(nRec, 252, build(number(A):R04.0))
!-----------------------------------------------------------


!===========================================================
! Line : GEEX5002 M50 : Ent�te commande � livrer (Facultatif)-M50: Header control to deliver (Optional)
! -
!===========================================================
! FIELD : CODEXC Code du mouvement d'�change-Code exchange movement
! Zone initialis�e � "50"-Zone set to "50"
#define S_GEEX5002_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5002_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC S�parateur entre code et sous-code (Valeur=.)-Separator between code and subcode (Value =.)
! Zone initialis�e � "."-Zone set to "."
#define S_GEEX5002_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5002_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC Sous-code du mouvement d'�change-Subcode exchange movement
! Zone initialis�e � "02"-Zone set to "02"
#define S_GEEX5002_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5002_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC Code traitement du mouvement-motion processing codes
! -
#define S_GEEX5002_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5002_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV Num�ro de la commande � livrer-Order Number to deliver
! N�cessaire si num�rotation impos�e-If necessary imposed dialing
#define S_GEEX5002_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5002_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV Sous-num�ro de la commande � livrer-Sub-order number for delivery
! -
#define S_GEEX5002_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5002_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT Code activit� logistique-Code logistics business
! -
#define S_GEEX5002_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5002_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI Code du client propri�taire du stock-Code of the client owns the stock
! -
#define S_GEEX5002_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5002_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV R�f�rence de la livraison-Number of delivery
! -
#define S_GEEX5002_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5002_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : NUMTOU Num�ro d'enregistrement d'un tour-Registration number of a turn
! Trait� en sp�cifique-Treated in specific
#define S_GEEX5002_NUMTOU peel(pick(nPos, 65, 8), " ")
#define R_GEEX5002_NUMTOU(A) put(nRec, 65, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATPTD Date de pr�paration au plus tard-Date of preparation for later
! -
#define S_GEEX5002_DATPTD peel(pick(nPos, 73, 8), " ")
#define R_GEEX5002_DATPTD(A) put(nRec, 73, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUPTD Heure de pr�paration au plus tard-Preparation time later
! -
#define S_GEEX5002_HEUPTD peel(pick(nPos, 81, 6), " ")
#define R_GEEX5002_HEUPTD(A) put(nRec, 81, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODAFI Code affiliation-Affiliate code
! -
#define S_GEEX5002_CODAFI peel(pick(nPos, 87, 10), " ")
#define R_GEEX5002_CODAFI(A) put(nRec, 87, A :10.10)
!-----------------------------------------------------------
! FIELD : CODDDO Code du donneur d'ordre-payer code
! -
#define S_GEEX5002_CODDDO peel(pick(nPos, 97, 14), " ")
#define R_GEEX5002_CODDDO(A) put(nRec, 97, A :14.14)
!-----------------------------------------------------------
! FIELD : SITPAL Site physique de pr�paration-physical site preparation
! Site physique de pr�paration-physical site preparation
#define S_GEEX5002_SITPAL peel(pick(nPos, 111, 3), " ")
#define R_GEEX5002_SITPAL(A) put(nRec, 111, A :3.3)
!-----------------------------------------------------------
! FIELD : CLIVIA Point de livraison interm�diaire / Point relais-Delivery point intermediate / Point Relay
! -
#define S_GEEX5002_CLIVIA peel(pick(nPos, 114, 14), " ")
#define R_GEEX5002_CLIVIA(A) put(nRec, 114, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXC Date d'int�gration/validation de la commande-Date of integration / validation of the order
! -
#define S_GEEX5002_DATEXC peel(pick(nPos, 128, 8), " ")
#define R_GEEX5002_DATEXC(A) put(nRec, 128, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXC Heure d'int�gration/validation de la commande-integration time / order validation
! -
#define S_GEEX5002_HEUEXC peel(pick(nPos, 136, 6), " ")
#define R_GEEX5002_HEUEXC(A) put(nRec, 136, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODCLV Condition de livraison-Delivery condition
! -
#define S_GEEX5002_CODCLV peel(pick(nPos, 142, 3), " ")
#define R_GEEX5002_CODCLV(A) put(nRec, 142, A :3.3)
!-----------------------------------------------------------
! FIELD : CODOWN Code d�tenteur-holder code
! -
#define S_GEEX5002_CODOWN peel(pick(nPos, 145, 14), " ")
#define R_GEEX5002_CODOWN(A) put(nRec, 145, A :14.14)
!-----------------------------------------------------------
! FIELD : CODOFT Code de l'offre du transporteur-Offer Code carrier
! -
#define S_GEEX5002_CODOFT peel(pick(nPos, 159, 14), " ")
#define R_GEEX5002_CODOFT(A) put(nRec, 159, A :14.14)
!-----------------------------------------------------------
! FIELD : DISEXC Zone disponible pour de futures utilisations-Area available for future use
! -
#define S_GEEX5002_DISEXC peel(pick(nPos, 173, 84), " ")
#define R_GEEX5002_DISEXC(A) put(nRec, 173, A :84.84)
!�����������������������������





!===========================================================
! Line : GEEX5003 M50 : Ent�te commande Inter-sites (Facultatif)-M50: Heading control Inter-sites (Optional)
! -
!===========================================================
! FIELD : CODEXC Code du mouvement d'�change-Code exchange movement
! Zone initialis�e � "50"-Zone set to "50"
#define S_GEEX5003_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5003_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC S�parateur entre code et sous-code (Valeur=.)-Separator between code and subcode (Value =.)
! Zone initialis�e � "."-Zone set to "."
#define S_GEEX5003_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5003_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC Sous-code du mouvement d'�change-Subcode exchange movement
! Zone initialis�e � "03"-Zone set to "03"
#define S_GEEX5003_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5003_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC Code traitement du mouvement-motion processing codes
! -
#define S_GEEX5003_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5003_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV Num�ro de la commande � livrer-Order Number to deliver
! N�cessaire si num�rotation impos�e-If necessary imposed dialing
#define S_GEEX5003_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5003_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV Sous-num�ro de la commande � livrer-Sub-order number for delivery
! -
#define S_GEEX5003_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5003_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT Code activit� logistique-Code logistics business
! -
#define S_GEEX5003_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5003_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI Code du client propri�taire du stock-Code of the client owns the stock
! -
#define S_GEEX5003_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5003_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV R�f�rence de la livraison-Number of delivery
! -
#define S_GEEX5003_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5003_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : CODSITC Code du site client (destinataire)-Code the client site (recipient)
! -
#define S_GEEX5003_CODSITC peel(pick(nPos, 65, 3), " ")
#define R_GEEX5003_CODSITC(A) put(nRec, 65, A :3.3)
!-----------------------------------------------------------
! FIELD : CODFOU Code du fournisseur-Supplier code
! -
#define S_GEEX5003_CODFOU peel(pick(nPos, 68, 14), " ")
#define R_GEEX5003_CODFOU(A) put(nRec, 68, A :14.14)
!-----------------------------------------------------------
! FIELD : CODLDR Code du lieu de r�ception/exp�dition-Code of the place of reception / expedition
! -
#define S_GEEX5003_CODLDR peel(pick(nPos, 82, 3), " ")
#define R_GEEX5003_CODLDR(A) put(nRec, 82, A :3.3)
!-----------------------------------------------------------
! FIELD : MSGAPV Message d'approvisionnement-Message Supply
! -
#define S_GEEX5003_MSGAPV peel(pick(nPos, 85, 30), " ")
#define R_GEEX5003_MSGAPV(A) put(nRec, 85, A :30.30)
!-----------------------------------------------------------
! FIELD : CODTRE Code type de r�ception-Code type of reception
! -
#define S_GEEX5003_CODTRE peel(pick(nPos, 115, 3), " ")
#define R_GEEX5003_CODTRE(A) put(nRec, 115, A :3.3)
!-----------------------------------------------------------
! FIELD : DATLIV Date de livraison d'une commande-Date of delivery of an order
! -
#define S_GEEX5003_DATLIV peel(pick(nPos, 118, 8), " ")
#define R_GEEX5003_DATLIV(A) put(nRec, 118, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATPRP Date de pr�paration de la commande-Date of preparation of the order
! -
#define S_GEEX5003_DATPRP peel(pick(nPos, 126, 8), " ")
#define R_GEEX5003_DATPRP(A) put(nRec, 126, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DISEXC Zone disponible pour de futures utilisations-Area available for future use
! -
#define S_GEEX5003_DISEXC peel(pick(nPos, 134, 123), " ")
#define R_GEEX5003_DISEXC(A) put(nRec, 134, A :123.123)
!-----------------------------------------------------------



!===========================================================
! Line : GEEX5005 M50 : Rubriques associ�es commande (Facultatif)-M50: Control Related Topics (Optional)
! -
!===========================================================
! FIELD : CODEXC Code du mouvement d'�change-Code exchange movement
! Zone initialis�e � "50"-Zone set to "50"
#define S_GEEX5005_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX5005_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC S�parateur entre code et sous-code-Separator between code and subcode
! Zone initialis�e � "."-Zone set to "."
#define S_GEEX5005_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX5005_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC Sous-code du mouvement d'�change-Subcode exchange movement
! Zone initialis�e � "05"-Zone set to "05"
#define S_GEEX5005_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX5005_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC Code traitement du mouvement-motion processing codes
! -
#define S_GEEX5005_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX5005_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV Num�ro de la commande � livrer-Order Number to deliver
! N�cessaire si num�rotation impos�e-If necessary imposed dialing
#define S_GEEX5005_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX5005_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV Sous-num�ro de la commande � livrer-Sub-order number for delivery
! -
#define S_GEEX5005_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX5005_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT Code activit� logistique-Code logistics business
! Doit �tre pr�alablement cr��e en "F1"-Must first be created in "F1"
#define S_GEEX5005_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX5005_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI Code du client (Command� par)-Customer code (Commissioned by)
! Doit �tre pr�alablement cr�� en "F6"-Must first be created in "F6"
#define S_GEEX5005_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_GEEX5005_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV R�f�rence de la livraison-Number of delivery
! -
#define S_GEEX5005_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_GEEX5005_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : CODRUB Code de la rubrique-Code of item
! -
#define S_GEEX5005_CODRUB peel(pick(nPos, 65, 16), " ")
#define R_GEEX5005_CODRUB(A) put(nRec, 65, A :16.16)
!-----------------------------------------------------------
! FIELD : VALRUB Valeur de la rubrique-Value in field
! -
#define S_GEEX5005_VALRUB peel(pick(nPos, 81, 140), " ")
#define R_GEEX5005_VALRUB(A) put(nRec, 81, A :140.140)
!-----------------------------------------------------------
! FIELD : DISEXC Zone disponible pour de futures utilisations-Area available for future use
! -
#define S_GEEX5005_DISEXC peel(pick(nPos, 221, 36), " ")
#define R_GEEX5005_DISEXC(A) put(nRec, 221, A :36.36)
!-----------------------------------------------------------


!===========================================================
! Line : 5010 
!===========================================================
! FIELD : CODEXC 
#define S_5010_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_5010_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_5010_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_5010_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_5010_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_5010_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_5010_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_5010_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_5010_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_5010_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_5010_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_5010_SNULIV(A) put(nRec, 15, A :3.3)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_5010_CODACT peel(pick(nPos, 18, 3), " ")
#define R_5010_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_5010_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_5010_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_5010_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_5010_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : NOMCLI 
#define S_5010_NOMCLI peel(pick(nPos, 65, 30), " ")
#define R_5010_NOMCLI(A) put(nRec, 65, A :30.30)
!-----------------------------------------------------------
! FIELD : AD1CLI 
#define S_5010_AD1CLI peel(pick(nPos, 95, 30), " ")
#define R_5010_AD1CLI(A) put(nRec, 95, A :30.30)
!-----------------------------------------------------------
! FIELD : AD2CLI 
#define S_5010_AD2CLI peel(pick(nPos, 125, 30), " ")
#define R_5010_AD2CLI(A) put(nRec, 125, A :30.30)
!-----------------------------------------------------------
! FIELD : CPOCLI 
#define S_5010_CPOCLI peel(pick(nPos, 155, 5), " ")
#define R_5010_CPOCLI(A) put(nRec, 155, A :5.5)
!-----------------------------------------------------------
! FIELD : VILCLI 
#define S_5010_VILCLI peel(pick(nPos, 160, 26), " ")
#define R_5010_VILCLI(A) put(nRec, 160, A :26.26)
!-----------------------------------------------------------
! FIELD : TELCLI 
#define S_5010_TELCLI peel(pick(nPos, 186, 20), " ")
#define R_5010_TELCLI(A) put(nRec, 186, A :20.20)
!-----------------------------------------------------------
! FIELD : PAYCLI 
#define S_5010_PAYCLI peel(pick(nPos, 206, 3), " ")
#define R_5010_PAYCLI(A) put(nRec, 206, A :3.3)
!-----------------------------------------------------------
! FIELD : CATCLI 
#define S_5010_CATCLI peel(pick(nPos, 209, 3), " ")
#define R_5010_CATCLI(A) put(nRec, 209, A :3.3)
!-----------------------------------------------------------
! FIELD : CPICLI 
#define S_5010_CPICLI peel(pick(nPos, 212, 10), " ")
#define R_5010_CPICLI(A) put(nRec, 212, A :10.10)
!-----------------------------------------------------------
! FIELD : EDICLI 
#define S_5010_EDICLI peel(pick(nPos, 222, 14), " ")
#define R_5010_EDICLI(A) put(nRec, 222, A :14.14)
!-----------------------------------------------------------
! FIELD : DIEXC 
#define S_5010_DIEXC peel(pick(nPos, 236, 21), " ")
#define R_5010_DIEXC(A) put(nRec, 236, build(number(A):R021.0))
!-----------------------------------------------------------
!===========================================================
! Line : 5011 
!===========================================================
! FIELD : CODEXC 
#define S_5011_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_5011_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_5011_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_5011_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_5011_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_5011_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_5011_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_5011_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_5011_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_5011_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_5011_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_5011_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_5011_CODACT peel(pick(nPos, 18, 3), " ")
#define R_5011_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_5011_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_5011_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_5011_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_5011_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : EMLADR 
#define S_5011_EMLADR peel(pick(nPos, 65, 50), " ")
#define R_5011_EMLADR(A) put(nRec, 65, A :50.50)
!-----------------------------------------------------------
! FIELD : AD1CLI 
#define S_5011_AD1CLI peel(pick(nPos, 115, 38), " ")
#define R_5011_AD1CLI(A) put(nRec, 115, A :38.38)
!-----------------------------------------------------------
! FIELD : AD2CLI 
#define S_5011_AD2CLI peel(pick(nPos, 153, 38), " ")
#define R_5011_AD2CLI(A) put(nRec, 153, A :38.38)
!-----------------------------------------------------------
! FIELD : AD3CLI 
#define S_5011_AD3CLI peel(pick(nPos, 191, 38), " ")
#define R_5011_AD3CLI(A) put(nRec, 191, A :38.38)
!-----------------------------------------------------------
!===========================================================
! Line : 5020ORDERLINE 
!===========================================================
! FIELD : CODEXC 
#define S_5020ORDERLINE_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_5020ORDERLINE_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_5020ORDERLINE_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_5020ORDERLINE_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_5020ORDERLINE_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_5020ORDERLINE_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_5020ORDERLINE_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_5020ORDERLINE_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_5020ORDERLINE_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_5020ORDERLINE_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_5020ORDERLINE_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_5020ORDERLINE_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_5020ORDERLINE_CODACT peel(pick(nPos, 18, 3), " ")
#define R_5020ORDERLINE_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_5020ORDERLINE_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_5020ORDERLINE_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_5020ORDERLINE_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_5020ORDERLINE_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_5020ORDERLINE_NLILIV peel(pick(nPos, 65, 5), " ")
#define R_5020ORDERLINE_NLILIV(A) put(nRec, 65, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_5020ORDERLINE_CODPRO peel(pick(nPos, 70, 17), " ")
#define R_5020ORDERLINE_CODPRO(A) put(nRec, 70, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_5020ORDERLINE_VALPRO peel(pick(nPos, 87, 2), " ")
#define R_5020ORDERLINE_VALPRO(A) put(nRec, 87, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : METRPL 
#define S_5020ORDERLINE_METRPL peel(pick(nPos, 89, 1), " ")
#define R_5020ORDERLINE_METRPL(A) put(nRec, 89, A :1.1)
!-----------------------------------------------------------
! FIELD : CODRPL 
#define S_5020ORDERLINE_CODRPL peel(pick(nPos, 90, 17), " ")
#define R_5020ORDERLINE_CODRPL(A) put(nRec, 90, A :17.17)
!-----------------------------------------------------------
! FIELD : VALRPL 
#define S_5020ORDERLINE_VALRPL peel(pick(nPos, 107, 2), " ")
#define R_5020ORDERLINE_VALRPL(A) put(nRec, 107, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODPRN 
#define S_5020ORDERLINE_CODPRN peel(pick(nPos, 109, 17), " ")
#define R_5020ORDERLINE_CODPRN(A) put(nRec, 109, A :17.17)
!-----------------------------------------------------------
! FIELD : UVCCDE 
#define S_5020ORDERLINE_UVCCDE peel(pick(nPos, 126, 9), " ")
#define R_5020ORDERLINE_UVCCDE(A) put(nRec, 126, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UNICDE 
#define S_5020ORDERLINE_UNICDE peel(pick(nPos, 135, 3), " ")
#define R_5020ORDERLINE_UNICDE(A) put(nRec, 135, A :3.3)
!-----------------------------------------------------------
! FIELD : TYPSTK 
#define S_5020ORDERLINE_TYPSTK peel(pick(nPos, 138, 1), " ")
#define R_5020ORDERLINE_TYPSTK(A) put(nRec, 138, A :1.1)
!-----------------------------------------------------------
! FIELD : AIGPRI 
#define S_5020ORDERLINE_AIGPRI peel(pick(nPos, 139, 1), " ")
#define R_5020ORDERLINE_AIGPRI(A) put(nRec, 139, A :1.1)
!-----------------------------------------------------------
! FIELD : PRILIV 
#define S_5020ORDERLINE_PRILIV peel(pick(nPos, 140, 8), " ")
#define R_5020ORDERLINE_PRILIV(A) put(nRec, 140, build(number(A):R08))
!-----------------------------------------------------------
! FIELD : TYPOPE 
#define S_5020ORDERLINE_TYPOPE peel(pick(nPos, 148, 1), " ")
#define R_5020ORDERLINE_TYPOPE(A) put(nRec, 148, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMOPE 
#define S_5020ORDERLINE_NUMOPE peel(pick(nPos, 149, 6), " ")
#define R_5020ORDERLINE_NUMOPE(A) put(nRec, 149, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : SPCPRO 
#define S_5020ORDERLINE_SPCPRO peel(pick(nPos, 155, 4), " ")
#define R_5020ORDERLINE_SPCPRO(A) put(nRec, 155, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_5020ORDERLINE_PCBPRO peel(pick(nPos, 159, 5), " ")
#define R_5020ORDERLINE_PCBPRO(A) put(nRec, 159, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_5020ORDERLINE_CODLOT peel(pick(nPos, 164, 20), " ")
#define R_5020ORDERLINE_CODLOT(A) put(nRec, 164, A :20.20)
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_5020ORDERLINE_DATFVI peel(pick(nPos, 184, 8), " ")
#define R_5020ORDERLINE_DATFVI(A) put(nRec, 184, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : MSGLIV 
#define S_5020ORDERLINE_MSGLIV peel(pick(nPos, 192, 30), " ")
#define R_5020ORDERLINE_MSGLIV(A) put(nRec, 192, A :30.30)
!-----------------------------------------------------------
! FIELD : UVCINI 
#define S_5020ORDERLINE_UVCINI peel(pick(nPos, 222, 9), " ")
#define R_5020ORDERLINE_UVCINI(A) put(nRec, 222, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : QTECDE 
#define S_5020ORDERLINE_QTECDE peel(pick(nPos, 231, 9), " ")
#define R_5020ORDERLINE_QTECDE(A) put(nRec, 231, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CODACL 
#define S_5020ORDERLINE_CODACL peel(pick(nPos, 240, 3), " ")
#define R_5020ORDERLINE_CODACL(A) put(nRec, 240, A :3.3)
!-----------------------------------------------------------
! FIELD : IGLSIT 
#define S_5020ORDERLINE_IGLSIT peel(pick(nPos, 243, 3), " ")
#define R_5020ORDERLINE_IGLSIT(A) put(nRec, 243, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : DATFVI2 
#define S_5020ORDERLINE_DATFVI2 peel(pick(nPos, 246, 3), " ")
#define R_5020ORDERLINE_DATFVI2(A) put(nRec, 246, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : IMMFRG 
#define S_5020ORDERLINE_IMMFRG peel(pick(nPos, 254, 3), " ")
#define R_5020ORDERLINE_IMMFRG(A) put(nRec, 254, A :3.3)
!-----------------------------------------------------------
! FIELD : AD3CLI 
#define S_5020ORDERLINE_AD3CLI peel(pick(nPos, 254, 3), " ")
#define R_5020ORDERLINE_AD3CLI(A) put(nRec, 254, A :3.3)
!===========================================================
! Line : 5021ORDERLINE_ADDINFO 
!===========================================================
! FIELD : CODEXC 
#define S_5021ORDERLINE_ADDINFO_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_5021ORDERLINE_ADDINFO_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_5021ORDERLINE_ADDINFO_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_5021ORDERLINE_ADDINFO_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_5021ORDERLINE_ADDINFO_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_5021ORDERLINE_ADDINFO_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_5021ORDERLINE_ADDINFO_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_5021ORDERLINE_ADDINFO_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_5021ORDERLINE_ADDINFO_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_5021ORDERLINE_ADDINFO_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_5021ORDERLINE_ADDINFO_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_5021ORDERLINE_ADDINFO_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_5021ORDERLINE_ADDINFO_CODACT peel(pick(nPos, 18, 3), " ")
#define R_5021ORDERLINE_ADDINFO_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_5021ORDERLINE_ADDINFO_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_5021ORDERLINE_ADDINFO_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_5021ORDERLINE_ADDINFO_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_5021ORDERLINE_ADDINFO_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_5021ORDERLINE_ADDINFO_NLILIV peel(pick(nPos, 65, 5), " ")
#define R_5021ORDERLINE_ADDINFO_NLILIV(A) put(nRec, 65, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : TOPLIV1 
#define S_5021ORDERLINE_ADDINFO_TOPLIV1 peel(pick(nPos, 70, 1), " ")
#define R_5021ORDERLINE_ADDINFO_TOPLIV1(A) put(nRec, 70, A :1.1)
!-----------------------------------------------------------
! FIELD : TOPLIV2 
#define S_5021ORDERLINE_ADDINFO_TOPLIV2 peel(pick(nPos, 71, 1), " ")
#define R_5021ORDERLINE_ADDINFO_TOPLIV2(A) put(nRec, 71, A :1.1)
!-----------------------------------------------------------
! FIELD : TOPLIV3 
#define S_5021ORDERLINE_ADDINFO_TOPLIV3 peel(pick(nPos, 72, 1), " ")
#define R_5021ORDERLINE_ADDINFO_TOPLIV3(A) put(nRec, 72, A :1.1)
!-----------------------------------------------------------
! FIELD : TOPLIV4 
#define S_5021ORDERLINE_ADDINFO_TOPLIV4 peel(pick(nPos, 73, 1), " ")
#define R_5021ORDERLINE_ADDINFO_TOPLIV4(A) put(nRec, 73, A :1.1)
!-----------------------------------------------------------
! FIELD : TOPLIV5 
#define S_5021ORDERLINE_ADDINFO_TOPLIV5 peel(pick(nPos, 74, 1), " ")
#define R_5021ORDERLINE_ADDINFO_TOPLIV5(A) put(nRec, 74, A :1.1)
!-----------------------------------------------------------
! FIELD : DIPLIV 
#define S_5021ORDERLINE_ADDINFO_DIPLIV peel(pick(nPos, 75, 50), " ")
#define R_5021ORDERLINE_ADDINFO_DIPLIV(A) put(nRec, 75, A :50.50)
!-----------------------------------------------------------
! FIELD : DS1PRO 
#define S_5021ORDERLINE_ADDINFO_DS1PRO peel(pick(nPos, 125, 30), " ")
#define R_5021ORDERLINE_ADDINFO_DS1PRO(A) put(nRec, 125, A :30.30)
!-----------------------------------------------------------
! FIELD : DS2PRO 
#define S_5021ORDERLINE_ADDINFO_DS2PRO peel(pick(nPos, 155, 30), " ")
#define R_5021ORDERLINE_ADDINFO_DS2PRO(A) put(nRec, 155, A :30.30)
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_5021ORDERLINE_ADDINFO_REFREC peel(pick(nPos, 185, 30), " ")
#define R_5021ORDERLINE_ADDINFO_REFREC(A) put(nRec, 185, build(number(A):R030.0))
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_5021ORDERLINE_ADDINFO_EDIPRO peel(pick(nPos, 215, 17), " ")
#define R_5021ORDERLINE_ADDINFO_EDIPRO(A) put(nRec, 215, A :17.17)
!-----------------------------------------------------------
! FIELD : CODOPE 
#define S_5021ORDERLINE_ADDINFO_CODOPE peel(pick(nPos, 232, 14), " ")
#define R_5021ORDERLINE_ADDINFO_CODOPE(A) put(nRec, 232, build(number(A):R014.0))
!-----------------------------------------------------------




!===========================================================
! Line : 5025ORDERLINE_ADDINFO 
!===========================================================
! FIELD : CODEXC 
#define S_5025ORDERLINE_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_5025ORDERLINE_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_5025ORDERLINE_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_5025ORDERLINE_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_5025ORDERLINE_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_5025ORDERLINE_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_5025ORDERLINE_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_5025ORDERLINE_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_5025ORDERLINE_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_5025ORDERLINE_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_5025ORDERLINE_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_5025ORDERLINE_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_5025ORDERLINE_CODACT peel(pick(nPos, 18, 3), " ")
#define R_5025ORDERLINE_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_5025ORDERLINE_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_5025ORDERLINE_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_5025ORDERLINE_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_5025ORDERLINE_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_5025ORDERLINE_NLILIV peel(pick(nPos, 65, 5), " ")
#define R_5025ORDERLINE_NLILIV(A) put(nRec, 65, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_5025ORDERLINE_CODRUB peel(pick(nPos, 71, 4), " ")
#define R_5025ORDERLINE_CODRUB(A) put(nRec, 71, A :4.4)
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_5025ORDERLINE_VALRUB peel(pick(nPos, 75, 35), " ")
#define R_5025ORDERLINE_VALRUB(A) put(nRec, 75, A :35.35)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_5025ORDERLINE_CODPAL peel(pick(nPos, 148, 18), " ")
#define R_5025ORDERLINE_CODPAL(A) put(nRec, 148, A :18.18)
!===========================================================
! Line : 5080 
!===========================================================
! FIELD : CODEXC 
#define S_5080_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_5080_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_5080_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_5080_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_5080_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_5080_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_5080_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_5080_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_5080_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_5080_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_5080_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_5080_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_5080_CODACT peel(pick(nPos, 18, 3), " ")
#define R_5080_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_5080_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_5080_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_5080_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_5080_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : SEQTXL 
#define S_5080_SEQTXL peel(pick(nPos, 65, 4), " ")
#define R_5080_SEQTXL(A) put(nRec, 65, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : LIBTXL1
#define S_5080_LIBTXL1 peel(pick(nPos, 69, 60), " ")
#define R_5080_LIBTXL1(A) put(nRec, 69, A :60.60)
!-----------------------------------------------------------
! FIELD : LIBTXL2
#define S_5080_LIBTXL2 peel(pick(nPos, 129, 60), " ")
#define R_5080_LIBTXL2(A) put(nRec, 129, A :60.60)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_5080_DISEXC peel(pick(nPos, 189, 68), " ")
#define R_5080_DISEXC(A) put(nRec, 189, A :68.68)
!-----------------------------------------------------------


!===========================================================
! Line : 5099ORDERFOOTER 
!===========================================================
! FIELD : CODEXC 
#define S_5099ORDERFOOTER_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_5099ORDERFOOTER_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_5099ORDERFOOTER_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_5099ORDERFOOTER_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_5099ORDERFOOTER_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_5099ORDERFOOTER_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_5099ORDERFOOTER_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_5099ORDERFOOTER_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_5099ORDERFOOTER_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_5099ORDERFOOTER_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_5099ORDERFOOTER_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_5099ORDERFOOTER_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_5099ORDERFOOTER_CODACT peel(pick(nPos, 18, 3), " ")
#define R_5099ORDERFOOTER_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_5099ORDERFOOTER_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_5099ORDERFOOTER_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_5099ORDERFOOTER_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_5099ORDERFOOTER_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : CUMLIG 
#define S_5099ORDERFOOTER_CUMLIG peel(pick(nPos, 65, 4), " ")
#define R_5099ORDERFOOTER_CUMLIG(A) put(nRec, 65, build(number(A):R04.0))
!-----------------------------------------------------------
!===========================================================
! Line : 9900FILEFOOTER 
!===========================================================
! FIELD : CODEXC 
#define S_9900FILEFOOTER_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_9900FILEFOOTER_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_9900FILEFOOTER_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_9900FILEFOOTER_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_9900FILEFOOTER_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_9900FILEFOOTER_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_9900FILEFOOTER_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_9900FILEFOOTER_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : EMTEXC 
#define S_9900FILEFOOTER_EMTEXC peel(pick(nPos, 7, 14), " ")
#define R_9900FILEFOOTER_EMTEXC(A) put(nRec, 7, A :14.14)
!-----------------------------------------------------------
! FIELD : RCTEXC 
#define S_9900FILEFOOTER_RCTEXC peel(pick(nPos, 21, 14), " ")
#define R_9900FILEFOOTER_RCTEXC(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXC 
#define S_9900FILEFOOTER_DATEXC peel(pick(nPos, 35, 8), " ")
#define R_9900FILEFOOTER_DATEXC(A) put(nRec, 35, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_9900FILEFOOTER_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_9900FILEFOOTER_HEUEXC(A) put(nRec, 43, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : NUMEXC 
#define S_9900FILEFOOTER_NUMEXC peel(pick(nPos, 49, 7), " ")
#define R_9900FILEFOOTER_NUMEXC(A) put(nRec, 49, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : CPTEXC 
#define S_9900FILEFOOTER_CPTEXC peel(pick(nPos, 56, 8), " ")
#define R_9900FILEFOOTER_CPTEXC(A) put(nRec, 56, build(number(A):R08.0))
!-----------------------------------------------------------


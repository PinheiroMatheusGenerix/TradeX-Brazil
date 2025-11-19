! File GEEXM20 : 
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
! Line : GEEX2000 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX2000_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX2000_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX2000_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX2000_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX2000_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX2000_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX2000_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX2000_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX2000_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX2000_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX2000_CODCLI peel(pick(nPos, 10, 14), " ")
#define R_GEEX2000_CODCLI(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : TYPCLI 
#define S_GEEX2000_TYPCLI peel(pick(nPos, 24, 1), " ")
#define R_GEEX2000_TYPCLI(A) put(nRec, 24, A :1.1)
!-----------------------------------------------------------
! FIELD : CATCLI 
#define S_GEEX2000_CATCLI peel(pick(nPos, 25, 3), " ")
#define R_GEEX2000_CATCLI(A) put(nRec, 25, A :3.3)
!-----------------------------------------------------------
! FIELD : CLILIV 
#define S_GEEX2000_CLILIV peel(pick(nPos, 28, 14), " ")
#define R_GEEX2000_CLILIV(A) put(nRec, 28, A :14.14)
!-----------------------------------------------------------
! FIELD : EDICLI 
#define S_GEEX2000_EDICLI peel(pick(nPos, 42, 14), " ")
#define R_GEEX2000_EDICLI(A) put(nRec, 42, A :14.14)
!-----------------------------------------------------------
! FIELD : NOMCLI 
#define S_GEEX2000_NOMCLI peel(pick(nPos, 56, 30), " ")
#define R_GEEX2000_NOMCLI(A) put(nRec, 56, A :30.30)
!-----------------------------------------------------------
! FIELD : AD1CLI 
#define S_GEEX2000_AD1CLI peel(pick(nPos, 86, 30), " ")
#define R_GEEX2000_AD1CLI(A) put(nRec, 86, A :30.30)
!-----------------------------------------------------------
! FIELD : AD2CLI 
#define S_GEEX2000_AD2CLI peel(pick(nPos, 116, 30), " ")
#define R_GEEX2000_AD2CLI(A) put(nRec, 116, A :30.30)
!-----------------------------------------------------------
! FIELD : CPOCLI 
#define S_GEEX2000_CPOCLI peel(pick(nPos, 146, 5), " ")
#define R_GEEX2000_CPOCLI(A) put(nRec, 146, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : VILCLI 
#define S_GEEX2000_VILCLI peel(pick(nPos, 151, 26), " ")
#define R_GEEX2000_VILCLI(A) put(nRec, 151, A :26.26)
!-----------------------------------------------------------
! FIELD : PAYCLI 
#define S_GEEX2000_PAYCLI peel(pick(nPos, 177, 3), " ")
#define R_GEEX2000_PAYCLI(A) put(nRec, 177, A :3.3)
!-----------------------------------------------------------
! FIELD : TELCLI 
#define S_GEEX2000_TELCLI peel(pick(nPos, 180, 20), " ")
#define R_GEEX2000_TELCLI(A) put(nRec, 180, A :20.20)
!-----------------------------------------------------------
! FIELD : FAXCLI 
#define S_GEEX2000_FAXCLI peel(pick(nPos, 200, 20), " ")
#define R_GEEX2000_FAXCLI(A) put(nRec, 200, A :20.20)
!-----------------------------------------------------------
! FIELD : TLXCLI 
#define S_GEEX2000_TLXCLI peel(pick(nPos, 220, 15), " ")
#define R_GEEX2000_TLXCLI(A) put(nRec, 220, A :15.15)
!-----------------------------------------------------------
! FIELD : CODLGE 
#define S_GEEX2000_CODLGE peel(pick(nPos, 235, 3), " ")
#define R_GEEX2000_CODLGE(A) put(nRec, 235, A :3.3)
!-----------------------------------------------------------
! FIELD : CODDEV 
#define S_GEEX2000_CODDEV peel(pick(nPos, 238, 3), " ")
#define R_GEEX2000_CODDEV(A) put(nRec, 238, A :3.3)
!-----------------------------------------------------------
! FIELD : IGLSIT 
#define S_GEEX2000_IGLSIT peel(pick(nPos, 241, 3), " ")
#define R_GEEX2000_IGLSIT(A) put(nRec, 241, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : PTYCLI 
#define S_GEEX2000_PTYCLI peel(pick(nPos, 244, 3), " ")
#define R_GEEX2000_PTYCLI(A) put(nRec, 244, A :3.3)
!-----------------------------------------------------------
! FIELD : ETACLI 
#define S_GEEX2000_ETACLI peel(pick(nPos, 247, 2), " ")
#define R_GEEX2000_ETACLI(A) put(nRec, 247, A :2.2)
!-----------------------------------------------------------
! FIELD : INDADR 
#define S_GEEX2000_INDADR peel(pick(nPos, 249, 1), " ")
#define R_GEEX2000_INDADR(A) put(nRec, 249, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX2000_DISEXC peel(pick(nPos, 250, 7), " ")
#define R_GEEX2000_DISEXC(A) put(nRec, 250, A :7.7)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX2001 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX2001_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX2001_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX2001_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX2001_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX2001_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX2001_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX2001_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX2001_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX2001_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX2001_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX2001_CODCLI peel(pick(nPos, 10, 14), " ")
#define R_GEEX2001_CODCLI(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : RSPCLI 
#define S_GEEX2001_RSPCLI peel(pick(nPos, 24, 30), " ")
#define R_GEEX2001_RSPCLI(A) put(nRec, 24, A :30.30)
!-----------------------------------------------------------
! FIELD : CODMOP 
#define S_GEEX2001_CODMOP peel(pick(nPos, 54, 3), " ")
#define R_GEEX2001_CODMOP(A) put(nRec, 54, A :3.3)
!-----------------------------------------------------------
! FIELD : CODRGT 
#define S_GEEX2001_CODRGT peel(pick(nPos, 57, 3), " ")
#define R_GEEX2001_CODRGT(A) put(nRec, 57, A :3.3)
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_GEEX2001_CODTRA peel(pick(nPos, 60, 14), " ")
#define R_GEEX2001_CODTRA(A) put(nRec, 60, A :14.14)
!-----------------------------------------------------------
! FIELD : TOULIV 
#define S_GEEX2001_TOULIV peel(pick(nPos, 74, 28), " ")
#define R_GEEX2001_TOULIV(A) put(nRec, 74, build(number(A):R028.0))
!-----------------------------------------------------------
! FIELD : ORDLIV 
#define S_GEEX2001_ORDLIV peel(pick(nPos, 102, 28), " ")
#define R_GEEX2001_ORDLIV(A) put(nRec, 102, build(number(A):R028.0))
!-----------------------------------------------------------
! FIELD : KAILIV 
#define S_GEEX2001_KAILIV peel(pick(nPos, 130, 21), " ")
#define R_GEEX2001_KAILIV(A) put(nRec, 130, build(number(A):R021.0))
!-----------------------------------------------------------
! FIELD : GSTALC 
#define S_GEEX2001_GSTALC peel(pick(nPos, 151, 1), " ")
#define R_GEEX2001_GSTALC(A) put(nRec, 151, A :1.1)
!-----------------------------------------------------------
! FIELD : PTYDES 
#define S_GEEX2001_PTYDES peel(pick(nPos, 152, 2), " ")
#define R_GEEX2001_PTYDES(A) put(nRec, 152, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : NUMACS 
#define S_GEEX2001_NUMACS peel(pick(nPos, 154, 20), " ")
#define R_GEEX2001_NUMACS(A) put(nRec, 154, A :20.20)
!-----------------------------------------------------------
! FIELD : CPICLI 
#define S_GEEX2001_CPICLI peel(pick(nPos, 174, 9), " ")
#define R_GEEX2001_CPICLI(A) put(nRec, 174, A :9.9)
!-----------------------------------------------------------
! FIELD : TVACCE 
#define S_GEEX2001_TVACCE peel(pick(nPos, 183, 20), " ")
#define R_GEEX2001_TVACCE(A) put(nRec, 183, A :20.20)
!-----------------------------------------------------------
! FIELD : IDEALC 
#define S_GEEX2001_IDEALC peel(pick(nPos, 203, 20), " ")
#define R_GEEX2001_IDEALC(A) put(nRec, 203, A :20.20)
!-----------------------------------------------------------
! FIELD : CTRPRP 
#define S_GEEX2001_CTRPRP peel(pick(nPos, 223, 1), " ")
#define R_GEEX2001_CTRPRP(A) put(nRec, 223, A :1.1)
!-----------------------------------------------------------
! FIELD : CLIDAE 
#define S_GEEX2001_CLIDAE peel(pick(nPos, 224, 1), " ")
#define R_GEEX2001_CLIDAE(A) put(nRec, 224, A :1.1)
!-----------------------------------------------------------
! FIELD : TYPDES 
#define S_GEEX2001_TYPDES peel(pick(nPos, 225, 1), " ")
#define R_GEEX2001_TYPDES(A) put(nRec, 225, A :1.1)
!-----------------------------------------------------------
! FIELD : BUREXP 
#define S_GEEX2001_BUREXP peel(pick(nPos, 226, 8), " ")
#define R_GEEX2001_BUREXP(A) put(nRec, 226, A :8.8)
!-----------------------------------------------------------
! FIELD : PTYPRP 
#define S_GEEX2001_PTYPRP peel(pick(nPos, 234, 2), " ")
#define R_GEEX2001_PTYPRP(A) put(nRec, 234, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : GENAVI 
#define S_GEEX2001_GENAVI peel(pick(nPos, 236, 1), " ")
#define R_GEEX2001_GENAVI(A) put(nRec, 236, A :1.1)
!-----------------------------------------------------------
! FIELD : HEUCHV 
#define S_GEEX2001_HEUCHV peel(pick(nPos, 237, 1), " ")
#define R_GEEX2001_HEUCHV(A) put(nRec, 237, A :1.1)
!-----------------------------------------------------------
! FIELD : TYPDES2 
#define S_GEEX2001_TYPDES2 peel(pick(nPos, 238, 2), " ")
#define R_GEEX2001_TYPDES2(A) put(nRec, 238, A :2.2)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX2001_DISEXC peel(pick(nPos, 240, 17), " ")
#define R_GEEX2001_DISEXC(A) put(nRec, 240, A :17.17)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX2002 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX2002_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX2002_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX2002_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX2002_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX2002_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX2002_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX2002_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX2002_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX2002_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX2002_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX2002_CODCLI peel(pick(nPos, 10, 14), " ")
#define R_GEEX2002_CODCLI(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : CM1CLI 
#define S_GEEX2002_CM1CLI peel(pick(nPos, 24, 45), " ")
#define R_GEEX2002_CM1CLI(A) put(nRec, 24, A :45.45)
!-----------------------------------------------------------
! FIELD : CM2CLI 
#define S_GEEX2002_CM2CLI peel(pick(nPos, 69, 45), " ")
#define R_GEEX2002_CM2CLI(A) put(nRec, 69, A :45.45)
!-----------------------------------------------------------
! FIELD : CM3CLI 
#define S_GEEX2002_CM3CLI peel(pick(nPos, 114, 45), " ")
#define R_GEEX2002_CM3CLI(A) put(nRec, 114, A :45.45)
!-----------------------------------------------------------
! FIELD : EMLADR 
#define S_GEEX2002_EMLADR peel(pick(nPos, 159, 50), " ")
#define R_GEEX2002_EMLADR(A) put(nRec, 159, A :50.50)
!-----------------------------------------------------------
! FIELD : CPICLI 
#define S_GEEX2002_CPICLI peel(pick(nPos, 209, 10), " ")
#define R_GEEX2002_CPICLI(A) put(nRec, 209, A :10.10)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX2002_DISEXC peel(pick(nPos, 219, 38), " ")
#define R_GEEX2002_DISEXC(A) put(nRec, 219, A :38.38)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX2003 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX2003_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX2003_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX2003_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX2003_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX2003_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX2003_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX2003_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX2003_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX2003_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX2003_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX2003_CODCLI peel(pick(nPos, 10, 14), " ")
#define R_GEEX2003_CODCLI(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : CODRST 
#define S_GEEX2003_CODRST peel(pick(nPos, 24, 3), " ")
#define R_GEEX2003_CODRST(A) put(nRec, 24, A :3.3)
!-----------------------------------------------------------
! FIELD : LIBCPL 
#define S_GEEX2003_LIBCPL peel(pick(nPos, 27, 38), " ")
#define R_GEEX2003_LIBCPL(A) put(nRec, 27, A :38.38)
!-----------------------------------------------------------
! FIELD : LIBCP2 
#define S_GEEX2003_LIBCP2 peel(pick(nPos, 65, 38), " ")
#define R_GEEX2003_LIBCP2(A) put(nRec, 65, A :38.38)
!-----------------------------------------------------------
! FIELD : EXLGRP 
#define S_GEEX2003_EXLGRP peel(pick(nPos, 103, 1), " ")
#define R_GEEX2003_EXLGRP(A) put(nRec, 103, A :1.1)
!-----------------------------------------------------------
! FIELD : TYPDSV 
#define S_GEEX2003_TYPDSV peel(pick(nPos, 104, 1), " ")
#define R_GEEX2003_TYPDSV(A) put(nRec, 104, A :1.1)
!-----------------------------------------------------------
! FIELD : PTYSND 
#define S_GEEX2003_PTYSND peel(pick(nPos, 105, 1), " ")
#define R_GEEX2003_PTYSND(A) put(nRec, 105, A :1.1)
!-----------------------------------------------------------
! FIELD : IDEEXT 
#define S_GEEX2003_IDEEXT peel(pick(nPos, 106, 35), " ")
#define R_GEEX2003_IDEEXT(A) put(nRec, 106, A :35.35)
!-----------------------------------------------------------
! FIELD : ARDPEN 
#define S_GEEX2003_ARDPEN peel(pick(nPos, 141, 1), " ")
#define R_GEEX2003_ARDPEN(A) put(nRec, 141, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX2003_DISEXC peel(pick(nPos, 142, 115), " ")
#define R_GEEX2003_DISEXC(A) put(nRec, 142, A :115.115)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX2004 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX2004_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX2004_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX2004_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX2004_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX2004_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX2004_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
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
! FIELD : NOMCLI 
#define S_GEEX2004_NOMCLI peel(pick(nPos, 24, 38), " ")
#define R_GEEX2004_NOMCLI(A) put(nRec, 24, A :38.38)
!-----------------------------------------------------------
! FIELD : AD1CLI 
#define S_GEEX2004_AD1CLI peel(pick(nPos, 62, 38), " ")
#define R_GEEX2004_AD1CLI(A) put(nRec, 62, A :38.38)
!-----------------------------------------------------------
! FIELD : AD2CLI 
#define S_GEEX2004_AD2CLI peel(pick(nPos, 100, 38), " ")
#define R_GEEX2004_AD2CLI(A) put(nRec, 100, A :38.38)
!-----------------------------------------------------------
! FIELD : AD3CLI 
#define S_GEEX2004_AD3CLI peel(pick(nPos, 138, 38), " ")
#define R_GEEX2004_AD3CLI(A) put(nRec, 138, A :38.38)
!-----------------------------------------------------------
! FIELD : VILCLI 
#define S_GEEX2004_VILCLI peel(pick(nPos, 176, 58), " ")
#define R_GEEX2004_VILCLI(A) put(nRec, 176, A :58.58)
!-----------------------------------------------------------
! FIELD : CODCLV 
#define S_GEEX2004_CODCLV peel(pick(nPos, 234, 3), " ")
#define R_GEEX2004_CODCLV(A) put(nRec, 234, A :3.3)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX2004_DISEXC peel(pick(nPos, 237, 20), " ")
#define R_GEEX2004_DISEXC(A) put(nRec, 237, A :20.20)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX2050 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX2050_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX2050_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX2050_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX2050_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX2050_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX2050_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX2050_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX2050_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX2050_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX2050_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX2050_CODCLI peel(pick(nPos, 10, 14), " ")
#define R_GEEX2050_CODCLI(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : TYPRUB 
#define S_GEEX2050_TYPRUB peel(pick(nPos, 24, 5), " ")
#define R_GEEX2050_TYPRUB(A) put(nRec, 24, A :5.5)
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_GEEX2050_CODRUB peel(pick(nPos, 29, 20), " ")
#define R_GEEX2050_CODRUB(A) put(nRec, 29, A :20.20)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX2050_VALRUB peel(pick(nPos, 49, 175), " ")
#define R_GEEX2050_VALRUB(A) put(nRec, 49, A :175.175)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX2050_DISEXC peel(pick(nPos, 224, 33), " ")
#define R_GEEX2050_DISEXC(A) put(nRec, 224, A :33.33)
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

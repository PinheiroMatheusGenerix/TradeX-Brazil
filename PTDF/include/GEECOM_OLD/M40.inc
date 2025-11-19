! File M40_DHL_IN : 
!===========================================================
! Line : 00HEADER 
!===========================================================
! FIELD : CODEXC 
#define S_00HEADER_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_00HEADER_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_00HEADER_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_00HEADER_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_00HEADER_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_00HEADER_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_00HEADER_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_00HEADER_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : EMTEXC 
#define S_00HEADER_EMTEXC peel(pick(nPos, 7, 14), " ")
#define R_00HEADER_EMTEXC(A) put(nRec, 7, A :14.14)
!-----------------------------------------------------------
! FIELD : RCTEXC 
#define S_00HEADER_RCTEXC peel(pick(nPos, 21, 14), " ")
#define R_00HEADER_RCTEXC(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXC 
#define S_00HEADER_DATEXC peel(pick(nPos, 35, 8), " ")
#define R_00HEADER_DATEXC(A) put(nRec, 35, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_00HEADER_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_00HEADER_HEUEXC(A) put(nRec, 43, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : NUMEXC 
#define S_00HEADER_NUMEXC peel(pick(nPos, 49, 7), " ")
#define R_00HEADER_NUMEXC(A) put(nRec, 49, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : ACQEXC 
#define S_00HEADER_ACQEXC peel(pick(nPos, 56, 1), " ")
#define R_00HEADER_ACQEXC(A) put(nRec, 56, A :1.1)
!-----------------------------------------------------------
! FIELD : VEREXC 
#define S_00HEADER_VEREXC peel(pick(nPos, 57, 4), " ")
#define R_00HEADER_VEREXC(A) put(nRec, 57, A :4.4)
!-----------------------------------------------------------
! FIELD : NOMSYS 
#define S_00HEADER_NOMSYS peel(pick(nPos, 61, 8), " ")
#define R_00HEADER_NOMSYS(A) put(nRec, 61, A :8.8)
!-----------------------------------------------------------
! FIELD : NOMDTQ 
#define S_00HEADER_NOMDTQ peel(pick(nPos, 69, 10), " ")
#define R_00HEADER_NOMDTQ(A) put(nRec, 69, A :10.10)
!-----------------------------------------------------------
! FIELD : BIBDTQ 
#define S_00HEADER_BIBDTQ peel(pick(nPos, 79, 10), " ")
#define R_00HEADER_BIBDTQ(A) put(nRec, 79, A :10.10)
!-----------------------------------------------------------
! FIELD : LIBEXC 
#define S_00HEADER_LIBEXC peel(pick(nPos, 89, 30), " ")
#define R_00HEADER_LIBEXC(A) put(nRec, 89, A :30.30)
!-----------------------------------------------------------
! FIELD : BIBDST 
#define S_00HEADER_BIBDST peel(pick(nPos, 119, 10), " ")
#define R_00HEADER_BIBDST(A) put(nRec, 119, A :10.10)
!-----------------------------------------------------------
! FIELD : PGMDST 
#define S_00HEADER_PGMDST peel(pick(nPos, 129, 10), " ")
#define R_00HEADER_PGMDST(A) put(nRec, 129, A :10.10)
!-----------------------------------------------------------
! FIELD : PARDST 
#define S_00HEADER_PARDST peel(pick(nPos, 139, 30), " ")
#define R_00HEADER_PARDST(A) put(nRec, 139, A :30.30)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_00HEADER_CODACT peel(pick(nPos, 169, 3), " ")
#define R_00HEADER_CODACT(A) put(nRec, 169, A :3.3)
!-----------------------------------------------------------
! FIELD : IGLSIT 
#define S_00HEADER_IGLSIT peel(pick(nPos, 172, 3), " ")
#define R_00HEADER_IGLSIT(A) put(nRec, 172, A :3.3)
!-----------------------------------------------------------
! FIELD : EDISIT 
#define S_00HEADER_EDISIT peel(pick(nPos, 175, 14), " ")
#define R_00HEADER_EDISIT(A) put(nRec, 175, A :14.14)
!-----------------------------------------------------------
! FIELD : IMAEXC 
#define S_00HEADER_IMAEXC peel(pick(nPos, 189, 8), " ")
#define R_00HEADER_IMAEXC(A) put(nRec, 189, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_00HEADER_DISEXC peel(pick(nPos, 197, 60), " ")
#define R_00HEADER_DISEXC(A) put(nRec, 197, A :60.60)
!-----------------------------------------------------------
!===========================================================
! Line : 10HEADER 
!===========================================================
! FIELD : CODEXC 
#define S_10HEADER_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_10HEADER_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_10HEADER_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_10HEADER_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_10HEADER_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_10HEADER_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_10HEADER_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_10HEADER_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_10HEADER_CODACT peel(pick(nPos, 7, 3), " ")
#define R_10HEADER_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_10HEADER_CODFOU peel(pick(nPos, 10, 14), " ")
#define R_10HEADER_CODFOU(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : TYPFOU 
#define S_10HEADER_TYPFOU peel(pick(nPos, 24, 1), " ")
#define R_10HEADER_TYPFOU(A) put(nRec, 24, A :1.1)
!-----------------------------------------------------------
! FIELD : NOMFOU 
#define S_10HEADER_NOMFOU peel(pick(nPos, 25, 30), " ")
#define R_10HEADER_NOMFOU(A) put(nRec, 25, A :30.30)
!-----------------------------------------------------------
! FIELD : AD1FOU 
#define S_10HEADER_AD1FOU peel(pick(nPos, 55, 30), " ")
#define R_10HEADER_AD1FOU(A) put(nRec, 55, A :30.30)
!-----------------------------------------------------------
! FIELD : AD2FOU 
#define S_10HEADER_AD2FOU peel(pick(nPos, 85, 30), " ")
#define R_10HEADER_AD2FOU(A) put(nRec, 85, A :30.30)
!-----------------------------------------------------------
! FIELD : CPOFOU 
#define S_10HEADER_CPOFOU peel(pick(nPos, 115, 5), " ")
#define R_10HEADER_CPOFOU(A) put(nRec, 115, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : VILFOU 
#define S_10HEADER_VILFOU peel(pick(nPos, 120, 26), " ")
#define R_10HEADER_VILFOU(A) put(nRec, 120, A :26.26)
!-----------------------------------------------------------
! FIELD : PAYFOU 
#define S_10HEADER_PAYFOU peel(pick(nPos, 146, 3), " ")
#define R_10HEADER_PAYFOU(A) put(nRec, 146, A :3.3)
!-----------------------------------------------------------
! FIELD : TELFOU 
#define S_10HEADER_TELFOU peel(pick(nPos, 149, 20), " ")
#define R_10HEADER_TELFOU(A) put(nRec, 149, A :20.20)
!-----------------------------------------------------------
! FIELD : FAXFOU 
#define S_10HEADER_FAXFOU peel(pick(nPos, 169, 20), " ")
#define R_10HEADER_FAXFOU(A) put(nRec, 169, A :20.20)
!-----------------------------------------------------------
! FIELD : TLXFOU 
#define S_10HEADER_TLXFOU peel(pick(nPos, 189, 15), " ")
#define R_10HEADER_TLXFOU(A) put(nRec, 189, A :15.15)
!-----------------------------------------------------------
! FIELD : EDIFOU 
#define S_10HEADER_EDIFOU peel(pick(nPos, 204, 14), " ")
#define R_10HEADER_EDIFOU(A) put(nRec, 204, A :14.14)
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_10HEADER_CODTRA peel(pick(nPos, 218, 14), " ")
#define R_10HEADER_CODTRA(A) put(nRec, 218, A :14.14)
!-----------------------------------------------------------
! FIELD : IGLSIT 
#define S_10HEADER_IGLSIT peel(pick(nPos, 232, 3), " ")
#define R_10HEADER_IGLSIT(A) put(nRec, 232, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODTRE 
#define S_10HEADER_CODTRE peel(pick(nPos, 235, 3), " ")
#define R_10HEADER_CODTRE(A) put(nRec, 235, A :3.3)
!-----------------------------------------------------------
! FIELD : GSTAVI 
#define S_10HEADER_GSTAVI peel(pick(nPos, 238, 1), " ")
#define R_10HEADER_GSTAVI(A) put(nRec, 238, A :1.1)
!-----------------------------------------------------------
! FIELD : GSTRCP 
#define S_10HEADER_GSTRCP peel(pick(nPos, 239, 1), " ")
#define R_10HEADER_GSTRCP(A) put(nRec, 239, A :1.1)
!-----------------------------------------------------------
! FIELD : TYPPRT 
#define S_10HEADER_TYPPRT peel(pick(nPos, 240, 1), " ")
#define R_10HEADER_TYPPRT(A) put(nRec, 240, A :1.1)
!-----------------------------------------------------------
! FIELD : CPIFOU 
#define S_10HEADER_CPIFOU peel(pick(nPos, 241, 10), " ")
#define R_10HEADER_CPIFOU(A) put(nRec, 241, A :10.10)
!-----------------------------------------------------------
! FIELD : EMBTIE 
#define S_10HEADER_EMBTIE peel(pick(nPos, 251, 1), " ")
#define R_10HEADER_EMBTIE(A) put(nRec, 251, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_10HEADER_DISEXC peel(pick(nPos, 252, 5), " ")
#define R_10HEADER_DISEXC(A) put(nRec, 252, A :5.5)
!-----------------------------------------------------------
!===========================================================
! Line : 20SUPLIER 
!===========================================================
! FIELD : CODEXC 
#define S_20SUPLIER_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_20SUPLIER_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_20SUPLIER_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_20SUPLIER_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_20SUPLIER_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_20SUPLIER_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_20SUPLIER_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_20SUPLIER_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_20SUPLIER_CODACT peel(pick(nPos, 7, 3), " ")
#define R_20SUPLIER_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_20SUPLIER_CODCLI peel(pick(nPos, 10, 14), " ")
#define R_20SUPLIER_CODCLI(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : TYPCLI 
#define S_20SUPLIER_TYPCLI peel(pick(nPos, 24, 1), " ")
#define R_20SUPLIER_TYPCLI(A) put(nRec, 24, A :1.1)
!-----------------------------------------------------------
! FIELD : CATCLI 
#define S_20SUPLIER_CATCLI peel(pick(nPos, 25, 3), " ")
#define R_20SUPLIER_CATCLI(A) put(nRec, 25, A :3.3)
!-----------------------------------------------------------
! FIELD : CLILIV 
#define S_20SUPLIER_CLILIV peel(pick(nPos, 28, 14), " ")
#define R_20SUPLIER_CLILIV(A) put(nRec, 28, A :14.14)
!-----------------------------------------------------------
! FIELD : EDICLI 
#define S_20SUPLIER_EDICLI peel(pick(nPos, 42, 14), " ")
#define R_20SUPLIER_EDICLI(A) put(nRec, 42, A :14.14)
!-----------------------------------------------------------
! FIELD : NOMCLI 
#define S_20SUPLIER_NOMCLI peel(pick(nPos, 56, 30), " ")
#define R_20SUPLIER_NOMCLI(A) put(nRec, 56, A :30.30)
!-----------------------------------------------------------
! FIELD : AD1CLI 
#define S_20SUPLIER_AD1CLI peel(pick(nPos, 86, 30), " ")
#define R_20SUPLIER_AD1CLI(A) put(nRec, 86, A :30.30)
!-----------------------------------------------------------
! FIELD : AD2CLI 
#define S_20SUPLIER_AD2CLI peel(pick(nPos, 116, 30), " ")
#define R_20SUPLIER_AD2CLI(A) put(nRec, 116, A :30.30)
!-----------------------------------------------------------
! FIELD : CPOCLI 
#define S_20SUPLIER_CPOCLI peel(pick(nPos, 146, 5), " ")
#define R_20SUPLIER_CPOCLI(A) put(nRec, 146, A :5.5)
!-----------------------------------------------------------
! FIELD : VILCLI 
#define S_20SUPLIER_VILCLI peel(pick(nPos, 151, 26), " ")
#define R_20SUPLIER_VILCLI(A) put(nRec, 151, A :26.26)
!-----------------------------------------------------------
! FIELD : PAYCLI 
#define S_20SUPLIER_PAYCLI peel(pick(nPos, 177, 3), " ")
#define R_20SUPLIER_PAYCLI(A) put(nRec, 177, A :3.3)
!-----------------------------------------------------------
! FIELD : TELCLI 
#define S_20SUPLIER_TELCLI peel(pick(nPos, 180, 20), " ")
#define R_20SUPLIER_TELCLI(A) put(nRec, 180, A :20.20)
!-----------------------------------------------------------
! FIELD : FAXCLI 
#define S_20SUPLIER_FAXCLI peel(pick(nPos, 200, 20), " ")
#define R_20SUPLIER_FAXCLI(A) put(nRec, 200, A :20.20)
!-----------------------------------------------------------
! FIELD : TLXCLI 
#define S_20SUPLIER_TLXCLI peel(pick(nPos, 220, 15), " ")
#define R_20SUPLIER_TLXCLI(A) put(nRec, 220, A :15.15)
!-----------------------------------------------------------
! FIELD : CODLGE 
#define S_20SUPLIER_CODLGE peel(pick(nPos, 235, 3), " ")
#define R_20SUPLIER_CODLGE(A) put(nRec, 235, A :3.3)
!-----------------------------------------------------------
! FIELD : CODDEV 
#define S_20SUPLIER_CODDEV peel(pick(nPos, 238, 3), " ")
#define R_20SUPLIER_CODDEV(A) put(nRec, 238, A :3.3)
!-----------------------------------------------------------
! FIELD : IGLSIT 
#define S_20SUPLIER_IGLSIT peel(pick(nPos, 241, 3), " ")
#define R_20SUPLIER_IGLSIT(A) put(nRec, 241, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : PTYCLI 
#define S_20SUPLIER_PTYCLI peel(pick(nPos, 244, 3), " ")
#define R_20SUPLIER_PTYCLI(A) put(nRec, 244, A :3.3)
!-----------------------------------------------------------
! FIELD : ETACLI 
#define S_20SUPLIER_ETACLI peel(pick(nPos, 247, 2), " ")
#define R_20SUPLIER_ETACLI(A) put(nRec, 247, A :2.2)
!-----------------------------------------------------------
!===========================================================
! Line : 40HEADER 
!===========================================================
! FIELD : CODEXC 
#define S_40HEADER_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_40HEADER_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_40HEADER_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_40HEADER_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_40HEADER_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_40HEADER_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_40HEADER_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_40HEADER_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_40HEADER_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_40HEADER_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_40HEADER_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_40HEADER_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_40HEADER_REFREC peel(pick(nPos, 18, 30), " ")
#define R_40HEADER_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : CODAPP 
#define S_40HEADER_CODAPP peel(pick(nPos, 48, 10), " ")
#define R_40HEADER_CODAPP(A) put(nRec, 48, A :10.10)
!-----------------------------------------------------------
! FIELD : CODLDR 
#define S_40HEADER_CODLDR peel(pick(nPos, 58, 3), " ")
#define R_40HEADER_CODLDR(A) put(nRec, 58, A :3.3)
!-----------------------------------------------------------
! FIELD : CODTRE 
#define S_40HEADER_CODTRE peel(pick(nPos, 61, 3), " ")
#define R_40HEADER_CODTRE(A) put(nRec, 61, A :3.3)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_40HEADER_CODACT peel(pick(nPos, 64, 3), " ")
#define R_40HEADER_CODACT(A) put(nRec, 64, A :3.3)
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_40HEADER_CODFOU peel(pick(nPos, 67, 14), " ")
#define R_40HEADER_CODFOU(A) put(nRec, 67, A :14.14)
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_40HEADER_CODTRA peel(pick(nPos, 81, 14), " ")
#define R_40HEADER_CODTRA(A) put(nRec, 81, A :14.14)
!-----------------------------------------------------------
! FIELD : DTIREC 
#define S_40HEADER_DTIREC peel(pick(nPos, 95, 8), " ")
#define R_40HEADER_DTIREC(A) put(nRec, 95, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEIREC 
#define S_40HEADER_HEIREC peel(pick(nPos, 103, 4), " ")
#define R_40HEADER_HEIREC(A) put(nRec, 103, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : KAIREC 
#define S_40HEADER_KAIREC peel(pick(nPos, 107, 3), " ")
#define R_40HEADER_KAIREC(A) put(nRec, 107, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : MSGREC 
#define S_40HEADER_MSGREC peel(pick(nPos, 110, 30), " ")
#define R_40HEADER_MSGREC(A) put(nRec, 110, A :30.30)
!-----------------------------------------------------------
! FIELD : MSGREC1 
#define S_40HEADER_MSGREC1 peel(pick(nPos, 140, 30), " ")
#define R_40HEADER_MSGREC1(A) put(nRec, 140, A :30.30)
!-----------------------------------------------------------
! FIELD : IGLSIT 
#define S_40HEADER_IGLSIT peel(pick(nPos, 170, 3), " ")
#define R_40HEADER_IGLSIT(A) put(nRec, 170, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : DTFREC 
#define S_40HEADER_DTFREC peel(pick(nPos, 173, 8), " ")
#define R_40HEADER_DTFREC(A) put(nRec, 173, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : EDIFOU 
#define S_40HEADER_EDIFOU peel(pick(nPos, 181, 14), " ")
#define R_40HEADER_EDIFOU(A) put(nRec, 181, A :14.14)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_40HEADER_DISEXC peel(pick(nPos, 195, 62), " ")
#define R_40HEADER_DISEXC(A) put(nRec, 195, A :62.62)
!-----------------------------------------------------------
!===========================================================
! Line : 10HEADER 
!===========================================================
! FIELD : CODEXC 
#define S_40HEADER_10HEADER_CODEXC peel(pick(nPos, 257, 2), " ")
#define R_40HEADER_10HEADER_CODEXC(A) put(nRec, 257, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_40HEADER_10HEADER_SEPEXC peel(pick(nPos, 259, 1), " ")
#define R_40HEADER_10HEADER_SEPEXC(A) put(nRec, 259, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_40HEADER_10HEADER_SCOEXC peel(pick(nPos, 260, 2), " ")
#define R_40HEADER_10HEADER_SCOEXC(A) put(nRec, 260, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_40HEADER_10HEADER_TRTEXC peel(pick(nPos, 262, 1), " ")
#define R_40HEADER_10HEADER_TRTEXC(A) put(nRec, 262, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_40HEADER_10HEADER_CODACT peel(pick(nPos, 263, 3), " ")
#define R_40HEADER_10HEADER_CODACT(A) put(nRec, 263, A :3.3)
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_40HEADER_10HEADER_CODFOU peel(pick(nPos, 266, 14), " ")
#define R_40HEADER_10HEADER_CODFOU(A) put(nRec, 266, A :14.14)
!-----------------------------------------------------------
! FIELD : TYPFOU 
#define S_40HEADER_10HEADER_TYPFOU peel(pick(nPos, 280, 1), " ")
#define R_40HEADER_10HEADER_TYPFOU(A) put(nRec, 280, A :1.1)
!-----------------------------------------------------------
! FIELD : NOMFOU 
#define S_40HEADER_10HEADER_NOMFOU peel(pick(nPos, 281, 30), " ")
#define R_40HEADER_10HEADER_NOMFOU(A) put(nRec, 281, A :30.30)
!-----------------------------------------------------------
! FIELD : AD1FOU 
#define S_40HEADER_10HEADER_AD1FOU peel(pick(nPos, 311, 30), " ")
#define R_40HEADER_10HEADER_AD1FOU(A) put(nRec, 311, A :30.30)
!-----------------------------------------------------------
! FIELD : AD2FOU 
#define S_40HEADER_10HEADER_AD2FOU peel(pick(nPos, 341, 30), " ")
#define R_40HEADER_10HEADER_AD2FOU(A) put(nRec, 341, A :30.30)
!-----------------------------------------------------------
! FIELD : CPOFOU 
#define S_40HEADER_10HEADER_CPOFOU peel(pick(nPos, 371, 5), " ")
#define R_40HEADER_10HEADER_CPOFOU(A) put(nRec, 371, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : VILFOU 
#define S_40HEADER_10HEADER_VILFOU peel(pick(nPos, 376, 26), " ")
#define R_40HEADER_10HEADER_VILFOU(A) put(nRec, 376, A :26.26)
!-----------------------------------------------------------
! FIELD : PAYFOU 
#define S_40HEADER_10HEADER_PAYFOU peel(pick(nPos, 402, 3), " ")
#define R_40HEADER_10HEADER_PAYFOU(A) put(nRec, 402, A :3.3)
!-----------------------------------------------------------
! FIELD : TELFOU 
#define S_40HEADER_10HEADER_TELFOU peel(pick(nPos, 405, 20), " ")
#define R_40HEADER_10HEADER_TELFOU(A) put(nRec, 405, A :20.20)
!-----------------------------------------------------------
! FIELD : FAXFOU 
#define S_40HEADER_10HEADER_FAXFOU peel(pick(nPos, 425, 20), " ")
#define R_40HEADER_10HEADER_FAXFOU(A) put(nRec, 425, A :20.20)
!-----------------------------------------------------------
! FIELD : TLXFOU 
#define S_40HEADER_10HEADER_TLXFOU peel(pick(nPos, 445, 15), " ")
#define R_40HEADER_10HEADER_TLXFOU(A) put(nRec, 445, A :15.15)
!-----------------------------------------------------------
! FIELD : EDIFOU 
#define S_40HEADER_10HEADER_EDIFOU peel(pick(nPos, 460, 14), " ")
#define R_40HEADER_10HEADER_EDIFOU(A) put(nRec, 460, A :14.14)
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_40HEADER_10HEADER_CODTRA peel(pick(nPos, 474, 14), " ")
#define R_40HEADER_10HEADER_CODTRA(A) put(nRec, 474, A :14.14)
!-----------------------------------------------------------
! FIELD : IGLSIT 
#define S_40HEADER_10HEADER_IGLSIT peel(pick(nPos, 488, 3), " ")
#define R_40HEADER_10HEADER_IGLSIT(A) put(nRec, 488, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODTRE 
#define S_40HEADER_10HEADER_CODTRE peel(pick(nPos, 491, 3), " ")
#define R_40HEADER_10HEADER_CODTRE(A) put(nRec, 491, A :3.3)
!-----------------------------------------------------------
! FIELD : GSTAVI 
#define S_40HEADER_10HEADER_GSTAVI peel(pick(nPos, 494, 1), " ")
#define R_40HEADER_10HEADER_GSTAVI(A) put(nRec, 494, A :1.1)
!-----------------------------------------------------------
! FIELD : GSTRCP 
#define S_40HEADER_10HEADER_GSTRCP peel(pick(nPos, 495, 1), " ")
#define R_40HEADER_10HEADER_GSTRCP(A) put(nRec, 495, A :1.1)
!-----------------------------------------------------------
! FIELD : TYPPRT 
#define S_40HEADER_10HEADER_TYPPRT peel(pick(nPos, 496, 1), " ")
#define R_40HEADER_10HEADER_TYPPRT(A) put(nRec, 496, A :1.1)
!-----------------------------------------------------------
! FIELD : CPIFOU 
#define S_40HEADER_10HEADER_CPIFOU peel(pick(nPos, 497, 10), " ")
#define R_40HEADER_10HEADER_CPIFOU(A) put(nRec, 497, A :10.10)
!-----------------------------------------------------------
! FIELD : EMBTIE 
#define S_40HEADER_10HEADER_EMBTIE peel(pick(nPos, 507, 1), " ")
#define R_40HEADER_10HEADER_EMBTIE(A) put(nRec, 507, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_40HEADER_10HEADER_DISEXC peel(pick(nPos, 508, 5), " ")
#define R_40HEADER_10HEADER_DISEXC(A) put(nRec, 508, A :5.5)
!-----------------------------------------------------------
!===========================================================
! Line : 40_01ORDHEADER 
!===========================================================
! FIELD : CODEXC 
#define S_40_01ORDHEADER_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_40_01ORDHEADER_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_40_01ORDHEADER_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_40_01ORDHEADER_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_40_01ORDHEADER_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_40_01ORDHEADER_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_40_01ORDHEADER_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_40_01ORDHEADER_TRTEXC(A) put(nRec, 6, build(number(A):R01.0))
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_40_01ORDHEADER_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_40_01ORDHEADER_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_40_01ORDHEADER_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_40_01ORDHEADER_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_40_01ORDHEADER_REFREC peel(pick(nPos, 18, 30), " ")
#define R_40_01ORDHEADER_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : DIPREC 
#define S_40_01ORDHEADER_DIPREC peel(pick(nPos, 48, 50), " ")
#define R_40_01ORDHEADER_DIPREC(A) put(nRec, 48, A :50.50)
!-----------------------------------------------------------
! FIELD : TOPREC 
#define S_40_01ORDHEADER_TOPREC peel(pick(nPos, 98, 1), " ")
#define R_40_01ORDHEADER_TOPREC(A) put(nRec, 98, A :1.1)
!-----------------------------------------------------------
! FIELD : NOMFOU 
#define S_40_01ORDHEADER_NOMFOU peel(pick(nPos, 103, 30), " ")
#define R_40_01ORDHEADER_NOMFOU(A) put(nRec, 103, A :30.30)
!-----------------------------------------------------------
! FIELD : AD1FOU 
#define S_40_01ORDHEADER_AD1FOU peel(pick(nPos, 133, 30), " ")
#define R_40_01ORDHEADER_AD1FOU(A) put(nRec, 133, A :30.30)
!-----------------------------------------------------------
! FIELD : AD2FOU 
#define S_40_01ORDHEADER_AD2FOU peel(pick(nPos, 163, 30), " ")
#define R_40_01ORDHEADER_AD2FOU(A) put(nRec, 163, A :30.30)
!-----------------------------------------------------------
! FIELD : CPOFOU 
#define S_40_01ORDHEADER_CPOFOU peel(pick(nPos, 193, 5), " ")
#define R_40_01ORDHEADER_CPOFOU(A) put(nRec, 193, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : VILFOU 
#define S_40_01ORDHEADER_VILFOU peel(pick(nPos, 198, 26), " ")
#define R_40_01ORDHEADER_VILFOU(A) put(nRec, 198, A :26.26)
!-----------------------------------------------------------
! FIELD : PAYFOU 
#define S_40_01ORDHEADER_PAYFOU peel(pick(nPos, 224, 3), " ")
#define R_40_01ORDHEADER_PAYFOU(A) put(nRec, 224, A :3.3)
!-----------------------------------------------------------
! FIELD : TELFOU 
#define S_40_01ORDHEADER_TELFOU peel(pick(nPos, 227, 20), " ")
#define R_40_01ORDHEADER_TELFOU(A) put(nRec, 227, A :20.20)
!-----------------------------------------------------------
! FIELD : TYPFOU 
#define S_40_01ORDHEADER_TYPFOU peel(pick(nPos, 247, 1), " ")
#define R_40_01ORDHEADER_TYPFOU(A) put(nRec, 247, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_40_01ORDHEADER_DISEXC peel(pick(nPos, 248, 9), " ")
#define R_40_01ORDHEADER_DISEXC(A) put(nRec, 248, build(number(A):R09.0))
!-----------------------------------------------------------



!===========================================================
! Line : 40_02ORDHEADER
!===========================================================
! FIELD : CODEXC
#define S_40_02ORDHEADER_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_40_02ORDHEADER_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC
#define S_40_02ORDHEADER_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_40_02ORDHEADER_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC
#define S_40_02ORDHEADER_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_40_02ORDHEADER_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC
#define S_40_02ORDHEADER_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_40_02ORDHEADER_TRTEXC(A) put(nRec, 6, build(number(A):R01.0))
!-----------------------------------------------------------
! FIELD : NUMREC
#define S_40_02ORDHEADER_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_40_02ORDHEADER_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC
#define S_40_02ORDHEADER_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_40_02ORDHEADER_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC
#define S_40_02ORDHEADER_REFREC peel(pick(nPos, 18, 30), " ")
#define R_40_02ORDHEADER_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : CPIFOU
#define S_40_02ORDHEADER_CPIFOU peel(pick(nPos, 48, 10), " ")
#define R_40_02ORDHEADER_CPIFOU(A) put(nRec, 48, A :10.10)
!-----------------------------------------------------------



!===========================================================
! Line : 40_05ORDHEADER
!===========================================================
! FIELD : CODEXC
#define S_40_05ORDHEADER_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_40_05ORDHEADER_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC
#define S_40_05ORDHEADER_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_40_05ORDHEADER_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC
#define S_40_05ORDHEADER_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_40_05ORDHEADER_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC
#define S_40_05ORDHEADER_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_40_05ORDHEADER_TRTEXC(A) put(nRec, 6, build(number(A):R01.0))
!-----------------------------------------------------------
! FIELD : NUMREC
#define S_40_05ORDHEADER_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_40_05ORDHEADER_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC
#define S_40_05ORDHEADER_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_40_05ORDHEADER_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC
#define S_40_05ORDHEADER_REFREC peel(pick(nPos, 18, 30), " ")
#define R_40_05ORDHEADER_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : CPIFOU
#define S_40_05ORDHEADER_CODRUB peel(pick(nPos, 48, 20), " ")
#define R_40_05ORDHEADER_CODRUB(A) put(nRec, 48, A :20.20)
!-----------------------------------------------------------

! FIELD : CPIFOU
#define S_40_05ORDHEADER_VALRUB peel(pick(nPos, 68, 175), " ")
#define R_40_05ORDHEADER_VALRUB(A) put(nRec, 68, A :175.175)
!-----------------------------------------------------------

! FIELD : CPIFOU
#define S_40_05ORDHEADER_DISEXC peel(pick(nPos, 243, 14), " ")
#define R_40_05ORDHEADER_DISEXC(A) put(nRec, 243, A :14.14)
!-----------------------------------------------------------




!===========================================================
! Line : 40_20M40 
!===========================================================
! FIELD : CODEXC 
#define S_40_20M40_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_40_20M40_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_40_20M40_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_40_20M40_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_40_20M40_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_40_20M40_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_40_20M40_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_40_20M40_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_40_20M40_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_40_20M40_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_40_20M40_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_40_20M40_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_40_20M40_REFREC peel(pick(nPos, 18, 30), " ")
#define R_40_20M40_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_40_20M40_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_40_20M40_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_40_20M40_CODACT peel(pick(nPos, 53, 3), " ")
#define R_40_20M40_CODACT(A) put(nRec, 53, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_40_20M40_CODCLI peel(pick(nPos, 56, 14), " ")
#define R_40_20M40_CODCLI(A) put(nRec, 56, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_40_20M40_CODPRO peel(pick(nPos, 70, 17), " ")
#define R_40_20M40_CODPRO(A) put(nRec, 70, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_40_20M40_VALPRO peel(pick(nPos, 87, 2), " ")
#define R_40_20M40_VALPRO(A) put(nRec, 87, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : UVCREA 
#define S_40_20M40_UVCREA peel(pick(nPos, 89, 9), " ")
#define R_40_20M40_UVCREA(A) put(nRec, 89, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UNICDE 
#define S_40_20M40_UNICDE peel(pick(nPos, 98, 3), " ")
#define R_40_20M40_UNICDE(A) put(nRec, 98, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRN 
#define S_40_20M40_CODPRN peel(pick(nPos, 101, 17), " ")
#define R_40_20M40_CODPRN(A) put(nRec, 101, A :17.17)
!-----------------------------------------------------------
! FIELD : TYPOPE 
#define S_40_20M40_TYPOPE peel(pick(nPos, 118, 1), " ")
#define R_40_20M40_TYPOPE(A) put(nRec, 118, build(number(A):R01.0))
!-----------------------------------------------------------
! FIELD : NUMOPE 
#define S_40_20M40_NUMOPE peel(pick(nPos, 119, 6), " ")
#define R_40_20M40_NUMOPE(A) put(nRec, 119, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : AIGPRI 
#define S_40_20M40_AIGPRI peel(pick(nPos, 125, 1), " ")
#define R_40_20M40_AIGPRI(A) put(nRec, 125, A :1.1)
!-----------------------------------------------------------
! FIELD : PRIREC 
#define S_40_20M40_PRIREC peel(pick(nPos, 126, 9), " ")
#define R_40_20M40_PRIREC(A) put(nRec, 126, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : MSGLIG 
#define S_40_20M40_MSGLIG peel(pick(nPos, 135, 30), " ")
#define R_40_20M40_MSGLIG(A) put(nRec, 135, A :30.30)
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_40_20M40_MOTIMM peel(pick(nPos, 165, 3), " ")
#define R_40_20M40_MOTIMM(A) put(nRec, 165, A :3.3)
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_40_20M40_CODLOT peel(pick(nPos, 168, 20), " ")
#define R_40_20M40_CODLOT(A) put(nRec, 168, A :20.20)
!-----------------------------------------------------------
! FIELD : DATFAB 
#define S_40_20M40_DATFAB peel(pick(nPos, 188, 8), " ")
#define R_40_20M40_DATFAB(A) put(nRec, 188, A :8.8)
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_40_20M40_DATFVI peel(pick(nPos, 196, 8), " ")
#define R_40_20M40_DATFVI(A) put(nRec, 196, A :8.8)
!-----------------------------------------------------------
! FIELD : SPCPRO 
#define S_40_20M40_SPCPRO peel(pick(nPos, 204, 4), " ")
#define R_40_20M40_SPCPRO(A) put(nRec, 204, A :4.4)
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_40_20M40_PCBPRO peel(pick(nPos, 208, 5), " ")
#define R_40_20M40_PCBPRO(A) put(nRec, 208, A :5.5)
!-----------------------------------------------------------
! FIELD : PDBCOL 
#define S_40_20M40_PDBCOL peel(pick(nPos, 213, 7), " ")
#define R_40_20M40_PDBCOL(A) put(nRec, 213, A :7.7)
!-----------------------------------------------------------
! FIELD : VOLCOL 
#define S_40_20M40_VOLCOL peel(pick(nPos, 220, 7), " ")
#define R_40_20M40_VOLCOL(A) put(nRec, 220, A :7.7)
!-----------------------------------------------------------
! FIELD : COLCOU 
#define S_40_20M40_COLCOU peel(pick(nPos, 227, 8), " ")
#define R_40_20M40_COLCOU(A) put(nRec, 227, A :8.8)
!-----------------------------------------------------------
! FIELD : COUPAL 
#define S_40_20M40_COUPAL peel(pick(nPos, 235, 8), " ")
#define R_40_20M40_COUPAL(A) put(nRec, 235, A :8.8)
!-----------------------------------------------------------
! FIELD : CODEMB 
#define S_40_20M40_CODEMB peel(pick(nPos, 243, 3), " ")
#define R_40_20M40_CODEMB(A) put(nRec, 243, A :3.3)
!-----------------------------------------------------------
! FIELD : GERPAL 
#define S_40_20M40_GERPAL peel(pick(nPos, 246, 2), " ")
#define R_40_20M40_GERPAL(A) put(nRec, 246, A :2.2)
!-----------------------------------------------------------
! FIELD : GERHAU 
#define S_40_20M40_GERHAU peel(pick(nPos, 248, 2), " ")
#define R_40_20M40_GERHAU(A) put(nRec, 248, A :2.2)
!-----------------------------------------------------------
! FIELD : CODMDR 
#define S_40_20M40_CODMDR peel(pick(nPos, 250, 3), " ")
#define R_40_20M40_CODMDR(A) put(nRec, 250, A :3.3)
!-----------------------------------------------------------
! FIELD : IGLSIT 
#define S_40_20M40_IGLSIT peel(pick(nPos, 253, 3), " ")
#define R_40_20M40_IGLSIT(A) put(nRec, 253, A :3.3)
!-----------------------------------------------------------
! FIELD : INDUNI 
#define S_40_20M40_INDUNI peel(pick(nPos, 256, 1), " ")
#define R_40_20M40_INDUNI(A) put(nRec, 256, A :1.1)
!-----------------------------------------------------------
!===========================================================
! Line : 40_21M40 
!===========================================================
! FIELD : CODEXC 
#define S_40_21M40_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_40_21M40_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_40_21M40_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_40_21M40_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_40_21M40_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_40_21M40_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_40_21M40_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_40_21M40_TRTEXC(A) put(nRec, 6, build(number(A):R01.0))
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_40_21M40_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_40_21M40_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_40_21M40_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_40_21M40_SNUREC(A) put(nRec, 15, A :3.3)
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_40_21M40_REFREC peel(pick(nPos, 18, 30), " ")
#define R_40_21M40_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_40_21M40_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_40_21M40_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : DIPREC 
#define S_40_21M40_DIPREC peel(pick(nPos, 53, 50), " ")
#define R_40_21M40_DIPREC(A) put(nRec, 53, A :50.50)
!-----------------------------------------------------------
! FIELD : TOPREC 
#define S_40_21M40_TOPREC peel(pick(nPos, 103, 1), " ")
#define R_40_21M40_TOPREC(A) put(nRec, 103, A :1.1)
!-----------------------------------------------------------
! FIELD : TOPREC1 
#define S_40_21M40_TOPREC1 peel(pick(nPos, 104, 1), " ")
#define R_40_21M40_TOPREC1(A) put(nRec, 104, A :1.1)
!-----------------------------------------------------------
! FIELD : TOPREC2 
#define S_40_21M40_TOPREC2 peel(pick(nPos, 105, 1), " ")
#define R_40_21M40_TOPREC2(A) put(nRec, 105, A :1.1)
!-----------------------------------------------------------
! FIELD : TOPREC3 
#define S_40_21M40_TOPREC3 peel(pick(nPos, 106, 1), " ")
#define R_40_21M40_TOPREC3(A) put(nRec, 106, A :1.1)
!-----------------------------------------------------------
! FIELD : TOPREC4 
#define S_40_21M40_TOPREC4 peel(pick(nPos, 107, 1), " ")
#define R_40_21M40_TOPREC4(A) put(nRec, 107, A :1.1)
!-----------------------------------------------------------
! FIELD : PRXPRO 
#define S_40_21M40_PRXPRO peel(pick(nPos, 108, 9), " ")
#define R_40_21M40_PRXPRO(A) put(nRec, 108, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_40_21M40_EDIPRO peel(pick(nPos, 117, 17), " ")
#define R_40_21M40_EDIPRO(A) put(nRec, 117, A :17.17)
!-----------------------------------------------------------
! FIELD : EDICLI 
#define S_40_21M40_EDICLI peel(pick(nPos, 134, 14), " ")
#define R_40_21M40_EDICLI(A) put(nRec, 134, A :14.14)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_40_21M40_DISEXC peel(pick(nPos, 148, 109), " ")
#define R_40_21M40_DISEXC(A) put(nRec, 148, A :109.109)
!-----------------------------------------------------------
!===========================================================
! Line : 40_99TRAILLER 
!===========================================================
! FIELD : CODEXC 
#define S_40_99TRAILLER_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_40_99TRAILLER_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_40_99TRAILLER_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_40_99TRAILLER_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_40_99TRAILLER_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_40_99TRAILLER_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_40_99TRAILLER_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_40_99TRAILLER_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_40_99TRAILLER_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_40_99TRAILLER_NUMREC(A) put(nRec, 7, A :8.8)
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_40_99TRAILLER_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_40_99TRAILLER_SNUREC(A) put(nRec, 15, A :3.3)
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_40_99TRAILLER_REFREC peel(pick(nPos, 18, 30), " ")
#define R_40_99TRAILLER_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : CUMLIG 
#define S_40_99TRAILLER_CUMLIG peel(pick(nPos, 48, 4), " ")
#define R_40_99TRAILLER_CUMLIG(A) put(nRec, 48, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_40_99TRAILLER_DISEXC peel(pick(nPos, 52, 205), " ")
#define R_40_99TRAILLER_DISEXC(A) put(nRec, 52, build(number(A):R0205.0))
!-----------------------------------------------------------
!===========================================================
! Line : TRAILLER 
!===========================================================
! FIELD : CODEXC 
#define S_TRAILLER_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_TRAILLER_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_TRAILLER_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_TRAILLER_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_TRAILLER_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_TRAILLER_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_TRAILLER_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_TRAILLER_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : EMTEXC 
#define S_TRAILLER_EMTEXC peel(pick(nPos, 7, 14), " ")
#define R_TRAILLER_EMTEXC(A) put(nRec, 7, A :14.14)
!-----------------------------------------------------------
! FIELD : RCTEXC 
#define S_TRAILLER_RCTEXC peel(pick(nPos, 21, 14), " ")
#define R_TRAILLER_RCTEXC(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXC 
#define S_TRAILLER_DATEXC peel(pick(nPos, 35, 8), " ")
#define R_TRAILLER_DATEXC(A) put(nRec, 35, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_TRAILLER_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_TRAILLER_HEUEXC(A) put(nRec, 43, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : NUMEXC 
#define S_TRAILLER_NUMEXC peel(pick(nPos, 49, 7), " ")
#define R_TRAILLER_NUMEXC(A) put(nRec, 49, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : CPTEXC 
#define S_TRAILLER_CPTEXC peel(pick(nPos, 56, 8), " ")
#define R_TRAILLER_CPTEXC(A) put(nRec, 56, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : NOMSYS 
#define S_TRAILLER_NOMSYS peel(pick(nPos, 64, 8), " ")
#define R_TRAILLER_NOMSYS(A) put(nRec, 64, A :8.8)
!-----------------------------------------------------------
! FIELD : NOMDTQ 
#define S_TRAILLER_NOMDTQ peel(pick(nPos, 72, 10), " ")
#define R_TRAILLER_NOMDTQ(A) put(nRec, 72, A :10.10)
!-----------------------------------------------------------
! FIELD : BIBDTQ 
#define S_TRAILLER_BIBDTQ peel(pick(nPos, 82, 10), " ")
#define R_TRAILLER_BIBDTQ(A) put(nRec, 82, A :10.10)
!-----------------------------------------------------------
! FIELD : IDEMSG 
#define S_TRAILLER_IDEMSG peel(pick(nPos, 92, 30), " ")
#define R_TRAILLER_IDEMSG(A) put(nRec, 92, A :30.30)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_TRAILLER_DISEXC peel(pick(nPos, 122, 135), " ")
#define R_TRAILLER_DISEXC(A) put(nRec, 122, A :135.135)
!-----------------------------------------------------------


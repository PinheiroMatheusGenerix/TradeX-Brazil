! File DHL_INFOLOG_OUT : 
!===========================================================
! Line : 0000 
!===========================================================
! FIELD : CODEXC 
#define S_0000_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_0000_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_0000_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_0000_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_0000_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_0000_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_0000_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_0000_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : EMTEXC 
#define S_0000_EMTEXC peel(pick(nPos, 7, 14), " ")
#define R_0000_EMTEXC(A) put(nRec, 7, A :14.14)
!-----------------------------------------------------------
! FIELD : RCTEXC 
#define S_0000_RCTEXC peel(pick(nPos, 21, 14), " ")
#define R_0000_RCTEXC(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXC 
#define S_0000_DATEXC peel(pick(nPos, 35, 8), " ")
#define R_0000_DATEXC(A) put(nRec, 35, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_0000_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_0000_HEUEXC(A) put(nRec, 43, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : NUMEXC 
#define S_0000_NUMEXC peel(pick(nPos, 49, 7), " ")
#define R_0000_NUMEXC(A) put(nRec, 49, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : ACQEXC 
#define S_0000_ACQEXC peel(pick(nPos, 56, 1), " ")
#define R_0000_ACQEXC(A) put(nRec, 56, A :1.1)
!-----------------------------------------------------------
! FIELD : VEREXC 
#define S_0000_VEREXC peel(pick(nPos, 57, 4), " ")
#define R_0000_VEREXC(A) put(nRec, 57, A :4.4)
!-----------------------------------------------------------
! FIELD : NOMSYS 
#define S_0000_NOMSYS peel(pick(nPos, 61, 8), " ")
#define R_0000_NOMSYS(A) put(nRec, 61, A :8.8)
!-----------------------------------------------------------
! FIELD : NOMDTQ 
#define S_0000_NOMDTQ peel(pick(nPos, 69, 10), " ")
#define R_0000_NOMDTQ(A) put(nRec, 69, A :10.10)
!-----------------------------------------------------------
! FIELD : BIBDTQ 
#define S_0000_BIBDTQ peel(pick(nPos, 79, 10), " ")
#define R_0000_BIBDTQ(A) put(nRec, 79, A :10.10)
!-----------------------------------------------------------
! FIELD : LIBEXC 
#define S_0000_LIBEXC peel(pick(nPos, 89, 30), " ")
#define R_0000_LIBEXC(A) put(nRec, 89, A :30.30)
!-----------------------------------------------------------
! FIELD : BIBDST 
#define S_0000_BIBDST peel(pick(nPos, 119, 10), " ")
#define R_0000_BIBDST(A) put(nRec, 119, A :10.10)
!-----------------------------------------------------------
! FIELD : PGMDST 
#define S_0000_PGMDST peel(pick(nPos, 129, 10), " ")
#define R_0000_PGMDST(A) put(nRec, 129, A :10.10)
!-----------------------------------------------------------
! FIELD : PARDST 
#define S_0000_PARDST peel(pick(nPos, 139, 30), " ")
#define R_0000_PARDST(A) put(nRec, 139, A :30.30)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_0000_CODACT peel(pick(nPos, 169, 3), " ")
#define R_0000_CODACT(A) put(nRec, 169, A :3.3)
!-----------------------------------------------------------
! FIELD : IGLSIT 
#define S_0000_IGLSIT peel(pick(nPos, 172, 3), " ")
#define R_0000_IGLSIT(A) put(nRec, 172, A :3.3)
!-----------------------------------------------------------
! FIELD : EDISIT 
#define S_0000_EDISIT peel(pick(nPos, 175, 14), " ")
#define R_0000_EDISIT(A) put(nRec, 175, A :14.14)
!-----------------------------------------------------------
! FIELD : IMAEXC 
#define S_0000_IMAEXC peel(pick(nPos, 189, 8), " ")
#define R_0000_IMAEXC(A) put(nRec, 189, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_0000_DISEXC peel(pick(nPos, 197, 60), " ")
#define R_0000_DISEXC(A) put(nRec, 197, A :60.60)
!-----------------------------------------------------------

! File M90_AUCHAN_OUT : 
!===========================================================
! Line : 9000STOCKS 
!===========================================================
! FIELD : CODEXC 
#define S_9000STOCKS_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_9000STOCKS_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_9000STOCKS_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_9000STOCKS_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_9000STOCKS_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_9000STOCKS_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_9000STOCKS_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_9000STOCKS_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_9000STOCKS_CODACT peel(pick(nPos, 7, 3), " ")
#define R_9000STOCKS_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_9000STOCKS_CODCLI peel(pick(nPos, 10, 14), " ")
#define R_9000STOCKS_CODCLI(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_9000STOCKS_CODPRO peel(pick(nPos, 24, 17), " ")
#define R_9000STOCKS_CODPRO(A) put(nRec, 24, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_9000STOCKS_VALPRO peel(pick(nPos, 41, 2), " ")
#define R_9000STOCKS_VALPRO(A) put(nRec, 41, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_9000STOCKS_CODLOT peel(pick(nPos, 43, 20), " ")
#define R_9000STOCKS_CODLOT(A) put(nRec, 43, A :20.20)
!-----------------------------------------------------------
! FIELD : NUMLOT 
#define S_9000STOCKS_NUMLOT peel(pick(nPos, 63, 9), " ")
#define R_9000STOCKS_NUMLOT(A) put(nRec, 63, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : TOTUVC 
#define S_9000STOCKS_TOTUVC peel(pick(nPos, 72, 9), " ")
#define R_9000STOCKS_TOTUVC(A) put(nRec, 72, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : TOTCOL 
#define S_9000STOCKS_TOTCOL peel(pick(nPos, 81, 9), " ")
#define R_9000STOCKS_TOTCOL(A) put(nRec, 81, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : TOTPAL 
#define S_9000STOCKS_TOTPAL peel(pick(nPos, 90, 9), " ")
#define R_9000STOCKS_TOTPAL(A) put(nRec, 90, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : ENCUVC 
#define S_9000STOCKS_ENCUVC peel(pick(nPos, 99, 9), " ")
#define R_9000STOCKS_ENCUVC(A) put(nRec, 99, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : ENCCOL 
#define S_9000STOCKS_ENCCOL peel(pick(nPos, 108, 9), " ")
#define R_9000STOCKS_ENCCOL(A) put(nRec, 108, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : ENCPAL 
#define S_9000STOCKS_ENCPAL peel(pick(nPos, 117, 9), " ")
#define R_9000STOCKS_ENCPAL(A) put(nRec, 117, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : PRPUVC 
#define S_9000STOCKS_PRPUVC peel(pick(nPos, 126, 9), " ")
#define R_9000STOCKS_PRPUVC(A) put(nRec, 126, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : PRPCOL 
#define S_9000STOCKS_PRPCOL peel(pick(nPos, 135, 9), " ")
#define R_9000STOCKS_PRPCOL(A) put(nRec, 135, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : PRPPAL 
#define S_9000STOCKS_PRPPAL peel(pick(nPos, 144, 9), " ")
#define R_9000STOCKS_PRPPAL(A) put(nRec, 144, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : IMOUVC 
#define S_9000STOCKS_IMOUVC peel(pick(nPos, 153, 9), " ")
#define R_9000STOCKS_IMOUVC(A) put(nRec, 153, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : IMOCOL 
#define S_9000STOCKS_IMOCOL peel(pick(nPos, 162, 9), " ")
#define R_9000STOCKS_IMOCOL(A) put(nRec, 162, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : IMOPAL 
#define S_9000STOCKS_IMOPAL peel(pick(nPos, 171, 9), " ")
#define R_9000STOCKS_IMOPAL(A) put(nRec, 171, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : COMUVC 
#define S_9000STOCKS_COMUVC peel(pick(nPos, 180, 9), " ")
#define R_9000STOCKS_COMUVC(A) put(nRec, 180, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : COMCOL 
#define S_9000STOCKS_COMCOL peel(pick(nPos, 189, 9), " ")
#define R_9000STOCKS_COMCOL(A) put(nRec, 189, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : COMPAL 
#define S_9000STOCKS_COMPAL peel(pick(nPos, 198, 9), " ")
#define R_9000STOCKS_COMPAL(A) put(nRec, 198, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : MINREC 
#define S_9000STOCKS_MINREC peel(pick(nPos, 207, 8), " ")
#define R_9000STOCKS_MINREC(A) put(nRec, 207, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : MAXREC 
#define S_9000STOCKS_MAXREC peel(pick(nPos, 215, 8), " ")
#define R_9000STOCKS_MAXREC(A) put(nRec, 215, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : MINFVI 
#define S_9000STOCKS_MINFVI peel(pick(nPos, 223, 8), " ")
#define R_9000STOCKS_MINFVI(A) put(nRec, 223, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : MAXFVI 
#define S_9000STOCKS_MAXFVI peel(pick(nPos, 231, 8), " ")
#define R_9000STOCKS_MAXFVI(A) put(nRec, 231, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : TOTPOI 
#define S_9000STOCKS_TOTPOI peel(pick(nPos, 239, 11), " ")
#define R_9000STOCKS_TOTPOI(A) put(nRec, 239, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : EXSPIC 
#define S_9000STOCKS_EXSPIC peel(pick(nPos, 250, 1), " ")
#define R_9000STOCKS_EXSPIC(A) put(nRec, 250, A :1.1)
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_9000STOCKS_PCBPRO peel(pick(nPos, 251, 5), " ")
#define R_9000STOCKS_PCBPRO(A) put(nRec, 251, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : INDSTK 
#define S_9000STOCKS_INDSTK peel(pick(nPos, 256, 1), " ")
#define R_9000STOCKS_INDSTK(A) put(nRec, 256, A :1.1)
!-----------------------------------------------------------

!===========================================================
! Line : 9020STOCKS 
!===========================================================
! FIELD : CODEXC 
#define S_9020STOCKS_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_9020STOCKS_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_9020STOCKS_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_9020STOCKS_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_9020STOCKS_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_9020STOCKS_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_9020STOCKS_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_9020STOCKS_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMPHT 
#define S_9020STOCKS_NUMPHT peel(pick(nPos, 7, 10), " ")
#define R_9020STOCKS_NUMPHT(A) put(nRec, 7, build(number(A):R010.0))
!-----------------------------------------------------------
! FIELD : NLIPHT 
#define S_9020STOCKS_NLIPHT peel(pick(nPos, 17, 5), " ")
#define R_9020STOCKS_NLIPHT(A) put(nRec, 17, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : TYPPHT 
#define S_9020STOCKS_TYPPHT peel(pick(nPos, 22, 3), " ")
#define R_9020STOCKS_TYPPHT(A) put(nRec, 22, A :3.3)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_9020STOCKS_CODACT peel(pick(nPos, 25, 3), " ")
#define R_9020STOCKS_CODACT(A) put(nRec, 25, A :3.3)
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_9020STOCKS_EDIPRO peel(pick(nPos, 28, 17), " ")
#define R_9020STOCKS_EDIPRO(A) put(nRec, 28, A :17.17)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_9020STOCKS_CODPRO peel(pick(nPos, 45, 17), " ")
#define R_9020STOCKS_CODPRO(A) put(nRec, 45, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_9020STOCKS_VALPRO peel(pick(nPos, 62, 2), " ")
#define R_9020STOCKS_VALPRO(A) put(nRec, 62, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_9020STOCKS_PCBPRO peel(pick(nPos, 64, 5), " ")
#define R_9020STOCKS_PCBPRO(A) put(nRec, 64, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : EDICLI 
#define S_9020STOCKS_EDICLI peel(pick(nPos, 69, 14), " ")
#define R_9020STOCKS_EDICLI(A) put(nRec, 69, A :14.14)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_9020STOCKS_CODCLI peel(pick(nPos, 83, 14), " ")
#define R_9020STOCKS_CODCLI(A) put(nRec, 83, A :14.14)
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_9020STOCKS_CODLOT peel(pick(nPos, 97, 20), " ")
#define R_9020STOCKS_CODLOT(A) put(nRec, 97, A :20.20)
!-----------------------------------------------------------
! FIELD : ZONSTS 
#define S_9020STOCKS_ZONSTS peel(pick(nPos, 117, 1), " ")
#define R_9020STOCKS_ZONSTS(A) put(nRec, 117, A :1.1)
!-----------------------------------------------------------
! FIELD : ALLSTS 
#define S_9020STOCKS_ALLSTS peel(pick(nPos, 118, 3), " ")
#define R_9020STOCKS_ALLSTS(A) put(nRec, 118, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : DPLSTS 
#define S_9020STOCKS_DPLSTS peel(pick(nPos, 121, 4), " ")
#define R_9020STOCKS_DPLSTS(A) put(nRec, 121, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : NIVSTS 
#define S_9020STOCKS_NIVSTS peel(pick(nPos, 125, 2), " ")
#define R_9020STOCKS_NIVSTS(A) put(nRec, 125, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TOPIMM 
#define S_9020STOCKS_TOPIMM peel(pick(nPos, 127, 1), " ")
#define R_9020STOCKS_TOPIMM(A) put(nRec, 127, A :1.1)
!-----------------------------------------------------------
! FIELD : TOPOCC 
#define S_9020STOCKS_TOPOCC peel(pick(nPos, 128, 1), " ")
#define R_9020STOCKS_TOPOCC(A) put(nRec, 128, A :1.1)
!-----------------------------------------------------------
! FIELD : CATSTK 
#define S_9020STOCKS_CATSTK peel(pick(nPos, 129, 3), " ")
#define R_9020STOCKS_CATSTK(A) put(nRec, 129, A :3.3)
!-----------------------------------------------------------
! FIELD : MAXDAT 
#define S_9020STOCKS_MAXDAT peel(pick(nPos, 132, 8), " ")
#define R_9020STOCKS_MAXDAT(A) put(nRec, 132, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : TOTUVC 
#define S_9020STOCKS_TOTUVC peel(pick(nPos, 140, 9), " ")
#define R_9020STOCKS_TOTUVC(A) put(nRec, 140, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : ENCUVC 
#define S_9020STOCKS_ENCUVC peel(pick(nPos, 149, 9), " ")
#define R_9020STOCKS_ENCUVC(A) put(nRec, 149, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UVCKAI 
#define S_9020STOCKS_UVCKAI peel(pick(nPos, 158, 9), " ")
#define R_9020STOCKS_UVCKAI(A) put(nRec, 158, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UNIUVC 
#define S_9020STOCKS_UNIUVC peel(pick(nPos, 167, 3), " ")
#define R_9020STOCKS_UNIUVC(A) put(nRec, 167, A :3.3)
!-----------------------------------------------------------
! FIELD : TOTPCB 
#define S_9020STOCKS_TOTPCB peel(pick(nPos, 170, 9), " ")
#define R_9020STOCKS_TOTPCB(A) put(nRec, 170, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UNIPCB 
#define S_9020STOCKS_UNIPCB peel(pick(nPos, 179, 3), " ")
#define R_9020STOCKS_UNIPCB(A) put(nRec, 179, A :3.3)
!-----------------------------------------------------------
! FIELD : DATPHT 
#define S_9020STOCKS_DATPHT peel(pick(nPos, 182, 8), " ")
#define R_9020STOCKS_DATPHT(A) put(nRec, 182, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUPHT 
#define S_9020STOCKS_HEUPHT peel(pick(nPos, 190, 6), " ")
#define R_9020STOCKS_HEUPHT(A) put(nRec, 190, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : TOTPDN 
#define S_9020STOCKS_TOTPDN peel(pick(nPos, 196, 11), " ")
#define R_9020STOCKS_TOTPDN(A) put(nRec, 196, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_9020STOCKS_DISEXC peel(pick(nPos, 207, 50), " ")
#define R_9020STOCKS_DISEXC(A) put(nRec, 207, A :50.50)
!-----------------------------------------------------------


!===========================================================
! Line : GECOM9070 
!===========================================================
! FIELD : CODEXC 
#define S_GECOM9070_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GECOM9070_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GECOM9070_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GECOM9070_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GECOM9070_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GECOM9070_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GECOM9070_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GECOM9070_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GECOM9070_CODPAL peel(pick(nPos, 7, 18), " ")
#define R_GECOM9070_CODPAL(A) put(nRec, 7, A :18.18)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GECOM9070_CODACT peel(pick(nPos, 25, 3), " ")
#define R_GECOM9070_CODACT(A) put(nRec, 25, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GECOM9070_CODCLI peel(pick(nPos, 28, 14), " ")
#define R_GECOM9070_CODCLI(A) put(nRec, 28, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GECOM9070_CODPRO peel(pick(nPos, 42, 17), " ")
#define R_GECOM9070_CODPRO(A) put(nRec, 42, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GECOM9070_VALPRO peel(pick(nPos, 59, 2), " ")
#define R_GECOM9070_VALPRO(A) put(nRec, 59, A :2.2)
!-----------------------------------------------------------
! FIELD : NATPRO 
#define S_GECOM9070_NATPRO peel(pick(nPos, 61, 1), " ")
#define R_GECOM9070_NATPRO(A) put(nRec, 61, A :1.1)
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GECOM9070_MOTIMM peel(pick(nPos, 62, 3), " ")
#define R_GECOM9070_MOTIMM(A) put(nRec, 62, A :3.3)
!-----------------------------------------------------------
! FIELD : DATIMM1 
#define S_GECOM9070_DATIMM1 peel(pick(nPos, 65, 8), " ")
#define R_GECOM9070_DATIMM1(A) put(nRec, 65, A :8.8)
!-----------------------------------------------------------
! FIELD : DATIMM2 
#define S_GECOM9070_DATIMM2 peel(pick(nPos, 73, 8), " ")
#define R_GECOM9070_DATIMM2(A) put(nRec, 73, A :8.8)
!-----------------------------------------------------------
! FIELD : TOPEDI 
#define S_GECOM9070_TOPEDI peel(pick(nPos, 81, 1), " ")
#define R_GECOM9070_TOPEDI(A) put(nRec, 81, A :1.1)
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_GECOM9070_DATFVI peel(pick(nPos, 82, 8), " ")
#define R_GECOM9070_DATFVI(A) put(nRec, 82, A :8.8)
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GECOM9070_CODLOT peel(pick(nPos, 90, 20), " ")
#define R_GECOM9070_CODLOT(A) put(nRec, 90, A :20.20)
!-----------------------------------------------------------
! FIELD : UVCSTO 
#define S_GECOM9070_UVCSTO peel(pick(nPos, 110, 9), " ")
#define R_GECOM9070_UVCSTO(A) put(nRec, 110, A :9.9)
!-----------------------------------------------------------
! FIELD : UVCDES 
#define S_GECOM9070_UVCDES peel(pick(nPos, 119, 9), " ")
#define R_GECOM9070_UVCDES(A) put(nRec, 119, A :9.9)
!-----------------------------------------------------------
! FIELD : INDENC 
#define S_GECOM9070_INDENC peel(pick(nPos, 128, 1), " ")
#define R_GECOM9070_INDENC(A) put(nRec, 128, A :1.1)
!-----------------------------------------------------------
! FIELD : STOKAI 
#define S_GECOM9070_STOKAI peel(pick(nPos, 129, 1), " ")
#define R_GECOM9070_STOKAI(A) put(nRec, 129, A :1.1)
!-----------------------------------------------------------
! FIELD : TOPREC 
#define S_GECOM9070_TOPREC peel(pick(nPos, 130, 1), " ")
#define R_GECOM9070_TOPREC(A) put(nRec, 130, A :1.1)
!-----------------------------------------------------------
! FIELD : SITPAL 
#define S_GECOM9070_SITPAL peel(pick(nPos, 131, 3), " ")
#define R_GECOM9070_SITPAL(A) put(nRec, 131, A :3.3)
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GECOM9070_PCBPRO peel(pick(nPos, 134, 5), " ")
#define R_GECOM9070_PCBPRO(A) put(nRec, 134, A :5.5)
!-----------------------------------------------------------
! FIELD : SPCPRO 
#define S_GECOM9070_SPCPRO peel(pick(nPos, 139, 4), " ")
#define R_GECOM9070_SPCPRO(A) put(nRec, 139, A :4.4)
!-----------------------------------------------------------
! FIELD : DATMVT 
#define S_GECOM9070_DATMVT peel(pick(nPos, 143, 8), " ")
#define R_GECOM9070_DATMVT(A) put(nRec, 143, A :8.8)
!-----------------------------------------------------------
! FIELD : HEUMVT 
#define S_GECOM9070_HEUMVT peel(pick(nPos, 151, 6), " ")
#define R_GECOM9070_HEUMVT(A) put(nRec, 151, A :6.6)
!-----------------------------------------------------------
! FIELD : SENMVT 
#define S_GECOM9070_SENMVT peel(pick(nPos, 157, 1), " ")
#define R_GECOM9070_SENMVT(A) put(nRec, 157, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GECOM9070_DISEXC peel(pick(nPos, 158, 99), " ")
#define R_GECOM9070_DISEXC(A) put(nRec, 158, A :99.99)
!-----------------------------------------------------------




!===========================================================
! Line : 9900 
!===========================================================
! FIELD : CODEXC 
#define S_9900_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_9900_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_9900_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_9900_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_9900_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_9900_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_9900_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_9900_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : EMTEXC 
#define S_9900_EMTEXC peel(pick(nPos, 7, 14), " ")
#define R_9900_EMTEXC(A) put(nRec, 7, A :14.14)
!-----------------------------------------------------------
! FIELD : RCTEXC 
#define S_9900_RCTEXC peel(pick(nPos, 21, 14), " ")
#define R_9900_RCTEXC(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXC 
#define S_9900_DATEXC peel(pick(nPos, 35, 8), " ")
#define R_9900_DATEXC(A) put(nRec, 35, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_9900_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_9900_HEUEXC(A) put(nRec, 43, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : NUMEXC 
#define S_9900_NUMEXC peel(pick(nPos, 49, 7), " ")
#define R_9900_NUMEXC(A) put(nRec, 49, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : CPTEXC 
#define S_9900_CPTEXC peel(pick(nPos, 56, 8), " ")
#define R_9900_CPTEXC(A) put(nRec, 56, build(number(A):R08.0))
!-----------------------------------------------------------



























































































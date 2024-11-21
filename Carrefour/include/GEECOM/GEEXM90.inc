! File GEEXM90 : 
!===========================================================
! Line : GEEX0000 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX0000_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX0000_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX0000_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX0000_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX0000_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX0000_SCOEXC(A) put(nRec, 4, A :2.2)
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
#define R_GEEX0000_DATEXC(A) put(nRec, 35, A :8.8)
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_GEEX0000_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_GEEX0000_HEUEXC(A) put(nRec, 43, A :6.6)
!-----------------------------------------------------------
! FIELD : NUMEXC 
#define S_GEEX0000_NUMEXC peel(pick(nPos, 49, 7), " ")
#define R_GEEX0000_NUMEXC(A) put(nRec, 49, A :7.7)
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
#define R_GEEX0000_IMAEXC(A) put(nRec, 189, A :8.8)
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
! Line : GEEX9000 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9000_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9000_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9000_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9000_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9000_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9000_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9000_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9000_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9000_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX9000_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX9000_CODCLI peel(pick(nPos, 10, 14), " ")
#define R_GEEX9000_CODCLI(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX9000_CODPRO peel(pick(nPos, 24, 17), " ")
#define R_GEEX9000_CODPRO(A) put(nRec, 24, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX9000_VALPRO peel(pick(nPos, 41, 2), " ")
#define R_GEEX9000_VALPRO(A) put(nRec, 41, A :2.2)
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX9000_CODLOT peel(pick(nPos, 43, 20), " ")
#define R_GEEX9000_CODLOT(A) put(nRec, 43, A :20.20)
!-----------------------------------------------------------
! FIELD : NUMLOT 
#define S_GEEX9000_NUMLOT peel(pick(nPos, 63, 9), " ")
#define R_GEEX9000_NUMLOT(A) put(nRec, 63, A :9.9)
!-----------------------------------------------------------
! FIELD : TOTUVC 
#define S_GEEX9000_TOTUVC peel(pick(nPos, 72, 9), " ")
#define R_GEEX9000_TOTUVC(A) put(nRec, 72, A :9.9)
!-----------------------------------------------------------
! FIELD : TOTCOL 
#define S_GEEX9000_TOTCOL peel(pick(nPos, 81, 9), " ")
#define R_GEEX9000_TOTCOL(A) put(nRec, 81, A :9.9)
!-----------------------------------------------------------
! FIELD : TOTPAL 
#define S_GEEX9000_TOTPAL peel(pick(nPos, 90, 9), " ")
#define R_GEEX9000_TOTPAL(A) put(nRec, 90, A :9.9)
!-----------------------------------------------------------
! FIELD : ENCUVC 
#define S_GEEX9000_ENCUVC peel(pick(nPos, 99, 9), " ")
#define R_GEEX9000_ENCUVC(A) put(nRec, 99, A :9.9)
!-----------------------------------------------------------
! FIELD : ENCCOL 
#define S_GEEX9000_ENCCOL peel(pick(nPos, 108, 9), " ")
#define R_GEEX9000_ENCCOL(A) put(nRec, 108, A :9.9)
!-----------------------------------------------------------
! FIELD : ENCPAL 
#define S_GEEX9000_ENCPAL peel(pick(nPos, 117, 9), " ")
#define R_GEEX9000_ENCPAL(A) put(nRec, 117, A :9.9)
!-----------------------------------------------------------
! FIELD : PRPUVC 
#define S_GEEX9000_PRPUVC peel(pick(nPos, 126, 9), " ")
#define R_GEEX9000_PRPUVC(A) put(nRec, 126, A :9.9)
!-----------------------------------------------------------
! FIELD : PRPCOL 
#define S_GEEX9000_PRPCOL peel(pick(nPos, 135, 9), " ")
#define R_GEEX9000_PRPCOL(A) put(nRec, 135, A :9.9)
!-----------------------------------------------------------
! FIELD : PRPPAL 
#define S_GEEX9000_PRPPAL peel(pick(nPos, 144, 9), " ")
#define R_GEEX9000_PRPPAL(A) put(nRec, 144, A :9.9)
!-----------------------------------------------------------
! FIELD : IMOUVC 
#define S_GEEX9000_IMOUVC peel(pick(nPos, 153, 9), " ")
#define R_GEEX9000_IMOUVC(A) put(nRec, 153, A :9.9)
!-----------------------------------------------------------
! FIELD : IMOCOL 
#define S_GEEX9000_IMOCOL peel(pick(nPos, 162, 9), " ")
#define R_GEEX9000_IMOCOL(A) put(nRec, 162, A :9.9)
!-----------------------------------------------------------
! FIELD : IMOPAL 
#define S_GEEX9000_IMOPAL peel(pick(nPos, 171, 9), " ")
#define R_GEEX9000_IMOPAL(A) put(nRec, 171, A :9.9)
!-----------------------------------------------------------
! FIELD : COMUVC 
#define S_GEEX9000_COMUVC peel(pick(nPos, 180, 9), " ")
#define R_GEEX9000_COMUVC(A) put(nRec, 180, A :9.9)
!-----------------------------------------------------------
! FIELD : COMCOL 
#define S_GEEX9000_COMCOL peel(pick(nPos, 189, 9), " ")
#define R_GEEX9000_COMCOL(A) put(nRec, 189, A :9.9)
!-----------------------------------------------------------
! FIELD : COMPAL 
#define S_GEEX9000_COMPAL peel(pick(nPos, 198, 9), " ")
#define R_GEEX9000_COMPAL(A) put(nRec, 198, A :9.9)
!-----------------------------------------------------------
! FIELD : MINREC 
#define S_GEEX9000_MINREC peel(pick(nPos, 207, 8), " ")
#define R_GEEX9000_MINREC(A) put(nRec, 207, A :8.8)
!-----------------------------------------------------------
! FIELD : MAXREC 
#define S_GEEX9000_MAXREC peel(pick(nPos, 215, 8), " ")
#define R_GEEX9000_MAXREC(A) put(nRec, 215, A :8.8)
!-----------------------------------------------------------
! FIELD : MINFVI 
#define S_GEEX9000_MINFVI peel(pick(nPos, 223, 8), " ")
#define R_GEEX9000_MINFVI(A) put(nRec, 223, A :8.8)
!-----------------------------------------------------------
! FIELD : MAXFVI 
#define S_GEEX9000_MAXFVI peel(pick(nPos, 231, 8), " ")
#define R_GEEX9000_MAXFVI(A) put(nRec, 231, A :8.8)
!-----------------------------------------------------------
! FIELD : TOTPOI 
#define S_GEEX9000_TOTPOI peel(pick(nPos, 239, 11), " ")
#define R_GEEX9000_TOTPOI(A) put(nRec, 239, A :11.11)
!-----------------------------------------------------------
! FIELD : EXSPIC 
#define S_GEEX9000_EXSPIC peel(pick(nPos, 250, 1), " ")
#define R_GEEX9000_EXSPIC(A) put(nRec, 250, A :1.1)
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX9000_PCBPRO peel(pick(nPos, 251, 5), " ")
#define R_GEEX9000_PCBPRO(A) put(nRec, 251, A :5.5)
!-----------------------------------------------------------
! FIELD : INDSTK 
#define S_GEEX9000_INDSTK peel(pick(nPos, 256, 1), " ")
#define R_GEEX9000_INDSTK(A) put(nRec, 256, A :1.1)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9007 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9007_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9007_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9007_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9007_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9007_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9007_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9007_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9007_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9007_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX9007_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX9007_CODCLI peel(pick(nPos, 10, 14), " ")
#define R_GEEX9007_CODCLI(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX9007_CODPRO peel(pick(nPos, 24, 17), " ")
#define R_GEEX9007_CODPRO(A) put(nRec, 24, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX9007_VALPRO peel(pick(nPos, 41, 2), " ")
#define R_GEEX9007_VALPRO(A) put(nRec, 41, A :2.2)
!-----------------------------------------------------------
! FIELD : TOTUVC 
#define S_GEEX9007_TOTUVC peel(pick(nPos, 43, 9), " ")
#define R_GEEX9007_TOTUVC(A) put(nRec, 43, A :9.9)
!-----------------------------------------------------------
! FIELD : ENCUVC 
#define S_GEEX9007_ENCUVC peel(pick(nPos, 52, 9), " ")
#define R_GEEX9007_ENCUVC(A) put(nRec, 52, A :9.9)
!-----------------------------------------------------------
! FIELD : PRPUVC 
#define S_GEEX9007_PRPUVC peel(pick(nPos, 61, 9), " ")
#define R_GEEX9007_PRPUVC(A) put(nRec, 61, A :9.9)
!-----------------------------------------------------------
! FIELD : IMOUVC 
#define S_GEEX9007_IMOUVC peel(pick(nPos, 70, 9), " ")
#define R_GEEX9007_IMOUVC(A) put(nRec, 70, A :9.9)
!-----------------------------------------------------------
! FIELD : COMUVC 
#define S_GEEX9007_COMUVC peel(pick(nPos, 79, 9), " ")
#define R_GEEX9007_COMUVC(A) put(nRec, 79, A :9.9)
!-----------------------------------------------------------
! FIELD : TOTPOI 
#define S_GEEX9007_TOTPOI peel(pick(nPos, 88, 11), " ")
#define R_GEEX9007_TOTPOI(A) put(nRec, 88, A :11.11)
!-----------------------------------------------------------
! FIELD : ENCPOI 
#define S_GEEX9007_ENCPOI peel(pick(nPos, 99, 11), " ")
#define R_GEEX9007_ENCPOI(A) put(nRec, 99, A :11.11)
!-----------------------------------------------------------
! FIELD : PRPPOI 
#define S_GEEX9007_PRPPOI peel(pick(nPos, 110, 11), " ")
#define R_GEEX9007_PRPPOI(A) put(nRec, 110, A :11.11)
!-----------------------------------------------------------
! FIELD : IMOPOI 
#define S_GEEX9007_IMOPOI peel(pick(nPos, 121, 11), " ")
#define R_GEEX9007_IMOPOI(A) put(nRec, 121, A :11.11)
!-----------------------------------------------------------
! FIELD : COMPOI 
#define S_GEEX9007_COMPOI peel(pick(nPos, 132, 11), " ")
#define R_GEEX9007_COMPOI(A) put(nRec, 132, A :11.11)
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_GEEX9007_DATFVI peel(pick(nPos, 143, 8), " ")
#define R_GEEX9007_DATFVI(A) put(nRec, 143, A :8.8)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX9007_NUMREC peel(pick(nPos, 151, 8), " ")
#define R_GEEX9007_NUMREC(A) put(nRec, 151, A :8.8)
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX9007_SNUREC peel(pick(nPos, 159, 3), " ")
#define R_GEEX9007_SNUREC(A) put(nRec, 159, A :3.3)
!-----------------------------------------------------------
! FIELD : DTRREC 
#define S_GEEX9007_DTRREC peel(pick(nPos, 162, 8), " ")
#define R_GEEX9007_DTRREC(A) put(nRec, 162, A :8.8)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9007_DISEXC peel(pick(nPos, 170, 87), " ")
#define R_GEEX9007_DISEXC(A) put(nRec, 170, A :87.87)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9020 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9020_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9020_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9020_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9020_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9020_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9020_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9020_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9020_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMPHT 
#define S_GEEX9020_NUMPHT peel(pick(nPos, 7, 10), " ")
#define R_GEEX9020_NUMPHT(A) put(nRec, 7, A :10.10)
!-----------------------------------------------------------
! FIELD : NLIPHT 
#define S_GEEX9020_NLIPHT peel(pick(nPos, 17, 5), " ")
#define R_GEEX9020_NLIPHT(A) put(nRec, 17, A :5.5)
!-----------------------------------------------------------
! FIELD : TYPPHT 
#define S_GEEX9020_TYPPHT peel(pick(nPos, 22, 3), " ")
#define R_GEEX9020_TYPPHT(A) put(nRec, 22, A :3.3)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9020_CODACT peel(pick(nPos, 25, 3), " ")
#define R_GEEX9020_CODACT(A) put(nRec, 25, A :3.3)
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_GEEX9020_EDIPRO peel(pick(nPos, 28, 17), " ")
#define R_GEEX9020_EDIPRO(A) put(nRec, 28, A :17.17)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX9020_CODPRO peel(pick(nPos, 45, 17), " ")
#define R_GEEX9020_CODPRO(A) put(nRec, 45, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX9020_VALPRO peel(pick(nPos, 62, 2), " ")
#define R_GEEX9020_VALPRO(A) put(nRec, 62, A :2.2)
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX9020_PCBPRO peel(pick(nPos, 64, 5), " ")
#define R_GEEX9020_PCBPRO(A) put(nRec, 64, A :5.5)
!-----------------------------------------------------------
! FIELD : EDICLI 
#define S_GEEX9020_EDICLI peel(pick(nPos, 69, 14), " ")
#define R_GEEX9020_EDICLI(A) put(nRec, 69, A :14.14)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX9020_CODCLI peel(pick(nPos, 83, 14), " ")
#define R_GEEX9020_CODCLI(A) put(nRec, 83, A :14.14)
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX9020_CODLOT peel(pick(nPos, 97, 20), " ")
#define R_GEEX9020_CODLOT(A) put(nRec, 97, A :20.20)
!-----------------------------------------------------------
! FIELD : ZONSTS 
#define S_GEEX9020_ZONSTS peel(pick(nPos, 117, 1), " ")
#define R_GEEX9020_ZONSTS(A) put(nRec, 117, A :1.1)
!-----------------------------------------------------------
! FIELD : ALLSTS 
#define S_GEEX9020_ALLSTS peel(pick(nPos, 118, 3), " ")
#define R_GEEX9020_ALLSTS(A) put(nRec, 118, A :3.3)
!-----------------------------------------------------------
! FIELD : DPLSTS 
#define S_GEEX9020_DPLSTS peel(pick(nPos, 121, 4), " ")
#define R_GEEX9020_DPLSTS(A) put(nRec, 121, A :4.4)
!-----------------------------------------------------------
! FIELD : NIVSTS 
#define S_GEEX9020_NIVSTS peel(pick(nPos, 125, 2), " ")
#define R_GEEX9020_NIVSTS(A) put(nRec, 125, A :2.2)
!-----------------------------------------------------------
! FIELD : TOPIMM 
#define S_GEEX9020_TOPIMM peel(pick(nPos, 127, 1), " ")
#define R_GEEX9020_TOPIMM(A) put(nRec, 127, A :1.1)
!-----------------------------------------------------------
! FIELD : TOPOCC 
#define S_GEEX9020_TOPOCC peel(pick(nPos, 128, 1), " ")
#define R_GEEX9020_TOPOCC(A) put(nRec, 128, A :1.1)
!-----------------------------------------------------------
! FIELD : CATSTK 
#define S_GEEX9020_CATSTK peel(pick(nPos, 129, 3), " ")
#define R_GEEX9020_CATSTK(A) put(nRec, 129, A :3.3)
!-----------------------------------------------------------
! FIELD : MAXDAT 
#define S_GEEX9020_MAXDAT peel(pick(nPos, 132, 8), " ")
#define R_GEEX9020_MAXDAT(A) put(nRec, 132, A :8.8)
!-----------------------------------------------------------
! FIELD : TOTUVC 
#define S_GEEX9020_TOTUVC peel(pick(nPos, 140, 9), " ")
#define R_GEEX9020_TOTUVC(A) put(nRec, 140, A :9.9)
!-----------------------------------------------------------
! FIELD : ENCUVC 
#define S_GEEX9020_ENCUVC peel(pick(nPos, 149, 9), " ")
#define R_GEEX9020_ENCUVC(A) put(nRec, 149, A :9.9)
!-----------------------------------------------------------
! FIELD : UVCKAI 
#define S_GEEX9020_UVCKAI peel(pick(nPos, 158, 9), " ")
#define R_GEEX9020_UVCKAI(A) put(nRec, 158, A :9.9)
!-----------------------------------------------------------
! FIELD : UNIUVC 
#define S_GEEX9020_UNIUVC peel(pick(nPos, 167, 3), " ")
#define R_GEEX9020_UNIUVC(A) put(nRec, 167, A :3.3)
!-----------------------------------------------------------
! FIELD : TOTPCB 
#define S_GEEX9020_TOTPCB peel(pick(nPos, 170, 9), " ")
#define R_GEEX9020_TOTPCB(A) put(nRec, 170, A :9.9)
!-----------------------------------------------------------
! FIELD : UNIPCB 
#define S_GEEX9020_UNIPCB peel(pick(nPos, 179, 3), " ")
#define R_GEEX9020_UNIPCB(A) put(nRec, 179, A :3.3)
!-----------------------------------------------------------
! FIELD : DATPHT 
#define S_GEEX9020_DATPHT peel(pick(nPos, 182, 8), " ")
#define R_GEEX9020_DATPHT(A) put(nRec, 182, A :8.8)
!-----------------------------------------------------------
! FIELD : HEUPHT 
#define S_GEEX9020_HEUPHT peel(pick(nPos, 190, 6), " ")
#define R_GEEX9020_HEUPHT(A) put(nRec, 190, A :6.6)
!-----------------------------------------------------------
! FIELD : TOTPDN 
#define S_GEEX9020_TOTPDN peel(pick(nPos, 196, 11), " ")
#define R_GEEX9020_TOTPDN(A) put(nRec, 196, A :11.11)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9020_DISEXC peel(pick(nPos, 207, 50), " ")
#define R_GEEX9020_DISEXC(A) put(nRec, 207, A :50.50)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9030 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9030_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9030_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9030_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9030_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9030_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9030_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9030_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9030_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9030_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX9030_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX9030_CODCLI peel(pick(nPos, 10, 14), " ")
#define R_GEEX9030_CODCLI(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX9030_CODPRO peel(pick(nPos, 24, 17), " ")
#define R_GEEX9030_CODPRO(A) put(nRec, 24, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX9030_VALPRO peel(pick(nPos, 41, 2), " ")
#define R_GEEX9030_VALPRO(A) put(nRec, 41, A :2.2)
!-----------------------------------------------------------
! FIELD : NBRUVC 
#define S_GEEX9030_NBRUVC peel(pick(nPos, 43, 189), " ")
#define R_GEEX9030_NBRUVC(A) put(nRec, 43, A :189.189)
!-----------------------------------------------------------
! FIELD : SENSTK01 
#define S_GEEX9030_SENSTK01 peel(pick(nPos, 232, 1), " ")
#define R_GEEX9030_SENSTK01(A) put(nRec, 232, A :1.1)
!-----------------------------------------------------------
! FIELD : SENSTK19 
#define S_GEEX9030_SENSTK19 peel(pick(nPos, 233, 1), " ")
#define R_GEEX9030_SENSTK19(A) put(nRec, 233, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9030_DISEXC peel(pick(nPos, 234, 23), " ")
#define R_GEEX9030_DISEXC(A) put(nRec, 234, A :23.23)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9040 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9040_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9040_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9040_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9040_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9040_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9040_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9040_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9040_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX9040_CODPAL peel(pick(nPos, 7, 18), " ")
#define R_GEEX9040_CODPAL(A) put(nRec, 7, A :18.18)
!-----------------------------------------------------------
! FIELD : CODSER 
#define S_GEEX9040_CODSER peel(pick(nPos, 25, 30), " ")
#define R_GEEX9040_CODSER(A) put(nRec, 25, A :30.30)
!-----------------------------------------------------------
! FIELD : NUMSER 
#define S_GEEX9040_NUMSER peel(pick(nPos, 55, 9), " ")
#define R_GEEX9040_NUMSER(A) put(nRec, 55, A :9.9)
!-----------------------------------------------------------
! FIELD : SNUSER 
#define S_GEEX9040_SNUSER peel(pick(nPos, 64, 3), " ")
#define R_GEEX9040_SNUSER(A) put(nRec, 64, A :3.3)
!-----------------------------------------------------------
! FIELD : ETASER 
#define S_GEEX9040_ETASER peel(pick(nPos, 67, 2), " ")
#define R_GEEX9040_ETASER(A) put(nRec, 67, A :2.2)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9040_CODACT peel(pick(nPos, 69, 3), " ")
#define R_GEEX9040_CODACT(A) put(nRec, 69, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX9040_CODPRO peel(pick(nPos, 72, 17), " ")
#define R_GEEX9040_CODPRO(A) put(nRec, 72, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX9040_VALPRO peel(pick(nPos, 89, 2), " ")
#define R_GEEX9040_VALPRO(A) put(nRec, 89, A :2.2)
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_GEEX9040_EDIPRO peel(pick(nPos, 91, 17), " ")
#define R_GEEX9040_EDIPRO(A) put(nRec, 91, A :17.17)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX9040_NUMREC peel(pick(nPos, 108, 8), " ")
#define R_GEEX9040_NUMREC(A) put(nRec, 108, A :8.8)
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX9040_SNUREC peel(pick(nPos, 116, 3), " ")
#define R_GEEX9040_SNUREC(A) put(nRec, 116, A :3.3)
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX9040_REFREC peel(pick(nPos, 119, 30), " ")
#define R_GEEX9040_REFREC(A) put(nRec, 119, A :30.30)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX9040_NUMLIV peel(pick(nPos, 149, 8), " ")
#define R_GEEX9040_NUMLIV(A) put(nRec, 149, A :8.8)
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX9040_SNULIV peel(pick(nPos, 157, 3), " ")
#define R_GEEX9040_SNULIV(A) put(nRec, 157, A :3.3)
!-----------------------------------------------------------
! FIELD : DATLIV 
#define S_GEEX9040_DATLIV peel(pick(nPos, 160, 8), " ")
#define R_GEEX9040_DATLIV(A) put(nRec, 160, A :8.8)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX9040_REFLIV peel(pick(nPos, 168, 30), " ")
#define R_GEEX9040_REFLIV(A) put(nRec, 168, A :30.30)
!-----------------------------------------------------------
! FIELD : NUMTOU 
#define S_GEEX9040_NUMTOU peel(pick(nPos, 198, 8), " ")
#define R_GEEX9040_NUMTOU(A) put(nRec, 198, A :8.8)
!-----------------------------------------------------------
! FIELD : TOULIV 
#define S_GEEX9040_TOULIV peel(pick(nPos, 206, 4), " ")
#define R_GEEX9040_TOULIV(A) put(nRec, 206, A :4.4)
!-----------------------------------------------------------
! FIELD : NUMSUP 
#define S_GEEX9040_NUMSUP peel(pick(nPos, 210, 8), " ")
#define R_GEEX9040_NUMSUP(A) put(nRec, 210, A :8.8)
!-----------------------------------------------------------
! FIELD : SNUSUP 
#define S_GEEX9040_SNUSUP peel(pick(nPos, 218, 3), " ")
#define R_GEEX9040_SNUSUP(A) put(nRec, 218, A :3.3)
!-----------------------------------------------------------
! FIELD : DATEXP 
#define S_GEEX9040_DATEXP peel(pick(nPos, 221, 8), " ")
#define R_GEEX9040_DATEXP(A) put(nRec, 221, A :8.8)
!-----------------------------------------------------------
! FIELD : HEUEXP 
#define S_GEEX9040_HEUEXP peel(pick(nPos, 229, 6), " ")
#define R_GEEX9040_HEUEXP(A) put(nRec, 229, A :6.6)
!-----------------------------------------------------------
! FIELD : HEULIV 
#define S_GEEX9040_HEULIV peel(pick(nPos, 235, 6), " ")
#define R_GEEX9040_HEULIV(A) put(nRec, 235, A :6.6)
!-----------------------------------------------------------
! FIELD : DATREC 
#define S_GEEX9040_DATREC peel(pick(nPos, 241, 8), " ")
#define R_GEEX9040_DATREC(A) put(nRec, 241, A :8.8)
!-----------------------------------------------------------
! FIELD : HEUREC 
#define S_GEEX9040_HEUREC peel(pick(nPos, 249, 8), " ")
#define R_GEEX9040_HEUREC(A) put(nRec, 249, A :8.8)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9060 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9060_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9060_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9060_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9060_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9060_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9060_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9060_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9060_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9060_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX9060_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX9060_CODCLI peel(pick(nPos, 10, 14), " ")
#define R_GEEX9060_CODCLI(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX9060_CODPRO peel(pick(nPos, 24, 17), " ")
#define R_GEEX9060_CODPRO(A) put(nRec, 24, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX9060_VALPRO peel(pick(nPos, 41, 2), " ")
#define R_GEEX9060_VALPRO(A) put(nRec, 41, A :2.2)
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GEEX9060_MOTIMM peel(pick(nPos, 43, 3), " ")
#define R_GEEX9060_MOTIMM(A) put(nRec, 43, A :3.3)
!-----------------------------------------------------------
! FIELD : DATIMM1 
#define S_GEEX9060_DATIMM1 peel(pick(nPos, 46, 8), " ")
#define R_GEEX9060_DATIMM1(A) put(nRec, 46, A :8.8)
!-----------------------------------------------------------
! FIELD : DATIMM2 
#define S_GEEX9060_DATIMM2 peel(pick(nPos, 54, 8), " ")
#define R_GEEX9060_DATIMM2(A) put(nRec, 54, A :8.8)
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_GEEX9060_DATFVI peel(pick(nPos, 62, 8), " ")
#define R_GEEX9060_DATFVI(A) put(nRec, 62, A :8.8)
!-----------------------------------------------------------
! FIELD : NBRUVC 
#define S_GEEX9060_NBRUVC peel(pick(nPos, 70, 180), " ")
#define R_GEEX9060_NBRUVC(A) put(nRec, 70, A :180.180)
!-----------------------------------------------------------
! FIELD : TOPEDI 
#define S_GEEX9060_TOPEDI peel(pick(nPos, 250, 1), " ")
#define R_GEEX9060_TOPEDI(A) put(nRec, 250, A :1.1)
!-----------------------------------------------------------
! FIELD : SENSTK01 
#define S_GEEX9060_SENSTK01 peel(pick(nPos, 251, 1), " ")
#define R_GEEX9060_SENSTK01(A) put(nRec, 251, A :1.1)
!-----------------------------------------------------------
! FIELD : SENSTK13 
#define S_GEEX9060_SENSTK13 peel(pick(nPos, 252, 1), " ")
#define R_GEEX9060_SENSTK13(A) put(nRec, 252, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9060_DISEXC peel(pick(nPos, 253, 4), " ")
#define R_GEEX9060_DISEXC(A) put(nRec, 253, A :4.4)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9065 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9065_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9065_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9065_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9065_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9065_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9065_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9065_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9065_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9065_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX9065_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX9065_CODCLI peel(pick(nPos, 10, 14), " ")
#define R_GEEX9065_CODCLI(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX9065_CODPRO peel(pick(nPos, 24, 17), " ")
#define R_GEEX9065_CODPRO(A) put(nRec, 24, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX9065_VALPRO peel(pick(nPos, 41, 2), " ")
#define R_GEEX9065_VALPRO(A) put(nRec, 41, A :2.2)
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GEEX9065_MOTIMM peel(pick(nPos, 43, 3), " ")
#define R_GEEX9065_MOTIMM(A) put(nRec, 43, A :3.3)
!-----------------------------------------------------------
! FIELD : DATIMM1 
#define S_GEEX9065_DATIMM1 peel(pick(nPos, 46, 8), " ")
#define R_GEEX9065_DATIMM1(A) put(nRec, 46, A :8.8)
!-----------------------------------------------------------
! FIELD : DATIMM2 
#define S_GEEX9065_DATIMM2 peel(pick(nPos, 54, 8), " ")
#define R_GEEX9065_DATIMM2(A) put(nRec, 54, A :8.8)
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_GEEX9065_DATFVI peel(pick(nPos, 62, 8), " ")
#define R_GEEX9065_DATFVI(A) put(nRec, 62, A :8.8)
!-----------------------------------------------------------
! FIELD : NBRUVC 
#define S_GEEX9065_NBRUVC peel(pick(nPos, 70, 135), " ")
#define R_GEEX9065_NBRUVC(A) put(nRec, 70, A :135.135)
!-----------------------------------------------------------
! FIELD : TOPEDI 
#define S_GEEX9065_TOPEDI peel(pick(nPos, 205, 1), " ")
#define R_GEEX9065_TOPEDI(A) put(nRec, 205, A :1.1)
!-----------------------------------------------------------
! FIELD : SENSTK01 
#define S_GEEX9065_SENSTK01 peel(pick(nPos, 206, 1), " ")
#define R_GEEX9065_SENSTK01(A) put(nRec, 206, A :1.1)
!-----------------------------------------------------------
! FIELD : SENSTK13 
#define S_GEEX9065_SENSTK13 peel(pick(nPos, 207, 1), " ")
#define R_GEEX9065_SENSTK13(A) put(nRec, 207, A :1.1)
!-----------------------------------------------------------
! FIELD : NATPRO 
#define S_GEEX9065_NATPRO peel(pick(nPos, 208, 1), " ")
#define R_GEEX9065_NATPRO(A) put(nRec, 208, A :1.1)
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX9065_PCBPRO peel(pick(nPos, 209, 5), " ")
#define R_GEEX9065_PCBPRO(A) put(nRec, 209, A :5.5)
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX9065_CODLOT peel(pick(nPos, 214, 20), " ")
#define R_GEEX9065_CODLOT(A) put(nRec, 214, A :20.20)
!-----------------------------------------------------------
! FIELD : DATMVT 
#define S_GEEX9065_DATMVT peel(pick(nPos, 234, 8), " ")
#define R_GEEX9065_DATMVT(A) put(nRec, 234, A :8.8)
!-----------------------------------------------------------
! FIELD : HEUMVT 
#define S_GEEX9065_HEUMVT peel(pick(nPos, 242, 6), " ")
#define R_GEEX9065_HEUMVT(A) put(nRec, 242, A :6.6)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9065_DISEXC peel(pick(nPos, 248, 9), " ")
#define R_GEEX9065_DISEXC(A) put(nRec, 248, A :9.9)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9070 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9070_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9070_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9070_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9070_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9070_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9070_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9070_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9070_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX9070_CODPAL peel(pick(nPos, 7, 18), " ")
#define R_GEEX9070_CODPAL(A) put(nRec, 7, A :18.18)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9070_CODACT peel(pick(nPos, 25, 3), " ")
#define R_GEEX9070_CODACT(A) put(nRec, 25, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX9070_CODCLI peel(pick(nPos, 28, 14), " ")
#define R_GEEX9070_CODCLI(A) put(nRec, 28, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX9070_CODPRO peel(pick(nPos, 42, 17), " ")
#define R_GEEX9070_CODPRO(A) put(nRec, 42, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX9070_VALPRO peel(pick(nPos, 59, 2), " ")
#define R_GEEX9070_VALPRO(A) put(nRec, 59, A :2.2)
!-----------------------------------------------------------
! FIELD : NATPRO 
#define S_GEEX9070_NATPRO peel(pick(nPos, 61, 1), " ")
#define R_GEEX9070_NATPRO(A) put(nRec, 61, A :1.1)
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GEEX9070_MOTIMM peel(pick(nPos, 62, 3), " ")
#define R_GEEX9070_MOTIMM(A) put(nRec, 62, A :3.3)
!-----------------------------------------------------------
! FIELD : DATIMM1 
#define S_GEEX9070_DATIMM1 peel(pick(nPos, 65, 8), " ")
#define R_GEEX9070_DATIMM1(A) put(nRec, 65, A :8.8)
!-----------------------------------------------------------
! FIELD : DATIMM2 
#define S_GEEX9070_DATIMM2 peel(pick(nPos, 73, 8), " ")
#define R_GEEX9070_DATIMM2(A) put(nRec, 73, A :8.8)
!-----------------------------------------------------------
! FIELD : TOPEDI 
#define S_GEEX9070_TOPEDI peel(pick(nPos, 81, 1), " ")
#define R_GEEX9070_TOPEDI(A) put(nRec, 81, A :1.1)
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_GEEX9070_DATFVI peel(pick(nPos, 82, 8), " ")
#define R_GEEX9070_DATFVI(A) put(nRec, 82, A :8.8)
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX9070_CODLOT peel(pick(nPos, 90, 20), " ")
#define R_GEEX9070_CODLOT(A) put(nRec, 90, A :20.20)
!-----------------------------------------------------------
! FIELD : UVCSTO 
#define S_GEEX9070_UVCSTO peel(pick(nPos, 110, 9), " ")
#define R_GEEX9070_UVCSTO(A) put(nRec, 110, A :9.9)
!-----------------------------------------------------------
! FIELD : UVCDES 
#define S_GEEX9070_UVCDES peel(pick(nPos, 119, 9), " ")
#define R_GEEX9070_UVCDES(A) put(nRec, 119, A :9.9)
!-----------------------------------------------------------
! FIELD : INDENC 
#define S_GEEX9070_INDENC peel(pick(nPos, 128, 1), " ")
#define R_GEEX9070_INDENC(A) put(nRec, 128, A :1.1)
!-----------------------------------------------------------
! FIELD : STOKAI 
#define S_GEEX9070_STOKAI peel(pick(nPos, 129, 1), " ")
#define R_GEEX9070_STOKAI(A) put(nRec, 129, A :1.1)
!-----------------------------------------------------------
! FIELD : TOPREC 
#define S_GEEX9070_TOPREC peel(pick(nPos, 130, 1), " ")
#define R_GEEX9070_TOPREC(A) put(nRec, 130, A :1.1)
!-----------------------------------------------------------
! FIELD : SITPAL 
#define S_GEEX9070_SITPAL peel(pick(nPos, 131, 3), " ")
#define R_GEEX9070_SITPAL(A) put(nRec, 131, A :3.3)
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX9070_PCBPRO peel(pick(nPos, 134, 5), " ")
#define R_GEEX9070_PCBPRO(A) put(nRec, 134, A :5.5)
!-----------------------------------------------------------
! FIELD : SPCPRO 
#define S_GEEX9070_SPCPRO peel(pick(nPos, 139, 4), " ")
#define R_GEEX9070_SPCPRO(A) put(nRec, 139, A :4.4)
!-----------------------------------------------------------
! FIELD : DATMVT 
#define S_GEEX9070_DATMVT peel(pick(nPos, 143, 8), " ")
#define R_GEEX9070_DATMVT(A) put(nRec, 143, A :8.8)
!-----------------------------------------------------------
! FIELD : HEUMVT 
#define S_GEEX9070_HEUMVT peel(pick(nPos, 151, 6), " ")
#define R_GEEX9070_HEUMVT(A) put(nRec, 151, A :6.6)
!-----------------------------------------------------------
! FIELD : SENMVT 
#define S_GEEX9070_SENMVT peel(pick(nPos, 157, 1), " ")
#define R_GEEX9070_SENMVT(A) put(nRec, 157, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9070_DISEXC peel(pick(nPos, 158, 99), " ")
#define R_GEEX9070_DISEXC(A) put(nRec, 158, A :99.99)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9900 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9900_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9900_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9900_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9900_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9900_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9900_SCOEXC(A) put(nRec, 4, A :2.2)
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
#define R_GEEX9900_DATEXC(A) put(nRec, 35, A :8.8)
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_GEEX9900_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_GEEX9900_HEUEXC(A) put(nRec, 43, A :6.6)
!-----------------------------------------------------------
! FIELD : NUMEXC 
#define S_GEEX9900_NUMEXC peel(pick(nPos, 49, 7), " ")
#define R_GEEX9900_NUMEXC(A) put(nRec, 49, A :7.7)
!-----------------------------------------------------------
! FIELD : CPTEXC 
#define S_GEEX9900_CPTEXC peel(pick(nPos, 56, 8), " ")
#define R_GEEX9900_CPTEXC(A) put(nRec, 56, A :8.8)
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
#define R_GEEX9999_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9999_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9999_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9999_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9999_SCOEXC(A) put(nRec, 4, A :2.2)
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
#define R_GEEX9999_DATEXC(A) put(nRec, 35, A :8.8)
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_GEEX9999_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_GEEX9999_HEUEXC(A) put(nRec, 43, A :6.6)
!-----------------------------------------------------------
! FIELD : NUMEXC 
#define S_GEEX9999_NUMEXC peel(pick(nPos, 49, 7), " ")
#define R_GEEX9999_NUMEXC(A) put(nRec, 49, A :7.7)
!-----------------------------------------------------------
! FIELD : CPTEXC 
#define S_GEEX9999_CPTEXC peel(pick(nPos, 56, 8), " ")
#define R_GEEX9999_CPTEXC(A) put(nRec, 56, A :8.8)
!-----------------------------------------------------------
! FIELD : ERREXC 
#define S_GEEX9999_ERREXC peel(pick(nPos, 64, 8), " ")
#define R_GEEX9999_ERREXC(A) put(nRec, 64, A :8.8)
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

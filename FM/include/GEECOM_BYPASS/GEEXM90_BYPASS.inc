! File GEEXM90 _BP: 
!===========================================================
! Line : GEEX0000_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX0000_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX0000_BP_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX0000_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX0000_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX0000_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX0000_BP_SCOEXC(A) put(nRec, 4, A :2.2)
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
#define R_GEEX0000_BP_DATEXC(A) put(nRec, 35, A :8.8)
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_GEEX0000_BP_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_GEEX0000_BP_HEUEXC(A) put(nRec, 43, A :6.6)
!-----------------------------------------------------------
! FIELD : NUMEXC 
#define S_GEEX0000_BP_NUMEXC peel(pick(nPos, 49, 7), " ")
#define R_GEEX0000_BP_NUMEXC(A) put(nRec, 49, A :7.7)
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
#define R_GEEX0000_BP_IGLSIT(A) put(nRec, 172, A :3.3)
!-----------------------------------------------------------
! FIELD : EDISIT 
#define S_GEEX0000_BP_EDISIT peel(pick(nPos, 175, 14), " ")
#define R_GEEX0000_BP_EDISIT(A) put(nRec, 175, A :14.14)
!-----------------------------------------------------------
! FIELD : IMAEXC 
#define S_GEEX0000_BP_IMAEXC peel(pick(nPos, 189, 8), " ")
#define R_GEEX0000_BP_IMAEXC(A) put(nRec, 189, A :8.8)
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
! Line : GEEX9000_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9000_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9000_BP_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9000_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9000_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9000_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9000_BP_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9000_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9000_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9000_BP_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX9000_BP_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX9000_BP_CODCLI peel(pick(nPos, 10, 14), " ")
#define R_GEEX9000_BP_CODCLI(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX9000_BP_CODPRO peel(pick(nPos, 24, 17), " ")
#define R_GEEX9000_BP_CODPRO(A) put(nRec, 24, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX9000_BP_VALPRO peel(pick(nPos, 41, 2), " ")
#define R_GEEX9000_BP_VALPRO(A) put(nRec, 41, A :2.2)
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX9000_BP_CODLOT peel(pick(nPos, 43, 20), " ")
#define R_GEEX9000_BP_CODLOT(A) put(nRec, 43, A :20.20)
!-----------------------------------------------------------
! FIELD : NUMLOT 
#define S_GEEX9000_BP_NUMLOT peel(pick(nPos, 63, 9), " ")
#define R_GEEX9000_BP_NUMLOT(A) put(nRec, 63, A :9.9)
!-----------------------------------------------------------
! FIELD : TOTUVC 
#define S_GEEX9000_BP_TOTUVC peel(pick(nPos, 72, 9), " ")
#define R_GEEX9000_BP_TOTUVC(A) put(nRec, 72, A :9.9)
!-----------------------------------------------------------
! FIELD : TOTCOL 
#define S_GEEX9000_BP_TOTCOL peel(pick(nPos, 81, 9), " ")
#define R_GEEX9000_BP_TOTCOL(A) put(nRec, 81, A :9.9)
!-----------------------------------------------------------
! FIELD : TOTPAL 
#define S_GEEX9000_BP_TOTPAL peel(pick(nPos, 90, 9), " ")
#define R_GEEX9000_BP_TOTPAL(A) put(nRec, 90, A :9.9)
!-----------------------------------------------------------
! FIELD : ENCUVC 
#define S_GEEX9000_BP_ENCUVC peel(pick(nPos, 99, 9), " ")
#define R_GEEX9000_BP_ENCUVC(A) put(nRec, 99, A :9.9)
!-----------------------------------------------------------
! FIELD : ENCCOL 
#define S_GEEX9000_BP_ENCCOL peel(pick(nPos, 108, 9), " ")
#define R_GEEX9000_BP_ENCCOL(A) put(nRec, 108, A :9.9)
!-----------------------------------------------------------
! FIELD : ENCPAL 
#define S_GEEX9000_BP_ENCPAL peel(pick(nPos, 117, 9), " ")
#define R_GEEX9000_BP_ENCPAL(A) put(nRec, 117, A :9.9)
!-----------------------------------------------------------
! FIELD : PRPUVC 
#define S_GEEX9000_BP_PRPUVC peel(pick(nPos, 126, 9), " ")
#define R_GEEX9000_BP_PRPUVC(A) put(nRec, 126, A :9.9)
!-----------------------------------------------------------
! FIELD : PRPCOL 
#define S_GEEX9000_BP_PRPCOL peel(pick(nPos, 135, 9), " ")
#define R_GEEX9000_BP_PRPCOL(A) put(nRec, 135, A :9.9)
!-----------------------------------------------------------
! FIELD : PRPPAL 
#define S_GEEX9000_BP_PRPPAL peel(pick(nPos, 144, 9), " ")
#define R_GEEX9000_BP_PRPPAL(A) put(nRec, 144, A :9.9)
!-----------------------------------------------------------
! FIELD : IMOUVC 
#define S_GEEX9000_BP_IMOUVC peel(pick(nPos, 153, 9), " ")
#define R_GEEX9000_BP_IMOUVC(A) put(nRec, 153, A :9.9)
!-----------------------------------------------------------
! FIELD : IMOCOL 
#define S_GEEX9000_BP_IMOCOL peel(pick(nPos, 162, 9), " ")
#define R_GEEX9000_BP_IMOCOL(A) put(nRec, 162, A :9.9)
!-----------------------------------------------------------
! FIELD : IMOPAL 
#define S_GEEX9000_BP_IMOPAL peel(pick(nPos, 171, 9), " ")
#define R_GEEX9000_BP_IMOPAL(A) put(nRec, 171, A :9.9)
!-----------------------------------------------------------
! FIELD : COMUVC 
#define S_GEEX9000_BP_COMUVC peel(pick(nPos, 180, 9), " ")
#define R_GEEX9000_BP_COMUVC(A) put(nRec, 180, A :9.9)
!-----------------------------------------------------------
! FIELD : COMCOL 
#define S_GEEX9000_BP_COMCOL peel(pick(nPos, 189, 9), " ")
#define R_GEEX9000_BP_COMCOL(A) put(nRec, 189, A :9.9)
!-----------------------------------------------------------
! FIELD : COMPAL 
#define S_GEEX9000_BP_COMPAL peel(pick(nPos, 198, 9), " ")
#define R_GEEX9000_BP_COMPAL(A) put(nRec, 198, A :9.9)
!-----------------------------------------------------------
! FIELD : MINREC 
#define S_GEEX9000_BP_MINREC peel(pick(nPos, 207, 8), " ")
#define R_GEEX9000_BP_MINREC(A) put(nRec, 207, A :8.8)
!-----------------------------------------------------------
! FIELD : MAXREC 
#define S_GEEX9000_BP_MAXREC peel(pick(nPos, 215, 8), " ")
#define R_GEEX9000_BP_MAXREC(A) put(nRec, 215, A :8.8)
!-----------------------------------------------------------
! FIELD : MINFVI 
#define S_GEEX9000_BP_MINFVI peel(pick(nPos, 223, 8), " ")
#define R_GEEX9000_BP_MINFVI(A) put(nRec, 223, A :8.8)
!-----------------------------------------------------------
! FIELD : MAXFVI 
#define S_GEEX9000_BP_MAXFVI peel(pick(nPos, 231, 8), " ")
#define R_GEEX9000_BP_MAXFVI(A) put(nRec, 231, A :8.8)
!-----------------------------------------------------------
! FIELD : TOTPOI 
#define S_GEEX9000_BP_TOTPOI peel(pick(nPos, 239, 11), " ")
#define R_GEEX9000_BP_TOTPOI(A) put(nRec, 239, A :11.11)
!-----------------------------------------------------------
! FIELD : EXSPIC 
#define S_GEEX9000_BP_EXSPIC peel(pick(nPos, 250, 1), " ")
#define R_GEEX9000_BP_EXSPIC(A) put(nRec, 250, A :1.1)
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX9000_BP_PCBPRO peel(pick(nPos, 251, 5), " ")
#define R_GEEX9000_BP_PCBPRO(A) put(nRec, 251, A :5.5)
!-----------------------------------------------------------
! FIELD : INDSTK 
#define S_GEEX9000_BP_INDSTK peel(pick(nPos, 256, 1), " ")
#define R_GEEX9000_BP_INDSTK(A) put(nRec, 256, A :1.1)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9007_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9007_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9007_BP_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9007_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9007_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9007_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9007_BP_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9007_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9007_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9007_BP_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX9007_BP_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX9007_BP_CODCLI peel(pick(nPos, 10, 14), " ")
#define R_GEEX9007_BP_CODCLI(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX9007_BP_CODPRO peel(pick(nPos, 24, 17), " ")
#define R_GEEX9007_BP_CODPRO(A) put(nRec, 24, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX9007_BP_VALPRO peel(pick(nPos, 41, 2), " ")
#define R_GEEX9007_BP_VALPRO(A) put(nRec, 41, A :2.2)
!-----------------------------------------------------------
! FIELD : TOTUVC 
#define S_GEEX9007_BP_TOTUVC peel(pick(nPos, 43, 9), " ")
#define R_GEEX9007_BP_TOTUVC(A) put(nRec, 43, A :9.9)
!-----------------------------------------------------------
! FIELD : ENCUVC 
#define S_GEEX9007_BP_ENCUVC peel(pick(nPos, 52, 9), " ")
#define R_GEEX9007_BP_ENCUVC(A) put(nRec, 52, A :9.9)
!-----------------------------------------------------------
! FIELD : PRPUVC 
#define S_GEEX9007_BP_PRPUVC peel(pick(nPos, 61, 9), " ")
#define R_GEEX9007_BP_PRPUVC(A) put(nRec, 61, A :9.9)
!-----------------------------------------------------------
! FIELD : IMOUVC 
#define S_GEEX9007_BP_IMOUVC peel(pick(nPos, 70, 9), " ")
#define R_GEEX9007_BP_IMOUVC(A) put(nRec, 70, A :9.9)
!-----------------------------------------------------------
! FIELD : COMUVC 
#define S_GEEX9007_BP_COMUVC peel(pick(nPos, 79, 9), " ")
#define R_GEEX9007_BP_COMUVC(A) put(nRec, 79, A :9.9)
!-----------------------------------------------------------
! FIELD : TOTPOI 
#define S_GEEX9007_BP_TOTPOI peel(pick(nPos, 88, 11), " ")
#define R_GEEX9007_BP_TOTPOI(A) put(nRec, 88, A :11.11)
!-----------------------------------------------------------
! FIELD : ENCPOI 
#define S_GEEX9007_BP_ENCPOI peel(pick(nPos, 99, 11), " ")
#define R_GEEX9007_BP_ENCPOI(A) put(nRec, 99, A :11.11)
!-----------------------------------------------------------
! FIELD : PRPPOI 
#define S_GEEX9007_BP_PRPPOI peel(pick(nPos, 110, 11), " ")
#define R_GEEX9007_BP_PRPPOI(A) put(nRec, 110, A :11.11)
!-----------------------------------------------------------
! FIELD : IMOPOI 
#define S_GEEX9007_BP_IMOPOI peel(pick(nPos, 121, 11), " ")
#define R_GEEX9007_BP_IMOPOI(A) put(nRec, 121, A :11.11)
!-----------------------------------------------------------
! FIELD : COMPOI 
#define S_GEEX9007_BP_COMPOI peel(pick(nPos, 132, 11), " ")
#define R_GEEX9007_BP_COMPOI(A) put(nRec, 132, A :11.11)
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_GEEX9007_BP_DATFVI peel(pick(nPos, 143, 8), " ")
#define R_GEEX9007_BP_DATFVI(A) put(nRec, 143, A :8.8)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX9007_BP_NUMREC peel(pick(nPos, 151, 8), " ")
#define R_GEEX9007_BP_NUMREC(A) put(nRec, 151, A :8.8)
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX9007_BP_SNUREC peel(pick(nPos, 159, 3), " ")
#define R_GEEX9007_BP_SNUREC(A) put(nRec, 159, A :3.3)
!-----------------------------------------------------------
! FIELD : DTRREC 
#define S_GEEX9007_BP_DTRREC peel(pick(nPos, 162, 8), " ")
#define R_GEEX9007_BP_DTRREC(A) put(nRec, 162, A :8.8)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9007_BP_DISEXC peel(pick(nPos, 170, 87), " ")
#define R_GEEX9007_BP_DISEXC(A) put(nRec, 170, A :87.87)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9020_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9020_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9020_BP_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9020_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9020_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9020_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9020_BP_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9020_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9020_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMPHT 
#define S_GEEX9020_BP_NUMPHT peel(pick(nPos, 7, 10), " ")
#define R_GEEX9020_BP_NUMPHT(A) put(nRec, 7, A :10.10)
!-----------------------------------------------------------
! FIELD : NLIPHT 
#define S_GEEX9020_BP_NLIPHT peel(pick(nPos, 17, 5), " ")
#define R_GEEX9020_BP_NLIPHT(A) put(nRec, 17, A :5.5)
!-----------------------------------------------------------
! FIELD : TYPPHT 
#define S_GEEX9020_BP_TYPPHT peel(pick(nPos, 22, 3), " ")
#define R_GEEX9020_BP_TYPPHT(A) put(nRec, 22, A :3.3)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9020_BP_CODACT peel(pick(nPos, 25, 3), " ")
#define R_GEEX9020_BP_CODACT(A) put(nRec, 25, A :3.3)
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_GEEX9020_BP_EDIPRO peel(pick(nPos, 28, 17), " ")
#define R_GEEX9020_BP_EDIPRO(A) put(nRec, 28, A :17.17)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX9020_BP_CODPRO peel(pick(nPos, 45, 17), " ")
#define R_GEEX9020_BP_CODPRO(A) put(nRec, 45, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX9020_BP_VALPRO peel(pick(nPos, 62, 2), " ")
#define R_GEEX9020_BP_VALPRO(A) put(nRec, 62, A :2.2)
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX9020_BP_PCBPRO peel(pick(nPos, 64, 5), " ")
#define R_GEEX9020_BP_PCBPRO(A) put(nRec, 64, A :5.5)
!-----------------------------------------------------------
! FIELD : EDICLI 
#define S_GEEX9020_BP_EDICLI peel(pick(nPos, 69, 14), " ")
#define R_GEEX9020_BP_EDICLI(A) put(nRec, 69, A :14.14)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX9020_BP_CODCLI peel(pick(nPos, 83, 14), " ")
#define R_GEEX9020_BP_CODCLI(A) put(nRec, 83, A :14.14)
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX9020_BP_CODLOT peel(pick(nPos, 97, 20), " ")
#define R_GEEX9020_BP_CODLOT(A) put(nRec, 97, A :20.20)
!-----------------------------------------------------------
! FIELD : ZONSTS 
#define S_GEEX9020_BP_ZONSTS peel(pick(nPos, 117, 1), " ")
#define R_GEEX9020_BP_ZONSTS(A) put(nRec, 117, A :1.1)
!-----------------------------------------------------------
! FIELD : ALLSTS 
#define S_GEEX9020_BP_ALLSTS peel(pick(nPos, 118, 3), " ")
#define R_GEEX9020_BP_ALLSTS(A) put(nRec, 118, A :3.3)
!-----------------------------------------------------------
! FIELD : DPLSTS 
#define S_GEEX9020_BP_DPLSTS peel(pick(nPos, 121, 4), " ")
#define R_GEEX9020_BP_DPLSTS(A) put(nRec, 121, A :4.4)
!-----------------------------------------------------------
! FIELD : NIVSTS 
#define S_GEEX9020_BP_NIVSTS peel(pick(nPos, 125, 2), " ")
#define R_GEEX9020_BP_NIVSTS(A) put(nRec, 125, A :2.2)
!-----------------------------------------------------------
! FIELD : TOPIMM 
#define S_GEEX9020_BP_TOPIMM peel(pick(nPos, 127, 1), " ")
#define R_GEEX9020_BP_TOPIMM(A) put(nRec, 127, A :1.1)
!-----------------------------------------------------------
! FIELD : TOPOCC 
#define S_GEEX9020_BP_TOPOCC peel(pick(nPos, 128, 1), " ")
#define R_GEEX9020_BP_TOPOCC(A) put(nRec, 128, A :1.1)
!-----------------------------------------------------------
! FIELD : CATSTK 
#define S_GEEX9020_BP_CATSTK peel(pick(nPos, 129, 3), " ")
#define R_GEEX9020_BP_CATSTK(A) put(nRec, 129, A :3.3)
!-----------------------------------------------------------
! FIELD : MAXDAT 
#define S_GEEX9020_BP_MAXDAT peel(pick(nPos, 132, 8), " ")
#define R_GEEX9020_BP_MAXDAT(A) put(nRec, 132, A :8.8)
!-----------------------------------------------------------
! FIELD : TOTUVC 
#define S_GEEX9020_BP_TOTUVC peel(pick(nPos, 140, 9), " ")
#define R_GEEX9020_BP_TOTUVC(A) put(nRec, 140, A :9.9)
!-----------------------------------------------------------
! FIELD : ENCUVC 
#define S_GEEX9020_BP_ENCUVC peel(pick(nPos, 149, 9), " ")
#define R_GEEX9020_BP_ENCUVC(A) put(nRec, 149, A :9.9)
!-----------------------------------------------------------
! FIELD : UVCKAI 
#define S_GEEX9020_BP_UVCKAI peel(pick(nPos, 158, 9), " ")
#define R_GEEX9020_BP_UVCKAI(A) put(nRec, 158, A :9.9)
!-----------------------------------------------------------
! FIELD : UNIUVC 
#define S_GEEX9020_BP_UNIUVC peel(pick(nPos, 167, 3), " ")
#define R_GEEX9020_BP_UNIUVC(A) put(nRec, 167, A :3.3)
!-----------------------------------------------------------
! FIELD : TOTPCB 
#define S_GEEX9020_BP_TOTPCB peel(pick(nPos, 170, 9), " ")
#define R_GEEX9020_BP_TOTPCB(A) put(nRec, 170, A :9.9)
!-----------------------------------------------------------
! FIELD : UNIPCB 
#define S_GEEX9020_BP_UNIPCB peel(pick(nPos, 179, 3), " ")
#define R_GEEX9020_BP_UNIPCB(A) put(nRec, 179, A :3.3)
!-----------------------------------------------------------
! FIELD : DATPHT 
#define S_GEEX9020_BP_DATPHT peel(pick(nPos, 182, 8), " ")
#define R_GEEX9020_BP_DATPHT(A) put(nRec, 182, A :8.8)
!-----------------------------------------------------------
! FIELD : HEUPHT 
#define S_GEEX9020_BP_HEUPHT peel(pick(nPos, 190, 6), " ")
#define R_GEEX9020_BP_HEUPHT(A) put(nRec, 190, A :6.6)
!-----------------------------------------------------------
! FIELD : TOTPDN 
#define S_GEEX9020_BP_TOTPDN peel(pick(nPos, 196, 11), " ")
#define R_GEEX9020_BP_TOTPDN(A) put(nRec, 196, A :11.11)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9020_BP_DISEXC peel(pick(nPos, 207, 50), " ")
#define R_GEEX9020_BP_DISEXC(A) put(nRec, 207, A :50.50)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9030_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9030_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9030_BP_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9030_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9030_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9030_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9030_BP_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9030_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9030_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9030_BP_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX9030_BP_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX9030_BP_CODCLI peel(pick(nPos, 10, 14), " ")
#define R_GEEX9030_BP_CODCLI(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX9030_BP_CODPRO peel(pick(nPos, 24, 17), " ")
#define R_GEEX9030_BP_CODPRO(A) put(nRec, 24, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX9030_BP_VALPRO peel(pick(nPos, 41, 2), " ")
#define R_GEEX9030_BP_VALPRO(A) put(nRec, 41, A :2.2)
!-----------------------------------------------------------
! FIELD : NBRUVC 
#define S_GEEX9030_BP_NBRUVC peel(pick(nPos, 43, 189), " ")
#define R_GEEX9030_BP_NBRUVC(A) put(nRec, 43, A :189.189)
!-----------------------------------------------------------
! FIELD : SENSTK01 
#define S_GEEX9030_BP_SENSTK01 peel(pick(nPos, 232, 1), " ")
#define R_GEEX9030_BP_SENSTK01(A) put(nRec, 232, A :1.1)
!-----------------------------------------------------------
! FIELD : SENSTK19 
#define S_GEEX9030_BP_SENSTK19 peel(pick(nPos, 233, 1), " ")
#define R_GEEX9030_BP_SENSTK19(A) put(nRec, 233, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9030_BP_DISEXC peel(pick(nPos, 234, 23), " ")
#define R_GEEX9030_BP_DISEXC(A) put(nRec, 234, A :23.23)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9040_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9040_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9040_BP_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9040_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9040_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9040_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9040_BP_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9040_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9040_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX9040_BP_CODPAL peel(pick(nPos, 7, 18), " ")
#define R_GEEX9040_BP_CODPAL(A) put(nRec, 7, A :18.18)
!-----------------------------------------------------------
! FIELD : CODSER 
#define S_GEEX9040_BP_CODSER peel(pick(nPos, 25, 30), " ")
#define R_GEEX9040_BP_CODSER(A) put(nRec, 25, A :30.30)
!-----------------------------------------------------------
! FIELD : NUMSER 
#define S_GEEX9040_BP_NUMSER peel(pick(nPos, 55, 9), " ")
#define R_GEEX9040_BP_NUMSER(A) put(nRec, 55, A :9.9)
!-----------------------------------------------------------
! FIELD : SNUSER 
#define S_GEEX9040_BP_SNUSER peel(pick(nPos, 64, 3), " ")
#define R_GEEX9040_BP_SNUSER(A) put(nRec, 64, A :3.3)
!-----------------------------------------------------------
! FIELD : ETASER 
#define S_GEEX9040_BP_ETASER peel(pick(nPos, 67, 2), " ")
#define R_GEEX9040_BP_ETASER(A) put(nRec, 67, A :2.2)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9040_BP_CODACT peel(pick(nPos, 69, 3), " ")
#define R_GEEX9040_BP_CODACT(A) put(nRec, 69, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX9040_BP_CODPRO peel(pick(nPos, 72, 17), " ")
#define R_GEEX9040_BP_CODPRO(A) put(nRec, 72, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX9040_BP_VALPRO peel(pick(nPos, 89, 2), " ")
#define R_GEEX9040_BP_VALPRO(A) put(nRec, 89, A :2.2)
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_GEEX9040_BP_EDIPRO peel(pick(nPos, 91, 17), " ")
#define R_GEEX9040_BP_EDIPRO(A) put(nRec, 91, A :17.17)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX9040_BP_NUMREC peel(pick(nPos, 108, 8), " ")
#define R_GEEX9040_BP_NUMREC(A) put(nRec, 108, A :8.8)
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX9040_BP_SNUREC peel(pick(nPos, 116, 3), " ")
#define R_GEEX9040_BP_SNUREC(A) put(nRec, 116, A :3.3)
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX9040_BP_REFREC peel(pick(nPos, 119, 30), " ")
#define R_GEEX9040_BP_REFREC(A) put(nRec, 119, A :30.30)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX9040_BP_NUMLIV peel(pick(nPos, 149, 8), " ")
#define R_GEEX9040_BP_NUMLIV(A) put(nRec, 149, A :8.8)
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX9040_BP_SNULIV peel(pick(nPos, 157, 3), " ")
#define R_GEEX9040_BP_SNULIV(A) put(nRec, 157, A :3.3)
!-----------------------------------------------------------
! FIELD : DATLIV 
#define S_GEEX9040_BP_DATLIV peel(pick(nPos, 160, 8), " ")
#define R_GEEX9040_BP_DATLIV(A) put(nRec, 160, A :8.8)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX9040_BP_REFLIV peel(pick(nPos, 168, 30), " ")
#define R_GEEX9040_BP_REFLIV(A) put(nRec, 168, A :30.30)
!-----------------------------------------------------------
! FIELD : NUMTOU 
#define S_GEEX9040_BP_NUMTOU peel(pick(nPos, 198, 8), " ")
#define R_GEEX9040_BP_NUMTOU(A) put(nRec, 198, A :8.8)
!-----------------------------------------------------------
! FIELD : TOULIV 
#define S_GEEX9040_BP_TOULIV peel(pick(nPos, 206, 4), " ")
#define R_GEEX9040_BP_TOULIV(A) put(nRec, 206, A :4.4)
!-----------------------------------------------------------
! FIELD : NUMSUP 
#define S_GEEX9040_BP_NUMSUP peel(pick(nPos, 210, 8), " ")
#define R_GEEX9040_BP_NUMSUP(A) put(nRec, 210, A :8.8)
!-----------------------------------------------------------
! FIELD : SNUSUP 
#define S_GEEX9040_BP_SNUSUP peel(pick(nPos, 218, 3), " ")
#define R_GEEX9040_BP_SNUSUP(A) put(nRec, 218, A :3.3)
!-----------------------------------------------------------
! FIELD : DATEXP 
#define S_GEEX9040_BP_DATEXP peel(pick(nPos, 221, 8), " ")
#define R_GEEX9040_BP_DATEXP(A) put(nRec, 221, A :8.8)
!-----------------------------------------------------------
! FIELD : HEUEXP 
#define S_GEEX9040_BP_HEUEXP peel(pick(nPos, 229, 6), " ")
#define R_GEEX9040_BP_HEUEXP(A) put(nRec, 229, A :6.6)
!-----------------------------------------------------------
! FIELD : HEULIV 
#define S_GEEX9040_BP_HEULIV peel(pick(nPos, 235, 6), " ")
#define R_GEEX9040_BP_HEULIV(A) put(nRec, 235, A :6.6)
!-----------------------------------------------------------
! FIELD : DATREC 
#define S_GEEX9040_BP_DATREC peel(pick(nPos, 241, 8), " ")
#define R_GEEX9040_BP_DATREC(A) put(nRec, 241, A :8.8)
!-----------------------------------------------------------
! FIELD : HEUREC 
#define S_GEEX9040_BP_HEUREC peel(pick(nPos, 249, 8), " ")
#define R_GEEX9040_BP_HEUREC(A) put(nRec, 249, A :8.8)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9060_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9060_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9060_BP_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9060_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9060_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9060_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9060_BP_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9060_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9060_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9060_BP_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX9060_BP_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX9060_BP_CODCLI peel(pick(nPos, 10, 14), " ")
#define R_GEEX9060_BP_CODCLI(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX9060_BP_CODPRO peel(pick(nPos, 24, 17), " ")
#define R_GEEX9060_BP_CODPRO(A) put(nRec, 24, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX9060_BP_VALPRO peel(pick(nPos, 41, 2), " ")
#define R_GEEX9060_BP_VALPRO(A) put(nRec, 41, A :2.2)
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GEEX9060_BP_MOTIMM peel(pick(nPos, 43, 3), " ")
#define R_GEEX9060_BP_MOTIMM(A) put(nRec, 43, A :3.3)
!-----------------------------------------------------------
! FIELD : DATIMM1 
#define S_GEEX9060_BP_DATIMM1 peel(pick(nPos, 46, 8), " ")
#define R_GEEX9060_BP_DATIMM1(A) put(nRec, 46, A :8.8)
!-----------------------------------------------------------
! FIELD : DATIMM2 
#define S_GEEX9060_BP_DATIMM2 peel(pick(nPos, 54, 8), " ")
#define R_GEEX9060_BP_DATIMM2(A) put(nRec, 54, A :8.8)
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_GEEX9060_BP_DATFVI peel(pick(nPos, 62, 8), " ")
#define R_GEEX9060_BP_DATFVI(A) put(nRec, 62, A :8.8)
!-----------------------------------------------------------
! FIELD : NBRUVC 
#define S_GEEX9060_BP_NBRUVC peel(pick(nPos, 70, 180), " ")
#define R_GEEX9060_BP_NBRUVC(A) put(nRec, 70, A :180.180)
!-----------------------------------------------------------
! FIELD : TOPEDI 
#define S_GEEX9060_BP_TOPEDI peel(pick(nPos, 250, 1), " ")
#define R_GEEX9060_BP_TOPEDI(A) put(nRec, 250, A :1.1)
!-----------------------------------------------------------
! FIELD : SENSTK01 
#define S_GEEX9060_BP_SENSTK01 peel(pick(nPos, 251, 1), " ")
#define R_GEEX9060_BP_SENSTK01(A) put(nRec, 251, A :1.1)
!-----------------------------------------------------------
! FIELD : SENSTK13 
#define S_GEEX9060_BP_SENSTK13 peel(pick(nPos, 252, 1), " ")
#define R_GEEX9060_BP_SENSTK13(A) put(nRec, 252, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9060_BP_DISEXC peel(pick(nPos, 253, 4), " ")
#define R_GEEX9060_BP_DISEXC(A) put(nRec, 253, A :4.4)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9065_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9065_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9065_BP_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9065_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9065_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9065_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9065_BP_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9065_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9065_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9065_BP_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX9065_BP_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX9065_BP_CODCLI peel(pick(nPos, 10, 14), " ")
#define R_GEEX9065_BP_CODCLI(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX9065_BP_CODPRO peel(pick(nPos, 24, 17), " ")
#define R_GEEX9065_BP_CODPRO(A) put(nRec, 24, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX9065_BP_VALPRO peel(pick(nPos, 41, 2), " ")
#define R_GEEX9065_BP_VALPRO(A) put(nRec, 41, A :2.2)
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GEEX9065_BP_MOTIMM peel(pick(nPos, 43, 3), " ")
#define R_GEEX9065_BP_MOTIMM(A) put(nRec, 43, A :3.3)
!-----------------------------------------------------------
! FIELD : DATIMM1 
#define S_GEEX9065_BP_DATIMM1 peel(pick(nPos, 46, 8), " ")
#define R_GEEX9065_BP_DATIMM1(A) put(nRec, 46, A :8.8)
!-----------------------------------------------------------
! FIELD : DATIMM2 
#define S_GEEX9065_BP_DATIMM2 peel(pick(nPos, 54, 8), " ")
#define R_GEEX9065_BP_DATIMM2(A) put(nRec, 54, A :8.8)
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_GEEX9065_BP_DATFVI peel(pick(nPos, 62, 8), " ")
#define R_GEEX9065_BP_DATFVI(A) put(nRec, 62, A :8.8)
!-----------------------------------------------------------
! FIELD : NBRUVC 
#define S_GEEX9065_BP_NBRUVC peel(pick(nPos, 70, 135), " ")
#define R_GEEX9065_BP_NBRUVC(A) put(nRec, 70, A :135.135)
!-----------------------------------------------------------
! FIELD : TOPEDI 
#define S_GEEX9065_BP_TOPEDI peel(pick(nPos, 205, 1), " ")
#define R_GEEX9065_BP_TOPEDI(A) put(nRec, 205, A :1.1)
!-----------------------------------------------------------
! FIELD : SENSTK01 
#define S_GEEX9065_BP_SENSTK01 peel(pick(nPos, 206, 1), " ")
#define R_GEEX9065_BP_SENSTK01(A) put(nRec, 206, A :1.1)
!-----------------------------------------------------------
! FIELD : SENSTK13 
#define S_GEEX9065_BP_SENSTK13 peel(pick(nPos, 207, 1), " ")
#define R_GEEX9065_BP_SENSTK13(A) put(nRec, 207, A :1.1)
!-----------------------------------------------------------
! FIELD : NATPRO 
#define S_GEEX9065_BP_NATPRO peel(pick(nPos, 208, 1), " ")
#define R_GEEX9065_BP_NATPRO(A) put(nRec, 208, A :1.1)
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX9065_BP_PCBPRO peel(pick(nPos, 209, 5), " ")
#define R_GEEX9065_BP_PCBPRO(A) put(nRec, 209, A :5.5)
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX9065_BP_CODLOT peel(pick(nPos, 214, 20), " ")
#define R_GEEX9065_BP_CODLOT(A) put(nRec, 214, A :20.20)
!-----------------------------------------------------------
! FIELD : DATMVT 
#define S_GEEX9065_BP_DATMVT peel(pick(nPos, 234, 8), " ")
#define R_GEEX9065_BP_DATMVT(A) put(nRec, 234, A :8.8)
!-----------------------------------------------------------
! FIELD : HEUMVT 
#define S_GEEX9065_BP_HEUMVT peel(pick(nPos, 242, 6), " ")
#define R_GEEX9065_BP_HEUMVT(A) put(nRec, 242, A :6.6)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9065_BP_DISEXC peel(pick(nPos, 248, 9), " ")
#define R_GEEX9065_BP_DISEXC(A) put(nRec, 248, A :9.9)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9070_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9070_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9070_BP_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9070_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9070_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9070_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9070_BP_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9070_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9070_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX9070_BP_CODPAL peel(pick(nPos, 7, 18), " ")
#define R_GEEX9070_BP_CODPAL(A) put(nRec, 7, A :18.18)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9070_BP_CODACT peel(pick(nPos, 25, 3), " ")
#define R_GEEX9070_BP_CODACT(A) put(nRec, 25, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX9070_BP_CODCLI peel(pick(nPos, 28, 14), " ")
#define R_GEEX9070_BP_CODCLI(A) put(nRec, 28, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX9070_BP_CODPRO peel(pick(nPos, 42, 17), " ")
#define R_GEEX9070_BP_CODPRO(A) put(nRec, 42, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX9070_BP_VALPRO peel(pick(nPos, 59, 2), " ")
#define R_GEEX9070_BP_VALPRO(A) put(nRec, 59, A :2.2)
!-----------------------------------------------------------
! FIELD : NATPRO 
#define S_GEEX9070_BP_NATPRO peel(pick(nPos, 61, 1), " ")
#define R_GEEX9070_BP_NATPRO(A) put(nRec, 61, A :1.1)
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GEEX9070_BP_MOTIMM peel(pick(nPos, 62, 3), " ")
#define R_GEEX9070_BP_MOTIMM(A) put(nRec, 62, A :3.3)
!-----------------------------------------------------------
! FIELD : DATIMM1 
#define S_GEEX9070_BP_DATIMM1 peel(pick(nPos, 65, 8), " ")
#define R_GEEX9070_BP_DATIMM1(A) put(nRec, 65, A :8.8)
!-----------------------------------------------------------
! FIELD : DATIMM2 
#define S_GEEX9070_BP_DATIMM2 peel(pick(nPos, 73, 8), " ")
#define R_GEEX9070_BP_DATIMM2(A) put(nRec, 73, A :8.8)
!-----------------------------------------------------------
! FIELD : TOPEDI 
#define S_GEEX9070_BP_TOPEDI peel(pick(nPos, 81, 1), " ")
#define R_GEEX9070_BP_TOPEDI(A) put(nRec, 81, A :1.1)
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_GEEX9070_BP_DATFVI peel(pick(nPos, 82, 8), " ")
#define R_GEEX9070_BP_DATFVI(A) put(nRec, 82, A :8.8)
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX9070_BP_CODLOT peel(pick(nPos, 90, 20), " ")
#define R_GEEX9070_BP_CODLOT(A) put(nRec, 90, A :20.20)
!-----------------------------------------------------------
! FIELD : UVCSTO 
#define S_GEEX9070_BP_UVCSTO peel(pick(nPos, 110, 9), " ")
#define R_GEEX9070_BP_UVCSTO(A) put(nRec, 110, A :9.9)
!-----------------------------------------------------------
! FIELD : UVCDES 
#define S_GEEX9070_BP_UVCDES peel(pick(nPos, 119, 9), " ")
#define R_GEEX9070_BP_UVCDES(A) put(nRec, 119, A :9.9)
!-----------------------------------------------------------
! FIELD : INDENC 
#define S_GEEX9070_BP_INDENC peel(pick(nPos, 128, 1), " ")
#define R_GEEX9070_BP_INDENC(A) put(nRec, 128, A :1.1)
!-----------------------------------------------------------
! FIELD : STOKAI 
#define S_GEEX9070_BP_STOKAI peel(pick(nPos, 129, 1), " ")
#define R_GEEX9070_BP_STOKAI(A) put(nRec, 129, A :1.1)
!-----------------------------------------------------------
! FIELD : TOPREC 
#define S_GEEX9070_BP_TOPREC peel(pick(nPos, 130, 1), " ")
#define R_GEEX9070_BP_TOPREC(A) put(nRec, 130, A :1.1)
!-----------------------------------------------------------
! FIELD : SITPAL 
#define S_GEEX9070_BP_SITPAL peel(pick(nPos, 131, 3), " ")
#define R_GEEX9070_BP_SITPAL(A) put(nRec, 131, A :3.3)
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX9070_BP_PCBPRO peel(pick(nPos, 134, 5), " ")
#define R_GEEX9070_BP_PCBPRO(A) put(nRec, 134, A :5.5)
!-----------------------------------------------------------
! FIELD : SPCPRO 
#define S_GEEX9070_BP_SPCPRO peel(pick(nPos, 139, 4), " ")
#define R_GEEX9070_BP_SPCPRO(A) put(nRec, 139, A :4.4)
!-----------------------------------------------------------
! FIELD : DATMVT 
#define S_GEEX9070_BP_DATMVT peel(pick(nPos, 143, 8), " ")
#define R_GEEX9070_BP_DATMVT(A) put(nRec, 143, A :8.8)
!-----------------------------------------------------------
! FIELD : HEUMVT 
#define S_GEEX9070_BP_HEUMVT peel(pick(nPos, 151, 6), " ")
#define R_GEEX9070_BP_HEUMVT(A) put(nRec, 151, A :6.6)
!-----------------------------------------------------------
! FIELD : SENMVT 
#define S_GEEX9070_BP_SENMVT peel(pick(nPos, 157, 1), " ")
#define R_GEEX9070_BP_SENMVT(A) put(nRec, 157, A :1.1)
!-----------------------------------------------------------
! FIELD : DATLIB 
#define S_GEEX9070_BP_DATLIB peel(pick(nPos, 158, 8), " ")
#define R_GEEX9070_BP_DATLIB(A) put(nRec, 158, A :8.8)
!-----------------------------------------------------------
! FIELD : ETAPAL 
#define S_GEEX9070_BP_ETAPAL peel(pick(nPos, 166, 2), " ")
#define R_GEEX9070_BP_ETAPAL(A) put(nRec, 166, A :2.2)
!-----------------------------------------------------------
! FIELD : ALLSTS 
#define S_GEEX9070_BP_ALLSTS peel(pick(nPos, 168, 3), " ")
#define R_GEEX9070_BP_ALLSTS(A) put(nRec, 168, A :3.3)
!-----------------------------------------------------------
! FIELD : ZONSTS 
#define S_GEEX9070_BP_ZONSTS peel(pick(nPos, 171, 1), " ")
#define R_GEEX9070_BP_ZONSTS(A) put(nRec, 171, A :1.1)
!-----------------------------------------------------------
! FIELD : DPLSTS 
#define S_GEEX9070_BP_DPLSTS peel(pick(nPos, 172, 4), " ")
#define R_GEEX9070_BP_DPLSTS(A) put(nRec, 172, A :4.4)
!-----------------------------------------------------------
! FIELD : NIVSTS 
#define S_GEEX9070_BP_NIVSTS peel(pick(nPos, 176, 2), " ")
#define R_GEEX9070_BP_NIVSTS(A) put(nRec, 176, A :2.2)
!-----------------------------------------------------------
! FIELD : INDPRO 
#define S_GEEX9070_BP_INDPRO peel(pick(nPos, 178, 10), " ")
#define R_GEEX9070_BP_INDPRO(A) put(nRec, 178, A :10.10)
!-----------------------------------------------------------
! FIELD : IMOCOM 
#define S_GEEX9070_BP_IMOCOM peel(pick(nPos, 188, 1), " ")
#define R_GEEX9070_BP_IMOCOM(A) put(nRec, 188, A :1.1)
!-----------------------------------------------------------
! FIELD : MOTIMM2 
#define S_GEEX9070_BP_MOTIMM2 peel(pick(nPos, 189, 3), " ")
#define R_GEEX9070_BP_MOTIMM2(A) put(nRec, 189, A :3.3)
!-----------------------------------------------------------
! FIELD : PDBPAL 
#define S_GEEX9070_BP_PDBPAL peel(pick(nPos, 192, 7), " ")
#define R_GEEX9070_BP_PDBPAL(A) put(nRec, 192, A :7.7)
!-----------------------------------------------------------
! FIELD : UVCKAI 
#define S_GEEX9070_BP_UVCKAI peel(pick(nPos, 199, 9), " ")
#define R_GEEX9070_BP_UVCKAI(A) put(nRec, 199, A :9.9)
!-----------------------------------------------------------
! FIELD : CODRGT 
#define S_GEEX9070_BP_CODRGT peel(pick(nPos, 208, 3), " ")
#define R_GEEX9070_BP_CODRGT(A) put(nRec, 208, A :3.3)
!-----------------------------------------------------------
! FIELD : DATREC 
#define S_GEEX9070_BP_DATREC peel(pick(nPos, 211, 8), " ")
#define R_GEEX9070_BP_DATREC(A) put(nRec, 211, A :8.8)
!-----------------------------------------------------------
! FIELD : MESPRO 
#define S_GEEX9070_BP_MESPRO peel(pick(nPos, 219, 1), " ")
#define R_GEEX9070_BP_MESPRO(A) put(nRec, 219, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9070_BP_DISEXC peel(pick(nPos, 220, 37), " ")
#define R_GEEX9070_BP_DISEXC(A) put(nRec, 220, A :37.37)
!-----------------------------------------------------------
! FIELD : HEUREC 
#define S_GEEX9070_BP_HEUREC peel(pick(nPos, 257, 6), " ")
#define R_GEEX9070_BP_HEUREC(A) put(nRec, 257, A :6.6)
!-----------------------------------------------------------
! FIELD : LIBIMO 
#define S_GEEX9070_BP_LIBIMO peel(pick(nPos, 263, 30), " ")
#define R_GEEX9070_BP_LIBIMO(A) put(nRec, 263, A :30.30)
!-----------------------------------------------------------
! FIELD : DS1PRO 
#define S_GEEX9070_BP_DS1PRO peel(pick(nPos, 293, 35), " ")
#define R_GEEX9070_BP_DS1PRO(A) put(nRec, 293, A :35.35)
!-----------------------------------------------------------
! FIELD : DS2PRO 
#define S_GEEX9070_BP_DS2PRO peel(pick(nPos, 328, 35), " ")
#define R_GEEX9070_BP_DS2PRO(A) put(nRec, 328, A :35.35)
!-----------------------------------------------------------
! FIELD : DS3PRO 
#define S_GEEX9070_BP_DS3PRO peel(pick(nPos, 363, 35), " ")
#define R_GEEX9070_BP_DS3PRO(A) put(nRec, 363, A :35.35)
!-----------------------------------------------------------
! FIELD : UVCSUP 
#define S_GEEX9070_BP_UVCSUP peel(pick(nPos, 398, 9), " ")
#define R_GEEX9070_BP_UVCSUP(A) put(nRec, 398, A :9.9)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9900_BP 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9900_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9900_BP_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9900_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9900_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9900_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9900_BP_SCOEXC(A) put(nRec, 4, A :2.2)
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
#define R_GEEX9900_BP_DATEXC(A) put(nRec, 35, A :8.8)
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_GEEX9900_BP_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_GEEX9900_BP_HEUEXC(A) put(nRec, 43, A :6.6)
!-----------------------------------------------------------
! FIELD : NUMEXC 
#define S_GEEX9900_BP_NUMEXC peel(pick(nPos, 49, 7), " ")
#define R_GEEX9900_BP_NUMEXC(A) put(nRec, 49, A :7.7)
!-----------------------------------------------------------
! FIELD : CPTEXC 
#define S_GEEX9900_BP_CPTEXC peel(pick(nPos, 56, 8), " ")
#define R_GEEX9900_BP_CPTEXC(A) put(nRec, 56, A :8.8)
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
#define R_GEEX9999_BP_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9999_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9999_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9999_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9999_BP_SCOEXC(A) put(nRec, 4, A :2.2)
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
#define R_GEEX9999_BP_DATEXC(A) put(nRec, 35, A :8.8)
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_GEEX9999_BP_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_GEEX9999_BP_HEUEXC(A) put(nRec, 43, A :6.6)
!-----------------------------------------------------------
! FIELD : NUMEXC 
#define S_GEEX9999_BP_NUMEXC peel(pick(nPos, 49, 7), " ")
#define R_GEEX9999_BP_NUMEXC(A) put(nRec, 49, A :7.7)
!-----------------------------------------------------------
! FIELD : CPTEXC 
#define S_GEEX9999_BP_CPTEXC peel(pick(nPos, 56, 8), " ")
#define R_GEEX9999_BP_CPTEXC(A) put(nRec, 56, A :8.8)
!-----------------------------------------------------------
! FIELD : ERREXC 
#define S_GEEX9999_BP_ERREXC peel(pick(nPos, 64, 8), " ")
#define R_GEEX9999_BP_ERREXC(A) put(nRec, 64, A :8.8)
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

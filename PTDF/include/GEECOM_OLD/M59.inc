! File File1 : 
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
#define S_0000HEADER_NOMSYS peel(pick(nPos, 61, 1), " ")
#define R_0000HEADER_NOMSYS(A) put(nRec, 61, A :1.1)
!-----------------------------------------------------------
! FIELD : NOMDTQ 
#define S_0000HEADER_NOMDTQ peel(pick(nPos, 62, 1), " ")
#define R_0000HEADER_NOMDTQ(A) put(nRec, 62, A :1.1)
!-----------------------------------------------------------
! FIELD : BIBDTQ 
#define S_0000HEADER_BIBDTQ peel(pick(nPos, 63, 1), " ")
#define R_0000HEADER_BIBDTQ(A) put(nRec, 63, A :1.1)
!-----------------------------------------------------------
! FIELD : LIBEXC 
#define S_0000HEADER_LIBEXC peel(pick(nPos, 64, 1), " ")
#define R_0000HEADER_LIBEXC(A) put(nRec, 64, A :1.1)
!-----------------------------------------------------------
! FIELD : BIBDST 
#define S_0000HEADER_BIBDST peel(pick(nPos, 65, 1), " ")
#define R_0000HEADER_BIBDST(A) put(nRec, 65, A :1.1)
!-----------------------------------------------------------
! FIELD : PGMDST 
#define S_0000HEADER_PGMDST peel(pick(nPos, 66, 1), " ")
#define R_0000HEADER_PGMDST(A) put(nRec, 66, A :1.1)
!-----------------------------------------------------------
! FIELD : PARDST 
#define S_0000HEADER_PARDST peel(pick(nPos, 67, 1), " ")
#define R_0000HEADER_PARDST(A) put(nRec, 67, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_0000HEADER_CODACT peel(pick(nPos, 68, 1), " ")
#define R_0000HEADER_CODACT(A) put(nRec, 68, A :1.1)
!-----------------------------------------------------------
! FIELD : IGLSIT 
#define S_0000HEADER_IGLSIT peel(pick(nPos, 69, 1), " ")
#define R_0000HEADER_IGLSIT(A) put(nRec, 69, A :1.1)
!-----------------------------------------------------------
! FIELD : EDISIT 
#define S_0000HEADER_EDISIT peel(pick(nPos, 70, 1), " ")
#define R_0000HEADER_EDISIT(A) put(nRec, 70, A :1.1)
!-----------------------------------------------------------
! FIELD : IMAEXC 
#define S_0000HEADER_IMAEXC peel(pick(nPos, 71, 1), " ")
#define R_0000HEADER_IMAEXC(A) put(nRec, 71, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_0000HEADER_DISEXC peel(pick(nPos, 72, 1), " ")
#define R_0000HEADER_DISEXC(A) put(nRec, 72, A :1.1)
!-----------------------------------------------------------
!===========================================================
! Line : 5900 
!===========================================================
! FIELD : CODEXC 
#define S_5900_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_5900_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_5900_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_5900_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_5900_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_5900_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_5900_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_5900_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMTOU 
#define S_5900_NUMTOU peel(pick(nPos, 7, 8), " ")
#define R_5900_NUMTOU(A) put(nRec, 7, A :8.8)
!-----------------------------------------------------------
! FIELD : DATLIV 
#define S_5900_DATLIV peel(pick(nPos, 15, 8), " ")
#define R_5900_DATLIV(A) put(nRec, 15, A :8.8)
!-----------------------------------------------------------
! FIELD : TOULIV 
#define S_5900_TOULIV peel(pick(nPos, 23, 4), " ")
#define R_5900_TOULIV(A) put(nRec, 23, A :4.4)
!-----------------------------------------------------------
! FIELD : NSTLIV 
#define S_5900_NSTLIV peel(pick(nPos, 27, 2), " ")
#define R_5900_NSTLIV(A) put(nRec, 27, A :2.2)
!-----------------------------------------------------------
! FIELD : ETATOU 
#define S_5900_ETATOU peel(pick(nPos, 29, 2), " ")
#define R_5900_ETATOU(A) put(nRec, 29, A :2.2)
!-----------------------------------------------------------
! FIELD : DATPRP 
#define S_5900_DATPRP peel(pick(nPos, 31, 8), " ")
#define R_5900_DATPRP(A) put(nRec, 31, A :8.8)
!-----------------------------------------------------------
! FIELD : NUMVAG 
#define S_5900_NUMVAG peel(pick(nPos, 39, 8), " ")
#define R_5900_NUMVAG(A) put(nRec, 39, A :8.8)
!-----------------------------------------------------------
! FIELD : CUMCDE 
#define S_5900_CUMCDE peel(pick(nPos, 47, 4), " ")
#define R_5900_CUMCDE(A) put(nRec, 47, A :4.4)
!-----------------------------------------------------------
! FIELD : CUMPOI 
#define S_5900_CUMPOI peel(pick(nPos, 55, 11), " ")
#define R_5900_CUMPOI(A) put(nRec, 55, A :11.11)
!-----------------------------------------------------------
! FIELD : CUMVOL 
#define S_5900_CUMVOL peel(pick(nPos, 77, 11), " ")
#define R_5900_CUMVOL(A) put(nRec, 77, A :11.11)
!-----------------------------------------------------------
! FIELD : CUMCOL 
#define S_5900_CUMCOL peel(pick(nPos, 99, 7), " ")
#define R_5900_CUMCOL(A) put(nRec, 99, A :7.7)
!-----------------------------------------------------------
! FIELD : CUMLIG 
#define S_5900_CUMLIG peel(pick(nPos, 113, 4), " ")
#define R_5900_CUMLIG(A) put(nRec, 113, A :4.4)
!-----------------------------------------------------------
! FIELD : CUMPRD 
#define S_5900_CUMPRD peel(pick(nPos, 121, 9), " ")
#define R_5900_CUMPRD(A) put(nRec, 121, A :9.9)
!-----------------------------------------------------------
! FIELD : CUMPRP 
#define S_5900_CUMPRP peel(pick(nPos, 139, 9), " ")
#define R_5900_CUMPRP(A) put(nRec, 139, A :9.9)
!-----------------------------------------------------------
! FIELD : CUMEQP 
#define S_5900_CUMEQP peel(pick(nPos, 157, 9), " ")
#define R_5900_CUMEQP(A) put(nRec, 157, A :9.9)
!-----------------------------------------------------------
! FIELD : CODBAS 
#define S_5900_CODBAS peel(pick(nPos, 175, 3), " ")
#define R_5900_CODBAS(A) put(nRec, 175, A :3.3)
!-----------------------------------------------------------
! FIELD : DISEXC 
!                                         
#define S_5900_DISEXC peel(pick(nPos, 178, 79), " ")
#define R_5900_DISEXC(A) put(nRec, 178, A :79.79)
!-----------------------------------------------------------
!===========================================================
! Line : 5920 
!===========================================================
! FIELD : CODEXC 
!                        
#define S_5920_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_5920_CODEXC(A) put(nRec         , 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
!       
#define S_5920_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_5920_SEPEXC(A) put(nRec         , 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
!        
#define S_5920_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_5920_SCOEXC(A) put(nRec         , 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
!        
#define S_5920_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_5920_TRTEXC(A) put(nRec         , 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMSUP 
!        
#define S_5920_NUMSUP peel(pick(nPos, 7, 8), " ")
#define R_5920_NUMSUP(A) put(nRec         , 7, A :8.8)
!-----------------------------------------------------------
! FIELD : SNUSUP 
!        
#define S_5920_SNUSUP peel(pick(nPos, 15, 3), " ")
#define R_5920_SNUSUP(A) put(nRec         , 15, A :3.3)
!-----------------------------------------------------------
! FIELD : TYPSUP 
!        
#define S_5920_TYPSUP peel(pick(nPos, 18, 1), " ")
#define R_5920_TYPSUP(A) put(nRec         , 18, A :1.1)
!-----------------------------------------------------------
! FIELD : ETASUP 
!  
#define S_5920_ETASUP peel(pick(nPos, 19, 2), " ")
#define R_5920_ETASUP(A) put(nRec         , 19, A :2.2)
!-----------------------------------------------------------
! FIELD : LIBSUP 
!  
#define S_5920_LIBSUP peel(pick(nPos, 21, 30), " ")
#define R_5920_LIBSUP(A) put(nRec         , 21, A :30.30)
!-----------------------------------------------------------
! FIELD : CODEMB 
!  
#define S_5920_CODEMB peel(pick(nPos, 51, 3), " ")
#define R_5920_CODEMB(A) put(nRec         , 51, A :3.3)
!-----------------------------------------------------------
! FIELD : CODUOP 
!  
#define S_5920_CODUOP peel(pick(nPos, 54, 3), " ")
#define R_5920_CODUOP(A) put(nRec         , 54, A :3.3)
!-----------------------------------------------------------
! FIELD : EMBUOP 
!  
#define S_5920_EMBUOP peel(pick(nPos, 57, 1), " ")
#define R_5920_EMBUOP(A) put(nRec         , 57, A :1.1)
!-----------------------------------------------------------
! FIELD : EMBTOU 
!  
#define S_5920_EMBTOU peel(pick(nPos, 58, 1), " ")
#define R_5920_EMBTOU(A) put(nRec         , 58, A :1.1)
!-----------------------------------------------------------
! FIELD : TOPBDL 
!  
#define S_5920_TOPBDL peel(pick(nPos, 59, 1), " ")
#define R_5920_TOPBDL(A) put(nRec         , 59, A :1.1)
!-----------------------------------------------------------
! FIELD : AIGALC 
!  
#define S_5920_AIGALC peel(pick(nPos, 60, 1), " ")
#define R_5920_AIGALC(A) put(nRec         , 60, A :1.1)
!-----------------------------------------------------------
! FIELD : AIGPRI 
!  
#define S_5920_AIGPRI peel(pick(nPos, 61, 1), " ")
#define R_5920_AIGPRI(A) put(nRec         , 61, A :1.1)
!-----------------------------------------------------------
! FIELD : AIGPVA 
!  
#define S_5920_AIGPVA peel(pick(nPos, 62, 1), " ")
#define R_5920_AIGPVA(A) put(nRec         , 62, A :1.1)
!-----------------------------------------------------------
! FIELD : NBRPVA 
!  
#define S_5920_NBRPVA peel(pick(nPos, 63, 4), " ")
#define R_5920_NBRPVA(A) put(nRec         , 63, A :4.4)
!-----------------------------------------------------------
! FIELD : DATPRP 
#define S_5920_DATPRP peel(pick(nPos, 67, 8), " ")
#define R_5920_DATPRP(A) put(nRec         , 67, A :8.8)
!-----------------------------------------------------------
! FIELD : NUMVAG 
#define S_5920_NUMVAG peel(pick(nPos, 75, 8), " ")
#define R_5920_NUMVAG(A) put(nRec         , 75, A :8.8)
!-----------------------------------------------------------
! FIELD : NUMTOU 
#define S_5920_NUMTOU peel(pick(nPos, 83, 8), " ")
#define R_5920_NUMTOU(A) put(nRec         , 83, A :8.8)
!-----------------------------------------------------------
! FIELD : DATLIV 
#define S_5920_DATLIV peel(pick(nPos, 91, 8), " ")
#define R_5920_DATLIV(A) put(nRec         , 91, A :8.8)
!-----------------------------------------------------------
! FIELD : TOULIV 
#define S_5920_TOULIV peel(pick(nPos, 99, 4), " ")
#define R_5920_TOULIV(A) put(nRec         , 99, A :4.4)
!-----------------------------------------------------------
! FIELD : NSTLIV 
#define S_5920_NSTLIV peel(pick(nPos, 103, 2), " ")
#define R_5920_NSTLIV(A) put(nRec         , 103, A :2.2)
!-----------------------------------------------------------
! FIELD : ORDLIV 
#define S_5920_ORDLIV peel(pick(nPos, 105, 4), " ")
#define R_5920_ORDLIV(A) put(nRec         , 105, A :4.4)
!-----------------------------------------------------------
! FIELD : KAILIV 
#define S_5920_KAILIV peel(pick(nPos, 109, 3), " ")
#define R_5920_KAILIV(A) put(nRec         , 109, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_5920_NUMLIV peel(pick(nPos, 112, 8), " ")
#define R_5920_NUMLIV(A) put(nRec         , 112, A :8.8)
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_5920_SNULIV peel(pick(nPos, 120, 3), " ")
#define R_5920_SNULIV(A) put(nRec         , 120, A :3.3)
!-----------------------------------------------------------
! FIELD : CODACL 
#define S_5920_CODACL peel(pick(nPos, 123, 3), " ")
#define R_5920_CODACL(A) put(nRec         , 123, A :3.3)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_5920_REFLIV peel(pick(nPos, 126, 30), " ")
#define R_5920_REFLIV(A) put(nRec         , 126, A :30.30)
!-----------------------------------------------------------
! FIELD : ORICDE 
#define S_5920_ORICDE peel(pick(nPos, 156, 1), " ")
#define R_5920_ORICDE(A) put(nRec         , 156, A :1.1)
!-----------------------------------------------------------
! FIELD : CLILIV 
#define S_5920_CLILIV peel(pick(nPos, 157, 14), " ")
#define R_5920_CLILIV(A) put(nRec         , 157, A :14.14)
!-----------------------------------------------------------
! FIELD : NOMCLI 
#define S_5920_NOMCLI peel(pick(nPos, 171, 30), " ")
#define R_5920_NOMCLI(A) put(nRec         , 171, A :30.30)
!-----------------------------------------------------------
! FIELD : CUMPOI 
#define S_5920_CUMPOI peel(pick(nPos, 201, 11), " ")
#define R_5920_CUMPOI(A) put(nRec         , 201, A :11.11)
!-----------------------------------------------------------
! FIELD : CUMVOL 
#define S_5920_CUMVOL peel(pick(nPos, 212, 11), " ")
#define R_5920_CUMVOL(A) put(nRec         , 212, A :11.11)
!-----------------------------------------------------------
! FIELD : CUMCOL 
#define S_5920_CUMCOL peel(pick(nPos, 223, 7), " ")
#define R_5920_CUMCOL(A) put(nRec         , 223, A :7.7)
!-----------------------------------------------------------
! FIELD : CUMLIG 
#define S_5920_CUMLIG peel(pick(nPos, 230, 4), " ")
#define R_5920_CUMLIG(A) put(nRec         , 230, A :4.4)
!-----------------------------------------------------------
! FIELD : CUMPRT 
#define S_5920_CUMPRT peel(pick(nPos, 234, 9), " ")
#define R_5920_CUMPRT(A) put(nRec         , 234, A :9.9)
!-----------------------------------------------------------
! FIELD : CUMEQP 
#define S_5920_CUMEQP peel(pick(nPos, 243, 9), " ")
#define R_5920_CUMEQP(A) put(nRec         , 243, A :9.9)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_5920_DISEXC peel(pick(nPos, 252, 5), " ")
#define R_5920_DISEXC(A) put(nRec         , 252, A :5.5)
!-----------------------------------------------------------
!===========================================================
! Line : 5940 
!===========================================================
! FIELD : CODEXC 
!                     
#define S_5940_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_5940_CODEXC(A) put(nRec       , 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_5940_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_5940_SEPEXC(A) put(nRec       , 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_5940_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_5940_SCOEXC(A) put(nRec       , 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_5940_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_5940_TRTEXC(A) put(nRec       , 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMSUP 
#define S_5940_NUMSUP peel(pick(nPos, 7, 8), " ")
#define R_5940_NUMSUP(A) put(nRec       , 7, A :8.8)
!-----------------------------------------------------------
! FIELD : SNUSUP 
#define S_5940_SNUSUP peel(pick(nPos, 15, 3), " ")
#define R_5940_SNUSUP(A) put(nRec       , 15, A :3.3)
!-----------------------------------------------------------
! FIELD : SEQSUP 
#define S_5940_SEQSUP peel(pick(nPos, 18, 4), " ")
#define R_5940_SEQSUP(A) put(nRec       , 18, A :4.4)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_5940_NUMLIV peel(pick(nPos, 22, 8), " ")
#define R_5940_NUMLIV(A) put(nRec       , 22, A :8.8)
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_5940_SNULIV peel(pick(nPos, 30, 3), " ")
#define R_5940_SNULIV(A) put(nRec       , 30, A :3.3)
!-----------------------------------------------------------
! FIELD : SEQLIV 
#define S_5940_SEQLIV peel(pick(nPos, 33, 4), " ")
#define R_5940_SEQLIV(A) put(nRec       , 33, A :4.4)
!-----------------------------------------------------------
! FIELD : TOPLIV 
#define S_5940_TOPLIV peel(pick(nPos, 37, 1), " ")
#define R_5940_TOPLIV(A) put(nRec       , 37, A :1.1)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_5940_CODCLI peel(pick(nPos, 42, 14), " ")
#define R_5940_CODCLI(A) put(nRec       , 42, A :14.14)
!-----------------------------------------------------------
! FIELD : CLILIV 
#define S_5940_CLILIV peel(pick(nPos, 56, 14), " ")
#define R_5940_CLILIV(A) put(nRec       , 56, A :14.14)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_5940_CODACT peel(pick(nPos, 70, 3), " ")
#define R_5940_CODACT(A) put(nRec       , 70, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_5940_CODPRO peel(pick(nPos, 73, 17), " ")
#define R_5940_CODPRO(A) put(nRec       , 73, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_5940_VALPRO peel(pick(nPos, 90, 2), " ")
#define R_5940_VALPRO(A) put(nRec       , 90, A :2.2)
!-----------------------------------------------------------
! FIELD : VAPPRO 
#define S_5940_VAPPRO peel(pick(nPos, 92, 2), " ")
#define R_5940_VAPPRO(A) put(nRec       , 92, A :2.2)
!-----------------------------------------------------------
! FIELD : DS1PRO 
#define S_5940_DS1PRO peel(pick(nPos, 94, 30), " ")
#define R_5940_DS1PRO(A) put(nRec       , 94, A :30.30)
!-----------------------------------------------------------
! FIELD : DS2PRO 
#define S_5940_DS2PRO peel(pick(nPos, 124, 30), " ")
#define R_5940_DS2PRO(A) put(nRec       , 124, A :30.30)
!-----------------------------------------------------------
! FIELD : FAMPRO 
#define S_5940_FAMPRO peel(pick(nPos, 154, 10), " ")
#define R_5940_FAMPRO(A) put(nRec       , 154, A :10.10)
!-----------------------------------------------------------
! FIELD : ANAPRO 
#define S_5940_ANAPRO peel(pick(nPos, 164, 15), " ")
#define R_5940_ANAPRO(A) put(nRec       , 164, A :15.15)
!-----------------------------------------------------------
! FIELD : UNIPRO 
#define S_5940_UNIPRO peel(pick(nPos, 179, 3), " ")
#define R_5940_UNIPRO(A) put(nRec       , 179, A :3.3)
!-----------------------------------------------------------
! FIELD : MESPRO 
#define S_5940_MESPRO peel(pick(nPos, 182, 1), " ")
#define R_5940_MESPRO(A) put(nRec       , 182, A :1.1)
!-----------------------------------------------------------
! FIELD : PDBCOL 
#define S_5940_PDBCOL peel(pick(nPos, 183, 7), " ")
#define R_5940_PDBCOL(A) put(nRec       , 183, A :7.7)
!-----------------------------------------------------------
! FIELD : VOLCOL 
#define S_5940_VOLCOL peel(pick(nPos, 190, 7), " ")
#define R_5940_VOLCOL(A) put(nRec       , 190, A :7.7)
!-----------------------------------------------------------
! FIELD : COECOL 
#define S_5940_COECOL peel(pick(nPos, 197, 4), " ")
#define R_5940_COECOL(A) put(nRec       , 197, A :4.4)
!-----------------------------------------------------------
! FIELD : CODALC 
#define S_5940_CODALC peel(pick(nPos, 201, 4), " ")
#define R_5940_CODALC(A) put(nRec       , 201, A :4.4)
!-----------------------------------------------------------
! FIELD : DEGALC 
#define S_5940_DEGALC peel(pick(nPos, 205, 5), " ")
#define R_5940_DEGALC(A) put(nRec       , 205, A :5.5)
!-----------------------------------------------------------
! FIELD : VOLALC 
#define S_5940_VOLALC peel(pick(nPos, 210, 6), " ")
#define R_5940_VOLALC(A) put(nRec       , 210, A :6.6)
!-----------------------------------------------------------
! FIELD : CODEAP 
#define S_5940_CODEAP peel(pick(nPos, 216, 3), " ")
#define R_5940_CODEAP(A) put(nRec       , 216, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRN 
#define S_5940_CODPRN peel(pick(nPos, 219, 17), " ")
#define R_5940_CODPRN(A) put(nRec       , 219, A :17.17)
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_5940_EDIPRO peel(pick(nPos, 236, 17), " ")
#define R_5940_EDIPRO(A) put(nRec       , 236, A :17.17)
!-----------------------------------------------------------
! FIELD : UNICDE 
#define S_5940_UNICDE peel(pick(nPos, 253, 3), " ")
#define R_5940_UNICDE(A) put(nRec       , 253, A :3.3)
!-----------------------------------------------------------
! FIELD : CVTUVC 
#define S_5940_CVTUVC peel(pick(nPos, 256, 1), " ")
#define R_5940_CVTUVC(A) put(nRec       , 256, A :1.1)
!-----------------------------------------------------------
!===========================================================
! Line : 5941 
!===========================================================
! FIELD : CODEXC                 
#define S_5941_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_5941_CODEXC(A) put(nRec   , 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_5941_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_5941_SEPEXC(A) put(nRec   , 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_5941_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_5941_SCOEXC(A) put(nRec   , 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_5941_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_5941_TRTEXC(A) put(nRec   , 6, A :1.1)
!-----------------------------------------------------------
! FIELD : TYPSTK 
#define S_5941_TYPSTK peel(pick(nPos, 7, 1), " ")
#define R_5941_TYPSTK(A) put(nRec   , 7, A :1.1)
!-----------------------------------------------------------
! FIELD : AIGPRI 
#define S_5941_AIGPRI peel(pick(nPos, 8, 1), " ")
#define R_5941_AIGPRI(A) put(nRec   , 8, A :1.1)
!-----------------------------------------------------------
! FIELD : PRILIV 
#define S_5941_PRILIV peel(pick(nPos, 9, 9), " ")
#define R_5941_PRILIV(A) put(nRec   , 9, A :9.9)
!-----------------------------------------------------------
! FIELD : TYPOPE 
#define S_5941_TYPOPE peel(pick(nPos, 18, 1), " ")
#define R_5941_TYPOPE(A) put(nRec   , 18, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMOPE 
#define S_5941_NUMOPE peel(pick(nPos, 19, 6), " ")
#define R_5941_NUMOPE(A) put(nRec   , 19, A :6.6)
!-----------------------------------------------------------
! FIELD : MSGLIG 
#define S_5941_MSGLIG peel(pick(nPos, 25, 30), " ")
#define R_5941_MSGLIG(A) put(nRec   , 25, A :30.30)
!-----------------------------------------------------------
! FIELD : DIPLIV 
#define S_5941_DIPLIV peel(pick(nPos, 55, 50), " ")
#define R_5941_DIPLIV(A) put(nRec   , 55, A :50.50)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_5941_NLILIV peel(pick(nPos, 105, 5), " ")
#define R_5941_NLILIV(A) put(nRec   , 105, A :5.5)
!-----------------------------------------------------------
! FIELD : PRPPIC 
#define S_5941_PRPPIC peel(pick(nPos, 110, 1), " ")
#define R_5941_PRPPIC(A) put(nRec   , 110, A :1.1)
!-----------------------------------------------------------
! FIELD : ZONPIC 
#define S_5941_ZONPIC peel(pick(nPos, 111, 1), " ")
#define R_5941_ZONPIC(A) put(nRec   , 111, A :1.1)
!-----------------------------------------------------------
! FIELD : ALLPIC 
#define S_5941_ALLPIC peel(pick(nPos, 112, 3), " ")
#define R_5941_ALLPIC(A) put(nRec   , 112, A :3.3)
!-----------------------------------------------------------
! FIELD : DPLPIC 
#define S_5941_DPLPIC peel(pick(nPos, 115, 4), " ")
#define R_5941_DPLPIC(A) put(nRec   , 115, A :4.4)
!-----------------------------------------------------------
! FIELD : NIVPIC 
#define S_5941_NIVPIC peel(pick(nPos, 119, 2), " ")
#define R_5941_NIVPIC(A) put(nRec   , 119, A :2.2)
!-----------------------------------------------------------
! FIELD : NUMPIC 
#define S_5941_NUMPIC peel(pick(nPos, 121, 9), " ")
#define R_5941_NUMPIC(A) put(nRec   , 121, A :9.9)
!-----------------------------------------------------------
! FIELD : UVCCDE 
#define S_5941_UVCCDE peel(pick(nPos, 130, 9), " ")
#define R_5941_UVCCDE(A) put(nRec   , 130, A :9.9)
!-----------------------------------------------------------
! FIELD : UVCSRV 
#define S_5941_UVCSRV peel(pick(nPos, 139, 9), " ")
#define R_5941_UVCSRV(A) put(nRec   , 139, A :9.9)
!-----------------------------------------------------------
! FIELD : UVCLIV 
#define S_5941_UVCLIV peel(pick(nPos, 148, 9), " ")
#define R_5941_UVCLIV(A) put(nRec   , 148, A :9.9)
!-----------------------------------------------------------
! FIELD : PDNLIV 
#define S_5941_PDNLIV peel(pick(nPos, 157, 11), " ")
#define R_5941_PDNLIV(A) put(nRec   , 157, A :11.11)
!-----------------------------------------------------------
! FIELD : SPCPRO 
#define S_5941_SPCPRO peel(pick(nPos, 168, 4), " ")
#define R_5941_SPCPRO(A) put(nRec   , 168, A :4.4)
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_5941_PCBPRO peel(pick(nPos, 172, 5), " ")
#define R_5941_PCBPRO(A) put(nRec   , 172, A :5.5)
!-----------------------------------------------------------
! FIELD : COLCOU 
#define S_5941_COLCOU peel(pick(nPos, 177, 4), " ")
#define R_5941_COLCOU(A) put(nRec   , 177, A :4.4)
!-----------------------------------------------------------
! FIELD : COUPAL 
#define S_5941_COUPAL peel(pick(nPos, 181, 4), " ")
#define R_5941_COUPAL(A) put(nRec   , 181, A :4.4)
!-----------------------------------------------------------
! FIELD : GERPAL 
#define S_5941_GERPAL peel(pick(nPos, 185, 2), " ")
#define R_5941_GERPAL(A) put(nRec   , 185, A :2.2)
!-----------------------------------------------------------
! FIELD : GERHAU 
#define S_5941_GERHAU peel(pick(nPos, 187, 2), " ")
#define R_5941_GERHAU(A) put(nRec   , 187, A :2.2)
!-----------------------------------------------------------
! FIELD : NUMPAL 
#define S_5941_NUMPAL peel(pick(nPos, 189, 9), " ")
#define R_5941_NUMPAL(A) put(nRec   , 189, A :9.9)
!-----------------------------------------------------------
! FIELD : SNUPAL 
#define S_5941_SNUPAL peel(pick(nPos, 198, 2), " ")
#define R_5941_SNUPAL(A) put(nRec   , 198, A :2.2)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_5941_CODPAL peel(pick(nPos, 200, 18), " ")
#define R_5941_CODPAL(A) put(nRec   , 200, A :18.18)
!-----------------------------------------------------------
! FIELD : NUMLOT 
#define S_5941_NUMLOT peel(pick(nPos, 218, 9), " ")
#define R_5941_NUMLOT(A) put(nRec   , 218, A :9.9)
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_5941_CODLOT peel(pick(nPos, 227, 20), " ")
#define R_5941_CODLOT(A) put(nRec   , 227, A :20.20)
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_5941_DATFVI peel(pick(nPos, 247, 8), " ")
#define R_5941_DATFVI(A) put(nRec   , 247, A :8.8)
!-----------------------------------------------------------
! FIELD : DISEXC                                                   
#define S_5941_DISEXC peel(pick(nPos, 255, 2), " ")
#define R_5941_DISEXC(A) put(nRec   , 255, A :2.2)
!-----------------------------------------------------------
!===========================================================
! Line : 5942 
!===========================================================
! FIELD : CODEXC 
#define S_5942_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_5942_CODEXC(A) put(nRec   , 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
!               
#define S_5942_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_5942_SEPEXC(A) put(nRec   , 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_5942_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_5942_SCOEXC(A) put(nRec   , 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_5942_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_5942_TRTEXC(A) put(nRec   , 6, A :1.1)
!-----------------------------------------------------------
! FIELD : ZONSTS 
#define S_5942_ZONSTS peel(pick(nPos, 7, 1), " ")
#define R_5942_ZONSTS(A) put(nRec   , 7, A :1.1)
!-----------------------------------------------------------
! FIELD : ALLSTS 
#define S_5942_ALLSTS peel(pick(nPos, 8, 3), " ")
#define R_5942_ALLSTS(A) put(nRec   , 8, A :3.3)
!-----------------------------------------------------------
! FIELD : DPLSTS 
#define S_5942_DPLSTS peel(pick(nPos, 11, 4), " ")
#define R_5942_DPLSTS(A) put(nRec   , 11, A :4.4)
!-----------------------------------------------------------
! FIELD : NIVSTS 
#define S_5942_NIVSTS peel(pick(nPos, 15, 2), " ")
#define R_5942_NIVSTS(A) put(nRec   , 15, A :2.2)
!-----------------------------------------------------------
! FIELD : CODACL 
#define S_5942_CODACL peel(pick(nPos, 17, 3), " ")
#define R_5942_CODACL(A) put(nRec   , 17, A :3.3)
!-----------------------------------------------------------
! FIELD : MOTMVT 
#define S_5942_MOTMVT peel(pick(nPos, 20, 3), " ")
#define R_5942_MOTMVT(A) put(nRec   , 20, A :3.3)
!-----------------------------------------------------------
! FIELD : ZONORI 
#define S_5942_ZONORI peel(pick(nPos, 23, 1), " ")
#define R_5942_ZONORI(A) put(nRec   , 23, A :1.1)
!-----------------------------------------------------------
! FIELD : ALLORI 
#define S_5942_ALLORI peel(pick(nPos, 24, 3), " ")
#define R_5942_ALLORI(A) put(nRec   , 24, A :3.3)
!-----------------------------------------------------------
! FIELD : DPLORI 
#define S_5942_DPLORI peel(pick(nPos, 27, 4), " ")
#define R_5942_DPLORI(A) put(nRec   , 27, A :4.4)
!-----------------------------------------------------------
! FIELD : NIVORI 
#define S_5942_NIVORI peel(pick(nPos, 31, 2), " ")
#define R_5942_NIVORI(A) put(nRec   , 31, A :2.2)
!-----------------------------------------------------------
! FIELD : UVCMNQ 
#define S_5942_UVCMNQ peel(pick(nPos, 33, 9), " ")
#define R_5942_UVCMNQ(A) put(nRec   , 33, A :9.9)
!-----------------------------------------------------------
! FIELD : PDNUVC 
#define S_5942_PDNUVC peel(pick(nPos, 42, 7), " ")
#define R_5942_PDNUVC(A) put(nRec   , 42, A :7.7)
!-----------------------------------------------------------
! FIELD : NUMCLS 
#define S_5942_NUMCLS peel(pick(nPos, 49, 4), " ")
#define R_5942_NUMCLS(A) put(nRec   , 49, A :4.4)
!-----------------------------------------------------------
! FIELD : CODCLS 
#define S_5942_CODCLS peel(pick(nPos, 53, 3), " ")
#define R_5942_CODCLS(A) put(nRec   , 53, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMRPT 
#define S_5942_NUMRPT peel(pick(nPos, 56, 8), " ")
#define R_5942_NUMRPT(A) put(nRec   , 56, A :8.8)
!-----------------------------------------------------------
! FIELD : SNURPT 
#define S_5942_SNURPT peel(pick(nPos, 64, 3), " ")
#define R_5942_SNURPT(A) put(nRec   , 64, A :3.3)
!-----------------------------------------------------------
! FIELD : TOPRPT 
#define S_5942_TOPRPT peel(pick(nPos, 67, 1), " ")
#define R_5942_TOPRPT(A) put(nRec   , 67, A :1.1)
!-----------------------------------------------------------
! FIELD : COELOG 
#define S_5942_COELOG peel(pick(nPos, 68, 5), " ")
#define R_5942_COELOG(A) put(nRec   , 68, A :5.5)
!-----------------------------------------------------------
! FIELD : CNFLIG 
#define S_5942_CNFLIG peel(pick(nPos, 73, 1), " ")
#define R_5942_CNFLIG(A) put(nRec   , 73, A :1.1)
!-----------------------------------------------------------
! FIELD : UVCDIF 
#define S_5942_UVCDIF peel(pick(nPos, 74, 9), " ")
#define R_5942_UVCDIF(A) put(nRec   , 74, A :9.9)
!-----------------------------------------------------------
! FIELD : PDBUVC 
#define S_5942_PDBUVC peel(pick(nPos, 83, 7), " ")
#define R_5942_PDBUVC(A) put(nRec   , 83, A :7.7)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_5942_REFLIV peel(pick(nPos, 90, 30), " ")
#define R_5942_REFLIV(A) put(nRec   , 90, A :30.30)
!-----------------------------------------------------------
! FIELD : UVCEMB 
#define S_5942_UVCEMB peel(pick(nPos, 120, 9), " ")
#define R_5942_UVCEMB(A) put(nRec   , 120, A :9.9)
!-----------------------------------------------------------
! FIELD : MAJPOI 
#define S_5942_MAJPOI peel(pick(nPos, 129, 1), " ")
#define R_5942_MAJPOI(A) put(nRec   , 129, A :1.1)
!-----------------------------------------------------------
! FIELD : STKOUV 
#define S_5942_STKOUV peel(pick(nPos, 130, 1), " ")
#define R_5942_STKOUV(A) put(nRec   , 130, A :1.1)
!-----------------------------------------------------------
! FIELD : CODSUP 
#define S_5942_CODSUP peel(pick(nPos, 131, 2), " ")
#define R_5942_CODSUP(A) put(nRec   , 131, A :2.2)
!-----------------------------------------------------------
! FIELD : DATFAB 
#define S_5942_DATFAB peel(pick(nPos, 133, 8), " ")
#define R_5942_DATFAB(A) put(nRec   , 133, A :8.8)
!-----------------------------------------------------------
! FIELD : VLDDAT 
#define S_5942_VLDDAT peel(pick(nPos, 141, 1), " ")
#define R_5942_VLDDAT(A) put(nRec   , 141, A :1.1)
!-----------------------------------------------------------
! FIELD : TOPCOL 
#define S_5942_TOPCOL peel(pick(nPos, 142, 1), " ")
#define R_5942_TOPCOL(A) put(nRec   , 142, A :1.1)
!-----------------------------------------------------------
! FIELD : VTLSEQ 
#define S_5942_VTLSEQ peel(pick(nPos, 143, 5), " ")
#define R_5942_VTLSEQ(A) put(nRec   , 143, A :5.5)
!-----------------------------------------------------------
! FIELD : REFORI 
#define S_5942_REFORI peel(pick(nPos, 148, 30), " ")
#define R_5942_REFORI(A) put(nRec   , 148, A :30.30)
!-----------------------------------------------------------
! FIELD : CODOPE 
#define S_5942_CODOPE peel(pick(nPos, 178, 14), " ")
#define R_5942_CODOPE(A) put(nRec   , 178, A :14.14)
!-----------------------------------------------------------
! FIELD : NUMORI 
#define S_5942_NUMORI peel(pick(nPos, 192, 8), " ")
#define R_5942_NUMORI(A) put(nRec   , 192, A :8.8)
!-----------------------------------------------------------
! FIELD : SNUORI 
#define S_5942_SNUORI peel(pick(nPos, 200, 3), " ")
#define R_5942_SNUORI(A) put(nRec   , 200, A :3.3)
!-----------------------------------------------------------
! FIELD : DISEXC 
!      
#define S_5942_DISEXC peel(pick(nPos, 203, 54), " ")
#define R_5942_DISEXC(A) put(nRec   , 203, A :54.54)
!-----------------------------------------------------------
!===========================================================
! Line : 9900FOOTER 
!===========================================================
! FIELD : CODEXC 
#define S_9900FOOTER_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_9900FOOTER_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_9900FOOTER_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_9900FOOTER_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_9900FOOTER_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_9900FOOTER_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_9900FOOTER_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_9900FOOTER_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : EMTEXC 
#define S_9900FOOTER_EMTEXC peel(pick(nPos, 7, 14), " ")
#define R_9900FOOTER_EMTEXC(A) put(nRec, 7, A :14.14)
!-----------------------------------------------------------
! FIELD : RCTEXC 
#define S_9900FOOTER_RCTEXC peel(pick(nPos, 21, 14), " ")
#define R_9900FOOTER_RCTEXC(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXC 
#define S_9900FOOTER_DATEXC peel(pick(nPos, 35, 8), " ")
#define R_9900FOOTER_DATEXC(A) put(nRec, 35, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_9900FOOTER_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_9900FOOTER_HEUEXC(A) put(nRec, 43, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : NUMEXC 
#define S_9900FOOTER_NUMEXC peel(pick(nPos, 49, 7), " ")
#define R_9900FOOTER_NUMEXC(A) put(nRec, 49, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : CPTEXC 
#define S_9900FOOTER_CPTEXC peel(pick(nPos, 56, 8), " ")
#define R_9900FOOTER_CPTEXC(A) put(nRec, 56, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : NOMSYS 
#define S_9900FOOTER_NOMSYS peel(pick(nPos, 64, 8), " ")
#define R_9900FOOTER_NOMSYS(A) put(nRec, 64, A :8.8)
!-----------------------------------------------------------
! FIELD : NOMDTQ 
#define S_9900FOOTER_NOMDTQ peel(pick(nPos, 72, 10), " ")
#define R_9900FOOTER_NOMDTQ(A) put(nRec, 72, A :10.10)
!-----------------------------------------------------------
! FIELD : BIBDTQ 
#define S_9900FOOTER_BIBDTQ peel(pick(nPos, 82, 10), " ")
#define R_9900FOOTER_BIBDTQ(A) put(nRec, 82, A :10.10)
!-----------------------------------------------------------
! FIELD : IDEMSG 
#define S_9900FOOTER_IDEMSG peel(pick(nPos, 92, 30), " ")
#define R_9900FOOTER_IDEMSG(A) put(nRec, 92, A :30.30)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_9900FOOTER_DISEXC peel(pick(nPos, 122, 135), " ")
#define R_9900FOOTER_DISEXC(A) put(nRec, 122, A :135.135)
!-----------------------------------------------------------


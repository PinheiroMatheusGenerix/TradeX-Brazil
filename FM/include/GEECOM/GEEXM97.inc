! File GEEXM97 : 
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
! Line : GEEX9700 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9700_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9700_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9700_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9700_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9700_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9700_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9700_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9700_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMEXC 
#define S_GEEX9700_NUMEXC peel(pick(nPos, 7, 15), " ")
#define R_GEEX9700_NUMEXC(A) put(nRec, 7, build(number(A):R015.0))
!-----------------------------------------------------------
! FIELD : TYPEXC 
#define S_GEEX9700_TYPEXC peel(pick(nPos, 22, 3), " ")
#define R_GEEX9700_TYPEXC(A) put(nRec, 22, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMCDE 
#define S_GEEX9700_NUMCDE peel(pick(nPos, 25, 8), " ")
#define R_GEEX9700_NUMCDE(A) put(nRec, 25, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUCDE 
#define S_GEEX9700_SNUCDE peel(pick(nPos, 33, 3), " ")
#define R_GEEX9700_SNUCDE(A) put(nRec, 33, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFCDE 
#define S_GEEX9700_REFCDE peel(pick(nPos, 36, 30), " ")
#define R_GEEX9700_REFCDE(A) put(nRec, 36, A :30.30)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9700_CODACT peel(pick(nPos, 66, 3), " ")
#define R_GEEX9700_CODACT(A) put(nRec, 66, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX9700_CODCLI peel(pick(nPos, 69, 14), " ")
#define R_GEEX9700_CODCLI(A) put(nRec, 69, A :14.14)
!-----------------------------------------------------------
! FIELD : LNKRET 
#define S_GEEX9700_LNKRET peel(pick(nPos, 83, 2), " ")
#define R_GEEX9700_LNKRET(A) put(nRec, 83, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SYNMAN 
#define S_GEEX9700_SYNMAN peel(pick(nPos, 85, 1), " ")
#define R_GEEX9700_SYNMAN(A) put(nRec, 85, A :1.1)
!-----------------------------------------------------------
! FIELD : DBLCDE 
#define S_GEEX9700_DBLCDE peel(pick(nPos, 86, 1), " ")
#define R_GEEX9700_DBLCDE(A) put(nRec, 86, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9700_DISEXC peel(pick(nPos, 87, 170), " ")
#define R_GEEX9700_DISEXC(A) put(nRec, 87, A :170.170)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9740 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9740_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9740_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9740_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9740_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9740_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9740_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9740_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9740_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : EMTEXC 
#define S_GEEX9740_EMTEXC peel(pick(nPos, 7, 14), " ")
#define R_GEEX9740_EMTEXC(A) put(nRec, 7, A :14.14)
!-----------------------------------------------------------
! FIELD : RCTEXC 
#define S_GEEX9740_RCTEXC peel(pick(nPos, 21, 14), " ")
#define R_GEEX9740_RCTEXC(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXC 
#define S_GEEX9740_DATEXC peel(pick(nPos, 35, 8), " ")
#define R_GEEX9740_DATEXC(A) put(nRec, 35, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_GEEX9740_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_GEEX9740_HEUEXC(A) put(nRec, 43, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9740_CODACT peel(pick(nPos, 49, 3), " ")
#define R_GEEX9740_CODACT(A) put(nRec, 49, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX9740_NUMREC peel(pick(nPos, 52, 8), " ")
#define R_GEEX9740_NUMREC(A) put(nRec, 52, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX9740_SNUREC peel(pick(nPos, 60, 3), " ")
#define R_GEEX9740_SNUREC(A) put(nRec, 60, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX9740_REFREC peel(pick(nPos, 63, 30), " ")
#define R_GEEX9740_REFREC(A) put(nRec, 63, A :30.30)
!-----------------------------------------------------------
! FIELD : BLOREC 
#define S_GEEX9740_BLOREC peel(pick(nPos, 93, 1), " ")
#define R_GEEX9740_BLOREC(A) put(nRec, 93, A :1.1)
!-----------------------------------------------------------
! FIELD : ETAREC 
#define S_GEEX9740_ETAREC peel(pick(nPos, 94, 2), " ")
#define R_GEEX9740_ETAREC(A) put(nRec, 94, A :2.2)
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_GEEX9740_CODFOU peel(pick(nPos, 96, 14), " ")
#define R_GEEX9740_CODFOU(A) put(nRec, 96, A :14.14)
!-----------------------------------------------------------
! FIELD : CODTRE 
#define S_GEEX9740_CODTRE peel(pick(nPos, 110, 3), " ")
#define R_GEEX9740_CODTRE(A) put(nRec, 110, A :3.3)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX9740_VALRUB peel(pick(nPos, 113, 35), " ")
#define R_GEEX9740_VALRUB(A) put(nRec, 113, A :35.35)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9740_DISEXC peel(pick(nPos, 148, 109), " ")
#define R_GEEX9740_DISEXC(A) put(nRec, 148, A :109.109)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9741 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9741_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9741_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9741_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9741_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9741_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9741_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9741_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9741_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : EMTEXC 
#define S_GEEX9741_EMTEXC peel(pick(nPos, 7, 14), " ")
#define R_GEEX9741_EMTEXC(A) put(nRec, 7, A :14.14)
!-----------------------------------------------------------
! FIELD : RCTEXC 
#define S_GEEX9741_RCTEXC peel(pick(nPos, 21, 14), " ")
#define R_GEEX9741_RCTEXC(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXC 
#define S_GEEX9741_DATEXC peel(pick(nPos, 35, 8), " ")
#define R_GEEX9741_DATEXC(A) put(nRec, 35, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_GEEX9741_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_GEEX9741_HEUEXC(A) put(nRec, 43, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9741_CODACT peel(pick(nPos, 49, 3), " ")
#define R_GEEX9741_CODACT(A) put(nRec, 49, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX9741_NUMREC peel(pick(nPos, 52, 8), " ")
#define R_GEEX9741_NUMREC(A) put(nRec, 52, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX9741_SNUREC peel(pick(nPos, 60, 3), " ")
#define R_GEEX9741_SNUREC(A) put(nRec, 60, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX9741_REFREC peel(pick(nPos, 63, 30), " ")
#define R_GEEX9741_REFREC(A) put(nRec, 63, A :30.30)
!-----------------------------------------------------------
! FIELD : DTMREC 
#define S_GEEX9741_DTMREC peel(pick(nPos, 93, 8), " ")
#define R_GEEX9741_DTMREC(A) put(nRec, 93, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEMREC 
#define S_GEEX9741_HEMREC peel(pick(nPos, 101, 4), " ")
#define R_GEEX9741_HEMREC(A) put(nRec, 101, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9741_DISEXC peel(pick(nPos, 105, 152), " ")
#define R_GEEX9741_DISEXC(A) put(nRec, 105, A :152.152)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9742 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9742_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9742_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9742_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9742_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9742_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9742_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9742_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9742_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX9742_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX9742_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX9742_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX9742_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9742_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX9742_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX9742_REFREC peel(pick(nPos, 21, 30), " ")
#define R_GEEX9742_REFREC(A) put(nRec, 21, A :30.30)
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_GEEX9742_CODFOU peel(pick(nPos, 51, 14), " ")
#define R_GEEX9742_CODFOU(A) put(nRec, 51, A :14.14)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX9742_NLIREC peel(pick(nPos, 65, 5), " ")
#define R_GEEX9742_NLIREC(A) put(nRec, 65, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX9742_CODPRO peel(pick(nPos, 70, 17), " ")
#define R_GEEX9742_CODPRO(A) put(nRec, 70, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX9742_VALPRO peel(pick(nPos, 87, 2), " ")
#define R_GEEX9742_VALPRO(A) put(nRec, 87, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_GEEX9742_EDIPRO peel(pick(nPos, 89, 17), " ")
#define R_GEEX9742_EDIPRO(A) put(nRec, 89, A :17.17)
!-----------------------------------------------------------
! FIELD : UVCSOH 
#define S_GEEX9742_UVCSOH peel(pick(nPos, 106, 9), " ")
#define R_GEEX9742_UVCSOH(A) put(nRec, 106, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UVCREA 
#define S_GEEX9742_UVCREA peel(pick(nPos, 115, 9), " ")
#define R_GEEX9742_UVCREA(A) put(nRec, 115, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UVCMAJ 
#define S_GEEX9742_UVCMAJ peel(pick(nPos, 124, 9), " ")
#define R_GEEX9742_UVCMAJ(A) put(nRec, 124, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : SENMVT 
#define S_GEEX9742_SENMVT peel(pick(nPos, 133, 1), " ")
#define R_GEEX9742_SENMVT(A) put(nRec, 133, A :1.1)
!-----------------------------------------------------------
! FIELD : LNKRET 
#define S_GEEX9742_LNKRET peel(pick(nPos, 134, 2), " ")
#define R_GEEX9742_LNKRET(A) put(nRec, 134, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9742_DISEXC peel(pick(nPos, 136, 121), " ")
#define R_GEEX9742_DISEXC(A) put(nRec, 136, A :121.121)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9745 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9745_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9745_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9745_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9745_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9745_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9745_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9745_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9745_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX9745_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX9745_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX9745_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX9745_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9745_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX9745_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX9745_REFREC peel(pick(nPos, 21, 30), " ")
#define R_GEEX9745_REFREC(A) put(nRec, 21, A :30.30)
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_GEEX9745_CODFOU peel(pick(nPos, 51, 14), " ")
#define R_GEEX9745_CODFOU(A) put(nRec, 51, A :14.14)
!-----------------------------------------------------------
! FIELD : CODLDR 
#define S_GEEX9745_CODLDR peel(pick(nPos, 65, 3), " ")
#define R_GEEX9745_CODLDR(A) put(nRec, 65, A :3.3)
!-----------------------------------------------------------
! FIELD : CODTRE 
#define S_GEEX9745_CODTRE peel(pick(nPos, 68, 3), " ")
#define R_GEEX9745_CODTRE(A) put(nRec, 68, A :3.3)
!-----------------------------------------------------------
! FIELD : DTMREC 
#define S_GEEX9745_DTMREC peel(pick(nPos, 71, 8), " ")
#define R_GEEX9745_DTMREC(A) put(nRec, 71, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEMREC 
#define S_GEEX9745_HEMREC peel(pick(nPos, 79, 4), " ")
#define R_GEEX9745_HEMREC(A) put(nRec, 79, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_GEEX9745_CODTRA peel(pick(nPos, 83, 14), " ")
#define R_GEEX9745_CODTRA(A) put(nRec, 83, A :14.14)
!-----------------------------------------------------------
! FIELD : MSGREC 
#define S_GEEX9745_MSGREC peel(pick(nPos, 97, 60), " ")
#define R_GEEX9745_MSGREC(A) put(nRec, 97, A :60.60)
!-----------------------------------------------------------
! FIELD : LNKRET 
#define S_GEEX9745_LNKRET peel(pick(nPos, 157, 2), " ")
#define R_GEEX9745_LNKRET(A) put(nRec, 157, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9745_DISEXC peel(pick(nPos, 159, 98), " ")
#define R_GEEX9745_DISEXC(A) put(nRec, 159, A :98.98)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9750 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9750_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9750_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9750_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9750_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9750_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9750_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9750_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9750_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : EMTEXC 
#define S_GEEX9750_EMTEXC peel(pick(nPos, 7, 14), " ")
#define R_GEEX9750_EMTEXC(A) put(nRec, 7, A :14.14)
!-----------------------------------------------------------
! FIELD : RCTEXC 
#define S_GEEX9750_RCTEXC peel(pick(nPos, 21, 14), " ")
#define R_GEEX9750_RCTEXC(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXC 
#define S_GEEX9750_DATEXC peel(pick(nPos, 35, 8), " ")
#define R_GEEX9750_DATEXC(A) put(nRec, 35, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_GEEX9750_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_GEEX9750_HEUEXC(A) put(nRec, 43, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9750_CODACT peel(pick(nPos, 49, 3), " ")
#define R_GEEX9750_CODACT(A) put(nRec, 49, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX9750_NUMLIV peel(pick(nPos, 52, 8), " ")
#define R_GEEX9750_NUMLIV(A) put(nRec, 52, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX9750_SNULIV peel(pick(nPos, 60, 3), " ")
#define R_GEEX9750_SNULIV(A) put(nRec, 60, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX9750_REFLIV peel(pick(nPos, 63, 30), " ")
#define R_GEEX9750_REFLIV(A) put(nRec, 63, A :30.30)
!-----------------------------------------------------------
! FIELD : BLOLIV 
#define S_GEEX9750_BLOLIV peel(pick(nPos, 93, 1), " ")
#define R_GEEX9750_BLOLIV(A) put(nRec, 93, A :1.1)
!-----------------------------------------------------------
! FIELD : ETALIV 
#define S_GEEX9750_ETALIV peel(pick(nPos, 94, 2), " ")
#define R_GEEX9750_ETALIV(A) put(nRec, 94, A :2.2)
!-----------------------------------------------------------
! FIELD : NUMVAG 
#define S_GEEX9750_NUMVAG peel(pick(nPos, 96, 8), " ")
#define R_GEEX9750_NUMVAG(A) put(nRec, 96, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX9750_CODCLI peel(pick(nPos, 104, 14), " ")
#define R_GEEX9750_CODCLI(A) put(nRec, 104, A :14.14)
!-----------------------------------------------------------
! FIELD : CODACL 
#define S_GEEX9750_CODACL peel(pick(nPos, 118, 3), " ")
#define R_GEEX9750_CODACL(A) put(nRec, 118, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMTOU 
#define S_GEEX9750_NUMTOU peel(pick(nPos, 121, 8), " ")
#define R_GEEX9750_NUMTOU(A) put(nRec, 121, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : ANLVAG 
#define S_GEEX9750_ANLVAG peel(pick(nPos, 129, 1), " ")
#define R_GEEX9750_ANLVAG(A) put(nRec, 129, A :1.1)
!-----------------------------------------------------------
! FIELD : RUPTOT 
#define S_GEEX9750_RUPTOT peel(pick(nPos, 130, 1), " ")
#define R_GEEX9750_RUPTOT(A) put(nRec, 130, A :1.1)
!-----------------------------------------------------------
! FIELD : ACCRCP 
#define S_GEEX9750_ACCRCP peel(pick(nPos, 131, 1), " ")
#define R_GEEX9750_ACCRCP(A) put(nRec, 131, A :1.1)
!-----------------------------------------------------------
! FIELD : CODEMT 
#define S_GEEX9750_CODEMT peel(pick(nPos, 132, 14), " ")
#define R_GEEX9750_CODEMT(A) put(nRec, 132, A :14.14)
!-----------------------------------------------------------
! FIELD : KAILIV 
#define S_GEEX9750_KAILIV peel(pick(nPos, 146, 3), " ")
#define R_GEEX9750_KAILIV(A) put(nRec, 146, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODTLI 
#define S_GEEX9750_CODTLI peel(pick(nPos, 149, 3), " ")
#define R_GEEX9750_CODTLI(A) put(nRec, 149, A :3.3)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX9750_VALRUB peel(pick(nPos, 152, 35), " ")
#define R_GEEX9750_VALRUB(A) put(nRec, 152, A :35.35)
!-----------------------------------------------------------
! FIELD : TOULIV 
#define S_GEEX9750_TOULIV peel(pick(nPos, 187, 4), " ")
#define R_GEEX9750_TOULIV(A) put(nRec, 187, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : CRILIV 
#define S_GEEX9750_CRILIV peel(pick(nPos, 191, 20), " ")
#define R_GEEX9750_CRILIV(A) put(nRec, 191, A :20.20)
!-----------------------------------------------------------
! FIELD : CODOFT 
#define S_GEEX9750_CODOFT peel(pick(nPos, 211, 14), " ")
#define R_GEEX9750_CODOFT(A) put(nRec, 211, A :14.14)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9750_DISEXC peel(pick(nPos, 225, 32), " ")
#define R_GEEX9750_DISEXC(A) put(nRec, 225, A :32.32)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9751 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9751_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9751_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9751_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9751_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9751_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9751_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9751_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9751_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMTOU 
#define S_GEEX9751_NUMTOU peel(pick(nPos, 7, 8), " ")
#define R_GEEX9751_NUMTOU(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX9751_NUMLIV peel(pick(nPos, 15, 8), " ")
#define R_GEEX9751_NUMLIV(A) put(nRec, 15, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX9751_SNULIV peel(pick(nPos, 23, 3), " ")
#define R_GEEX9751_SNULIV(A) put(nRec, 23, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9751_DISEXC peel(pick(nPos, 26, 231), " ")
#define R_GEEX9751_DISEXC(A) put(nRec, 26, A :231.231)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9752 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9752_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9752_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9752_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9752_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9752_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9752_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX9752_NUMLIV peel(pick(nPos, 6, 8), " ")
#define R_GEEX9752_NUMLIV(A) put(nRec, 6, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX9752_SNULIV peel(pick(nPos, 14, 3), " ")
#define R_GEEX9752_SNULIV(A) put(nRec, 14, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9752_CODACT peel(pick(nPos, 17, 3), " ")
#define R_GEEX9752_CODACT(A) put(nRec, 17, A :3.3)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX9752_REFLIV peel(pick(nPos, 20, 30), " ")
#define R_GEEX9752_REFLIV(A) put(nRec, 20, A :30.30)
!-----------------------------------------------------------
! FIELD : CLILIV 
#define S_GEEX9752_CLILIV peel(pick(nPos, 50, 14), " ")
#define R_GEEX9752_CLILIV(A) put(nRec, 50, A :14.14)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_GEEX9752_NLILIV peel(pick(nPos, 64, 5), " ")
#define R_GEEX9752_NLILIV(A) put(nRec, 64, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX9752_CODPRO peel(pick(nPos, 69, 17), " ")
#define R_GEEX9752_CODPRO(A) put(nRec, 69, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX9752_VALPRO peel(pick(nPos, 86, 2), " ")
#define R_GEEX9752_VALPRO(A) put(nRec, 86, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_GEEX9752_EDIPRO peel(pick(nPos, 88, 17), " ")
#define R_GEEX9752_EDIPRO(A) put(nRec, 88, A :17.17)
!-----------------------------------------------------------
! FIELD : UVCSOH 
#define S_GEEX9752_UVCSOH peel(pick(nPos, 105, 9), " ")
#define R_GEEX9752_UVCSOH(A) put(nRec, 105, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UVCCDE 
#define S_GEEX9752_UVCCDE peel(pick(nPos, 114, 9), " ")
#define R_GEEX9752_UVCCDE(A) put(nRec, 114, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UVCMAJ 
#define S_GEEX9752_UVCMAJ peel(pick(nPos, 123, 9), " ")
#define R_GEEX9752_UVCMAJ(A) put(nRec, 123, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : SENMVT 
#define S_GEEX9752_SENMVT peel(pick(nPos, 132, 1), " ")
#define R_GEEX9752_SENMVT(A) put(nRec, 132, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACL 
#define S_GEEX9752_CODACL peel(pick(nPos, 133, 3), " ")
#define R_GEEX9752_CODACL(A) put(nRec, 133, A :3.3)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9752_DISEXC peel(pick(nPos, 136, 121), " ")
#define R_GEEX9752_DISEXC(A) put(nRec, 136, A :121.121)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9753 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9753_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9753_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9753_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9753_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9753_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9753_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9753_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9753_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9753_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX9753_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX9753_NUMLIV peel(pick(nPos, 10, 8), " ")
#define R_GEEX9753_NUMLIV(A) put(nRec, 10, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX9753_SNULIV peel(pick(nPos, 18, 3), " ")
#define R_GEEX9753_SNULIV(A) put(nRec, 18, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX9753_REFLIV peel(pick(nPos, 21, 30), " ")
#define R_GEEX9753_REFLIV(A) put(nRec, 21, A :30.30)
!-----------------------------------------------------------
! FIELD : DATLIV 
#define S_GEEX9753_DATLIV peel(pick(nPos, 51, 8), " ")
#define R_GEEX9753_DATLIV(A) put(nRec, 51, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CLILIV 
#define S_GEEX9753_CLILIV peel(pick(nPos, 59, 14), " ")
#define R_GEEX9753_CLILIV(A) put(nRec, 59, A :14.14)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX9753_CODCLI peel(pick(nPos, 73, 14), " ")
#define R_GEEX9753_CODCLI(A) put(nRec, 73, A :14.14)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_GEEX9753_NLILIV peel(pick(nPos, 87, 5), " ")
#define R_GEEX9753_NLILIV(A) put(nRec, 87, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX9753_CODPRO peel(pick(nPos, 92, 17), " ")
#define R_GEEX9753_CODPRO(A) put(nRec, 92, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX9753_VALPRO peel(pick(nPos, 109, 2), " ")
#define R_GEEX9753_VALPRO(A) put(nRec, 109, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX9753_PCBPRO peel(pick(nPos, 111, 5), " ")
#define R_GEEX9753_PCBPRO(A) put(nRec, 111, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_GEEX9753_EDIPRO peel(pick(nPos, 116, 17), " ")
#define R_GEEX9753_EDIPRO(A) put(nRec, 116, A :17.17)
!-----------------------------------------------------------
! FIELD : UVCCDE 
#define S_GEEX9753_UVCCDE peel(pick(nPos, 133, 9), " ")
#define R_GEEX9753_UVCCDE(A) put(nRec, 133, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UVCSRV 
#define S_GEEX9753_UVCSRV peel(pick(nPos, 142, 9), " ")
#define R_GEEX9753_UVCSRV(A) put(nRec, 142, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : SENMVT 
#define S_GEEX9753_SENMVT peel(pick(nPos, 151, 1), " ")
#define R_GEEX9753_SENMVT(A) put(nRec, 151, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9753_DISEXC peel(pick(nPos, 152, 105), " ")
#define R_GEEX9753_DISEXC(A) put(nRec, 152, A :105.105)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9755 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9755_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9755_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9755_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9755_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9755_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9755_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9755_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9755_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX9755_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX9755_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX9755_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX9755_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9755_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX9755_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX9755_REFLIV peel(pick(nPos, 21, 30), " ")
#define R_GEEX9755_REFLIV(A) put(nRec, 21, A :30.30)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX9755_CODCLI peel(pick(nPos, 51, 14), " ")
#define R_GEEX9755_CODCLI(A) put(nRec, 51, A :14.14)
!-----------------------------------------------------------
! FIELD : CLILIV 
#define S_GEEX9755_CLILIV peel(pick(nPos, 65, 14), " ")
#define R_GEEX9755_CLILIV(A) put(nRec, 65, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXP 
#define S_GEEX9755_DATEXP peel(pick(nPos, 79, 8), " ")
#define R_GEEX9755_DATEXP(A) put(nRec, 79, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXP 
#define S_GEEX9755_HEUEXP peel(pick(nPos, 87, 6), " ")
#define R_GEEX9755_HEUEXP(A) put(nRec, 87, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : DATPTD 
#define S_GEEX9755_DATPTD peel(pick(nPos, 93, 8), " ")
#define R_GEEX9755_DATPTD(A) put(nRec, 93, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUPTD 
#define S_GEEX9755_HEUPTD peel(pick(nPos, 101, 6), " ")
#define R_GEEX9755_HEUPTD(A) put(nRec, 101, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : LNKRET 
#define S_GEEX9755_LNKRET peel(pick(nPos, 107, 2), " ")
#define R_GEEX9755_LNKRET(A) put(nRec, 107, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : DATLIV 
#define S_GEEX9755_DATLIV peel(pick(nPos, 109, 8), " ")
#define R_GEEX9755_DATLIV(A) put(nRec, 109, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEULIV 
#define S_GEEX9755_HEULIV peel(pick(nPos, 117, 6), " ")
#define R_GEEX9755_HEULIV(A) put(nRec, 117, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX9755_VALRUB peel(pick(nPos, 123, 35), " ")
#define R_GEEX9755_VALRUB(A) put(nRec, 123, A :35.35)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9755_DISEXC peel(pick(nPos, 158, 99), " ")
#define R_GEEX9755_DISEXC(A) put(nRec, 158, A :99.99)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9760 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9760_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9760_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9760_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9760_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9760_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9760_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9760_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9760_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : EMTEXC 
#define S_GEEX9760_EMTEXC peel(pick(nPos, 7, 14), " ")
#define R_GEEX9760_EMTEXC(A) put(nRec, 7, A :14.14)
!-----------------------------------------------------------
! FIELD : RCTEXC 
#define S_GEEX9760_RCTEXC peel(pick(nPos, 21, 14), " ")
#define R_GEEX9760_RCTEXC(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXC 
#define S_GEEX9760_DATEXC peel(pick(nPos, 35, 8), " ")
#define R_GEEX9760_DATEXC(A) put(nRec, 35, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_GEEX9760_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_GEEX9760_HEUEXC(A) put(nRec, 43, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9760_CODACT peel(pick(nPos, 49, 3), " ")
#define R_GEEX9760_CODACT(A) put(nRec, 49, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX9760_NUMLIV peel(pick(nPos, 52, 8), " ")
#define R_GEEX9760_NUMLIV(A) put(nRec, 52, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX9760_SNULIV peel(pick(nPos, 60, 3), " ")
#define R_GEEX9760_SNULIV(A) put(nRec, 60, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX9760_REFLIV peel(pick(nPos, 63, 30), " ")
#define R_GEEX9760_REFLIV(A) put(nRec, 63, A :30.30)
!-----------------------------------------------------------
! FIELD : ETACHT 
#define S_GEEX9760_ETACHT peel(pick(nPos, 93, 2), " ")
#define R_GEEX9760_ETACHT(A) put(nRec, 93, A :2.2)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX9760_CODCLI peel(pick(nPos, 95, 14), " ")
#define R_GEEX9760_CODCLI(A) put(nRec, 95, A :14.14)
!-----------------------------------------------------------
! FIELD : TOULIV 
#define S_GEEX9760_TOULIV peel(pick(nPos, 109, 4), " ")
#define R_GEEX9760_TOULIV(A) put(nRec, 109, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : NUMSUP 
#define S_GEEX9760_NUMSUP peel(pick(nPos, 113, 8), " ")
#define R_GEEX9760_NUMSUP(A) put(nRec, 113, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUSUP 
#define S_GEEX9760_SNUSUP peel(pick(nPos, 121, 3), " ")
#define R_GEEX9760_SNUSUP(A) put(nRec, 121, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : NUMTOU 
#define S_GEEX9760_NUMTOU peel(pick(nPos, 124, 8), " ")
#define R_GEEX9760_NUMTOU(A) put(nRec, 124, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX9760_VALRUB peel(pick(nPos, 132, 35), " ")
#define R_GEEX9760_VALRUB(A) put(nRec, 132, A :35.35)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9760_DISEXC peel(pick(nPos, 167, 90), " ")
#define R_GEEX9760_DISEXC(A) put(nRec, 167, A :90.90)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9770 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9770_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9770_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9770_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9770_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9770_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9770_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9770_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9770_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : EMTEXC 
#define S_GEEX9770_EMTEXC peel(pick(nPos, 7, 14), " ")
#define R_GEEX9770_EMTEXC(A) put(nRec, 7, A :14.14)
!-----------------------------------------------------------
! FIELD : RCTEXC 
#define S_GEEX9770_RCTEXC peel(pick(nPos, 21, 14), " ")
#define R_GEEX9770_RCTEXC(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXC 
#define S_GEEX9770_DATEXC peel(pick(nPos, 35, 8), " ")
#define R_GEEX9770_DATEXC(A) put(nRec, 35, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_GEEX9770_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_GEEX9770_HEUEXC(A) put(nRec, 43, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9770_CODACT peel(pick(nPos, 49, 3), " ")
#define R_GEEX9770_CODACT(A) put(nRec, 49, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX9770_NUMLIV peel(pick(nPos, 52, 8), " ")
#define R_GEEX9770_NUMLIV(A) put(nRec, 52, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX9770_SNULIV peel(pick(nPos, 60, 3), " ")
#define R_GEEX9770_SNULIV(A) put(nRec, 60, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX9770_REFLIV peel(pick(nPos, 63, 30), " ")
#define R_GEEX9770_REFLIV(A) put(nRec, 63, A :30.30)
!-----------------------------------------------------------
! FIELD : NUMVAG 
#define S_GEEX9770_NUMVAG peel(pick(nPos, 93, 8), " ")
#define R_GEEX9770_NUMVAG(A) put(nRec, 93, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX9770_CODCLI peel(pick(nPos, 101, 14), " ")
#define R_GEEX9770_CODCLI(A) put(nRec, 101, A :14.14)
!-----------------------------------------------------------
! FIELD : NUMTOU 
#define S_GEEX9770_NUMTOU peel(pick(nPos, 115, 8), " ")
#define R_GEEX9770_NUMTOU(A) put(nRec, 115, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9770_DISEXC peel(pick(nPos, 123, 134), " ")
#define R_GEEX9770_DISEXC(A) put(nRec, 123, A :134.134)
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

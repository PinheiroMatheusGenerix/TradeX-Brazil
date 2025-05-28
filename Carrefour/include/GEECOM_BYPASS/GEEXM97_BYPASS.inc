! File GEEXM97 : 
!===========================================================
! Line : GEEX0000 
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
! Line : GEEX9700 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9700_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9700_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9700_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9700_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9700_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9700_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9700_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9700_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMEXC 
#define S_GEEX9700_BP_NUMEXC peel(pick(nPos, 7, 15), " ")
#define R_GEEX9700_BP_NUMEXC(A) put(nRec, 7, build(number(A):R015.0))
!-----------------------------------------------------------
! FIELD : TYPEXC 
#define S_GEEX9700_BP_TYPEXC peel(pick(nPos, 22, 3), " ")
#define R_GEEX9700_BP_TYPEXC(A) put(nRec, 22, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMCDE 
#define S_GEEX9700_BP_NUMCDE peel(pick(nPos, 25, 8), " ")
#define R_GEEX9700_BP_NUMCDE(A) put(nRec, 25, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUCDE 
#define S_GEEX9700_BP_SNUCDE peel(pick(nPos, 33, 3), " ")
#define R_GEEX9700_BP_SNUCDE(A) put(nRec, 33, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFCDE 
#define S_GEEX9700_BP_REFCDE peel(pick(nPos, 36, 30), " ")
#define R_GEEX9700_BP_REFCDE(A) put(nRec, 36, A :30.30)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9700_BP_CODACT peel(pick(nPos, 66, 3), " ")
#define R_GEEX9700_BP_CODACT(A) put(nRec, 66, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX9700_BP_CODCLI peel(pick(nPos, 69, 14), " ")
#define R_GEEX9700_BP_CODCLI(A) put(nRec, 69, A :14.14)
!-----------------------------------------------------------
! FIELD : LNKRET 
#define S_GEEX9700_BP_LNKRET peel(pick(nPos, 83, 2), " ")
#define R_GEEX9700_BP_LNKRET(A) put(nRec, 83, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SYNMAN 
#define S_GEEX9700_BP_SYNMAN peel(pick(nPos, 85, 1), " ")
#define R_GEEX9700_BP_SYNMAN(A) put(nRec, 85, A :1.1)
!-----------------------------------------------------------
! FIELD : DBLCDE 
#define S_GEEX9700_BP_DBLCDE peel(pick(nPos, 86, 1), " ")
#define R_GEEX9700_BP_DBLCDE(A) put(nRec, 86, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9700_BP_DISEXC peel(pick(nPos, 87, 170), " ")
#define R_GEEX9700_BP_DISEXC(A) put(nRec, 87, A :170.170)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9740 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9740_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9740_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9740_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9740_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9740_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9740_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9740_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9740_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : EMTEXC 
#define S_GEEX9740_BP_EMTEXC peel(pick(nPos, 7, 14), " ")
#define R_GEEX9740_BP_EMTEXC(A) put(nRec, 7, A :14.14)
!-----------------------------------------------------------
! FIELD : RCTEXC 
#define S_GEEX9740_BP_RCTEXC peel(pick(nPos, 21, 14), " ")
#define R_GEEX9740_BP_RCTEXC(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXC 
#define S_GEEX9740_BP_DATEXC peel(pick(nPos, 35, 8), " ")
#define R_GEEX9740_BP_DATEXC(A) put(nRec, 35, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_GEEX9740_BP_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_GEEX9740_BP_HEUEXC(A) put(nRec, 43, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9740_BP_CODACT peel(pick(nPos, 49, 3), " ")
#define R_GEEX9740_BP_CODACT(A) put(nRec, 49, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX9740_BP_NUMREC peel(pick(nPos, 52, 8), " ")
#define R_GEEX9740_BP_NUMREC(A) put(nRec, 52, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX9740_BP_SNUREC peel(pick(nPos, 60, 3), " ")
#define R_GEEX9740_BP_SNUREC(A) put(nRec, 60, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX9740_BP_REFREC peel(pick(nPos, 63, 30), " ")
#define R_GEEX9740_BP_REFREC(A) put(nRec, 63, A :30.30)
!-----------------------------------------------------------
! FIELD : BLOREC 
#define S_GEEX9740_BP_BLOREC peel(pick(nPos, 93, 1), " ")
#define R_GEEX9740_BP_BLOREC(A) put(nRec, 93, A :1.1)
!-----------------------------------------------------------
! FIELD : ETAREC 
#define S_GEEX9740_BP_ETAREC peel(pick(nPos, 94, 2), " ")
#define R_GEEX9740_BP_ETAREC(A) put(nRec, 94, A :2.2)
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_GEEX9740_BP_CODFOU peel(pick(nPos, 96, 14), " ")
#define R_GEEX9740_BP_CODFOU(A) put(nRec, 96, A :14.14)
!-----------------------------------------------------------
! FIELD : CODTRE 
#define S_GEEX9740_BP_CODTRE peel(pick(nPos, 110, 3), " ")
#define R_GEEX9740_BP_CODTRE(A) put(nRec, 110, A :3.3)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX9740_BP_VALRUB peel(pick(nPos, 113, 35), " ")
#define R_GEEX9740_BP_VALRUB(A) put(nRec, 113, A :35.35)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9740_BP_DISEXC peel(pick(nPos, 148, 109), " ")
#define R_GEEX9740_BP_DISEXC(A) put(nRec, 148, A :109.109)
!-----------------------------------------------------------
! FIELD : KAIREC
#define S_GEEX9740_BP_KAIREC peel(pick(nPos, 257, 3), " ")
#define R_GEEX9740_BP_KAIREC(A) put(nRec, 257, A :3.3)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9741 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9741_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9741_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9741_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9741_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9741_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9741_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9741_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9741_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : EMTEXC 
#define S_GEEX9741_BP_EMTEXC peel(pick(nPos, 7, 14), " ")
#define R_GEEX9741_BP_EMTEXC(A) put(nRec, 7, A :14.14)
!-----------------------------------------------------------
! FIELD : RCTEXC 
#define S_GEEX9741_BP_RCTEXC peel(pick(nPos, 21, 14), " ")
#define R_GEEX9741_BP_RCTEXC(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXC 
#define S_GEEX9741_BP_DATEXC peel(pick(nPos, 35, 8), " ")
#define R_GEEX9741_BP_DATEXC(A) put(nRec, 35, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_GEEX9741_BP_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_GEEX9741_BP_HEUEXC(A) put(nRec, 43, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9741_BP_CODACT peel(pick(nPos, 49, 3), " ")
#define R_GEEX9741_BP_CODACT(A) put(nRec, 49, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX9741_BP_NUMREC peel(pick(nPos, 52, 8), " ")
#define R_GEEX9741_BP_NUMREC(A) put(nRec, 52, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX9741_BP_SNUREC peel(pick(nPos, 60, 3), " ")
#define R_GEEX9741_BP_SNUREC(A) put(nRec, 60, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX9741_BP_REFREC peel(pick(nPos, 63, 30), " ")
#define R_GEEX9741_BP_REFREC(A) put(nRec, 63, A :30.30)
!-----------------------------------------------------------
! FIELD : DTMREC 
#define S_GEEX9741_BP_DTMREC peel(pick(nPos, 93, 8), " ")
#define R_GEEX9741_BP_DTMREC(A) put(nRec, 93, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEMREC 
#define S_GEEX9741_BP_HEMREC peel(pick(nPos, 101, 4), " ")
#define R_GEEX9741_BP_HEMREC(A) put(nRec, 101, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9741_BP_DISEXC peel(pick(nPos, 105, 152), " ")
#define R_GEEX9741_BP_DISEXC(A) put(nRec, 105, A :152.152)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9742 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9742_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9742_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9742_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9742_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9742_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9742_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9742_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9742_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX9742_BP_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX9742_BP_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX9742_BP_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX9742_BP_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9742_BP_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX9742_BP_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX9742_BP_REFREC peel(pick(nPos, 21, 30), " ")
#define R_GEEX9742_BP_REFREC(A) put(nRec, 21, A :30.30)
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_GEEX9742_BP_CODFOU peel(pick(nPos, 51, 14), " ")
#define R_GEEX9742_BP_CODFOU(A) put(nRec, 51, A :14.14)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_GEEX9742_BP_NLIREC peel(pick(nPos, 65, 5), " ")
#define R_GEEX9742_BP_NLIREC(A) put(nRec, 65, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX9742_BP_CODPRO peel(pick(nPos, 70, 17), " ")
#define R_GEEX9742_BP_CODPRO(A) put(nRec, 70, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX9742_BP_VALPRO peel(pick(nPos, 87, 2), " ")
#define R_GEEX9742_BP_VALPRO(A) put(nRec, 87, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_GEEX9742_BP_EDIPRO peel(pick(nPos, 89, 17), " ")
#define R_GEEX9742_BP_EDIPRO(A) put(nRec, 89, A :17.17)
!-----------------------------------------------------------
! FIELD : UVCSOH 
#define S_GEEX9742_BP_UVCSOH peel(pick(nPos, 106, 9), " ")
#define R_GEEX9742_BP_UVCSOH(A) put(nRec, 106, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UVCREA 
#define S_GEEX9742_BP_UVCREA peel(pick(nPos, 115, 9), " ")
#define R_GEEX9742_BP_UVCREA(A) put(nRec, 115, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UVCMAJ 
#define S_GEEX9742_BP_UVCMAJ peel(pick(nPos, 124, 9), " ")
#define R_GEEX9742_BP_UVCMAJ(A) put(nRec, 124, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : SENMVT 
#define S_GEEX9742_BP_SENMVT peel(pick(nPos, 133, 1), " ")
#define R_GEEX9742_BP_SENMVT(A) put(nRec, 133, A :1.1)
!-----------------------------------------------------------
! FIELD : LNKRET 
#define S_GEEX9742_BP_LNKRET peel(pick(nPos, 134, 2), " ")
#define R_GEEX9742_BP_LNKRET(A) put(nRec, 134, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9742_BP_DISEXC peel(pick(nPos, 136, 121), " ")
#define R_GEEX9742_BP_DISEXC(A) put(nRec, 136, A :121.121)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9745 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9745_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9745_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9745_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9745_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9745_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9745_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9745_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9745_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_GEEX9745_BP_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX9745_BP_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_GEEX9745_BP_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX9745_BP_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9745_BP_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX9745_BP_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_GEEX9745_BP_REFREC peel(pick(nPos, 21, 30), " ")
#define R_GEEX9745_BP_REFREC(A) put(nRec, 21, A :30.30)
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_GEEX9745_BP_CODFOU peel(pick(nPos, 51, 14), " ")
#define R_GEEX9745_BP_CODFOU(A) put(nRec, 51, A :14.14)
!-----------------------------------------------------------
! FIELD : CODLDR 
#define S_GEEX9745_BP_CODLDR peel(pick(nPos, 65, 3), " ")
#define R_GEEX9745_BP_CODLDR(A) put(nRec, 65, A :3.3)
!-----------------------------------------------------------
! FIELD : CODTRE 
#define S_GEEX9745_BP_CODTRE peel(pick(nPos, 68, 3), " ")
#define R_GEEX9745_BP_CODTRE(A) put(nRec, 68, A :3.3)
!-----------------------------------------------------------
! FIELD : DTMREC 
#define S_GEEX9745_BP_DTMREC peel(pick(nPos, 71, 8), " ")
#define R_GEEX9745_BP_DTMREC(A) put(nRec, 71, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEMREC 
#define S_GEEX9745_BP_HEMREC peel(pick(nPos, 79, 4), " ")
#define R_GEEX9745_BP_HEMREC(A) put(nRec, 79, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_GEEX9745_BP_CODTRA peel(pick(nPos, 83, 14), " ")
#define R_GEEX9745_BP_CODTRA(A) put(nRec, 83, A :14.14)
!-----------------------------------------------------------
! FIELD : MSGREC 
#define S_GEEX9745_BP_MSGREC peel(pick(nPos, 97, 60), " ")
#define R_GEEX9745_BP_MSGREC(A) put(nRec, 97, A :60.60)
!-----------------------------------------------------------
! FIELD : LNKRET 
#define S_GEEX9745_BP_LNKRET peel(pick(nPos, 157, 2), " ")
#define R_GEEX9745_BP_LNKRET(A) put(nRec, 157, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9745_BP_DISEXC peel(pick(nPos, 159, 98), " ")
#define R_GEEX9745_BP_DISEXC(A) put(nRec, 159, A :98.98)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9750 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9750_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9750_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9750_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9750_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9750_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9750_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9750_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9750_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : EMTEXC 
#define S_GEEX9750_BP_EMTEXC peel(pick(nPos, 7, 14), " ")
#define R_GEEX9750_BP_EMTEXC(A) put(nRec, 7, A :14.14)
!-----------------------------------------------------------
! FIELD : RCTEXC 
#define S_GEEX9750_BP_RCTEXC peel(pick(nPos, 21, 14), " ")
#define R_GEEX9750_BP_RCTEXC(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXC 
#define S_GEEX9750_BP_DATEXC peel(pick(nPos, 35, 8), " ")
#define R_GEEX9750_BP_DATEXC(A) put(nRec, 35, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_GEEX9750_BP_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_GEEX9750_BP_HEUEXC(A) put(nRec, 43, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9750_BP_CODACT peel(pick(nPos, 49, 3), " ")
#define R_GEEX9750_BP_CODACT(A) put(nRec, 49, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX9750_BP_NUMLIV peel(pick(nPos, 52, 8), " ")
#define R_GEEX9750_BP_NUMLIV(A) put(nRec, 52, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX9750_BP_SNULIV peel(pick(nPos, 60, 3), " ")
#define R_GEEX9750_BP_SNULIV(A) put(nRec, 60, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX9750_BP_REFLIV peel(pick(nPos, 63, 30), " ")
#define R_GEEX9750_BP_REFLIV(A) put(nRec, 63, A :30.30)
!-----------------------------------------------------------
! FIELD : BLOLIV 
#define S_GEEX9750_BP_BLOLIV peel(pick(nPos, 93, 1), " ")
#define R_GEEX9750_BP_BLOLIV(A) put(nRec, 93, A :1.1)
!-----------------------------------------------------------
! FIELD : ETALIV 
#define S_GEEX9750_BP_ETALIV peel(pick(nPos, 94, 2), " ")
#define R_GEEX9750_BP_ETALIV(A) put(nRec, 94, A :2.2)
!-----------------------------------------------------------
! FIELD : NUMVAG 
#define S_GEEX9750_BP_NUMVAG peel(pick(nPos, 96, 8), " ")
#define R_GEEX9750_BP_NUMVAG(A) put(nRec, 96, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX9750_BP_CODCLI peel(pick(nPos, 104, 14), " ")
#define R_GEEX9750_BP_CODCLI(A) put(nRec, 104, A :14.14)
!-----------------------------------------------------------
! FIELD : CODACL 
#define S_GEEX9750_BP_CODACL peel(pick(nPos, 118, 3), " ")
#define R_GEEX9750_BP_CODACL(A) put(nRec, 118, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMTOU 
#define S_GEEX9750_BP_NUMTOU peel(pick(nPos, 121, 8), " ")
#define R_GEEX9750_BP_NUMTOU(A) put(nRec, 121, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : ANLVAG 
#define S_GEEX9750_BP_ANLVAG peel(pick(nPos, 129, 1), " ")
#define R_GEEX9750_BP_ANLVAG(A) put(nRec, 129, A :1.1)
!-----------------------------------------------------------
! FIELD : RUPTOT 
#define S_GEEX9750_BP_RUPTOT peel(pick(nPos, 130, 1), " ")
#define R_GEEX9750_BP_RUPTOT(A) put(nRec, 130, A :1.1)
!-----------------------------------------------------------
! FIELD : ACCRCP 
#define S_GEEX9750_BP_ACCRCP peel(pick(nPos, 131, 1), " ")
#define R_GEEX9750_BP_ACCRCP(A) put(nRec, 131, A :1.1)
!-----------------------------------------------------------
! FIELD : CODEMT 
#define S_GEEX9750_BP_CODEMT peel(pick(nPos, 132, 14), " ")
#define R_GEEX9750_BP_CODEMT(A) put(nRec, 132, A :14.14)
!-----------------------------------------------------------
! FIELD : KAILIV 
#define S_GEEX9750_BP_KAILIV peel(pick(nPos, 146, 3), " ")
#define R_GEEX9750_BP_KAILIV(A) put(nRec, 146, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODTLI 
#define S_GEEX9750_BP_CODTLI peel(pick(nPos, 149, 3), " ")
#define R_GEEX9750_BP_CODTLI(A) put(nRec, 149, A :3.3)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX9750_BP_VALRUB peel(pick(nPos, 152, 35), " ")
#define R_GEEX9750_BP_VALRUB(A) put(nRec, 152, A :35.35)
!-----------------------------------------------------------
! FIELD : TOULIV 
#define S_GEEX9750_BP_TOULIV peel(pick(nPos, 187, 4), " ")
#define R_GEEX9750_BP_TOULIV(A) put(nRec, 187, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : CRILIV 
#define S_GEEX9750_BP_CRILIV peel(pick(nPos, 191, 20), " ")
#define R_GEEX9750_BP_CRILIV(A) put(nRec, 191, A :20.20)
!-----------------------------------------------------------
! FIELD : CODOFT 
#define S_GEEX9750_BP_CODOFT peel(pick(nPos, 211, 14), " ")
#define R_GEEX9750_BP_CODOFT(A) put(nRec, 211, A :14.14)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9750_BP_DISEXC peel(pick(nPos, 225, 32), " ")
#define R_GEEX9750_BP_DISEXC(A) put(nRec, 225, A :32.32)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9751 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9751_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9751_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9751_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9751_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9751_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9751_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9751_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9751_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMTOU 
#define S_GEEX9751_BP_NUMTOU peel(pick(nPos, 7, 8), " ")
#define R_GEEX9751_BP_NUMTOU(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX9751_BP_NUMLIV peel(pick(nPos, 15, 8), " ")
#define R_GEEX9751_BP_NUMLIV(A) put(nRec, 15, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX9751_BP_SNULIV peel(pick(nPos, 23, 3), " ")
#define R_GEEX9751_BP_SNULIV(A) put(nRec, 23, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9751_BP_DISEXC peel(pick(nPos, 26, 231), " ")
#define R_GEEX9751_BP_DISEXC(A) put(nRec, 26, A :231.231)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9752 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9752_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9752_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9752_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9752_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9752_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9752_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX9752_BP_NUMLIV peel(pick(nPos, 6, 8), " ")
#define R_GEEX9752_BP_NUMLIV(A) put(nRec, 6, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX9752_BP_SNULIV peel(pick(nPos, 14, 3), " ")
#define R_GEEX9752_BP_SNULIV(A) put(nRec, 14, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9752_BP_CODACT peel(pick(nPos, 17, 3), " ")
#define R_GEEX9752_BP_CODACT(A) put(nRec, 17, A :3.3)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX9752_BP_REFLIV peel(pick(nPos, 20, 30), " ")
#define R_GEEX9752_BP_REFLIV(A) put(nRec, 20, A :30.30)
!-----------------------------------------------------------
! FIELD : CLILIV 
#define S_GEEX9752_BP_CLILIV peel(pick(nPos, 50, 14), " ")
#define R_GEEX9752_BP_CLILIV(A) put(nRec, 50, A :14.14)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_GEEX9752_BP_NLILIV peel(pick(nPos, 64, 5), " ")
#define R_GEEX9752_BP_NLILIV(A) put(nRec, 64, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX9752_BP_CODPRO peel(pick(nPos, 69, 17), " ")
#define R_GEEX9752_BP_CODPRO(A) put(nRec, 69, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX9752_BP_VALPRO peel(pick(nPos, 86, 2), " ")
#define R_GEEX9752_BP_VALPRO(A) put(nRec, 86, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_GEEX9752_BP_EDIPRO peel(pick(nPos, 88, 17), " ")
#define R_GEEX9752_BP_EDIPRO(A) put(nRec, 88, A :17.17)
!-----------------------------------------------------------
! FIELD : UVCSOH 
#define S_GEEX9752_BP_UVCSOH peel(pick(nPos, 105, 9), " ")
#define R_GEEX9752_BP_UVCSOH(A) put(nRec, 105, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UVCCDE 
#define S_GEEX9752_BP_UVCCDE peel(pick(nPos, 114, 9), " ")
#define R_GEEX9752_BP_UVCCDE(A) put(nRec, 114, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UVCMAJ 
#define S_GEEX9752_BP_UVCMAJ peel(pick(nPos, 123, 9), " ")
#define R_GEEX9752_BP_UVCMAJ(A) put(nRec, 123, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : SENMVT 
#define S_GEEX9752_BP_SENMVT peel(pick(nPos, 132, 1), " ")
#define R_GEEX9752_BP_SENMVT(A) put(nRec, 132, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACL 
#define S_GEEX9752_BP_CODACL peel(pick(nPos, 133, 3), " ")
#define R_GEEX9752_BP_CODACL(A) put(nRec, 133, A :3.3)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9752_BP_DISEXC peel(pick(nPos, 136, 121), " ")
#define R_GEEX9752_BP_DISEXC(A) put(nRec, 136, A :121.121)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9753 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9753_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9753_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9753_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9753_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9753_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9753_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9753_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9753_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9753_BP_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX9753_BP_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX9753_BP_NUMLIV peel(pick(nPos, 10, 8), " ")
#define R_GEEX9753_BP_NUMLIV(A) put(nRec, 10, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX9753_BP_SNULIV peel(pick(nPos, 18, 3), " ")
#define R_GEEX9753_BP_SNULIV(A) put(nRec, 18, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX9753_BP_REFLIV peel(pick(nPos, 21, 30), " ")
#define R_GEEX9753_BP_REFLIV(A) put(nRec, 21, A :30.30)
!-----------------------------------------------------------
! FIELD : DATLIV 
#define S_GEEX9753_BP_DATLIV peel(pick(nPos, 51, 8), " ")
#define R_GEEX9753_BP_DATLIV(A) put(nRec, 51, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CLILIV 
#define S_GEEX9753_BP_CLILIV peel(pick(nPos, 59, 14), " ")
#define R_GEEX9753_BP_CLILIV(A) put(nRec, 59, A :14.14)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX9753_BP_CODCLI peel(pick(nPos, 73, 14), " ")
#define R_GEEX9753_BP_CODCLI(A) put(nRec, 73, A :14.14)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_GEEX9753_BP_NLILIV peel(pick(nPos, 87, 5), " ")
#define R_GEEX9753_BP_NLILIV(A) put(nRec, 87, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX9753_BP_CODPRO peel(pick(nPos, 92, 17), " ")
#define R_GEEX9753_BP_CODPRO(A) put(nRec, 92, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX9753_BP_VALPRO peel(pick(nPos, 109, 2), " ")
#define R_GEEX9753_BP_VALPRO(A) put(nRec, 109, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX9753_BP_PCBPRO peel(pick(nPos, 111, 5), " ")
#define R_GEEX9753_BP_PCBPRO(A) put(nRec, 111, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_GEEX9753_BP_EDIPRO peel(pick(nPos, 116, 17), " ")
#define R_GEEX9753_BP_EDIPRO(A) put(nRec, 116, A :17.17)
!-----------------------------------------------------------
! FIELD : UVCCDE 
#define S_GEEX9753_BP_UVCCDE peel(pick(nPos, 133, 9), " ")
#define R_GEEX9753_BP_UVCCDE(A) put(nRec, 133, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UVCSRV 
#define S_GEEX9753_BP_UVCSRV peel(pick(nPos, 142, 9), " ")
#define R_GEEX9753_BP_UVCSRV(A) put(nRec, 142, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : SENMVT 
#define S_GEEX9753_BP_SENMVT peel(pick(nPos, 151, 1), " ")
#define R_GEEX9753_BP_SENMVT(A) put(nRec, 151, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9753_BP_DISEXC peel(pick(nPos, 152, 105), " ")
#define R_GEEX9753_BP_DISEXC(A) put(nRec, 152, A :105.105)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9755 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9755_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9755_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9755_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9755_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9755_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9755_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9755_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9755_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX9755_BP_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_GEEX9755_BP_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX9755_BP_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_GEEX9755_BP_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9755_BP_CODACT peel(pick(nPos, 18, 3), " ")
#define R_GEEX9755_BP_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX9755_BP_REFLIV peel(pick(nPos, 21, 30), " ")
#define R_GEEX9755_BP_REFLIV(A) put(nRec, 21, A :30.30)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX9755_BP_CODCLI peel(pick(nPos, 51, 14), " ")
#define R_GEEX9755_BP_CODCLI(A) put(nRec, 51, A :14.14)
!-----------------------------------------------------------
! FIELD : CLILIV 
#define S_GEEX9755_BP_CLILIV peel(pick(nPos, 65, 14), " ")
#define R_GEEX9755_BP_CLILIV(A) put(nRec, 65, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXP 
#define S_GEEX9755_BP_DATEXP peel(pick(nPos, 79, 8), " ")
#define R_GEEX9755_BP_DATEXP(A) put(nRec, 79, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXP 
#define S_GEEX9755_BP_HEUEXP peel(pick(nPos, 87, 6), " ")
#define R_GEEX9755_BP_HEUEXP(A) put(nRec, 87, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : DATPTD 
#define S_GEEX9755_BP_DATPTD peel(pick(nPos, 93, 8), " ")
#define R_GEEX9755_BP_DATPTD(A) put(nRec, 93, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUPTD 
#define S_GEEX9755_BP_HEUPTD peel(pick(nPos, 101, 6), " ")
#define R_GEEX9755_BP_HEUPTD(A) put(nRec, 101, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : LNKRET 
#define S_GEEX9755_BP_LNKRET peel(pick(nPos, 107, 2), " ")
#define R_GEEX9755_BP_LNKRET(A) put(nRec, 107, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : DATLIV 
#define S_GEEX9755_BP_DATLIV peel(pick(nPos, 109, 8), " ")
#define R_GEEX9755_BP_DATLIV(A) put(nRec, 109, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEULIV 
#define S_GEEX9755_BP_HEULIV peel(pick(nPos, 117, 6), " ")
#define R_GEEX9755_BP_HEULIV(A) put(nRec, 117, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX9755_BP_VALRUB peel(pick(nPos, 123, 35), " ")
#define R_GEEX9755_BP_VALRUB(A) put(nRec, 123, A :35.35)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9755_BP_DISEXC peel(pick(nPos, 158, 99), " ")
#define R_GEEX9755_BP_DISEXC(A) put(nRec, 158, A :99.99)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9760 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9760_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9760_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9760_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9760_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9760_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9760_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9760_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9760_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : EMTEXC 
#define S_GEEX9760_BP_EMTEXC peel(pick(nPos, 7, 14), " ")
#define R_GEEX9760_BP_EMTEXC(A) put(nRec, 7, A :14.14)
!-----------------------------------------------------------
! FIELD : RCTEXC 
#define S_GEEX9760_BP_RCTEXC peel(pick(nPos, 21, 14), " ")
#define R_GEEX9760_BP_RCTEXC(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXC 
#define S_GEEX9760_BP_DATEXC peel(pick(nPos, 35, 8), " ")
#define R_GEEX9760_BP_DATEXC(A) put(nRec, 35, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_GEEX9760_BP_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_GEEX9760_BP_HEUEXC(A) put(nRec, 43, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9760_BP_CODACT peel(pick(nPos, 49, 3), " ")
#define R_GEEX9760_BP_CODACT(A) put(nRec, 49, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX9760_BP_NUMLIV peel(pick(nPos, 52, 8), " ")
#define R_GEEX9760_BP_NUMLIV(A) put(nRec, 52, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX9760_BP_SNULIV peel(pick(nPos, 60, 3), " ")
#define R_GEEX9760_BP_SNULIV(A) put(nRec, 60, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX9760_BP_REFLIV peel(pick(nPos, 63, 30), " ")
#define R_GEEX9760_BP_REFLIV(A) put(nRec, 63, A :30.30)
!-----------------------------------------------------------
! FIELD : ETACHT 
#define S_GEEX9760_BP_ETACHT peel(pick(nPos, 93, 2), " ")
#define R_GEEX9760_BP_ETACHT(A) put(nRec, 93, A :2.2)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX9760_BP_CODCLI peel(pick(nPos, 95, 14), " ")
#define R_GEEX9760_BP_CODCLI(A) put(nRec, 95, A :14.14)
!-----------------------------------------------------------
! FIELD : TOULIV 
#define S_GEEX9760_BP_TOULIV peel(pick(nPos, 109, 4), " ")
#define R_GEEX9760_BP_TOULIV(A) put(nRec, 109, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : NUMSUP 
#define S_GEEX9760_BP_NUMSUP peel(pick(nPos, 113, 8), " ")
#define R_GEEX9760_BP_NUMSUP(A) put(nRec, 113, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUSUP 
#define S_GEEX9760_BP_SNUSUP peel(pick(nPos, 121, 3), " ")
#define R_GEEX9760_BP_SNUSUP(A) put(nRec, 121, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : NUMTOU 
#define S_GEEX9760_BP_NUMTOU peel(pick(nPos, 124, 8), " ")
#define R_GEEX9760_BP_NUMTOU(A) put(nRec, 124, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX9760_BP_VALRUB peel(pick(nPos, 132, 35), " ")
#define R_GEEX9760_BP_VALRUB(A) put(nRec, 132, A :35.35)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9760_BP_DISEXC peel(pick(nPos, 167, 90), " ")
#define R_GEEX9760_BP_DISEXC(A) put(nRec, 167, A :90.90)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9770 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX9770_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX9770_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX9770_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX9770_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX9770_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX9770_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX9770_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX9770_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : EMTEXC 
#define S_GEEX9770_BP_EMTEXC peel(pick(nPos, 7, 14), " ")
#define R_GEEX9770_BP_EMTEXC(A) put(nRec, 7, A :14.14)
!-----------------------------------------------------------
! FIELD : RCTEXC 
#define S_GEEX9770_BP_RCTEXC peel(pick(nPos, 21, 14), " ")
#define R_GEEX9770_BP_RCTEXC(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXC 
#define S_GEEX9770_BP_DATEXC peel(pick(nPos, 35, 8), " ")
#define R_GEEX9770_BP_DATEXC(A) put(nRec, 35, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_GEEX9770_BP_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_GEEX9770_BP_HEUEXC(A) put(nRec, 43, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX9770_BP_CODACT peel(pick(nPos, 49, 3), " ")
#define R_GEEX9770_BP_CODACT(A) put(nRec, 49, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_GEEX9770_BP_NUMLIV peel(pick(nPos, 52, 8), " ")
#define R_GEEX9770_BP_NUMLIV(A) put(nRec, 52, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_GEEX9770_BP_SNULIV peel(pick(nPos, 60, 3), " ")
#define R_GEEX9770_BP_SNULIV(A) put(nRec, 60, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_GEEX9770_BP_REFLIV peel(pick(nPos, 63, 30), " ")
#define R_GEEX9770_BP_REFLIV(A) put(nRec, 63, A :30.30)
!-----------------------------------------------------------
! FIELD : NUMVAG 
#define S_GEEX9770_BP_NUMVAG peel(pick(nPos, 93, 8), " ")
#define R_GEEX9770_BP_NUMVAG(A) put(nRec, 93, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX9770_BP_CODCLI peel(pick(nPos, 101, 14), " ")
#define R_GEEX9770_BP_CODCLI(A) put(nRec, 101, A :14.14)
!-----------------------------------------------------------
! FIELD : NUMTOU 
#define S_GEEX9770_BP_NUMTOU peel(pick(nPos, 115, 8), " ")
#define R_GEEX9770_BP_NUMTOU(A) put(nRec, 115, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX9770_BP_DISEXC peel(pick(nPos, 123, 134), " ")
#define R_GEEX9770_BP_DISEXC(A) put(nRec, 123, A :134.134)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX9900 
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
! Line : GEEX9999 
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

! File M30_GECOM_IN : 
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
! Line : 08.00 
!===========================================================
! FIELD : CODEXC 
#define S_0800_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_0800_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_0800_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_0800_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_0800_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_0800_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_0800_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_0800_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------


! FIELD : FAMPAR
#define S_0800_FAMPAR peel(pick(nPos, 7, 3), " ")
#define R_0800_FAMPAR(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------



! FIELD : CLEPAR
#define S_0800_CLEPAR peel(pick(nPos, 10, 10), " ")
#define R_0800_CLEPAR(A) put(nRec, 10, A :10.10)
!-----------------------------------------------------------


! FIELD : LIBPAR
#define S_0800_LIBPAR peel(pick(nPos, 20, 48), " ")
#define R_0800_LIBPAR(A) put(nRec, 20, A :48.48)
!-----------------------------------------------------------



! FIELD : DISEXC
#define S_0800_DISEXC peel(pick(nPos, 68, 189), " ")
#define R_0800_DISEXC(A) put(nRec, 68, A :189.189)
!-----------------------------------------------------------




!===========================================================
! Line : 08 
!===========================================================
! FIELD : CODEXC 
#define S_08_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_08_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_08_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_08_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_08_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_08_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_08_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_08_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : ISOLGE 
#define S_08_ISOLGE peel(pick(nPos, 7, 3), " ")
#define R_08_ISOLGE(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_08_CODRUB peel(pick(nPos, 10, 4), " ")
#define R_08_CODRUB(A) put(nRec, 10, A :4.4)
!-----------------------------------------------------------
! FIELD : TYPRUB 
#define S_08_TYPRUB peel(pick(nPos, 14, 1), " ")
#define R_08_TYPRUB(A) put(nRec, 14, A :1.1)
!-----------------------------------------------------------
! FIELD : LIBRUB 
#define S_08_LIBRUB peel(pick(nPos, 15, 30), " ")
#define R_08_LIBRUB(A) put(nRec, 15, A :30.30)
!-----------------------------------------------------------
! FIELD : TYPDTA 
#define S_08_TYPDTA peel(pick(nPos, 45, 1), " ")
#define R_08_TYPDTA(A) put(nRec, 45, A :1.1)
!-----------------------------------------------------------
! FIELD : LNGDTA 
#define S_08_LNGDTA peel(pick(nPos, 46, 2), " ")
#define R_08_LNGDTA(A) put(nRec, 46, A :2.2)
!-----------------------------------------------------------
! FIELD : DECDTA 
#define S_08_DECDTA peel(pick(nPos, 48, 1), " ")
#define R_08_DECDTA(A) put(nRec, 48, A :1.1)
!-----------------------------------------------------------
! FIELD : DTAMIN 
#define S_08_DTAMIN peel(pick(nPos, 49, 18), " ")
#define R_08_DTAMIN(A) put(nRec, 49, A :18.18)
!-----------------------------------------------------------
! FIELD : DTAMAX 
#define S_08_DTAMAX peel(pick(nPos, 67, 18), " ")
#define R_08_DTAMAX(A) put(nRec, 67, A :18.18)
!-----------------------------------------------------------
! FIELD : CODCLA 
#define S_08_CODCLA peel(pick(nPos, 85, 3), " ")
#define R_08_CODCLA(A) put(nRec, 85, A :3.3)
!-----------------------------------------------------------
! FIELD : TYPCLA 
#define S_08_TYPCLA peel(pick(nPos, 88, 1), " ")
#define R_08_TYPCLA(A) put(nRec, 88, A :1.1)
!-----------------------------------------------------------
! FIELD : RPRDDP 
#define S_08_RPRDDP peel(pick(nPos, 89, 1), " ")
#define R_08_RPRDDP(A) put(nRec, 89, A :1.1)
!-----------------------------------------------------------
! FIELD : VALDFT 
#define S_08_VALDFT peel(pick(nPos, 90, 35), " ")
#define R_08_VALDFT(A) put(nRec, 90, A :35.35)
!-----------------------------------------------------------
! FIELD : SCVATM 
#define S_08_SCVATM peel(pick(nPos, 125, 1), " ")
#define R_08_SCVATM(A) put(nRec, 125, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_08_DISEXC peel(pick(nPos, 126, 131), " ")
#define R_08_DISEXC(A) put(nRec, 126, A :131.131)
!-----------------------------------------------------------
!===========================================================
! Line : 0818 
!===========================================================
! FIELD : CODEXC 
#define S_0818_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_0818_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_0818_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_0818_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_0818_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_0818_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_0818_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_0818_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : ISOLGE 
#define S_0818_ISOLGE peel(pick(nPos, 7, 3), " ")
#define R_0818_ISOLGE(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLA 
#define S_0818_CODCLA peel(pick(nPos, 10, 3), " ")
#define R_0818_CODCLA(A) put(nRec, 10, A :3.3)
!-----------------------------------------------------------
! FIELD : TYPCLA 
#define S_0818_TYPCLA peel(pick(nPos, 13, 1), " ")
#define R_0818_TYPCLA(A) put(nRec, 13, A :1.1)
!-----------------------------------------------------------
! FIELD : VALCLA 
#define S_0818_VALCLA peel(pick(nPos, 14, 35), " ")
#define R_0818_VALCLA(A) put(nRec, 14, A :35.35)
!-----------------------------------------------------------
! FIELD : LIBCLA 
#define S_0818_LIBCLA peel(pick(nPos, 49, 35), " ")
#define R_0818_LIBCLA(A) put(nRec, 49, A :35.35)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_0818_DISEXC peel(pick(nPos, 84, 173), " ")
#define R_0818_DISEXC(A) put(nRec, 84, A :173.173)
!-----------------------------------------------------------
















!===========================================================
! Line : 10
!===========================================================
! FIELD : CODEXC 
#define S_10_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_10_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_10_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_10_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_10_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_10_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_10_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_10_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_10_CODACT peel(pick(nPos, 7, 3), " ")
#define R_10_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_10_CODPRO peel(pick(nPos, 24, 17), " ")
#define R_10_CODPRO(A) put(nRec, 24, A :17.17)
!-----------------------------------------------------------
! FIELD : CONST
#define S_10_CONST peel(pick(nPos, 41, 2), " ")
#define R_10_CONST(A) put(nRec, 41, A :2.2)



! FIELD : CIRPIC 
#define S_10_CIRPIC peel(pick(nPos, 43, 3), " ")
#define R_10_CIRPIC(A) put(nRec, 43, A :3.3)
!-----------------------------------------------------------
! FIELD : PRPPIC 
#define S_10_PRPPIC peel(pick(nPos, 46, 1), " ")
#define R_10_PRPPIC(A) put(nRec, 46, A :1.1)
!-----------------------------------------------------------
! FIELD : CTRDLV
#define S_10_CTRDLV peel(pick(nPos, 47, 1), " ")
#define R_10_CTRDLV(A) put(nRec, 47, A :1.1)
!-----------------------------------------------------------
! FIELD : CTRLOT 
#define S_10_CTRLOT peel(pick(nPos, 48, 1), " ")
#define R_10_CTRLOT(A) put(nRec, 48, A :1.1)
!-----------------------------------------------------------
! FIELD : CTRUCX 
#define S_10_CTRUCX peel(pick(nPos, 49, 1), " ")
#define R_10_CTRUCX(A) put(nRec, 49, A :1.1)
!-----------------------------------------------------------
! FIELD : CTRSSC 
#define S_10_CTRSSC peel(pick(nPos, 50, 1), " ")
#define R_10_CTRSSC(A) put(nRec, 50, A :1.1)
!-----------------------------------------------------------
! FIELD : CODBRN 
#define S_10_CODBRN peel(pick(nPos, 57, 3), " ")
#define R_10_CODBRN(A) put(nRec, 57, A :3.3)
!-----------------------------------------------------------
! FIELD : MAXPIC
#define S_10_MAXPIC peel(pick(nPos, 72, 1), " ")
#define R_10_MAXPIC(A) put(nRec, 72, A :1.1)
!-----------------------------------------------------------















!===========================================================
! Line : 30PRODUCTINFORMATION 
!===========================================================
! FIELD : CODEXC 
#define S_30PRODUCTINFORMATION_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_30PRODUCTINFORMATION_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_30PRODUCTINFORMATION_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_30PRODUCTINFORMATION_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_30PRODUCTINFORMATION_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_30PRODUCTINFORMATION_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_30PRODUCTINFORMATION_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_30PRODUCTINFORMATION_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_30PRODUCTINFORMATION_CODACT peel(pick(nPos, 7, 3), " ")
#define R_30PRODUCTINFORMATION_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_30PRODUCTINFORMATION_CODPRO peel(pick(nPos, 10, 17), " ")
#define R_30PRODUCTINFORMATION_CODPRO(A) put(nRec, 10, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_30PRODUCTINFORMATION_VALPRO peel(pick(nPos, 27, 2), " ")
#define R_30PRODUCTINFORMATION_VALPRO(A) put(nRec, 27, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : DS1PRO 
#define S_30PRODUCTINFORMATION_DS1PRO peel(pick(nPos, 29, 30), " ")
#define R_30PRODUCTINFORMATION_DS1PRO(A) put(nRec, 29, A :30.30)
!-----------------------------------------------------------
! FIELD : DS2PRO 
#define S_30PRODUCTINFORMATION_DS2PRO peel(pick(nPos, 59, 30), " ")
#define R_30PRODUCTINFORMATION_DS2PRO(A) put(nRec, 59, A :30.30)
!-----------------------------------------------------------
! FIELD : FOUPRO 
#define S_30PRODUCTINFORMATION_FOUPRO peel(pick(nPos, 89, 14), " ")
#define R_30PRODUCTINFORMATION_FOUPRO(A) put(nRec, 89, A :14.14)
!-----------------------------------------------------------
! FIELD : VAPPRO 
#define S_30PRODUCTINFORMATION_VAPPRO peel(pick(nPos, 103, 2), " ")
#define R_30PRODUCTINFORMATION_VAPPRO(A) put(nRec, 103, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : FAMPRO 
#define S_30PRODUCTINFORMATION_FAMPRO peel(pick(nPos, 105, 10), " ")
#define R_30PRODUCTINFORMATION_FAMPRO(A) put(nRec, 105, A :10.10)
!-----------------------------------------------------------
! FIELD : ANAPRO 
#define S_30PRODUCTINFORMATION_ANAPRO peel(pick(nPos, 115, 15), " ")
#define R_30PRODUCTINFORMATION_ANAPRO(A) put(nRec, 115, A :15.15)
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_30PRODUCTINFORMATION_EDIPRO peel(pick(nPos, 130, 17), " ")
#define R_30PRODUCTINFORMATION_EDIPRO(A) put(nRec, 130, A :17.17)
!-----------------------------------------------------------
! FIELD : SPCPRO 
#define S_30PRODUCTINFORMATION_SPCPRO peel(pick(nPos, 147, 4), " ")
#define R_30PRODUCTINFORMATION_SPCPRO(A) put(nRec, 147, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_30PRODUCTINFORMATION_PCBPRO peel(pick(nPos, 151, 5), " ")
#define R_30PRODUCTINFORMATION_PCBPRO(A) put(nRec, 151, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : UNIPRO 
#define S_30PRODUCTINFORMATION_UNIPRO peel(pick(nPos, 156, 3), " ")
#define R_30PRODUCTINFORMATION_UNIPRO(A) put(nRec, 156, A :3.3)
!-----------------------------------------------------------
! FIELD : MESPRO 
#define S_30PRODUCTINFORMATION_MESPRO peel(pick(nPos, 159, 1), " ")
#define R_30PRODUCTINFORMATION_MESPRO(A) put(nRec, 159, A :1.1)
!-----------------------------------------------------------
! FIELD : PDBUVC 
#define S_30PRODUCTINFORMATION_PDBUVC peel(pick(nPos, 160, 7), " ")
#define R_30PRODUCTINFORMATION_PDBUVC(A) put(nRec, 160, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : PDNUVC 
#define S_30PRODUCTINFORMATION_PDNUVC peel(pick(nPos, 167, 7), " ")
#define R_30PRODUCTINFORMATION_PDNUVC(A) put(nRec, 167, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : HAUUVC 
#define S_30PRODUCTINFORMATION_HAUUVC peel(pick(nPos, 174, 3), " ")
#define R_30PRODUCTINFORMATION_HAUUVC(A) put(nRec, 174, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : LNGUVC 
#define S_30PRODUCTINFORMATION_LNGUVC peel(pick(nPos, 177, 3), " ")
#define R_30PRODUCTINFORMATION_LNGUVC(A) put(nRec, 177, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : LRGUVC 
#define S_30PRODUCTINFORMATION_LRGUVC peel(pick(nPos, 180, 3), " ")
#define R_30PRODUCTINFORMATION_LRGUVC(A) put(nRec, 180, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : PDBCOL 
#define S_30PRODUCTINFORMATION_PDBCOL peel(pick(nPos, 183, 7), " ")
#define R_30PRODUCTINFORMATION_PDBCOL(A) put(nRec, 183, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : HAUCOL 
#define S_30PRODUCTINFORMATION_HAUCOL peel(pick(nPos, 190, 3), " ")
#define R_30PRODUCTINFORMATION_HAUCOL(A) put(nRec, 190, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : LNGCOL 
#define S_30PRODUCTINFORMATION_LNGCOL peel(pick(nPos, 193, 3), " ")
#define R_30PRODUCTINFORMATION_LNGCOL(A) put(nRec, 193, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : LRGCOL 
#define S_30PRODUCTINFORMATION_LRGCOL peel(pick(nPos, 196, 3), " ")
#define R_30PRODUCTINFORMATION_LRGCOL(A) put(nRec, 196, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : COLCOU 
#define S_30PRODUCTINFORMATION_COLCOU peel(pick(nPos, 199, 4), " ")
#define R_30PRODUCTINFORMATION_COLCOU(A) put(nRec, 199, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : COLCOU
#define S_30PRODUCTINFORMATION_COLCOU2 peel(pick(nPos, 203, 4), " ")
#define R_30PRODUCTINFORMATION_COLCOU2(A) put(nRec, 203, build(number(A):R04.0))

!-----------------------------------------------------------
! FIELD : COUPAL 
#define S_30PRODUCTINFORMATION_COUPAL peel(pick(nPos, 207, 4), " ")
#define R_30PRODUCTINFORMATION_COUPAL(A) put(nRec, 207, build(number(A):R04.0))
!-----------------------------------------------------------
!-----------------------------------------------------------
! FIELD : COUPAL
#define S_30PRODUCTINFORMATION_COUPAL2 peel(pick(nPos, 211, 4), " ")
#define R_30PRODUCTINFORMATION_COUPAL2(A) put(nRec, 211, build(number(A):R04.0))
!-----------------------------------------------------------

!-----------------------------------------------------------
! FIELD : GERPAL 
#define S_30PRODUCTINFORMATION_GERPAL peel(pick(nPos, 215, 2), " ")
#define R_30PRODUCTINFORMATION_GERPAL(A) put(nRec, 215, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : GERHAU 
#define S_30PRODUCTINFORMATION_GERHAU peel(pick(nPos, 217, 2), " ")
#define R_30PRODUCTINFORMATION_GERHAU(A) put(nRec, 217, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : HAUCOU 
#define S_30PRODUCTINFORMATION_HAUCOU peel(pick(nPos, 219, 3), " ")
#define R_30PRODUCTINFORMATION_HAUCOU(A) put(nRec, 219, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODEMB 
#define S_30PRODUCTINFORMATION_CODEMB peel(pick(nPos, 222, 3), " ")
#define R_30PRODUCTINFORMATION_CODEMB(A) put(nRec, 222, A :3.3)
!-----------------------------------------------------------
! FIELD : ABCPRO 
#define S_30PRODUCTINFORMATION_ABCPRO peel(pick(nPos, 225, 1), " ")
#define R_30PRODUCTINFORMATION_ABCPRO(A) put(nRec, 225, A :1.1)
!-----------------------------------------------------------
! FIELD : CODMDR 
#define S_30PRODUCTINFORMATION_CODMDR peel(pick(nPos, 226, 3), " ")
#define R_30PRODUCTINFORMATION_CODMDR(A) put(nRec, 226, A :3.3)
!-----------------------------------------------------------
! FIELD : MODREC 
#define S_30PRODUCTINFORMATION_MODREC peel(pick(nPos, 229, 1), " ")
#define R_30PRODUCTINFORMATION_MODREC(A) put(nRec, 229, A :1.1)
!-----------------------------------------------------------
! FIELD : NBJDLV 
#define S_30PRODUCTINFORMATION_NBJDLV peel(pick(nPos, 230, 3), " ")
#define R_30PRODUCTINFORMATION_NBJDLV(A) put(nRec, 230, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_30PRODUCTINFORMATION_MOTIMM peel(pick(nPos, 233, 3), " ")
#define R_30PRODUCTINFORMATION_MOTIMM(A) put(nRec, 233, A :3.3)
!-----------------------------------------------------------
! FIELD : CODMDS 
#define S_30PRODUCTINFORMATION_CODMDS peel(pick(nPos, 236, 3), " ")
#define R_30PRODUCTINFORMATION_CODMDS(A) put(nRec, 236, A :3.3)
!-----------------------------------------------------------
! FIELD : ZONPRF 
#define S_30PRODUCTINFORMATION_ZONPRF peel(pick(nPos, 239, 1), " ")
#define R_30PRODUCTINFORMATION_ZONPRF(A) put(nRec, 239, A :1.1)
!-----------------------------------------------------------
! FIELD : ALLPRF 
#define S_30PRODUCTINFORMATION_ALLPRF peel(pick(nPos, 240, 3), " ")
#define R_30PRODUCTINFORMATION_ALLPRF(A) put(nRec, 240, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : ABCSTS 
#define S_30PRODUCTINFORMATION_ABCSTS peel(pick(nPos, 243, 1), " ")
#define R_30PRODUCTINFORMATION_ABCSTS(A) put(nRec, 243, A :1.1)
!-----------------------------------------------------------
! FIELD : CODADM 
#define S_30PRODUCTINFORMATION_CODADM peel(pick(nPos, 244, 3), " ")
#define R_30PRODUCTINFORMATION_CODADM(A) put(nRec, 244, A :3.3)
!-----------------------------------------------------------
! FIELD : HOMGRB 
#define S_30PRODUCTINFORMATION_HOMGRB peel(pick(nPos, 247, 1), " ")
#define R_30PRODUCTINFORMATION_HOMGRB(A) put(nRec, 247, A :1.1)
!-----------------------------------------------------------
! FIELD : PERGRB 
#define S_30PRODUCTINFORMATION_PERGRB peel(pick(nPos, 248, 3), " ")
#define R_30PRODUCTINFORMATION_PERGRB(A) put(nRec, 248, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODMDP 
#define S_30PRODUCTINFORMATION_CODMDP peel(pick(nPos, 251, 3), " ")
#define R_30PRODUCTINFORMATION_CODMDP(A) put(nRec, 251, A :3.3)
!-----------------------------------------------------------
! FIELD : TOPPRN 
#define S_30PRODUCTINFORMATION_TOPPRN peel(pick(nPos, 254, 1), " ")
#define R_30PRODUCTINFORMATION_TOPPRN(A) put(nRec, 254, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_30PRODUCTINFORMATION_DISEXC peel(pick(nPos, 255, 2), " ")
#define R_30PRODUCTINFORMATION_DISEXC(A) put(nRec, 255, A :2.2)
!-----------------------------------------------------------
!===========================================================
! Line : 3001 
!===========================================================
! FIELD : CODEXC 
#define S_3001_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_3001_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_3001_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_3001_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_3001_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_3001_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_3001_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_3001_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_3001_CODACT peel(pick(nPos, 7, 3), " ")
#define R_3001_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_3001_CODPRO peel(pick(nPos, 10, 17), " ")
#define R_3001_CODPRO(A) put(nRec, 10, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_3001_VALPRO peel(pick(nPos, 27, 2), " ")
#define R_3001_VALPRO(A) put(nRec, 27, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : INDPRO 
#define S_3001_INDPRO peel(pick(nPos, 29, 1), " ")
#define R_3001_INDPRO(A) put(nRec, 29, A :1.1)
!-----------------------------------------------------------
! FIELD : CODMRQ 
#define S_3001_CODMRQ peel(pick(nPos, 39, 8), " ")
#define R_3001_CODMRQ(A) put(nRec, 39, A :8.8)
!-----------------------------------------------------------
! FIELD : DESFOU 
#define S_3001_DESFOU peel(pick(nPos, 47, 30), " ")
#define R_3001_DESFOU(A) put(nRec, 47, A :30.30)
!-----------------------------------------------------------
! FIELD : CIRDET 
#define S_3001_CIRDET peel(pick(nPos, 77, 3), " ")
#define R_3001_CIRDET(A) put(nRec, 77, A :3.3)
!-----------------------------------------------------------
! FIELD : CIRPAL 
#define S_3001_CIRPAL peel(pick(nPos, 80, 3), " ")
#define R_3001_CIRPAL(A) put(nRec, 80, A :3.3)
!-----------------------------------------------------------
! FIELD : METRPL 
#define S_3001_METRPL peel(pick(nPos, 83, 1), " ")
#define R_3001_METRPL(A) put(nRec, 83, A :1.1)
!-----------------------------------------------------------
! FIELD : CODRPL 
#define S_3001_CODRPL peel(pick(nPos, 84, 17), " ")
#define R_3001_CODRPL(A) put(nRec, 84, A :17.17)
!-----------------------------------------------------------
! FIELD : VALRPL 
#define S_3001_VALRPL peel(pick(nPos, 101, 2), " ")
#define R_3001_VALRPL(A) put(nRec, 101, A :2.2)
!-----------------------------------------------------------
! FIELD : CODALC 
#define S_3001_CODALC peel(pick(nPos, 103, 4), " ")
#define R_3001_CODALC(A) put(nRec, 103, A :4.4)
!-----------------------------------------------------------
! FIELD : DEGALC 
#define S_3001_DEGALC peel(pick(nPos, 107, 5), " ")
#define R_3001_DEGALC(A) put(nRec, 107, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : VOLALC 
#define S_3001_VOLALC peel(pick(nPos, 112, 6), " ")
#define R_3001_VOLALC(A) put(nRec, 112, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODMDG 
#define S_3001_CODMDG peel(pick(nPos, 118, 3), " ")
#define R_3001_CODMDG(A) put(nRec, 118, A :3.3)
!-----------------------------------------------------------
! FIELD : TAUPST 
#define S_3001_TAUPST peel(pick(nPos, 121, 5), " ")
#define R_3001_TAUPST(A) put(nRec, 121, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : COELOG 
#define S_3001_COELOG peel(pick(nPos, 141, 5), " ")
#define R_3001_COELOG(A) put(nRec, 141, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : PRXPRO 
#define S_3001_PRXPRO peel(pick(nPos, 146, 9), " ")
#define R_3001_PRXPRO(A) put(nRec, 146, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : PRXPRO2 
#define S_3001_PRXPRO2 peel(pick(nPos, 155, 9), " ")
#define R_3001_PRXPRO2(A) put(nRec, 155, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : PRXPRO3 
#define S_3001_PRXPRO3 peel(pick(nPos, 164, 9), " ")
#define R_3001_PRXPRO3(A) put(nRec, 164, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : PRXPRO4 
#define S_3001_PRXPRO4 peel(pick(nPos, 173, 9), " ")
#define R_3001_PRXPRO4(A) put(nRec, 173, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CODMDI 
#define S_3001_CODMDI peel(pick(nPos, 182, 3), " ")
#define R_3001_CODMDI(A) put(nRec, 182, A :3.3)
!-----------------------------------------------------------
! FIELD : NXTIVT 
#define S_3001_NXTIVT peel(pick(nPos, 185, 8), " ")
#define R_3001_NXTIVT(A) put(nRec, 185, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SECSTK 
#define S_3001_SECSTK peel(pick(nPos, 193, 9), " ")
#define R_3001_SECSTK(A) put(nRec, 193, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CODMDF 
#define S_3001_CODMDF peel(pick(nPos, 202, 3), " ")
#define R_3001_CODMDF(A) put(nRec, 202, A :3.3)
!-----------------------------------------------------------
! FIELD : FMTFAB 
#define S_3001_FMTFAB peel(pick(nPos, 205, 5), " ")
#define R_3001_FMTFAB(A) put(nRec, 205, A :5.5)
!-----------------------------------------------------------
! FIELD : ACTFAB 
#define S_3001_ACTFAB peel(pick(nPos, 210, 3), " ")
#define R_3001_ACTFAB(A) put(nRec, 210, A :3.3)
!-----------------------------------------------------------
! FIELD : CODFAB 
#define S_3001_CODFAB peel(pick(nPos, 213, 17), " ")
#define R_3001_CODFAB(A) put(nRec, 213, A :17.17)
!-----------------------------------------------------------
! FIELD : VRAFAB 
#define S_3001_VRAFAB peel(pick(nPos, 230, 17), " ")
#define R_3001_VRAFAB(A) put(nRec, 230, build(number(A):R017.0))
!-----------------------------------------------------------
! FIELD : VALFAB 
#define S_3001_VALFAB peel(pick(nPos, 247, 2), " ")
#define R_3001_VALFAB(A) put(nRec, 247, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODZVI 
#define S_3001_CODZVI peel(pick(nPos, 249, 4), " ")
#define R_3001_CODZVI(A) put(nRec, 249, A :4.4)
!-----------------------------------------------------------
! FIELD : CODEAP 
#define S_3001_CODEAP peel(pick(nPos, 253, 3), " ")
#define R_3001_CODEAP(A) put(nRec, 253, A :3.3)
!-----------------------------------------------------------
! FIELD : TOPCNA 
#define S_3001_TOPCNA peel(pick(nPos, 256, 1), " ")
#define R_3001_TOPCNA(A) put(nRec, 256, A :1.1)
!-----------------------------------------------------------


!===========================================================
! Line : GEEX3002 M30 : Déclaration produit complément(Facultatif)-M30:
!Statement supplement product (Optional)
! -
!===========================================================
! FIELD : CODEXC Code du mouvement d'échange-Code exchange movement
! Zone initialisée à "30"-Field initialized to "30"
#define S_GEEX3002_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX3002_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC Séparateur entre code et sous-code-Separator between code and
!subcode
! Zone initialisée à "."-Zone set to "."
#define S_GEEX3002_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX3002_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC Sous-code du mouvement d'échange-Subcode exchange movement
! Zone initialisée à "02"-Zone set to "02"
#define S_GEEX3002_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX3002_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC Code traitement du mouvement-motion processing codes
! -
#define S_GEEX3002_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX3002_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT Code activité logistique /BV-Code logistics business / BV
! Doit être préalablement créée-Must first be created
#define S_GEEX3002_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX3002_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO Code interne du produit /BV-Internal number / BV
! Clé d'accès de la base de données-Access key of the database
#define S_GEEX3002_CODPRO peel(pick(nPos, 10, 17), " ")
#define R_GEEX3002_CODPRO(A) put(nRec, 10, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO Variante logistique / V-Alternatively logistics / V
! Clé d'accès de la base de données-Access key of the database
#define S_GEEX3002_VALPRO peel(pick(nPos, 27, 2), " ")
#define R_GEEX3002_VALPRO(A) put(nRec, 27, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODTMD Code transport matières dangereuses-Code Transport Dangerous
!Goods
! doit exister dans la table GEZTMD-must exist in the table GEZTMD
#define S_GEEX3002_CODTMD peel(pick(nPos, 29, 4), " ")
#define R_GEEX3002_CODTMD(A) put(nRec, 29, A :4.4)
!-----------------------------------------------------------
! FIELD : CODSEC Code de sécurité (Matières dangereuses)-Security code
!(Hazardous Materials)
! -
#define S_GEEX3002_CODSEC peel(pick(nPos, 33, 4), " ")
#define R_GEEX3002_CODSEC(A) put(nRec, 33, A :4.4)
!-----------------------------------------------------------
! FIELD : CODSPE Produit retournable-returnable product
! -
#define S_GEEX3002_CODSPE peel(pick(nPos, 37, 1), " ")
#define R_GEEX3002_CODSPE(A) put(nRec, 37, A :1.1)
!-----------------------------------------------------------
! FIELD : UNIFAC Unité de facturation-Calculation unit
! doit existé dans la table des unité GEZUNI-must exist in the table of unit
!GEZUNI
#define S_GEEX3002_UNIFAC peel(pick(nPos, 38, 3), " ")
#define R_GEEX3002_UNIFAC(A) put(nRec, 38, A :3.3)
!-----------------------------------------------------------
! FIELD : COEFAC Coefficient de facturation-Coefficient billing
! -
#define S_GEEX3002_COEFAC peel(pick(nPos, 41, 10), " ")
#define R_GEEX3002_COEFAC(A) put(nRec, 41, build(number(A):R010.0))
!-----------------------------------------------------------
! FIELD : SECDLV Nombre de jours de sécurité en plus de la DLV-Number of
!security days more DLV
! -
#define S_GEEX3002_SECDLV peel(pick(nPos, 51, 3), " ")
#define R_GEEX3002_SECDLV(A) put(nRec, 51, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODRGP Code de regroupement produit-product grouping code
! -
#define S_GEEX3002_CODRGP peel(pick(nPos, 54, 17), " ")
#define R_GEEX3002_CODRGP(A) put(nRec, 54, A :17.17)
!-----------------------------------------------------------
! FIELD : CODRSC Code type de risque du produit-Product Risk Model Code
! -
#define S_GEEX3002_CODRSC peel(pick(nPos, 71, 3), " ")
#define R_GEEX3002_CODRSC(A) put(nRec, 71, A :3.3)
!-----------------------------------------------------------
! FIELD : PROEAP Code emballage associé pour interface-package code associated
!interface
! -
#define S_GEEX3002_PROEAP peel(pick(nPos, 74, 17), " ")
#define R_GEEX3002_PROEAP(A) put(nRec, 74, A :17.17)
!-----------------------------------------------------------
! FIELD : VTLPRO Indicateur produit à ventiler-Indicator product to ventilate
! -
#define S_GEEX3002_VTLPRO peel(pick(nPos, 91, 1), " ")
#define R_GEEX3002_VTLPRO(A) put(nRec, 91, A :1.1)
!-----------------------------------------------------------
! FIELD : CIRVTL Code circuit de ventilation-ventilation system code
! -
#define S_GEEX3002_CIRVTL peel(pick(nPos, 92, 3), " ")
#define R_GEEX3002_CIRVTL(A) put(nRec, 92, A :3.3)
!-----------------------------------------------------------
! FIELD : INFEXP Numéro de nomenclature (Douane Alcool)-Stock Number (Customs
! Alcohol)
! -
#define S_GEEX3002_INFEXP peel(pick(nPos, 95, 16), " ")
#define R_GEEX3002_INFEXP(A) put(nRec, 95, A :16.16)
!-----------------------------------------------------------
! FIELD : CODMTR Comptabilité matière-material accounting
! -
#define S_GEEX3002_CODMTR peel(pick(nPos, 111, 5), " ")
#define R_GEEX3002_CODMTR(A) put(nRec, 111, A :5.5)
!-----------------------------------------------------------
! FIELD : TEMPRE Température préconisée pour le produit-Recommended
! temperature for the product
! -
#define S_GEEX3002_TEMPRE peel(pick(nPos, 116, 3), " ")
#define R_GEEX3002_TEMPRE(A) put(nRec, 116, A :3.3)
!-----------------------------------------------------------
! FIELD : QTELOT Quantité pour la gestion de la taille des lots-Quantity for
! the management of batch size
! -
#define S_GEEX3002_QTELOT peel(pick(nPos, 119, 9), " ")
#define R_GEEX3002_QTELOT(A) put(nRec, 119, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UNILOT Unité pour la gestion de la taille des lots-Unit for the
! Management of batch size
! -
#define S_GEEX3002_UNILOT peel(pick(nPos, 128, 3), " ")
#define R_GEEX3002_UNILOT(A) put(nRec, 128, A :3.3)
!-----------------------------------------------------------
! FIELD : UNIARR Unité d'arrondi supérieur-rounding upper unit
! -
#define S_GEEX3002_UNIARR peel(pick(nPos, 131, 1), " ")
#define R_GEEX3002_UNIARR(A) put(nRec, 131, A :1.1)
!-----------------------------------------------------------
! FIELD : UNICAL Unité de calcul de qtés de matières dangereuses-qties
! calculating unit hazardous materials
! -
#define S_GEEX3002_UNICAL peel(pick(nPos, 132, 1), " ")
#define R_GEEX3002_UNICAL(A) put(nRec, 132, A :1.1)
!-----------------------------------------------------------
! FIELD : TEMMIN Température minimale-minimum temperature
! -
#define S_GEEX3002_TEMMIN peel(pick(nPos, 133, 3), " ")
#define R_GEEX3002_TEMMIN(A) put(nRec, 133, A :3.3)
!-----------------------------------------------------------
! FIELD : TEMMAX Température maximale-maximum temperature
! -
#define S_GEEX3002_TEMMAX peel(pick(nPos, 136, 3), " ")
#define R_GEEX3002_TEMMAX(A) put(nRec, 136, A :3.3)
!-----------------------------------------------------------
! FIELD : TOLPOI Tolérance d'écart modification du poids colis-Tolerance of
! difference change of the package weight
! -
#define S_GEEX3002_TOLPOI peel(pick(nPos, 139, 3), " ")
#define R_GEEX3002_TOLPOI(A) put(nRec, 139, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : COECOL Coefficient de foisonnement du colis-Coefficient of expansion
! package
! -
#define S_GEEX3002_COECOL peel(pick(nPos, 142, 4), " ")
#define R_GEEX3002_COECOL(A) put(nRec, 142, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : COESPC Coefficient de foisonnement du SPCB-expansion coefficient of
! the SPCB
! -
#define S_GEEX3002_COESPC peel(pick(nPos, 146, 4), " ")
#define R_GEEX3002_COESPC(A) put(nRec, 146, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : COEUVC Coefficient de foisonnement de l'UVC-UVC's coefficient of
! expansion
! -
#define S_GEEX3002_COEUVC peel(pick(nPos, 150, 4), " ")
#define R_GEEX3002_COEUVC(A) put(nRec, 150, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : INDTOL Indicateur de tolérance de poids fiche produit-Indicator
! sheet weight tolerance
! -
#define S_GEEX3002_INDTOL peel(pick(nPos, 154, 1), " ")
#define R_GEEX3002_INDTOL(A) put(nRec, 154, A :1.1)
!-----------------------------------------------------------
! FIELD : HAUSPC Hauteur du SPCB-Height SPCB
! -
#define S_GEEX3002_HAUSPC peel(pick(nPos, 155, 3), " ")
#define R_GEEX3002_HAUSPC(A) put(nRec, 155, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : LNGSPC Longueur du SPCB exprimée en cm-SPCB length in cm
! -
#define S_GEEX3002_LNGSPC peel(pick(nPos, 158, 3), " ")
#define R_GEEX3002_LNGSPC(A) put(nRec, 158, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : LRGSPC Largeur du SPCB exprimée en cm-SPCB width in cm
! -
#define S_GEEX3002_LRGSPC peel(pick(nPos, 161, 3), " ")
#define R_GEEX3002_LRGSPC(A) put(nRec, 161, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : PDBSPC Poids brut du SPCB en Kg-Gross weight in Kg SPCB
! -
#define S_GEEX3002_PDBSPC peel(pick(nPos, 164, 7), " ")
#define R_GEEX3002_PDBSPC(A) put(nRec, 164, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : CODMDT Code de la méthode de traçabilité-Code tracking method
! -
#define S_GEEX3002_CODMDT peel(pick(nPos, 171, 3), " ")
#define R_GEEX3002_CODMDT(A) put(nRec, 171, A :3.3)
!-----------------------------------------------------------
! FIELD : ETIMTR Code d'étiquetage de la matière-labeling code of the material
! -
#define S_GEEX3002_ETIMTR peel(pick(nPos, 174, 3), " ")
#define R_GEEX3002_ETIMTR(A) put(nRec, 174, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPHR Code de la phrase de risque-Code of the risk phrase
! -
#define S_GEEX3002_CODPHR peel(pick(nPos, 177, 3), " ")
#define R_GEEX3002_CODPHR(A) put(nRec, 177, A :3.3)
!-----------------------------------------------------------
! FIELD : NBJFVI Durée de vie du produit-Product life
! -
#define S_GEEX3002_NBJFVI peel(pick(nPos, 180, 4), " ")
#define R_GEEX3002_NBJFVI(A) put(nRec, 180, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : CODGAM Code de la gamme opératoire-Code of the operating range
! -
#define S_GEEX3002_CODGAM peel(pick(nPos, 184, 10), " ")
#define R_GEEX3002_CODGAM(A) put(nRec, 184, A :10.10)
!-----------------------------------------------------------
! FIELD : CODQLP Code du qualifiant produit-Code qualifying product
! -
#define S_GEEX3002_CODQLP peel(pick(nPos, 194, 3), " ")
#define R_GEEX3002_CODQLP(A) put(nRec, 194, A :3.3)
!-----------------------------------------------------------
! FIELD : EMBCLQ Type emballage LQ-Package Type SQ
! -
#define S_GEEX3002_EMBCLQ peel(pick(nPos, 197, 1), " ")
#define R_GEEX3002_EMBCLQ(A) put(nRec, 197, A :1.1)
!-----------------------------------------------------------
! FIELD : CTRPRP Contrôle de la quantité en préparation-Controlling the amount
! in preparation
! -
#define S_GEEX3002_CTRPRP peel(pick(nPos, 198, 1), " ")
#define R_GEEX3002_CTRPRP(A) put(nRec, 198, A :1.1)
!-----------------------------------------------------------
! FIELD : CODRDS Code le la restriction de stockage-Code restricting the
! storage
! -
#define S_GEEX3002_CODRDS peel(pick(nPos, 199, 3), " ")
#define R_GEEX3002_CODRDS(A) put(nRec, 199, A :3.3)
!-----------------------------------------------------------
! FIELD : HAUCOL2 Hauteur du colis exprimée en cm-Height of the package in cm
! -
#define S_GEEX3002_HAUCOL2 peel(pick(nPos, 202, 5), " ")
#define R_GEEX3002_HAUCOL2(A) put(nRec, 202, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : HAUCOU2 Hauteur de la couche exprimée en cm-Height of the layer
! expressed in cm
! -
#define S_GEEX3002_HAUCOU2 peel(pick(nPos, 207, 5), " ")
#define R_GEEX3002_HAUCOU2(A) put(nRec, 207, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : HAUSPC2 Hauteur du SPCB-Height SPCB
! -
#define S_GEEX3002_HAUSPC2 peel(pick(nPos, 212, 5), " ")
#define R_GEEX3002_HAUSPC2(A) put(nRec, 212, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : HAUUVC2 Hauteur de l'UVC exprimée en cm-UVC height in cm
! -
#define S_GEEX3002_HAUUVC2 peel(pick(nPos, 217, 5), " ")
#define R_GEEX3002_HAUUVC2(A) put(nRec, 217, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : LNGCOL2 Longueur du colis exprimée en cm-Length of the package in cm
! -
#define S_GEEX3002_LNGCOL2 peel(pick(nPos, 222, 5), " ")
#define R_GEEX3002_LNGCOL2(A) put(nRec, 222, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : LNGSPC2 Longueur du SPCB exprimée en cm-SPCB length in cm
! -
#define S_GEEX3002_LNGSPC2 peel(pick(nPos, 227, 5), " ")
#define R_GEEX3002_LNGSPC2(A) put(nRec, 227, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : LNGUVC2 Longueur de l'UVC exprimée en cm-UVC length in cm
! -
#define S_GEEX3002_LNGUVC2 peel(pick(nPos, 232, 5), " ")
#define R_GEEX3002_LNGUVC2(A) put(nRec, 232, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : LRGCOL2 Largeur du colis exprimée en cm-Width of the parcel in cm
! -
#define S_GEEX3002_LRGCOL2 peel(pick(nPos, 237, 5), " ")
#define R_GEEX3002_LRGCOL2(A) put(nRec, 237, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : LRGSPC2 Largeur du SPCB exprimée en cm-SPCB width in cm
! -
#define S_GEEX3002_LRGSPC2 peel(pick(nPos, 242, 5), " ")
#define R_GEEX3002_LRGSPC2(A) put(nRec, 242, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : LRGUVC2 Largeur de l'UVC exprimée en cm-UVC width in cm
! -
#define S_GEEX3002_LRGUVC2 peel(pick(nPos, 247, 5), " ")
#define R_GEEX3002_LRGUVC2(A) put(nRec, 247, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODMNN Code de la règle de manutention-Code handling rule
! -
#define S_GEEX3002_CODMNN peel(pick(nPos, 252, 3), " ")
#define R_GEEX3002_CODMNN(A) put(nRec, 252, A :3.3)
!-----------------------------------------------------------
! FIELD : DISEXC Zone disponible pour de futures utilisations-Area available
! for future use
! -
#define S_GEEX3002_DISEXC peel(pick(nPos, 255, 2), " ")
#define R_GEEX3002_DISEXC(A) put(nRec, 255, A :2.2)
!-----------------------------------------------------------





!===========================================================
! Line : 30COMPONENTS 
!===========================================================
! FIELD : CODEXC 
#define S_30COMPONENTS_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_30COMPONENTS_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_30COMPONENTS_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_30COMPONENTS_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_30COMPONENTS_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_30COMPONENTS_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_30COMPONENTS_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_30COMPONENTS_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_30COMPONENTS_CODACT peel(pick(nPos, 7, 3), " ")
#define R_30COMPONENTS_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------

! FIELD : CODPRO 
#define S_30COMPONENTS_CODPRN peel(pick(nPos, 10, 17), " ")
#define R_30COMPONENTS_CODPRN(A) put(nRec, 10, A :17.17)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_30COMPONENTS_CODPRO peel(pick(nPos, 27, 17), " ")
#define R_30COMPONENTS_CODPRO(A) put(nRec, 27, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_30COMPONENTS_VALPRO peel(pick(nPos, 44, 2), " ")
#define R_30COMPONENTS_VALPRO(A) put(nRec, 44, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : DS1PRO 
#define S_30COMPONENTS_NBRCPS peel(pick(nPos, 46, 4), " ")
#define R_30COMPONENTS_NBRCPS(A) put(nRec, 46, A :4.4)
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_30COMPONENTS_ACTCPS peel(pick(nPos, 50, 3), " ")
#define R_30COMPONENTS_ACTCPS(A) put(nRec, 50, A :3.3)
!-----------------------------------------------------------
! FIELD : EANDS1 
#define S_30COMPONENTS_ORDCPS peel(pick(nPos, 53, 4), " ")
#define R_30COMPONENTS_ORDCPS(A) put(nRec, 53, A :4.4)
!-----------------------------------------------------------
! FIELD : EDIPRM 
#define S_30COMPONENTS_TYPCPS peel(pick(nPos, 57, 1), " ")
#define R_30COMPONENTS_TYPCPS(A) put(nRec, 57, A :1.1)
!-----------------------------------------------------------
! FIELD : EDIQLF 
#define S_30COMPONENTS_DVSCPS peel(pick(nPos, 58, 4), " ")
#define R_30COMPONENTS_DVSCPS(A) put(nRec, 58, A :4.4)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_30COMPONENTS_UNIPRN peel(pick(nPos, 62, 3), " ")
#define R_30COMPONENTS_UNIPRN(A) put(nRec, 62, A :3.3)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_30COMPONENTS_DISEXC peel(pick(nPos, 65, 192), " ")
#define R_30COMPONENTS_DISEXC(A) put(nRec, 65, A :192.192)
!-----------------------------------------------------------


!===========================================================
! Line : 30EANINFORMATION 
!===========================================================
! FIELD : CODEXC 
#define S_30EANINFORMATION_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_30EANINFORMATION_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_30EANINFORMATION_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_30EANINFORMATION_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_30EANINFORMATION_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_30EANINFORMATION_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_30EANINFORMATION_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_30EANINFORMATION_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_30EANINFORMATION_CODACT peel(pick(nPos, 7, 3), " ")
#define R_30EANINFORMATION_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_30EANINFORMATION_CODPRO peel(pick(nPos, 10, 17), " ")
#define R_30EANINFORMATION_CODPRO(A) put(nRec, 10, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_30EANINFORMATION_VALPRO peel(pick(nPos, 27, 2), " ")
#define R_30EANINFORMATION_VALPRO(A) put(nRec, 27, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : DS1PRO 
#define S_30EANINFORMATION_DS1PRO peel(pick(nPos, 29, 30), " ")
#define R_30EANINFORMATION_DS1PRO(A) put(nRec, 29, A :30.30)
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_30EANINFORMATION_EDIPRO peel(pick(nPos, 59, 17), " ")
#define R_30EANINFORMATION_EDIPRO(A) put(nRec, 59, A :17.17)
!-----------------------------------------------------------
! FIELD : EANDS1 
#define S_30EANINFORMATION_EANDS1 peel(pick(nPos, 76, 30), " ")
#define R_30EANINFORMATION_EANDS1(A) put(nRec, 76, A :30.30)
!-----------------------------------------------------------
! FIELD : EDIPRM 
#define S_30EANINFORMATION_EDIPRN peel(pick(nPos, 106, 1), " ")
#define R_30EANINFORMATION_EDIPRN(A) put(nRec, 106, A :1.1)
!-----------------------------------------------------------
! FIELD : EDIQLF 
#define S_30EANINFORMATION_EDIQLF peel(pick(nPos, 107, 1), " ")
#define R_30EANINFORMATION_EDIQLF(A) put(nRec, 107, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_30EANINFORMATION_DISEXC peel(pick(nPos, 108, 149), " ")
#define R_30EANINFORMATION_DISEXC(A) put(nRec, 108, A :149.149)
!-----------------------------------------------------------
!===========================================================
! Line : 30ADDITIONALINFORMATION 
!===========================================================
! FIELD : CODEXC 
#define S_30ADDITIONALINFORMATION_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_30ADDITIONALINFORMATION_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_30ADDITIONALINFORMATION_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_30ADDITIONALINFORMATION_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_30ADDITIONALINFORMATION_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_30ADDITIONALINFORMATION_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_30ADDITIONALINFORMATION_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_30ADDITIONALINFORMATION_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_30ADDITIONALINFORMATION_CODACT peel(pick(nPos, 7, 3), " ")
#define R_30ADDITIONALINFORMATION_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_30ADDITIONALINFORMATION_CODPRO peel(pick(nPos, 10, 17), " ")
#define R_30ADDITIONALINFORMATION_CODPRO(A) put(nRec, 10, A :17.17)
!-----------------------------------------------------------
! FIELD : TYPRUB 
#define S_30ADDITIONALINFORMATION_TYPRUB peel(pick(nPos, 27, 1), " ")
#define R_30ADDITIONALINFORMATION_TYPRUB(A) put(nRec, 27, A :1.1)
!-----------------------------------------------------------
! FIELD : TYPRUB1 
#define S_30ADDITIONALINFORMATION_TYPRUB1 peel(pick(nPos, 28, 1), " ")
#define R_30ADDITIONALINFORMATION_TYPRUB1(A) put(nRec, 28, A :1.1)
!-----------------------------------------------------------
! FIELD : TYPRUB2 
#define S_30ADDITIONALINFORMATION_TYPRUB2 peel(pick(nPos, 29, 1), " ")
#define R_30ADDITIONALINFORMATION_TYPRUB2(A) put(nRec, 29, A :1.1)
!-----------------------------------------------------------
! FIELD : TYPRUB3 
#define S_30ADDITIONALINFORMATION_TYPRUB3 peel(pick(nPos, 30, 1), " ")
#define R_30ADDITIONALINFORMATION_TYPRUB3(A) put(nRec, 30, A :1.1)
!-----------------------------------------------------------
! FIELD : TYPRUB4 
#define S_30ADDITIONALINFORMATION_TYPRUB4 peel(pick(nPos, 31, 1), " ")
#define R_30ADDITIONALINFORMATION_TYPRUB4(A) put(nRec, 31, A :1.1)
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_30ADDITIONALINFORMATION_CODRUB peel(pick(nPos, 32, 4), " ")
#define R_30ADDITIONALINFORMATION_CODRUB(A) put(nRec, 32, A :4.4)
!-----------------------------------------------------------
! FIELD : CODRUB1 
#define S_30ADDITIONALINFORMATION_CODRUB1 peel(pick(nPos, 36, 4), " ")
#define R_30ADDITIONALINFORMATION_CODRUB1(A) put(nRec, 36, A :4.4)
!-----------------------------------------------------------
! FIELD : CODRUB2 
#define S_30ADDITIONALINFORMATION_CODRUB2 peel(pick(nPos, 40, 4), " ")
#define R_30ADDITIONALINFORMATION_CODRUB2(A) put(nRec, 40, A :4.4)
!-----------------------------------------------------------
! FIELD : CODRUB3 
#define S_30ADDITIONALINFORMATION_CODRUB3 peel(pick(nPos, 44, 4), " ")
#define R_30ADDITIONALINFORMATION_CODRUB3(A) put(nRec, 44, A :4.4)
!-----------------------------------------------------------
! FIELD : CODRUB4 
#define S_30ADDITIONALINFORMATION_CODRUB4 peel(pick(nPos, 48, 4), " ")
#define R_30ADDITIONALINFORMATION_CODRUB4(A) put(nRec, 48, A :4.4)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_30ADDITIONALINFORMATION_VALRUB peel(pick(nPos, 52, 35), " ")
#define R_30ADDITIONALINFORMATION_VALRUB(A) put(nRec, 52, A :35.35)
!-----------------------------------------------------------
! FIELD : VALRUB1 
#define S_30ADDITIONALINFORMATION_VALRUB1 peel(pick(nPos, 87, 35), " ")
#define R_30ADDITIONALINFORMATION_VALRUB1(A) put(nRec, 87, A :35.35)
!-----------------------------------------------------------
! FIELD : VALRUB2 
#define S_30ADDITIONALINFORMATION_VALRUB2 peel(pick(nPos, 122, 35), " ")
#define R_30ADDITIONALINFORMATION_VALRUB2(A) put(nRec, 122, A :35.35)
!-----------------------------------------------------------
! FIELD : VALRUB3 
#define S_30ADDITIONALINFORMATION_VALRUB3 peel(pick(nPos, 157, 35), " ")
#define R_30ADDITIONALINFORMATION_VALRUB3(A) put(nRec, 157, A :35.35)
!-----------------------------------------------------------
! FIELD : VALRUB4 
#define S_30ADDITIONALINFORMATION_VALRUB4 peel(pick(nPos, 192, 35), " ")
#define R_30ADDITIONALINFORMATION_VALRUB4(A) put(nRec, 192, A :35.35)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_30ADDITIONALINFORMATION_DISEXC peel(pick(nPos, 227, 30), " ")
#define R_30ADDITIONALINFORMATION_DISEXC(A) put(nRec, 227, A :30.30)
!-----------------------------------------------------------
!===========================================================
! Line : 3050 
!===========================================================
! FIELD : CODEXC 
#define S_3050_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_3050_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_3050_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_3050_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_3050_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_3050_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_3050_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_3050_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_3050_CODACT peel(pick(nPos, 7, 3), " ")
#define R_3050_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_3050_CODPRO peel(pick(nPos, 10, 17), " ")
#define R_3050_CODPRO(A) put(nRec, 10, A :17.17)
!-----------------------------------------------------------
! FIELD : TYPRUB 
#define S_3050_TYPRUB peel(pick(nPos, 27, 1), " ")
#define R_3050_TYPRUB(A) put(nRec, 27, A :1.1)
!-----------------------------------------------------------
! FIELD : DUMMY1 
#define S_3050_DUMMY1 peel(pick(nPos, 28, 4), " ")
#define R_3050_DUMMY1(A) put(nRec, 28, A :4.4)
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_3050_CODRUB peel(pick(nPos, 32, 4), " ")
#define R_3050_CODRUB(A) put(nRec, 32, A :4.4)
!-----------------------------------------------------------
! FIELD : DUMMY2 
#define S_3050_DUMMY2 peel(pick(nPos, 36, 16), " ")
#define R_3050_DUMMY2(A) put(nRec, 36, A :16.16)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_3050_VALRUB peel(pick(nPos, 52, 35), " ")
#define R_3050_VALRUB(A) put(nRec, 52, A :35.35)
!-----------------------------------------------------------
!===========================================================
! Line : 99FILEFOOTER 
!===========================================================
! FIELD : CODEXC 
#define S_99FILEFOOTER_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_99FILEFOOTER_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_99FILEFOOTER_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_99FILEFOOTER_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_99FILEFOOTER_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_99FILEFOOTER_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_99FILEFOOTER_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_99FILEFOOTER_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : EMTEXC 
#define S_99FILEFOOTER_EMTEXC peel(pick(nPos, 7, 14), " ")
#define R_99FILEFOOTER_EMTEXC(A) put(nRec, 7, A :14.14)
!-----------------------------------------------------------
! FIELD : RCTEXC 
#define S_99FILEFOOTER_RCTEXC peel(pick(nPos, 21, 14), " ")
#define R_99FILEFOOTER_RCTEXC(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXC 
#define S_99FILEFOOTER_DATEXC peel(pick(nPos, 35, 8), " ")
#define R_99FILEFOOTER_DATEXC(A) put(nRec, 35, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_99FILEFOOTER_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_99FILEFOOTER_HEUEXC(A) put(nRec, 43, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : NUMEXC 
#define S_99FILEFOOTER_NUMEXC peel(pick(nPos, 49, 7), " ")
#define R_99FILEFOOTER_NUMEXC(A) put(nRec, 49, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : CPTEXC 
#define S_99FILEFOOTER_CPTEXC peel(pick(nPos, 56, 8), " ")
#define R_99FILEFOOTER_CPTEXC(A) put(nRec, 56, build(number(A):R08.0))
!-----------------------------------------------------------



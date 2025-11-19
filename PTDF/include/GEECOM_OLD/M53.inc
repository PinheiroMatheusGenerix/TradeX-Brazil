! File M53_DHL_OUT : 
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
! Line : 5300ORDERHEADER 
!===========================================================
! FIELD : CODEXC 
#define S_5300ORDERHEADER_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_5300ORDERHEADER_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_5300ORDERHEADER_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_5300ORDERHEADER_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_5300ORDERHEADER_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_5300ORDERHEADER_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_5300ORDERHEADER_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_5300ORDERHEADER_TRTEXC(A) put(nRec, 6, build(number(A):R01.0))
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_5300ORDERHEADER_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_5300ORDERHEADER_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_5300ORDERHEADER_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_5300ORDERHEADER_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_5300ORDERHEADER_CODACT peel(pick(nPos, 18, 3), " ")
#define R_5300ORDERHEADER_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_5300ORDERHEADER_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_5300ORDERHEADER_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_5300ORDERHEADER_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_5300ORDERHEADER_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : CODTLI 
#define S_5300ORDERHEADER_CODTLI peel(pick(nPos, 65, 3), " ")
#define R_5300ORDERHEADER_CODTLI(A) put(nRec, 65, A :3.3)
!-----------------------------------------------------------
! FIELD : CODACL 
#define S_5300ORDERHEADER_CODACL peel(pick(nPos, 68, 3), " ")
#define R_5300ORDERHEADER_CODACL(A) put(nRec, 68, A :3.3)
!-----------------------------------------------------------
! FIELD : ORICDE 
#define S_5300ORDERHEADER_ORICDE peel(pick(nPos, 71, 1), " ")
#define R_5300ORDERHEADER_ORICDE(A) put(nRec, 71, A :1.1)
!-----------------------------------------------------------
! FIELD : DATLIV 
#define S_5300ORDERHEADER_DATLIV peel(pick(nPos, 72, 8), " ")
#define R_5300ORDERHEADER_DATLIV(A) put(nRec, 72, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEULIV 
#define S_5300ORDERHEADER_HEULIV peel(pick(nPos, 80, 4), " ")
#define R_5300ORDERHEADER_HEULIV(A) put(nRec, 80, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : CLILIV 
#define S_5300ORDERHEADER_CLILIV peel(pick(nPos, 84, 14), " ")
#define R_5300ORDERHEADER_CLILIV(A) put(nRec, 84, A :14.14)
!-----------------------------------------------------------
! FIELD : TYPLIV 
#define S_5300ORDERHEADER_TYPLIV peel(pick(nPos, 98, 1), " ")
#define R_5300ORDERHEADER_TYPLIV(A) put(nRec, 98, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMVAG 
#define S_5300ORDERHEADER_NUMVAG peel(pick(nPos, 99, 8), " ")
#define R_5300ORDERHEADER_NUMVAG(A) put(nRec, 99, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATPRP 
#define S_5300ORDERHEADER_DATPRP peel(pick(nPos, 107, 8), " ")
#define R_5300ORDERHEADER_DATPRP(A) put(nRec, 107, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODRGT 
#define S_5300ORDERHEADER_CODRGT peel(pick(nPos, 115, 3), " ")
#define R_5300ORDERHEADER_CODRGT(A) put(nRec, 115, A :3.3)
!-----------------------------------------------------------
! FIELD : TOULIV 
#define S_5300ORDERHEADER_TOULIV peel(pick(nPos, 118, 4), " ")
#define R_5300ORDERHEADER_TOULIV(A) put(nRec, 118, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : ORDLIV 
#define S_5300ORDERHEADER_ORDLIV peel(pick(nPos, 122, 4), " ")
#define R_5300ORDERHEADER_ORDLIV(A) put(nRec, 122, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : NUMTOU 
#define S_5300ORDERHEADER_NUMTOU peel(pick(nPos, 126, 8), " ")
#define R_5300ORDERHEADER_NUMTOU(A) put(nRec, 126, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATEXP 
#define S_5300ORDERHEADER_DATEXP peel(pick(nPos, 134, 8), " ")
#define R_5300ORDERHEADER_DATEXP(A) put(nRec, 134, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXP 
#define S_5300ORDERHEADER_HEUEXP peel(pick(nPos, 142, 6), " ")
#define R_5300ORDERHEADER_HEUEXP(A) put(nRec, 142, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_5300ORDERHEADER_CODTRA peel(pick(nPos, 148, 14), " ")
#define R_5300ORDERHEADER_CODTRA(A) put(nRec, 148, A :14.14)
!-----------------------------------------------------------
! FIELD : CODCAM 
#define S_5300ORDERHEADER_CODCAM peel(pick(nPos, 162, 14), " ")
#define R_5300ORDERHEADER_CODCAM(A) put(nRec, 162, A :14.14)
!-----------------------------------------------------------
! FIELD : CODCHF 
#define S_5300ORDERHEADER_CODCHF peel(pick(nPos, 176, 10), " ")
#define R_5300ORDERHEADER_CODCHF(A) put(nRec, 176, A :10.10)
!-----------------------------------------------------------
! FIELD : CTRLIV 
#define S_5300ORDERHEADER_CTRLIV peel(pick(nPos, 186, 10), " ")
#define R_5300ORDERHEADER_CTRLIV(A) put(nRec, 186, A :10.10)
!-----------------------------------------------------------
! FIELD : REFCNT 
#define S_5300ORDERHEADER_REFCNT peel(pick(nPos, 196, 10), " ")
#define R_5300ORDERHEADER_REFCNT(A) put(nRec, 196, A :10.10)
!-----------------------------------------------------------
! FIELD : CODSIT 
#define S_5300ORDERHEADER_CODSIT peel(pick(nPos, 206, 3), " ")
#define R_5300ORDERHEADER_CODSIT(A) put(nRec, 206, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMPLB1 
#define S_5300ORDERHEADER_NUMPLB peel(pick(nPos, 209, 16), " ")
#define R_5300ORDERHEADER_NUMPLB(A) put(nRec, 209, A :1+.16)
!-----------------------------------------------------------
! FIELD : NUMPLB2 
!-----------------------------------------------------------
! FIELD : CODLDR 
#define S_5300ORDERHEADER_CODLDR peel(pick(nPos, 225, 3), " ")
#define R_5300ORDERHEADER_CODLDR(A) put(nRec, 225, A :3.3)
!-----------------------------------------------------------
! FIELD : LIVSOL 
#define S_5300ORDERHEADER_LIVSOL peel(pick(nPos, 228, 1), " ")
#define R_5300ORDERHEADER_LIVSOL(A) put(nRec, 228, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMCNT 
#define S_5300ORDERHEADER_NUMCNT peel(pick(nPos, 229, 17), " ")
#define R_5300ORDERHEADER_NUMCNT(A) put(nRec, 229, A :17.17)
!-----------------------------------------------------------
! FIELD : NUMPTP 
#define S_5300ORDERHEADER_NUMPTP peel(pick(nPos, 246, 10), " ")
#define R_5300ORDERHEADER_NUMPTP(A) put(nRec, 246, A :10.10)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_5300ORDERHEADER_DISEXC peel(pick(nPos, 256, 1), " ")
#define R_5300ORDERHEADER_DISEXC(A) put(nRec, 256, A :1.1)
!-----------------------------------------------------------
!===========================================================
! Line : 5101ORDERHEADER_COMP 
!===========================================================
! FIELD : CODEXC 
#define S_5301ORDERHEADER_COMP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_5301ORDERHEADER_COMP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_5301ORDERHEADER_COMP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_5301ORDERHEADER_COMP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_5301ORDERHEADER_COMP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_5301ORDERHEADER_COMP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_5301ORDERHEADER_COMP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_5301ORDERHEADER_COMP_TRTEXC(A) put(nRec, 6, build(number(A):R01.0))
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_5301ORDERHEADER_COMP_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_5301ORDERHEADER_COMP_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_5301ORDERHEADER_COMP_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_5301ORDERHEADER_COMP_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_5301ORDERHEADER_COMP_CODACT peel(pick(nPos, 18, 3), " ")
#define R_5301ORDERHEADER_COMP_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_5301ORDERHEADER_COMP_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_5301ORDERHEADER_COMP_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_5301ORDERHEADER_COMP_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_5301ORDERHEADER_COMP_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : TOPLIV 
#define S_5301ORDERHEADER_COMP_TOPLIV peel(pick(nPos, 65, 2), " ")
#define R_5301ORDERHEADER_COMP_TOPLIV(A) put(nRec, 65, A :2.2)
!-----------------------------------------------------------
! FIELD : DIPLIV 
#define S_5301ORDERHEADER_COMP_DIPLIV peel(pick(nPos, 68, 50), " ")
#define R_5301ORDERHEADER_COMP_DIPLIV(A) put(nRec, 68, A :50.50)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_5301ORDERHEADER_COMP_DISEXC peel(pick(nPos, 118, 139), " ")
#define R_5301ORDERHEADER_COMP_DISEXC(A) put(nRec, 118, A :139.139)
!-----------------------------------------------------------
!===========================================================
! Line : 5120ORDERLINE 
!===========================================================
! FIELD : CODEXC 
#define S_5320ORDERLINE_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_5320ORDERLINE_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_5320ORDERLINE_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_5320ORDERLINE_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_5320ORDERLINE_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_5320ORDERLINE_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_5320ORDERLINE_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_5320ORDERLINE_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_5320ORDERLINE_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_5320ORDERLINE_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_5320ORDERLINE_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_5320ORDERLINE_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_5320ORDERLINE_CODACT peel(pick(nPos, 18, 3), " ")
#define R_5320ORDERLINE_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_5320ORDERLINE_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_5320ORDERLINE_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_5320ORDERLINE_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_5320ORDERLINE_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_5320ORDERLINE_NLILIV peel(pick(nPos, 65, 5), " ")
#define R_5320ORDERLINE_NLILIV(A) put(nRec, 65, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_5320ORDERLINE_CODPRO peel(pick(nPos, 70, 17), " ")
#define R_5320ORDERLINE_CODPRO(A) put(nRec, 70, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_5320ORDERLINE_VALPRO peel(pick(nPos, 87, 2), " ")
#define R_5320ORDERLINE_VALPRO(A) put(nRec, 87, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_5320ORDERLINE_EDIPRO peel(pick(nPos, 89, 17), " ")
#define R_5320ORDERLINE_EDIPRO(A) put(nRec, 89, A :17.17)
!-----------------------------------------------------------
! FIELD : UVCCDE 
#define S_5320ORDERLINE_UVCCDE peel(pick(nPos, 106, 9), " ")
#define R_5320ORDERLINE_UVCCDE(A) put(nRec, 106, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UNICDE 
#define S_5320ORDERLINE_UNICDE peel(pick(nPos, 115, 3), " ")
#define R_5320ORDERLINE_UNICDE(A) put(nRec, 115, A :3.3)
!-----------------------------------------------------------
! FIELD : LIVSOL 
#define S_5320ORDERLINE_LIVSOL peel(pick(nPos, 118, 1), " ")
#define R_5320ORDERLINE_LIVSOL(A) put(nRec, 118, A :1.1)
!-----------------------------------------------------------
! FIELD : UVCLIV 
#define S_5320ORDERLINE_UVCLIV peel(pick(nPos, 119, 9), " ")
#define R_5320ORDERLINE_UVCLIV(A) put(nRec, 119, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : MESPRO 
#define S_5320ORDERLINE_MESPRO peel(pick(nPos, 128, 1), " ")
#define R_5320ORDERLINE_MESPRO(A) put(nRec, 128, A :1.1)
!-----------------------------------------------------------
! FIELD : PDNLIV 
#define S_5320ORDERLINE_PDNLIV peel(pick(nPos, 129, 11), " ")
#define R_5320ORDERLINE_PDNLIV(A) put(nRec, 129, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : CODACL 
#define S_5320ORDERLINE_CODACL peel(pick(nPos, 140, 3), " ")
#define R_5320ORDERLINE_CODACL(A) put(nRec, 140, A :3.3)
!-----------------------------------------------------------
! FIELD : MOTMVT 
#define S_5320ORDERLINE_MOTMVT peel(pick(nPos, 143, 3), " ")
#define R_5320ORDERLINE_MOTMVT(A) put(nRec, 143, A :3.3)
!-----------------------------------------------------------
! FIELD : TYPSTK 
#define S_5320ORDERLINE_TYPSTK peel(pick(nPos, 146, 1), " ")
#define R_5320ORDERLINE_TYPSTK(A) put(nRec, 146, A :1.1)
!-----------------------------------------------------------
! FIELD : TYPOPE 
#define S_5320ORDERLINE_TYPOPE peel(pick(nPos, 147, 1), " ")
#define R_5320ORDERLINE_TYPOPE(A) put(nRec, 147, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMOPE 
#define S_5320ORDERLINE_NUMOPE peel(pick(nPos, 148, 6), " ")
#define R_5320ORDERLINE_NUMOPE(A) put(nRec, 148, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : SPCPRO 
#define S_5320ORDERLINE_SPCPRO peel(pick(nPos, 154, 4), " ")
#define R_5320ORDERLINE_SPCPRO(A) put(nRec, 154, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_5320ORDERLINE_PCBPRO peel(pick(nPos, 158, 5), " ")
#define R_5320ORDERLINE_PCBPRO(A) put(nRec, 158, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : TOPLIV 
#define S_5320ORDERLINE_TOPLIV peel(pick(nPos, 163, 5), " ")
#define R_5320ORDERLINE_TOPLIV(A) put(nRec, 163, A :5.5)
!-----------------------------------------------------------
! FIELD : DIPLIV 
#define S_5320ORDERLINE_DIPLIV peel(pick(nPos, 168, 50), " ")
#define R_5320ORDERLINE_DIPLIV(A) put(nRec, 168, A :50.50)
!-----------------------------------------------------------
! FIELD : UVCSRV 
#define S_5320ORDERLINE_UVCSRV peel(pick(nPos, 218, 9), " ")
#define R_5320ORDERLINE_UVCSRV(A) put(nRec, 218, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UVCINI 
#define S_5320ORDERLINE_UVCINI peel(pick(nPos, 227, 9), " ")
#define R_5320ORDERLINE_UVCINI(A) put(nRec, 227, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : NUMEBL 
#define S_5320ORDERLINE_NUMEBL peel(pick(nPos, 236, 8), " ")
#define R_5320ORDERLINE_NUMEBL(A) put(nRec, 236, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUEBL 
#define S_5320ORDERLINE_SNUEBL peel(pick(nPos, 244, 3), " ")
#define R_5320ORDERLINE_SNUEBL(A) put(nRec, 244, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_5320ORDERLINE_DISEXC peel(pick(nPos, 247, 10), " ")
#define R_5320ORDERLINE_DISEXC(A) put(nRec, 247, A :10.10)
!-----------------------------------------------------------
!===========================================================
! Line : 5130ORDERLINE_DETAIL 
!===========================================================
! FIELD : CODEXC 
#define S_5330ORDERLINE_DETAIL_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_5330ORDERLINE_DETAIL_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_5330ORDERLINE_DETAIL_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_5330ORDERLINE_DETAIL_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_5330ORDERLINE_DETAIL_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_5330ORDERLINE_DETAIL_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_5330ORDERLINE_DETAIL_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_5330ORDERLINE_DETAIL_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_5330ORDERLINE_DETAIL_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_5330ORDERLINE_DETAIL_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_5330ORDERLINE_DETAIL_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_5330ORDERLINE_DETAIL_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_5330ORDERLINE_DETAIL_CODACT peel(pick(nPos, 18, 3), " ")
#define R_5330ORDERLINE_DETAIL_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_5330ORDERLINE_DETAIL_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_5330ORDERLINE_DETAIL_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_5330ORDERLINE_DETAIL_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_5330ORDERLINE_DETAIL_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : NLILIV 
#define S_5330ORDERLINE_DETAIL_NLILIV peel(pick(nPos, 65, 5), " ")
#define R_5330ORDERLINE_DETAIL_NLILIV(A) put(nRec, 65, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_5330ORDERLINE_DETAIL_CODPRO peel(pick(nPos, 70, 17), " ")
#define R_5330ORDERLINE_DETAIL_CODPRO(A) put(nRec, 70, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_5330ORDERLINE_DETAIL_VALPRO peel(pick(nPos, 87, 2), " ")
#define R_5330ORDERLINE_DETAIL_VALPRO(A) put(nRec, 87, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : UVCLIV 
#define S_5330ORDERLINE_DETAIL_UVCLIV peel(pick(nPos, 89, 9), " ")
#define R_5330ORDERLINE_DETAIL_UVCLIV(A) put(nRec, 89, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : MESPRO 
#define S_5330ORDERLINE_DETAIL_MESPRO peel(pick(nPos, 98, 1), " ")
#define R_5330ORDERLINE_DETAIL_MESPRO(A) put(nRec, 98, A :1.1)
!-----------------------------------------------------------
! FIELD : PDNLIV 
#define S_5330ORDERLINE_DETAIL_PDNLIV peel(pick(nPos, 99, 11), " ")
#define R_5330ORDERLINE_DETAIL_PDNLIV(A) put(nRec, 99, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : MOTMVT 
#define S_5330ORDERLINE_DETAIL_MOTMVT peel(pick(nPos, 110, 3), " ")
#define R_5330ORDERLINE_DETAIL_MOTMVT(A) put(nRec, 110, A :3.3)
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_5330ORDERLINE_DETAIL_CODLOT peel(pick(nPos, 113, 20), " ")
#define R_5330ORDERLINE_DETAIL_CODLOT(A) put(nRec, 113, A :20.20)
!-----------------------------------------------------------
! FIELD : NUMLOT 
#define S_5330ORDERLINE_DETAIL_NUMLOT peel(pick(nPos, 133, 9), " ")
#define R_5330ORDERLINE_DETAIL_NUMLOT(A) put(nRec, 133, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_5330ORDERLINE_DETAIL_CODPAL peel(pick(nPos, 142, 18), " ")
#define R_5330ORDERLINE_DETAIL_CODPAL(A) put(nRec, 142, A :18.18)
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_5330ORDERLINE_DETAIL_DATFVI peel(pick(nPos, 160, 8), " ")
#define R_5330ORDERLINE_DETAIL_DATFVI(A) put(nRec, 160, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : NUMSUP 
#define S_5330ORDERLINE_DETAIL_NUMSUP peel(pick(nPos, 168, 8), " ")
#define R_5330ORDERLINE_DETAIL_NUMSUP(A) put(nRec, 168, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUSUP 
#define S_5330ORDERLINE_DETAIL_SNUSUP peel(pick(nPos, 176, 3), " ")
#define R_5330ORDERLINE_DETAIL_SNUSUP(A) put(nRec, 176, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODPRP 
#define S_5330ORDERLINE_DETAIL_CODPRP peel(pick(nPos, 179, 10), " ")
#define R_5330ORDERLINE_DETAIL_CODPRP(A) put(nRec, 179, A :10.10)
!-----------------------------------------------------------
! FIELD : PRPPIC 
#define S_5330ORDERLINE_DETAIL_PRPPIC peel(pick(nPos, 189, 1), " ")
#define R_5330ORDERLINE_DETAIL_PRPPIC(A) put(nRec, 189, A :1.1)
!-----------------------------------------------------------
! FIELD : SPCPRO 
#define S_5330ORDERLINE_DETAIL_SPCPRO peel(pick(nPos, 190, 4), " ")
#define R_5330ORDERLINE_DETAIL_SPCPRO(A) put(nRec, 190, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_5330ORDERLINE_DETAIL_PCBPRO peel(pick(nPos, 194, 5), " ")
#define R_5330ORDERLINE_DETAIL_PCBPRO(A) put(nRec, 194, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : COLCOU 
#define S_5330ORDERLINE_DETAIL_COLCOU peel(pick(nPos, 199, 4), " ")
#define R_5330ORDERLINE_DETAIL_COLCOU(A) put(nRec, 199, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : COUPAL 
#define S_5330ORDERLINE_DETAIL_COUPAL peel(pick(nPos, 203, 4), " ")
#define R_5330ORDERLINE_DETAIL_COUPAL(A) put(nRec, 203, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : GERPAL 
#define S_5330ORDERLINE_DETAIL_GERPAL peel(pick(nPos, 207, 2), " ")
#define R_5330ORDERLINE_DETAIL_GERPAL(A) put(nRec, 207, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODEMB 
#define S_5330ORDERLINE_DETAIL_CODEMB peel(pick(nPos, 209, 3), " ")
#define R_5330ORDERLINE_DETAIL_CODEMB(A) put(nRec, 209, A :3.3)
!-----------------------------------------------------------
! FIELD : CODACL 
#define S_5330ORDERLINE_DETAIL_CODACL peel(pick(nPos, 212, 3), " ")
#define R_5330ORDERLINE_DETAIL_CODACL(A) put(nRec, 212, A :3.3)
!-----------------------------------------------------------
! FIELD : UVCSRV 
#define S_5330ORDERLINE_DETAIL_UVCSRV peel(pick(nPos, 215, 9), " ")
#define R_5330ORDERLINE_DETAIL_UVCSRV(A) put(nRec, 215, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : SSCHET 
#define S_5330ORDERLINE_DETAIL_SSCHET peel(pick(nPos, 224, 18), " ")
#define R_5330ORDERLINE_DETAIL_SSCHET(A) put(nRec, 224, A :18.18)
!-----------------------------------------------------------
! FIELD : HEUSUP 
#define S_5330ORDERLINE_DETAIL_HEUSUP peel(pick(nPos, 242, 8), " ")
#define R_5330ORDERLINE_DETAIL_HEUSUP(A) put(nRec, 242, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_5330ORDERLINE_DETAIL_MOTIMM peel(pick(nPos, 250, 3), " ")
#define R_5330ORDERLINE_DETAIL_MOTIMM(A) put(nRec, 250, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMCLS 
#define S_5330ORDERLINE_DETAIL_NUMCLS peel(pick(nPos, 253, 4), " ")
#define R_5330ORDERLINE_DETAIL_NUMCLS(A) put(nRec, 253, build(number(A):R04.0))
!-----------------------------------------------------------
!===========================================================
! Line : 5199ORDERFOOTER 
!===========================================================
! FIELD : CODEXC 
#define S_5399ORDERFOOTER_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_5399ORDERFOOTER_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_5399ORDERFOOTER_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_5399ORDERFOOTER_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_5399ORDERFOOTER_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_5399ORDERFOOTER_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_5399ORDERFOOTER_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_5399ORDERFOOTER_TRTEXC(A) put(nRec, 6, build(number(A):R01.0))
!-----------------------------------------------------------
! FIELD : NUMLIV 
#define S_5399ORDERFOOTER_NUMLIV peel(pick(nPos, 7, 8), " ")
#define R_5399ORDERFOOTER_NUMLIV(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNULIV 
#define S_5399ORDERFOOTER_SNULIV peel(pick(nPos, 15, 3), " ")
#define R_5399ORDERFOOTER_SNULIV(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_5399ORDERFOOTER_CODACT peel(pick(nPos, 18, 3), " ")
#define R_5399ORDERFOOTER_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_5399ORDERFOOTER_CODCLI peel(pick(nPos, 21, 14), " ")
#define R_5399ORDERFOOTER_CODCLI(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_5399ORDERFOOTER_REFLIV peel(pick(nPos, 35, 30), " ")
#define R_5399ORDERFOOTER_REFLIV(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : CUMLIG 
#define S_5399ORDERFOOTER_CUMLIG peel(pick(nPos, 65, 4), " ")
#define R_5399ORDERFOOTER_CUMLIG(A) put(nRec, 65, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : MVTEXC 
#define S_5399ORDERFOOTER_MVTEXC peel(pick(nPos, 69, 8), " ")
#define R_5399ORDERFOOTER_MVTEXC(A) put(nRec, 69, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CUMSUP 
#define S_5399ORDERFOOTER_CUMSUP peel(pick(nPos, 77, 5), " ")
#define R_5399ORDERFOOTER_CUMSUP(A) put(nRec, 77, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : COLTOT 
#define S_5399ORDERFOOTER_COLTOT peel(pick(nPos, 82, 9), " ")
#define R_5399ORDERFOOTER_COLTOT(A) put(nRec, 82, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : TOTPRO 
#define S_5399ORDERFOOTER_TOTPRO peel(pick(nPos, 91, 5), " ")
#define R_5399ORDERFOOTER_TOTPRO(A) put(nRec, 91, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : PDBLIV 
#define S_5399ORDERFOOTER_PDBLIV peel(pick(nPos, 96, 11), " ")
#define R_5399ORDERFOOTER_PDBLIV(A) put(nRec, 96, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : PDNLIV 
#define S_5399ORDERFOOTER_PDNLIV peel(pick(nPos, 107, 11), " ")
#define R_5399ORDERFOOTER_PDNLIV(A) put(nRec, 107, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_5399ORDERFOOTER_DISEXC peel(pick(nPos, 118, 139), " ")
#define R_5399ORDERFOOTER_DISEXC(A) put(nRec, 118, A :139.139)
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


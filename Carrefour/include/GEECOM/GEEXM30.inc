! File GEEXM30 : 
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
! Line : GEEX3000 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX3000_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX3000_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX3000_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX3000_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX3000_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX3000_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX3000_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX3000_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX3000_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX3000_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX3000_CODPRO peel(pick(nPos, 10, 17), " ")
#define R_GEEX3000_CODPRO(A) put(nRec, 10, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX3000_VALPRO peel(pick(nPos, 27, 2), " ")
#define R_GEEX3000_VALPRO(A) put(nRec, 27, A :2.2)
!-----------------------------------------------------------
! FIELD : DS1PRO 
#define S_GEEX3000_DS1PRO peel(pick(nPos, 29, 30), " ")
#define R_GEEX3000_DS1PRO(A) put(nRec, 29, A :30.30)
!-----------------------------------------------------------
! FIELD : DS2PRO 
#define S_GEEX3000_DS2PRO peel(pick(nPos, 59, 30), " ")
#define R_GEEX3000_DS2PRO(A) put(nRec, 59, A :30.30)
!-----------------------------------------------------------
! FIELD : FOUPRO 
#define S_GEEX3000_FOUPRO peel(pick(nPos, 89, 14), " ")
#define R_GEEX3000_FOUPRO(A) put(nRec, 89, A :14.14)
!-----------------------------------------------------------
! FIELD : VAPPRO 
#define S_GEEX3000_VAPPRO peel(pick(nPos, 103, 2), " ")
#define R_GEEX3000_VAPPRO(A) put(nRec, 103, A :2.2)
!-----------------------------------------------------------
! FIELD : FAMPRO 
#define S_GEEX3000_FAMPRO peel(pick(nPos, 105, 10), " ")
#define R_GEEX3000_FAMPRO(A) put(nRec, 105, A :10.10)
!-----------------------------------------------------------
! FIELD : ANAPRO 
#define S_GEEX3000_ANAPRO peel(pick(nPos, 115, 15), " ")
#define R_GEEX3000_ANAPRO(A) put(nRec, 115, A :15.15)
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_GEEX3000_EDIPRO peel(pick(nPos, 130, 17), " ")
#define R_GEEX3000_EDIPRO(A) put(nRec, 130, A :17.17)
!-----------------------------------------------------------
! FIELD : SPCPRO 
#define S_GEEX3000_SPCPRO peel(pick(nPos, 147, 4), " ")
#define R_GEEX3000_SPCPRO(A) put(nRec, 147, A :4.4)
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX3000_PCBPRO peel(pick(nPos, 151, 5), " ")
#define R_GEEX3000_PCBPRO(A) put(nRec, 151, A :5.5)
!-----------------------------------------------------------
! FIELD : UNIPRO 
#define S_GEEX3000_UNIPRO peel(pick(nPos, 156, 3), " ")
#define R_GEEX3000_UNIPRO(A) put(nRec, 156, A :3.3)
!-----------------------------------------------------------
! FIELD : MESPRO 
#define S_GEEX3000_MESPRO peel(pick(nPos, 159, 1), " ")
#define R_GEEX3000_MESPRO(A) put(nRec, 159, A :1.1)
!-----------------------------------------------------------
! FIELD : PDBUVC 
#define S_GEEX3000_PDBUVC peel(pick(nPos, 160, 7), " ")
#define R_GEEX3000_PDBUVC(A) put(nRec, 160, A :7.7)
!-----------------------------------------------------------
! FIELD : PDNUVC 
#define S_GEEX3000_PDNUVC peel(pick(nPos, 167, 7), " ")
#define R_GEEX3000_PDNUVC(A) put(nRec, 167, A :7.7)
!-----------------------------------------------------------
! FIELD : HAUUVC 
#define S_GEEX3000_HAUUVC peel(pick(nPos, 174, 3), " ")
#define R_GEEX3000_HAUUVC(A) put(nRec, 174, A :3.3)
!-----------------------------------------------------------
! FIELD : LNGUVC 
#define S_GEEX3000_LNGUVC peel(pick(nPos, 177, 3), " ")
#define R_GEEX3000_LNGUVC(A) put(nRec, 177, A :3.3)
!-----------------------------------------------------------
! FIELD : LRGUVC 
#define S_GEEX3000_LRGUVC peel(pick(nPos, 180, 3), " ")
#define R_GEEX3000_LRGUVC(A) put(nRec, 180, A :3.3)
!-----------------------------------------------------------
! FIELD : PDBCOL 
#define S_GEEX3000_PDBCOL peel(pick(nPos, 183, 7), " ")
#define R_GEEX3000_PDBCOL(A) put(nRec, 183, A :7.7)
!-----------------------------------------------------------
! FIELD : HAUCOL 
#define S_GEEX3000_HAUCOL peel(pick(nPos, 190, 3), " ")
#define R_GEEX3000_HAUCOL(A) put(nRec, 190, A :3.3)
!-----------------------------------------------------------
! FIELD : LNGCOL 
#define S_GEEX3000_LNGCOL peel(pick(nPos, 193, 3), " ")
#define R_GEEX3000_LNGCOL(A) put(nRec, 193, A :3.3)
!-----------------------------------------------------------
! FIELD : LRGCOL 
#define S_GEEX3000_LRGCOL peel(pick(nPos, 196, 3), " ")
#define R_GEEX3000_LRGCOL(A) put(nRec, 196, A :3.3)
!-----------------------------------------------------------
! FIELD : COLCOU 
#define S_GEEX3000_COLCOU peel(pick(nPos, 199, 4), " ")
#define R_GEEX3000_COLCOU(A) put(nRec, 199, A :4.4)
!-----------------------------------------------------------
! FIELD : COLCOU2 
#define S_GEEX3000_COLCOU2 peel(pick(nPos, 203, 4), " ")
#define R_GEEX3000_COLCOU2(A) put(nRec, 203, A :4.4)
!-----------------------------------------------------------
! FIELD : COUPAL 
#define S_GEEX3000_COUPAL peel(pick(nPos, 207, 4), " ")
#define R_GEEX3000_COUPAL(A) put(nRec, 207, A :4.4)
!-----------------------------------------------------------
! FIELD : COUPAL2 
#define S_GEEX3000_COUPAL2 peel(pick(nPos, 211, 4), " ")
#define R_GEEX3000_COUPAL2(A) put(nRec, 211, A :4.4)
!-----------------------------------------------------------
! FIELD : GERPAL 
#define S_GEEX3000_GERPAL peel(pick(nPos, 215, 2), " ")
#define R_GEEX3000_GERPAL(A) put(nRec, 215, A :2.2)
!-----------------------------------------------------------
! FIELD : GERHAU 
#define S_GEEX3000_GERHAU peel(pick(nPos, 217, 2), " ")
#define R_GEEX3000_GERHAU(A) put(nRec, 217, A :2.2)
!-----------------------------------------------------------
! FIELD : HAUCOU 
#define S_GEEX3000_HAUCOU peel(pick(nPos, 219, 3), " ")
#define R_GEEX3000_HAUCOU(A) put(nRec, 219, A :3.3)
!-----------------------------------------------------------
! FIELD : CODEMB 
#define S_GEEX3000_CODEMB peel(pick(nPos, 222, 3), " ")
#define R_GEEX3000_CODEMB(A) put(nRec, 222, A :3.3)
!-----------------------------------------------------------
! FIELD : ABCPRO 
#define S_GEEX3000_ABCPRO peel(pick(nPos, 225, 1), " ")
#define R_GEEX3000_ABCPRO(A) put(nRec, 225, A :1.1)
!-----------------------------------------------------------
! FIELD : CODMDR 
#define S_GEEX3000_CODMDR peel(pick(nPos, 226, 3), " ")
#define R_GEEX3000_CODMDR(A) put(nRec, 226, A :3.3)
!-----------------------------------------------------------
! FIELD : MODREC 
#define S_GEEX3000_MODREC peel(pick(nPos, 229, 1), " ")
#define R_GEEX3000_MODREC(A) put(nRec, 229, A :1.1)
!-----------------------------------------------------------
! FIELD : NBJDLV 
#define S_GEEX3000_NBJDLV peel(pick(nPos, 230, 3), " ")
#define R_GEEX3000_NBJDLV(A) put(nRec, 230, A :3.3)
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GEEX3000_MOTIMM peel(pick(nPos, 233, 3), " ")
#define R_GEEX3000_MOTIMM(A) put(nRec, 233, A :3.3)
!-----------------------------------------------------------
! FIELD : CODMDS 
#define S_GEEX3000_CODMDS peel(pick(nPos, 236, 3), " ")
#define R_GEEX3000_CODMDS(A) put(nRec, 236, A :3.3)
!-----------------------------------------------------------
! FIELD : ZONPRF 
#define S_GEEX3000_ZONPRF peel(pick(nPos, 239, 1), " ")
#define R_GEEX3000_ZONPRF(A) put(nRec, 239, A :1.1)
!-----------------------------------------------------------
! FIELD : ALLPRF 
#define S_GEEX3000_ALLPRF peel(pick(nPos, 240, 3), " ")
#define R_GEEX3000_ALLPRF(A) put(nRec, 240, A :3.3)
!-----------------------------------------------------------
! FIELD : ABCSTS 
#define S_GEEX3000_ABCSTS peel(pick(nPos, 243, 1), " ")
#define R_GEEX3000_ABCSTS(A) put(nRec, 243, A :1.1)
!-----------------------------------------------------------
! FIELD : CODADM 
#define S_GEEX3000_CODADM peel(pick(nPos, 244, 3), " ")
#define R_GEEX3000_CODADM(A) put(nRec, 244, A :3.3)
!-----------------------------------------------------------
! FIELD : HOMGRB 
#define S_GEEX3000_HOMGRB peel(pick(nPos, 247, 1), " ")
#define R_GEEX3000_HOMGRB(A) put(nRec, 247, A :1.1)
!-----------------------------------------------------------
! FIELD : PERGRB 
#define S_GEEX3000_PERGRB peel(pick(nPos, 248, 3), " ")
#define R_GEEX3000_PERGRB(A) put(nRec, 248, A :3.3)
!-----------------------------------------------------------
! FIELD : CODMDP 
#define S_GEEX3000_CODMDP peel(pick(nPos, 251, 3), " ")
#define R_GEEX3000_CODMDP(A) put(nRec, 251, A :3.3)
!-----------------------------------------------------------
! FIELD : TOPPRN 
#define S_GEEX3000_TOPPRN peel(pick(nPos, 254, 1), " ")
#define R_GEEX3000_TOPPRN(A) put(nRec, 254, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX3000_DISEXC peel(pick(nPos, 255, 2), " ")
#define R_GEEX3000_DISEXC(A) put(nRec, 255, A :2.2)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX3001 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX3001_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX3001_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX3001_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX3001_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX3001_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX3001_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX3001_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX3001_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX3001_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX3001_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX3001_CODPRO peel(pick(nPos, 10, 17), " ")
#define R_GEEX3001_CODPRO(A) put(nRec, 10, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX3001_VALPRO peel(pick(nPos, 27, 2), " ")
#define R_GEEX3001_VALPRO(A) put(nRec, 27, A :2.2)
!-----------------------------------------------------------
! FIELD : INDPRO 
#define S_GEEX3001_INDPRO peel(pick(nPos, 29, 10), " ")
#define R_GEEX3001_INDPRO(A) put(nRec, 29, A :10.10)
!-----------------------------------------------------------
! FIELD : CODMRQ 
#define S_GEEX3001_CODMRQ peel(pick(nPos, 39, 8), " ")
#define R_GEEX3001_CODMRQ(A) put(nRec, 39, A :8.8)
!-----------------------------------------------------------
! FIELD : DESFOU 
#define S_GEEX3001_DESFOU peel(pick(nPos, 47, 30), " ")
#define R_GEEX3001_DESFOU(A) put(nRec, 47, A :30.30)
!-----------------------------------------------------------
! FIELD : CIRDET 
#define S_GEEX3001_CIRDET peel(pick(nPos, 77, 3), " ")
#define R_GEEX3001_CIRDET(A) put(nRec, 77, A :3.3)
!-----------------------------------------------------------
! FIELD : CIRPAL 
#define S_GEEX3001_CIRPAL peel(pick(nPos, 80, 3), " ")
#define R_GEEX3001_CIRPAL(A) put(nRec, 80, A :3.3)
!-----------------------------------------------------------
! FIELD : METRPL 
#define S_GEEX3001_METRPL peel(pick(nPos, 83, 1), " ")
#define R_GEEX3001_METRPL(A) put(nRec, 83, A :1.1)
!-----------------------------------------------------------
! FIELD : CODRPL 
#define S_GEEX3001_CODRPL peel(pick(nPos, 84, 17), " ")
#define R_GEEX3001_CODRPL(A) put(nRec, 84, A :17.17)
!-----------------------------------------------------------
! FIELD : VALRPL 
#define S_GEEX3001_VALRPL peel(pick(nPos, 101, 2), " ")
#define R_GEEX3001_VALRPL(A) put(nRec, 101, A :2.2)
!-----------------------------------------------------------
! FIELD : CODALC 
#define S_GEEX3001_CODALC peel(pick(nPos, 103, 4), " ")
#define R_GEEX3001_CODALC(A) put(nRec, 103, A :4.4)
!-----------------------------------------------------------
! FIELD : DEGALC 
#define S_GEEX3001_DEGALC peel(pick(nPos, 107, 5), " ")
#define R_GEEX3001_DEGALC(A) put(nRec, 107, A :5.5)
!-----------------------------------------------------------
! FIELD : VOLALC 
#define S_GEEX3001_VOLALC peel(pick(nPos, 112, 6), " ")
#define R_GEEX3001_VOLALC(A) put(nRec, 112, A :6.6)
!-----------------------------------------------------------
! FIELD : CODMDG 
#define S_GEEX3001_CODMDG peel(pick(nPos, 118, 3), " ")
#define R_GEEX3001_CODMDG(A) put(nRec, 118, A :3.3)
!-----------------------------------------------------------
! FIELD : TAUPST 
#define S_GEEX3001_TAUPST peel(pick(nPos, 121, 20), " ")
#define R_GEEX3001_TAUPST(A) put(nRec, 121, A :20.20)
!-----------------------------------------------------------
! FIELD : COELOG 
#define S_GEEX3001_COELOG peel(pick(nPos, 141, 5), " ")
#define R_GEEX3001_COELOG(A) put(nRec, 141, A :5.5)
!-----------------------------------------------------------
! FIELD : PRXPRO 
#define S_GEEX3001_PRXPRO peel(pick(nPos, 146, 36), " ")
#define R_GEEX3001_PRXPRO(A) put(nRec, 146, A :36.36)
!-----------------------------------------------------------
! FIELD : CODMDI 
#define S_GEEX3001_CODMDI peel(pick(nPos, 182, 3), " ")
#define R_GEEX3001_CODMDI(A) put(nRec, 182, A :3.3)
!-----------------------------------------------------------
! FIELD : NXTIVT 
#define S_GEEX3001_NXTIVT peel(pick(nPos, 185, 8), " ")
#define R_GEEX3001_NXTIVT(A) put(nRec, 185, A :8.8)
!-----------------------------------------------------------
! FIELD : SECSTK 
#define S_GEEX3001_SECSTK peel(pick(nPos, 193, 9), " ")
#define R_GEEX3001_SECSTK(A) put(nRec, 193, A :9.9)
!-----------------------------------------------------------
! FIELD : CODMDF 
#define S_GEEX3001_CODMDF peel(pick(nPos, 202, 3), " ")
#define R_GEEX3001_CODMDF(A) put(nRec, 202, A :3.3)
!-----------------------------------------------------------
! FIELD : FMTFAB 
#define S_GEEX3001_FMTFAB peel(pick(nPos, 205, 5), " ")
#define R_GEEX3001_FMTFAB(A) put(nRec, 205, A :5.5)
!-----------------------------------------------------------
! FIELD : ACTFAB 
#define S_GEEX3001_ACTFAB peel(pick(nPos, 210, 3), " ")
#define R_GEEX3001_ACTFAB(A) put(nRec, 210, A :3.3)
!-----------------------------------------------------------
! FIELD : CODFAB 
#define S_GEEX3001_CODFAB peel(pick(nPos, 213, 17), " ")
#define R_GEEX3001_CODFAB(A) put(nRec, 213, A :17.17)
!-----------------------------------------------------------
! FIELD : VRAFAB 
#define S_GEEX3001_VRAFAB peel(pick(nPos, 230, 17), " ")
#define R_GEEX3001_VRAFAB(A) put(nRec, 230, A :17.17)
!-----------------------------------------------------------
! FIELD : VALFAB 
#define S_GEEX3001_VALFAB peel(pick(nPos, 247, 2), " ")
#define R_GEEX3001_VALFAB(A) put(nRec, 247, A :2.2)
!-----------------------------------------------------------
! FIELD : CODZVI 
#define S_GEEX3001_CODZVI peel(pick(nPos, 249, 4), " ")
#define R_GEEX3001_CODZVI(A) put(nRec, 249, A :4.4)
!-----------------------------------------------------------
! FIELD : CODEAP 
#define S_GEEX3001_CODEAP peel(pick(nPos, 253, 3), " ")
#define R_GEEX3001_CODEAP(A) put(nRec, 253, A :3.3)
!-----------------------------------------------------------
! FIELD : TOPCNA 
#define S_GEEX3001_TOPCNA peel(pick(nPos, 256, 1), " ")
#define R_GEEX3001_TOPCNA(A) put(nRec, 256, A :1.1)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX3002 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX3002_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX3002_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX3002_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX3002_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX3002_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX3002_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX3002_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX3002_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX3002_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX3002_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX3002_CODPRO peel(pick(nPos, 10, 17), " ")
#define R_GEEX3002_CODPRO(A) put(nRec, 10, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX3002_VALPRO peel(pick(nPos, 27, 2), " ")
#define R_GEEX3002_VALPRO(A) put(nRec, 27, A :2.2)
!-----------------------------------------------------------
! FIELD : CODTMD 
#define S_GEEX3002_CODTMD peel(pick(nPos, 29, 4), " ")
#define R_GEEX3002_CODTMD(A) put(nRec, 29, A :4.4)
!-----------------------------------------------------------
! FIELD : CODSEC 
#define S_GEEX3002_CODSEC peel(pick(nPos, 33, 4), " ")
#define R_GEEX3002_CODSEC(A) put(nRec, 33, A :4.4)
!-----------------------------------------------------------
! FIELD : CODSPE 
#define S_GEEX3002_CODSPE peel(pick(nPos, 37, 1), " ")
#define R_GEEX3002_CODSPE(A) put(nRec, 37, A :1.1)
!-----------------------------------------------------------
! FIELD : UNIFAC 
#define S_GEEX3002_UNIFAC peel(pick(nPos, 38, 3), " ")
#define R_GEEX3002_UNIFAC(A) put(nRec, 38, A :3.3)
!-----------------------------------------------------------
! FIELD : COEFAC 
#define S_GEEX3002_COEFAC peel(pick(nPos, 41, 10), " ")
#define R_GEEX3002_COEFAC(A) put(nRec, 41, A :10.10)
!-----------------------------------------------------------
! FIELD : SECDLV 
#define S_GEEX3002_SECDLV peel(pick(nPos, 51, 3), " ")
#define R_GEEX3002_SECDLV(A) put(nRec, 51, A :3.3)
!-----------------------------------------------------------
! FIELD : CODRGP 
#define S_GEEX3002_CODRGP peel(pick(nPos, 54, 17), " ")
#define R_GEEX3002_CODRGP(A) put(nRec, 54, A :17.17)
!-----------------------------------------------------------
! FIELD : CODRSC 
#define S_GEEX3002_CODRSC peel(pick(nPos, 71, 3), " ")
#define R_GEEX3002_CODRSC(A) put(nRec, 71, A :3.3)
!-----------------------------------------------------------
! FIELD : PROEAP 
#define S_GEEX3002_PROEAP peel(pick(nPos, 74, 17), " ")
#define R_GEEX3002_PROEAP(A) put(nRec, 74, A :17.17)
!-----------------------------------------------------------
! FIELD : VTLPRO 
#define S_GEEX3002_VTLPRO peel(pick(nPos, 91, 1), " ")
#define R_GEEX3002_VTLPRO(A) put(nRec, 91, A :1.1)
!-----------------------------------------------------------
! FIELD : CIRVTL 
#define S_GEEX3002_CIRVTL peel(pick(nPos, 92, 3), " ")
#define R_GEEX3002_CIRVTL(A) put(nRec, 92, A :3.3)
!-----------------------------------------------------------
! FIELD : INFEXP 
#define S_GEEX3002_INFEXP peel(pick(nPos, 95, 16), " ")
#define R_GEEX3002_INFEXP(A) put(nRec, 95, A :16.16)
!-----------------------------------------------------------
! FIELD : CODMTR 
#define S_GEEX3002_CODMTR peel(pick(nPos, 111, 5), " ")
#define R_GEEX3002_CODMTR(A) put(nRec, 111, A :5.5)
!-----------------------------------------------------------
! FIELD : TEMPRE 
#define S_GEEX3002_TEMPRE peel(pick(nPos, 116, 3), " ")
#define R_GEEX3002_TEMPRE(A) put(nRec, 116, A :3.3)
!-----------------------------------------------------------
! FIELD : QTELOT 
#define S_GEEX3002_QTELOT peel(pick(nPos, 119, 9), " ")
#define R_GEEX3002_QTELOT(A) put(nRec, 119, A :9.9)
!-----------------------------------------------------------
! FIELD : UNILOT 
#define S_GEEX3002_UNILOT peel(pick(nPos, 128, 3), " ")
#define R_GEEX3002_UNILOT(A) put(nRec, 128, A :3.3)
!-----------------------------------------------------------
! FIELD : UNIARR 
#define S_GEEX3002_UNIARR peel(pick(nPos, 131, 1), " ")
#define R_GEEX3002_UNIARR(A) put(nRec, 131, A :1.1)
!-----------------------------------------------------------
! FIELD : UNICAL 
#define S_GEEX3002_UNICAL peel(pick(nPos, 132, 1), " ")
#define R_GEEX3002_UNICAL(A) put(nRec, 132, A :1.1)
!-----------------------------------------------------------
! FIELD : TEMMIN 
#define S_GEEX3002_TEMMIN peel(pick(nPos, 133, 3), " ")
#define R_GEEX3002_TEMMIN(A) put(nRec, 133, A :3.3)
!-----------------------------------------------------------
! FIELD : TEMMAX 
#define S_GEEX3002_TEMMAX peel(pick(nPos, 136, 3), " ")
#define R_GEEX3002_TEMMAX(A) put(nRec, 136, A :3.3)
!-----------------------------------------------------------
! FIELD : TOLPOI 
#define S_GEEX3002_TOLPOI peel(pick(nPos, 139, 3), " ")
#define R_GEEX3002_TOLPOI(A) put(nRec, 139, A :3.3)
!-----------------------------------------------------------
! FIELD : COECOL 
#define S_GEEX3002_COECOL peel(pick(nPos, 142, 4), " ")
#define R_GEEX3002_COECOL(A) put(nRec, 142, A :4.4)
!-----------------------------------------------------------
! FIELD : COESPC 
#define S_GEEX3002_COESPC peel(pick(nPos, 146, 4), " ")
#define R_GEEX3002_COESPC(A) put(nRec, 146, A :4.4)
!-----------------------------------------------------------
! FIELD : COEUVC 
#define S_GEEX3002_COEUVC peel(pick(nPos, 150, 4), " ")
#define R_GEEX3002_COEUVC(A) put(nRec, 150, A :4.4)
!-----------------------------------------------------------
! FIELD : INDTOL 
#define S_GEEX3002_INDTOL peel(pick(nPos, 154, 1), " ")
#define R_GEEX3002_INDTOL(A) put(nRec, 154, A :1.1)
!-----------------------------------------------------------
! FIELD : HAUSPC 
#define S_GEEX3002_HAUSPC peel(pick(nPos, 155, 3), " ")
#define R_GEEX3002_HAUSPC(A) put(nRec, 155, A :3.3)
!-----------------------------------------------------------
! FIELD : LNGSPC 
#define S_GEEX3002_LNGSPC peel(pick(nPos, 158, 3), " ")
#define R_GEEX3002_LNGSPC(A) put(nRec, 158, A :3.3)
!-----------------------------------------------------------
! FIELD : LRGSPC 
#define S_GEEX3002_LRGSPC peel(pick(nPos, 161, 3), " ")
#define R_GEEX3002_LRGSPC(A) put(nRec, 161, A :3.3)
!-----------------------------------------------------------
! FIELD : PDBSPC 
#define S_GEEX3002_PDBSPC peel(pick(nPos, 164, 7), " ")
#define R_GEEX3002_PDBSPC(A) put(nRec, 164, A :7.7)
!-----------------------------------------------------------
! FIELD : CODMDT 
#define S_GEEX3002_CODMDT peel(pick(nPos, 171, 3), " ")
#define R_GEEX3002_CODMDT(A) put(nRec, 171, A :3.3)
!-----------------------------------------------------------
! FIELD : ETIMTR 
#define S_GEEX3002_ETIMTR peel(pick(nPos, 174, 3), " ")
#define R_GEEX3002_ETIMTR(A) put(nRec, 174, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPHR 
#define S_GEEX3002_CODPHR peel(pick(nPos, 177, 3), " ")
#define R_GEEX3002_CODPHR(A) put(nRec, 177, A :3.3)
!-----------------------------------------------------------
! FIELD : NBJFVI 
#define S_GEEX3002_NBJFVI peel(pick(nPos, 180, 4), " ")
#define R_GEEX3002_NBJFVI(A) put(nRec, 180, A :4.4)
!-----------------------------------------------------------
! FIELD : CODGAM 
#define S_GEEX3002_CODGAM peel(pick(nPos, 184, 10), " ")
#define R_GEEX3002_CODGAM(A) put(nRec, 184, A :10.10)
!-----------------------------------------------------------
! FIELD : CODQLP 
#define S_GEEX3002_CODQLP peel(pick(nPos, 194, 3), " ")
#define R_GEEX3002_CODQLP(A) put(nRec, 194, A :3.3)
!-----------------------------------------------------------
! FIELD : EMBCLQ 
#define S_GEEX3002_EMBCLQ peel(pick(nPos, 197, 1), " ")
#define R_GEEX3002_EMBCLQ(A) put(nRec, 197, A :1.1)
!-----------------------------------------------------------
! FIELD : CTRPRP 
#define S_GEEX3002_CTRPRP peel(pick(nPos, 198, 1), " ")
#define R_GEEX3002_CTRPRP(A) put(nRec, 198, A :1.1)
!-----------------------------------------------------------
! FIELD : CODRDS 
#define S_GEEX3002_CODRDS peel(pick(nPos, 199, 3), " ")
#define R_GEEX3002_CODRDS(A) put(nRec, 199, A :3.3)
!-----------------------------------------------------------
! FIELD : HAUCOL2 
#define S_GEEX3002_HAUCOL2 peel(pick(nPos, 202, 5), " ")
#define R_GEEX3002_HAUCOL2(A) put(nRec, 202, A :5.5)
!-----------------------------------------------------------
! FIELD : HAUCOU2 
#define S_GEEX3002_HAUCOU2 peel(pick(nPos, 207, 5), " ")
#define R_GEEX3002_HAUCOU2(A) put(nRec, 207, A :5.5)
!-----------------------------------------------------------
! FIELD : HAUSPC2 
#define S_GEEX3002_HAUSPC2 peel(pick(nPos, 212, 5), " ")
#define R_GEEX3002_HAUSPC2(A) put(nRec, 212, A :5.5)
!-----------------------------------------------------------
! FIELD : HAUUVC2 
#define S_GEEX3002_HAUUVC2 peel(pick(nPos, 217, 5), " ")
#define R_GEEX3002_HAUUVC2(A) put(nRec, 217, A :5.5)
!-----------------------------------------------------------
! FIELD : LNGCOL2 
#define S_GEEX3002_LNGCOL2 peel(pick(nPos, 222, 5), " ")
#define R_GEEX3002_LNGCOL2(A) put(nRec, 222, A :5.5)
!-----------------------------------------------------------
! FIELD : LNGSPC2 
#define S_GEEX3002_LNGSPC2 peel(pick(nPos, 227, 5), " ")
#define R_GEEX3002_LNGSPC2(A) put(nRec, 227, A :5.5)
!-----------------------------------------------------------
! FIELD : LNGUVC2 
#define S_GEEX3002_LNGUVC2 peel(pick(nPos, 232, 5), " ")
#define R_GEEX3002_LNGUVC2(A) put(nRec, 232, A :5.5)
!-----------------------------------------------------------
! FIELD : LRGCOL2 
#define S_GEEX3002_LRGCOL2 peel(pick(nPos, 237, 5), " ")
#define R_GEEX3002_LRGCOL2(A) put(nRec, 237, A :5.5)
!-----------------------------------------------------------
! FIELD : LRGSPC2 
#define S_GEEX3002_LRGSPC2 peel(pick(nPos, 242, 5), " ")
#define R_GEEX3002_LRGSPC2(A) put(nRec, 242, A :5.5)
!-----------------------------------------------------------
! FIELD : LRGUVC2 
#define S_GEEX3002_LRGUVC2 peel(pick(nPos, 247, 5), " ")
#define R_GEEX3002_LRGUVC2(A) put(nRec, 247, A :5.5)
!-----------------------------------------------------------
! FIELD : CODMNN 
#define S_GEEX3002_CODMNN peel(pick(nPos, 252, 3), " ")
#define R_GEEX3002_CODMNN(A) put(nRec, 252, A :3.3)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX3002_DISEXC peel(pick(nPos, 255, 2), " ")
#define R_GEEX3002_DISEXC(A) put(nRec, 255, A :2.2)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX3020 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX3020_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX3020_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX3020_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX3020_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX3020_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX3020_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX3020_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX3020_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX3020_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX3020_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX3020_CODPRO peel(pick(nPos, 10, 17), " ")
#define R_GEEX3020_CODPRO(A) put(nRec, 10, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX3020_VALPRO peel(pick(nPos, 27, 2), " ")
#define R_GEEX3020_VALPRO(A) put(nRec, 27, A :2.2)
!-----------------------------------------------------------
! FIELD : DS1PRO 
#define S_GEEX3020_DS1PRO peel(pick(nPos, 29, 30), " ")
#define R_GEEX3020_DS1PRO(A) put(nRec, 29, A :30.30)
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_GEEX3020_EDIPRO peel(pick(nPos, 59, 17), " ")
#define R_GEEX3020_EDIPRO(A) put(nRec, 59, A :17.17)
!-----------------------------------------------------------
! FIELD : EANDS1 
#define S_GEEX3020_EANDS1 peel(pick(nPos, 76, 30), " ")
#define R_GEEX3020_EANDS1(A) put(nRec, 76, A :30.30)
!-----------------------------------------------------------
! FIELD : EDIPRN 
#define S_GEEX3020_EDIPRN peel(pick(nPos, 106, 1), " ")
#define R_GEEX3020_EDIPRN(A) put(nRec, 106, A :1.1)
!-----------------------------------------------------------
! FIELD : EDIQLF 
#define S_GEEX3020_EDIQLF peel(pick(nPos, 107, 1), " ")
#define R_GEEX3020_EDIQLF(A) put(nRec, 107, A :1.1)
!-----------------------------------------------------------
! FIELD : EANVTE 
#define S_GEEX3020_EANVTE peel(pick(nPos, 108, 1), " ")
#define R_GEEX3020_EANVTE(A) put(nRec, 108, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX3020_DISEXC peel(pick(nPos, 109, 148), " ")
#define R_GEEX3020_DISEXC(A) put(nRec, 109, A :148.148)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX3050 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX3050_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX3050_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX3050_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX3050_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX3050_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX3050_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX3050_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX3050_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX3050_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX3050_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX3050_CODPRO peel(pick(nPos, 10, 17), " ")
#define R_GEEX3050_CODPRO(A) put(nRec, 10, A :17.17)
!-----------------------------------------------------------
! FIELD : TYPRUB 
#define S_GEEX3050_TYPRUB peel(pick(nPos, 27, 5), " ")
#define R_GEEX3050_TYPRUB(A) put(nRec, 27, A :5.5)
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_GEEX3050_CODRUB peel(pick(nPos, 32, 20), " ")
#define R_GEEX3050_CODRUB(A) put(nRec, 32, A :20.20)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX3050_VALRUB peel(pick(nPos, 52, 175), " ")
#define R_GEEX3050_VALRUB(A) put(nRec, 52, A :175.175)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX3050_DISEXC peel(pick(nPos, 227, 30), " ")
#define R_GEEX3050_DISEXC(A) put(nRec, 227, A :30.30)
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

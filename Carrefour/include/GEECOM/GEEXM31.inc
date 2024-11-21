! File GEEXM31 : 
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
! Line : GEEX3100 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX3100_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX3100_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX3100_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX3100_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX3100_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX3100_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX3100_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX3100_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX3100_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX3100_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX3100_CODPRO peel(pick(nPos, 10, 17), " ")
#define R_GEEX3100_CODPRO(A) put(nRec, 10, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX3100_VALPRO peel(pick(nPos, 27, 2), " ")
#define R_GEEX3100_VALPRO(A) put(nRec, 27, A :2.2)
!-----------------------------------------------------------
! FIELD : DS1PRO 
#define S_GEEX3100_DS1PRO peel(pick(nPos, 29, 30), " ")
#define R_GEEX3100_DS1PRO(A) put(nRec, 29, A :30.30)
!-----------------------------------------------------------
! FIELD : DS2PRO 
#define S_GEEX3100_DS2PRO peel(pick(nPos, 59, 30), " ")
#define R_GEEX3100_DS2PRO(A) put(nRec, 59, A :30.30)
!-----------------------------------------------------------
! FIELD : FOUPRO 
#define S_GEEX3100_FOUPRO peel(pick(nPos, 89, 14), " ")
#define R_GEEX3100_FOUPRO(A) put(nRec, 89, A :14.14)
!-----------------------------------------------------------
! FIELD : VAPPRO 
#define S_GEEX3100_VAPPRO peel(pick(nPos, 103, 2), " ")
#define R_GEEX3100_VAPPRO(A) put(nRec, 103, A :2.2)
!-----------------------------------------------------------
! FIELD : FAMPRO 
#define S_GEEX3100_FAMPRO peel(pick(nPos, 105, 10), " ")
#define R_GEEX3100_FAMPRO(A) put(nRec, 105, A :10.10)
!-----------------------------------------------------------
! FIELD : ANAPRO 
#define S_GEEX3100_ANAPRO peel(pick(nPos, 115, 15), " ")
#define R_GEEX3100_ANAPRO(A) put(nRec, 115, A :15.15)
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_GEEX3100_EDIPRO peel(pick(nPos, 130, 17), " ")
#define R_GEEX3100_EDIPRO(A) put(nRec, 130, A :17.17)
!-----------------------------------------------------------
! FIELD : SPCPRO 
#define S_GEEX3100_SPCPRO peel(pick(nPos, 147, 4), " ")
#define R_GEEX3100_SPCPRO(A) put(nRec, 147, A :4.4)
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX3100_PCBPRO peel(pick(nPos, 151, 5), " ")
#define R_GEEX3100_PCBPRO(A) put(nRec, 151, A :5.5)
!-----------------------------------------------------------
! FIELD : UNIPRO 
#define S_GEEX3100_UNIPRO peel(pick(nPos, 156, 3), " ")
#define R_GEEX3100_UNIPRO(A) put(nRec, 156, A :3.3)
!-----------------------------------------------------------
! FIELD : MESPRO 
#define S_GEEX3100_MESPRO peel(pick(nPos, 159, 1), " ")
#define R_GEEX3100_MESPRO(A) put(nRec, 159, A :1.1)
!-----------------------------------------------------------
! FIELD : PDBUVC 
#define S_GEEX3100_PDBUVC peel(pick(nPos, 160, 7), " ")
#define R_GEEX3100_PDBUVC(A) put(nRec, 160, A :7.7)
!-----------------------------------------------------------
! FIELD : PDNUVC 
#define S_GEEX3100_PDNUVC peel(pick(nPos, 167, 7), " ")
#define R_GEEX3100_PDNUVC(A) put(nRec, 167, A :7.7)
!-----------------------------------------------------------
! FIELD : HAUUVC 
#define S_GEEX3100_HAUUVC peel(pick(nPos, 174, 3), " ")
#define R_GEEX3100_HAUUVC(A) put(nRec, 174, A :3.3)
!-----------------------------------------------------------
! FIELD : LNGUVC 
#define S_GEEX3100_LNGUVC peel(pick(nPos, 177, 3), " ")
#define R_GEEX3100_LNGUVC(A) put(nRec, 177, A :3.3)
!-----------------------------------------------------------
! FIELD : LRGUVC 
#define S_GEEX3100_LRGUVC peel(pick(nPos, 180, 3), " ")
#define R_GEEX3100_LRGUVC(A) put(nRec, 180, A :3.3)
!-----------------------------------------------------------
! FIELD : PDBCOL 
#define S_GEEX3100_PDBCOL peel(pick(nPos, 183, 7), " ")
#define R_GEEX3100_PDBCOL(A) put(nRec, 183, A :7.7)
!-----------------------------------------------------------
! FIELD : HAUCOL 
#define S_GEEX3100_HAUCOL peel(pick(nPos, 190, 3), " ")
#define R_GEEX3100_HAUCOL(A) put(nRec, 190, A :3.3)
!-----------------------------------------------------------
! FIELD : LNGCOL 
#define S_GEEX3100_LNGCOL peel(pick(nPos, 193, 3), " ")
#define R_GEEX3100_LNGCOL(A) put(nRec, 193, A :3.3)
!-----------------------------------------------------------
! FIELD : LRGCOL 
#define S_GEEX3100_LRGCOL peel(pick(nPos, 196, 3), " ")
#define R_GEEX3100_LRGCOL(A) put(nRec, 196, A :3.3)
!-----------------------------------------------------------
! FIELD : COLCOU 
#define S_GEEX3100_COLCOU peel(pick(nPos, 199, 8), " ")
#define R_GEEX3100_COLCOU(A) put(nRec, 199, A :8.8)
!-----------------------------------------------------------
! FIELD : COUPAL 
#define S_GEEX3100_COUPAL peel(pick(nPos, 207, 8), " ")
#define R_GEEX3100_COUPAL(A) put(nRec, 207, A :8.8)
!-----------------------------------------------------------
! FIELD : GERPAL 
#define S_GEEX3100_GERPAL peel(pick(nPos, 215, 2), " ")
#define R_GEEX3100_GERPAL(A) put(nRec, 215, A :2.2)
!-----------------------------------------------------------
! FIELD : GERHAUHS 
#define S_GEEX3100_GERHAUHS peel(pick(nPos, 217, 2), " ")
#define R_GEEX3100_GERHAUHS(A) put(nRec, 217, A :2.2)
!-----------------------------------------------------------
! FIELD : HAUCOU 
#define S_GEEX3100_HAUCOU peel(pick(nPos, 219, 3), " ")
#define R_GEEX3100_HAUCOU(A) put(nRec, 219, A :3.3)
!-----------------------------------------------------------
! FIELD : CODEMB 
#define S_GEEX3100_CODEMB peel(pick(nPos, 222, 3), " ")
#define R_GEEX3100_CODEMB(A) put(nRec, 222, A :3.3)
!-----------------------------------------------------------
! FIELD : ABCPRO 
#define S_GEEX3100_ABCPRO peel(pick(nPos, 225, 1), " ")
#define R_GEEX3100_ABCPRO(A) put(nRec, 225, A :1.1)
!-----------------------------------------------------------
! FIELD : CODMDR 
#define S_GEEX3100_CODMDR peel(pick(nPos, 226, 3), " ")
#define R_GEEX3100_CODMDR(A) put(nRec, 226, A :3.3)
!-----------------------------------------------------------
! FIELD : MODREC 
#define S_GEEX3100_MODREC peel(pick(nPos, 229, 1), " ")
#define R_GEEX3100_MODREC(A) put(nRec, 229, A :1.1)
!-----------------------------------------------------------
! FIELD : NBJDLV 
#define S_GEEX3100_NBJDLV peel(pick(nPos, 230, 3), " ")
#define R_GEEX3100_NBJDLV(A) put(nRec, 230, A :3.3)
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GEEX3100_MOTIMM peel(pick(nPos, 233, 3), " ")
#define R_GEEX3100_MOTIMM(A) put(nRec, 233, A :3.3)
!-----------------------------------------------------------
! FIELD : CODMDS 
#define S_GEEX3100_CODMDS peel(pick(nPos, 236, 3), " ")
#define R_GEEX3100_CODMDS(A) put(nRec, 236, A :3.3)
!-----------------------------------------------------------
! FIELD : ZONPRF 
#define S_GEEX3100_ZONPRF peel(pick(nPos, 239, 1), " ")
#define R_GEEX3100_ZONPRF(A) put(nRec, 239, A :1.1)
!-----------------------------------------------------------
! FIELD : ALLPRF 
#define S_GEEX3100_ALLPRF peel(pick(nPos, 240, 3), " ")
#define R_GEEX3100_ALLPRF(A) put(nRec, 240, A :3.3)
!-----------------------------------------------------------
! FIELD : ABCSTS 
#define S_GEEX3100_ABCSTS peel(pick(nPos, 243, 1), " ")
#define R_GEEX3100_ABCSTS(A) put(nRec, 243, A :1.1)
!-----------------------------------------------------------
! FIELD : CODADM 
#define S_GEEX3100_CODADM peel(pick(nPos, 244, 3), " ")
#define R_GEEX3100_CODADM(A) put(nRec, 244, A :3.3)
!-----------------------------------------------------------
! FIELD : HOMGRB 
#define S_GEEX3100_HOMGRB peel(pick(nPos, 247, 1), " ")
#define R_GEEX3100_HOMGRB(A) put(nRec, 247, A :1.1)
!-----------------------------------------------------------
! FIELD : PERGRB 
#define S_GEEX3100_PERGRB peel(pick(nPos, 248, 3), " ")
#define R_GEEX3100_PERGRB(A) put(nRec, 248, A :3.3)
!-----------------------------------------------------------
! FIELD : CODMDP 
#define S_GEEX3100_CODMDP peel(pick(nPos, 251, 3), " ")
#define R_GEEX3100_CODMDP(A) put(nRec, 251, A :3.3)
!-----------------------------------------------------------
! FIELD : TOPPRN 
#define S_GEEX3100_TOPPRN peel(pick(nPos, 254, 1), " ")
#define R_GEEX3100_TOPPRN(A) put(nRec, 254, A :1.1)
!-----------------------------------------------------------
! FIELD : GERHAU 
#define S_GEEX3100_GERHAU peel(pick(nPos, 255, 2), " ")
#define R_GEEX3100_GERHAU(A) put(nRec, 255, A :2.2)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX3101 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX3101_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX3101_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX3101_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX3101_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX3101_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX3101_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX3101_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX3101_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX3101_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX3101_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX3101_CODPRO peel(pick(nPos, 10, 17), " ")
#define R_GEEX3101_CODPRO(A) put(nRec, 10, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX3101_VALPRO peel(pick(nPos, 27, 2), " ")
#define R_GEEX3101_VALPRO(A) put(nRec, 27, A :2.2)
!-----------------------------------------------------------
! FIELD : INDPRO 
#define S_GEEX3101_INDPRO peel(pick(nPos, 29, 10), " ")
#define R_GEEX3101_INDPRO(A) put(nRec, 29, A :10.10)
!-----------------------------------------------------------
! FIELD : CODMRQ 
#define S_GEEX3101_CODMRQ peel(pick(nPos, 39, 8), " ")
#define R_GEEX3101_CODMRQ(A) put(nRec, 39, A :8.8)
!-----------------------------------------------------------
! FIELD : DESFOU 
#define S_GEEX3101_DESFOU peel(pick(nPos, 47, 30), " ")
#define R_GEEX3101_DESFOU(A) put(nRec, 47, A :30.30)
!-----------------------------------------------------------
! FIELD : CIRDET 
#define S_GEEX3101_CIRDET peel(pick(nPos, 77, 3), " ")
#define R_GEEX3101_CIRDET(A) put(nRec, 77, A :3.3)
!-----------------------------------------------------------
! FIELD : CIRPAL 
#define S_GEEX3101_CIRPAL peel(pick(nPos, 80, 3), " ")
#define R_GEEX3101_CIRPAL(A) put(nRec, 80, A :3.3)
!-----------------------------------------------------------
! FIELD : METRPL 
#define S_GEEX3101_METRPL peel(pick(nPos, 83, 1), " ")
#define R_GEEX3101_METRPL(A) put(nRec, 83, A :1.1)
!-----------------------------------------------------------
! FIELD : CODRPL 
#define S_GEEX3101_CODRPL peel(pick(nPos, 84, 17), " ")
#define R_GEEX3101_CODRPL(A) put(nRec, 84, A :17.17)
!-----------------------------------------------------------
! FIELD : VALRPL 
#define S_GEEX3101_VALRPL peel(pick(nPos, 101, 2), " ")
#define R_GEEX3101_VALRPL(A) put(nRec, 101, A :2.2)
!-----------------------------------------------------------
! FIELD : CODALC 
#define S_GEEX3101_CODALC peel(pick(nPos, 103, 4), " ")
#define R_GEEX3101_CODALC(A) put(nRec, 103, A :4.4)
!-----------------------------------------------------------
! FIELD : DEGALC 
#define S_GEEX3101_DEGALC peel(pick(nPos, 107, 5), " ")
#define R_GEEX3101_DEGALC(A) put(nRec, 107, A :5.5)
!-----------------------------------------------------------
! FIELD : VOLALC 
#define S_GEEX3101_VOLALC peel(pick(nPos, 112, 6), " ")
#define R_GEEX3101_VOLALC(A) put(nRec, 112, A :6.6)
!-----------------------------------------------------------
! FIELD : CODMDG 
#define S_GEEX3101_CODMDG peel(pick(nPos, 118, 3), " ")
#define R_GEEX3101_CODMDG(A) put(nRec, 118, A :3.3)
!-----------------------------------------------------------
! FIELD : TAUPST 
#define S_GEEX3101_TAUPST peel(pick(nPos, 121, 20), " ")
#define R_GEEX3101_TAUPST(A) put(nRec, 121, A :20.20)
!-----------------------------------------------------------
! FIELD : COELOG 
#define S_GEEX3101_COELOG peel(pick(nPos, 141, 5), " ")
#define R_GEEX3101_COELOG(A) put(nRec, 141, A :5.5)
!-----------------------------------------------------------
! FIELD : PRXPRO 
#define S_GEEX3101_PRXPRO peel(pick(nPos, 146, 36), " ")
#define R_GEEX3101_PRXPRO(A) put(nRec, 146, A :36.36)
!-----------------------------------------------------------
! FIELD : CODMDI 
#define S_GEEX3101_CODMDI peel(pick(nPos, 182, 3), " ")
#define R_GEEX3101_CODMDI(A) put(nRec, 182, A :3.3)
!-----------------------------------------------------------
! FIELD : NXTIVT 
#define S_GEEX3101_NXTIVT peel(pick(nPos, 185, 8), " ")
#define R_GEEX3101_NXTIVT(A) put(nRec, 185, A :8.8)
!-----------------------------------------------------------
! FIELD : SECSTK 
#define S_GEEX3101_SECSTK peel(pick(nPos, 193, 9), " ")
#define R_GEEX3101_SECSTK(A) put(nRec, 193, A :9.9)
!-----------------------------------------------------------
! FIELD : CODMDF 
#define S_GEEX3101_CODMDF peel(pick(nPos, 202, 3), " ")
#define R_GEEX3101_CODMDF(A) put(nRec, 202, A :3.3)
!-----------------------------------------------------------
! FIELD : FMTFAB 
#define S_GEEX3101_FMTFAB peel(pick(nPos, 205, 5), " ")
#define R_GEEX3101_FMTFAB(A) put(nRec, 205, A :5.5)
!-----------------------------------------------------------
! FIELD : ACTFAB 
#define S_GEEX3101_ACTFAB peel(pick(nPos, 210, 3), " ")
#define R_GEEX3101_ACTFAB(A) put(nRec, 210, A :3.3)
!-----------------------------------------------------------
! FIELD : CODFAB 
#define S_GEEX3101_CODFAB peel(pick(nPos, 213, 17), " ")
#define R_GEEX3101_CODFAB(A) put(nRec, 213, A :17.17)
!-----------------------------------------------------------
! FIELD : VRAFAB 
#define S_GEEX3101_VRAFAB peel(pick(nPos, 230, 17), " ")
#define R_GEEX3101_VRAFAB(A) put(nRec, 230, A :17.17)
!-----------------------------------------------------------
! FIELD : VALFAB 
#define S_GEEX3101_VALFAB peel(pick(nPos, 247, 2), " ")
#define R_GEEX3101_VALFAB(A) put(nRec, 247, A :2.2)
!-----------------------------------------------------------
! FIELD : CODZVI 
#define S_GEEX3101_CODZVI peel(pick(nPos, 249, 4), " ")
#define R_GEEX3101_CODZVI(A) put(nRec, 249, A :4.4)
!-----------------------------------------------------------
! FIELD : CODEAP 
#define S_GEEX3101_CODEAP peel(pick(nPos, 253, 3), " ")
#define R_GEEX3101_CODEAP(A) put(nRec, 253, A :3.3)
!-----------------------------------------------------------
! FIELD : TOPCNA 
#define S_GEEX3101_TOPCNA peel(pick(nPos, 256, 1), " ")
#define R_GEEX3101_TOPCNA(A) put(nRec, 256, A :1.1)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX3102 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX3102_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX3102_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX3102_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX3102_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX3102_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX3102_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX3102_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX3102_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX3102_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX3102_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX3102_CODPRO peel(pick(nPos, 10, 17), " ")
#define R_GEEX3102_CODPRO(A) put(nRec, 10, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX3102_VALPRO peel(pick(nPos, 27, 2), " ")
#define R_GEEX3102_VALPRO(A) put(nRec, 27, A :2.2)
!-----------------------------------------------------------
! FIELD : CODTMD 
#define S_GEEX3102_CODTMD peel(pick(nPos, 29, 4), " ")
#define R_GEEX3102_CODTMD(A) put(nRec, 29, A :4.4)
!-----------------------------------------------------------
! FIELD : CODSEC 
#define S_GEEX3102_CODSEC peel(pick(nPos, 33, 4), " ")
#define R_GEEX3102_CODSEC(A) put(nRec, 33, A :4.4)
!-----------------------------------------------------------
! FIELD : CODSPE 
#define S_GEEX3102_CODSPE peel(pick(nPos, 37, 1), " ")
#define R_GEEX3102_CODSPE(A) put(nRec, 37, A :1.1)
!-----------------------------------------------------------
! FIELD : UNIFAC 
#define S_GEEX3102_UNIFAC peel(pick(nPos, 38, 3), " ")
#define R_GEEX3102_UNIFAC(A) put(nRec, 38, A :3.3)
!-----------------------------------------------------------
! FIELD : COEFAC 
#define S_GEEX3102_COEFAC peel(pick(nPos, 41, 10), " ")
#define R_GEEX3102_COEFAC(A) put(nRec, 41, A :10.10)
!-----------------------------------------------------------
! FIELD : SECDLV 
#define S_GEEX3102_SECDLV peel(pick(nPos, 51, 3), " ")
#define R_GEEX3102_SECDLV(A) put(nRec, 51, A :3.3)
!-----------------------------------------------------------
! FIELD : CODRGP 
#define S_GEEX3102_CODRGP peel(pick(nPos, 54, 17), " ")
#define R_GEEX3102_CODRGP(A) put(nRec, 54, A :17.17)
!-----------------------------------------------------------
! FIELD : CODRSC 
#define S_GEEX3102_CODRSC peel(pick(nPos, 71, 3), " ")
#define R_GEEX3102_CODRSC(A) put(nRec, 71, A :3.3)
!-----------------------------------------------------------
! FIELD : UNICAL 
#define S_GEEX3102_UNICAL peel(pick(nPos, 74, 1), " ")
#define R_GEEX3102_UNICAL(A) put(nRec, 74, A :1.1)
!-----------------------------------------------------------
! FIELD : TEMPRE 
#define S_GEEX3102_TEMPRE peel(pick(nPos, 75, 3), " ")
#define R_GEEX3102_TEMPRE(A) put(nRec, 75, A :3.3)
!-----------------------------------------------------------
! FIELD : TEMMIN 
#define S_GEEX3102_TEMMIN peel(pick(nPos, 78, 3), " ")
#define R_GEEX3102_TEMMIN(A) put(nRec, 78, A :3.3)
!-----------------------------------------------------------
! FIELD : TEMMAX 
#define S_GEEX3102_TEMMAX peel(pick(nPos, 81, 3), " ")
#define R_GEEX3102_TEMMAX(A) put(nRec, 81, A :3.3)
!-----------------------------------------------------------
! FIELD : TOLPOI 
#define S_GEEX3102_TOLPOI peel(pick(nPos, 84, 3), " ")
#define R_GEEX3102_TOLPOI(A) put(nRec, 84, A :3.3)
!-----------------------------------------------------------
! FIELD : COECOL 
#define S_GEEX3102_COECOL peel(pick(nPos, 87, 4), " ")
#define R_GEEX3102_COECOL(A) put(nRec, 87, A :4.4)
!-----------------------------------------------------------
! FIELD : COESPC 
#define S_GEEX3102_COESPC peel(pick(nPos, 91, 4), " ")
#define R_GEEX3102_COESPC(A) put(nRec, 91, A :4.4)
!-----------------------------------------------------------
! FIELD : COEUVC 
#define S_GEEX3102_COEUVC peel(pick(nPos, 95, 4), " ")
#define R_GEEX3102_COEUVC(A) put(nRec, 95, A :4.4)
!-----------------------------------------------------------
! FIELD : INDTOL 
#define S_GEEX3102_INDTOL peel(pick(nPos, 99, 1), " ")
#define R_GEEX3102_INDTOL(A) put(nRec, 99, A :1.1)
!-----------------------------------------------------------
! FIELD : CODMTR 
#define S_GEEX3102_CODMTR peel(pick(nPos, 100, 5), " ")
#define R_GEEX3102_CODMTR(A) put(nRec, 100, A :5.5)
!-----------------------------------------------------------
! FIELD : CODMDT 
#define S_GEEX3102_CODMDT peel(pick(nPos, 105, 3), " ")
#define R_GEEX3102_CODMDT(A) put(nRec, 105, A :3.3)
!-----------------------------------------------------------
! FIELD : NBJFVI 
#define S_GEEX3102_NBJFVI peel(pick(nPos, 108, 4), " ")
#define R_GEEX3102_NBJFVI(A) put(nRec, 108, A :4.4)
!-----------------------------------------------------------
! FIELD : CODGAM 
#define S_GEEX3102_CODGAM peel(pick(nPos, 112, 10), " ")
#define R_GEEX3102_CODGAM(A) put(nRec, 112, A :10.10)
!-----------------------------------------------------------
! FIELD : EMBCLQ 
#define S_GEEX3102_EMBCLQ peel(pick(nPos, 122, 1), " ")
#define R_GEEX3102_EMBCLQ(A) put(nRec, 122, A :1.1)
!-----------------------------------------------------------
! FIELD : CTRPRP 
#define S_GEEX3102_CTRPRP peel(pick(nPos, 123, 1), " ")
#define R_GEEX3102_CTRPRP(A) put(nRec, 123, A :1.1)
!-----------------------------------------------------------
! FIELD : CODRDS 
#define S_GEEX3102_CODRDS peel(pick(nPos, 124, 3), " ")
#define R_GEEX3102_CODRDS(A) put(nRec, 124, A :3.3)
!-----------------------------------------------------------
! FIELD : HAUCOL2 
#define S_GEEX3102_HAUCOL2 peel(pick(nPos, 127, 5), " ")
#define R_GEEX3102_HAUCOL2(A) put(nRec, 127, A :5.5)
!-----------------------------------------------------------
! FIELD : HAUCOU2 
#define S_GEEX3102_HAUCOU2 peel(pick(nPos, 132, 5), " ")
#define R_GEEX3102_HAUCOU2(A) put(nRec, 132, A :5.5)
!-----------------------------------------------------------
! FIELD : HAUSPC2 
#define S_GEEX3102_HAUSPC2 peel(pick(nPos, 137, 5), " ")
#define R_GEEX3102_HAUSPC2(A) put(nRec, 137, A :5.5)
!-----------------------------------------------------------
! FIELD : HAUUVC2 
#define S_GEEX3102_HAUUVC2 peel(pick(nPos, 142, 5), " ")
#define R_GEEX3102_HAUUVC2(A) put(nRec, 142, A :5.5)
!-----------------------------------------------------------
! FIELD : LNGCOL2 
#define S_GEEX3102_LNGCOL2 peel(pick(nPos, 147, 5), " ")
#define R_GEEX3102_LNGCOL2(A) put(nRec, 147, A :5.5)
!-----------------------------------------------------------
! FIELD : LNGSPC2 
#define S_GEEX3102_LNGSPC2 peel(pick(nPos, 152, 5), " ")
#define R_GEEX3102_LNGSPC2(A) put(nRec, 152, A :5.5)
!-----------------------------------------------------------
! FIELD : LNGUVC2 
#define S_GEEX3102_LNGUVC2 peel(pick(nPos, 157, 5), " ")
#define R_GEEX3102_LNGUVC2(A) put(nRec, 157, A :5.5)
!-----------------------------------------------------------
! FIELD : LRGCOL2 
#define S_GEEX3102_LRGCOL2 peel(pick(nPos, 162, 5), " ")
#define R_GEEX3102_LRGCOL2(A) put(nRec, 162, A :5.5)
!-----------------------------------------------------------
! FIELD : LRGSPC2 
#define S_GEEX3102_LRGSPC2 peel(pick(nPos, 167, 5), " ")
#define R_GEEX3102_LRGSPC2(A) put(nRec, 167, A :5.5)
!-----------------------------------------------------------
! FIELD : LRGUVC2 
#define S_GEEX3102_LRGUVC2 peel(pick(nPos, 172, 5), " ")
#define R_GEEX3102_LRGUVC2(A) put(nRec, 172, A :5.5)
!-----------------------------------------------------------
! FIELD : CODMNN 
#define S_GEEX3102_CODMNN peel(pick(nPos, 177, 3), " ")
#define R_GEEX3102_CODMNN(A) put(nRec, 177, A :3.3)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX3102_DISEXC peel(pick(nPos, 180, 77), " ")
#define R_GEEX3102_DISEXC(A) put(nRec, 180, A :77.77)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX3105 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX3105_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX3105_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX3105_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX3105_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX3105_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX3105_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX3105_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX3105_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX3105_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX3105_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX3105_CODPRO peel(pick(nPos, 10, 17), " ")
#define R_GEEX3105_CODPRO(A) put(nRec, 10, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX3105_VALPRO peel(pick(nPos, 27, 2), " ")
#define R_GEEX3105_VALPRO(A) put(nRec, 27, A :2.2)
!-----------------------------------------------------------
! FIELD : DS1PRO 
#define S_GEEX3105_DS1PRO peel(pick(nPos, 29, 30), " ")
#define R_GEEX3105_DS1PRO(A) put(nRec, 29, A :30.30)
!-----------------------------------------------------------
! FIELD : SPCPRO 
#define S_GEEX3105_SPCPRO peel(pick(nPos, 59, 4), " ")
#define R_GEEX3105_SPCPRO(A) put(nRec, 59, A :4.4)
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX3105_PCBPRO peel(pick(nPos, 63, 5), " ")
#define R_GEEX3105_PCBPRO(A) put(nRec, 63, A :5.5)
!-----------------------------------------------------------
! FIELD : MESPRO 
#define S_GEEX3105_MESPRO peel(pick(nPos, 68, 1), " ")
#define R_GEEX3105_MESPRO(A) put(nRec, 68, A :1.1)
!-----------------------------------------------------------
! FIELD : PDBCOL 
#define S_GEEX3105_PDBCOL peel(pick(nPos, 69, 7), " ")
#define R_GEEX3105_PDBCOL(A) put(nRec, 69, A :7.7)
!-----------------------------------------------------------
! FIELD : HAUCOL 
#define S_GEEX3105_HAUCOL peel(pick(nPos, 76, 3), " ")
#define R_GEEX3105_HAUCOL(A) put(nRec, 76, A :3.3)
!-----------------------------------------------------------
! FIELD : LNGCOL 
#define S_GEEX3105_LNGCOL peel(pick(nPos, 79, 3), " ")
#define R_GEEX3105_LNGCOL(A) put(nRec, 79, A :3.3)
!-----------------------------------------------------------
! FIELD : LRGCOL 
#define S_GEEX3105_LRGCOL peel(pick(nPos, 82, 3), " ")
#define R_GEEX3105_LRGCOL(A) put(nRec, 82, A :3.3)
!-----------------------------------------------------------
! FIELD : COECOL 
#define S_GEEX3105_COECOL peel(pick(nPos, 85, 4), " ")
#define R_GEEX3105_COECOL(A) put(nRec, 85, A :4.4)
!-----------------------------------------------------------
! FIELD : TOLPOI 
#define S_GEEX3105_TOLPOI peel(pick(nPos, 89, 3), " ")
#define R_GEEX3105_TOLPOI(A) put(nRec, 89, A :3.3)
!-----------------------------------------------------------
! FIELD : INDPRO 
#define S_GEEX3105_INDPRO peel(pick(nPos, 92, 10), " ")
#define R_GEEX3105_INDPRO(A) put(nRec, 92, A :10.10)
!-----------------------------------------------------------
! FIELD : PDNUVC 
#define S_GEEX3105_PDNUVC peel(pick(nPos, 102, 7), " ")
#define R_GEEX3105_PDNUVC(A) put(nRec, 102, A :7.7)
!-----------------------------------------------------------
! FIELD : PDBUVC 
#define S_GEEX3105_PDBUVC peel(pick(nPos, 109, 7), " ")
#define R_GEEX3105_PDBUVC(A) put(nRec, 109, A :7.7)
!-----------------------------------------------------------
! FIELD : HAUCOL2 
#define S_GEEX3105_HAUCOL2 peel(pick(nPos, 116, 5), " ")
#define R_GEEX3105_HAUCOL2(A) put(nRec, 116, A :5.5)
!-----------------------------------------------------------
! FIELD : LNGCOL2 
#define S_GEEX3105_LNGCOL2 peel(pick(nPos, 121, 5), " ")
#define R_GEEX3105_LNGCOL2(A) put(nRec, 121, A :5.5)
!-----------------------------------------------------------
! FIELD : LRGCOL2 
#define S_GEEX3105_LRGCOL2 peel(pick(nPos, 126, 5), " ")
#define R_GEEX3105_LRGCOL2(A) put(nRec, 126, A :5.5)
!-----------------------------------------------------------
! FIELD : NBJDLV 
#define S_GEEX3105_NBJDLV peel(pick(nPos, 131, 3), " ")
#define R_GEEX3105_NBJDLV(A) put(nRec, 131, A :3.3)
!-----------------------------------------------------------
! FIELD : SECDLV 
#define S_GEEX3105_SECDLV peel(pick(nPos, 134, 3), " ")
#define R_GEEX3105_SECDLV(A) put(nRec, 134, A :3.3)
!-----------------------------------------------------------
! FIELD : NBJFVI 
#define S_GEEX3105_NBJFVI peel(pick(nPos, 137, 4), " ")
#define R_GEEX3105_NBJFVI(A) put(nRec, 137, A :4.4)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX3105_DISEXC peel(pick(nPos, 141, 116), " ")
#define R_GEEX3105_DISEXC(A) put(nRec, 141, A :116.116)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX3110 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX3110_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX3110_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX3110_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX3110_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX3110_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX3110_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX3110_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX3110_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX3110_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX3110_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRN 
#define S_GEEX3110_CODPRN peel(pick(nPos, 10, 17), " ")
#define R_GEEX3110_CODPRN(A) put(nRec, 10, A :17.17)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX3110_CODPRO peel(pick(nPos, 27, 17), " ")
#define R_GEEX3110_CODPRO(A) put(nRec, 27, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX3110_VALPRO peel(pick(nPos, 44, 2), " ")
#define R_GEEX3110_VALPRO(A) put(nRec, 44, A :2.2)
!-----------------------------------------------------------
! FIELD : NBRCPS 
#define S_GEEX3110_NBRCPS peel(pick(nPos, 46, 4), " ")
#define R_GEEX3110_NBRCPS(A) put(nRec, 46, A :4.4)
!-----------------------------------------------------------
! FIELD : ACTCPS 
#define S_GEEX3110_ACTCPS peel(pick(nPos, 50, 3), " ")
#define R_GEEX3110_ACTCPS(A) put(nRec, 50, A :3.3)
!-----------------------------------------------------------
! FIELD : ORDCPS 
#define S_GEEX3110_ORDCPS peel(pick(nPos, 53, 4), " ")
#define R_GEEX3110_ORDCPS(A) put(nRec, 53, A :4.4)
!-----------------------------------------------------------
! FIELD : TYPCPS 
#define S_GEEX3110_TYPCPS peel(pick(nPos, 57, 1), " ")
#define R_GEEX3110_TYPCPS(A) put(nRec, 57, A :1.1)
!-----------------------------------------------------------
! FIELD : DVSCPS 
#define S_GEEX3110_DVSCPS peel(pick(nPos, 58, 4), " ")
#define R_GEEX3110_DVSCPS(A) put(nRec, 58, A :4.4)
!-----------------------------------------------------------
! FIELD : UNIPRN 
#define S_GEEX3110_UNIPRN peel(pick(nPos, 62, 3), " ")
#define R_GEEX3110_UNIPRN(A) put(nRec, 62, A :3.3)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX3110_DISEXC peel(pick(nPos, 65, 192), " ")
#define R_GEEX3110_DISEXC(A) put(nRec, 65, A :192.192)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX3120 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX3120_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX3120_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX3120_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX3120_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX3120_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX3120_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX3120_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX3120_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX3120_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX3120_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX3120_CODPRO peel(pick(nPos, 10, 17), " ")
#define R_GEEX3120_CODPRO(A) put(nRec, 10, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX3120_VALPRO peel(pick(nPos, 27, 2), " ")
#define R_GEEX3120_VALPRO(A) put(nRec, 27, A :2.2)
!-----------------------------------------------------------
! FIELD : DS1PRO 
#define S_GEEX3120_DS1PRO peel(pick(nPos, 29, 30), " ")
#define R_GEEX3120_DS1PRO(A) put(nRec, 29, A :30.30)
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_GEEX3120_EDIPRO peel(pick(nPos, 59, 17), " ")
#define R_GEEX3120_EDIPRO(A) put(nRec, 59, A :17.17)
!-----------------------------------------------------------
! FIELD : EANDS1 
#define S_GEEX3120_EANDS1 peel(pick(nPos, 76, 30), " ")
#define R_GEEX3120_EANDS1(A) put(nRec, 76, A :30.30)
!-----------------------------------------------------------
! FIELD : EDIPRM 
#define S_GEEX3120_EDIPRM peel(pick(nPos, 106, 1), " ")
#define R_GEEX3120_EDIPRM(A) put(nRec, 106, A :1.1)
!-----------------------------------------------------------
! FIELD : EDIQLF 
#define S_GEEX3120_EDIQLF peel(pick(nPos, 107, 1), " ")
#define R_GEEX3120_EDIQLF(A) put(nRec, 107, A :1.1)
!-----------------------------------------------------------
! FIELD : UVCQLF 
#define S_GEEX3120_UVCQLF peel(pick(nPos, 108, 7), " ")
#define R_GEEX3120_UVCQLF(A) put(nRec, 108, A :7.7)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX3120_DISEXC peel(pick(nPos, 115, 142), " ")
#define R_GEEX3120_DISEXC(A) put(nRec, 115, A :142.142)
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
! FIELD : DTAEXC 
#define S_GEEX9900_DTAEXC peel(pick(nPos, 35, 8), " ")
#define R_GEEX9900_DTAEXC(A) put(nRec, 35, A :8.8)
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
! FIELD : DISEXC 
#define S_GEEX9900_DISEXC peel(pick(nPos, 64, 193), " ")
#define R_GEEX9900_DISEXC(A) put(nRec, 64, A :193.193)
!-----------------------------------------------------------

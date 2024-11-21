! File GEEXM10 : 
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
! Line : GEEX1000 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX1000_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX1000_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX1000_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX1000_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX1000_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX1000_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX1000_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX1000_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX1000_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX1000_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_GEEX1000_CODFOU peel(pick(nPos, 10, 14), " ")
#define R_GEEX1000_CODFOU(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : TYPFOU 
#define S_GEEX1000_TYPFOU peel(pick(nPos, 24, 1), " ")
#define R_GEEX1000_TYPFOU(A) put(nRec, 24, A :1.1)
!-----------------------------------------------------------
! FIELD : NOMFOU 
#define S_GEEX1000_NOMFOU peel(pick(nPos, 25, 30), " ")
#define R_GEEX1000_NOMFOU(A) put(nRec, 25, A :30.30)
!-----------------------------------------------------------
! FIELD : AD1FOU 
#define S_GEEX1000_AD1FOU peel(pick(nPos, 55, 30), " ")
#define R_GEEX1000_AD1FOU(A) put(nRec, 55, A :30.30)
!-----------------------------------------------------------
! FIELD : AD2FOU 
#define S_GEEX1000_AD2FOU peel(pick(nPos, 85, 30), " ")
#define R_GEEX1000_AD2FOU(A) put(nRec, 85, A :30.30)
!-----------------------------------------------------------
! FIELD : CPOFOU 
#define S_GEEX1000_CPOFOU peel(pick(nPos, 115, 5), " ")
#define R_GEEX1000_CPOFOU(A) put(nRec, 115, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : VILFOU 
#define S_GEEX1000_VILFOU peel(pick(nPos, 120, 26), " ")
#define R_GEEX1000_VILFOU(A) put(nRec, 120, A :26.26)
!-----------------------------------------------------------
! FIELD : PAYFOU 
#define S_GEEX1000_PAYFOU peel(pick(nPos, 146, 3), " ")
#define R_GEEX1000_PAYFOU(A) put(nRec, 146, A :3.3)
!-----------------------------------------------------------
! FIELD : TELFOU 
#define S_GEEX1000_TELFOU peel(pick(nPos, 149, 20), " ")
#define R_GEEX1000_TELFOU(A) put(nRec, 149, A :20.20)
!-----------------------------------------------------------
! FIELD : FAXFOU 
#define S_GEEX1000_FAXFOU peel(pick(nPos, 169, 20), " ")
#define R_GEEX1000_FAXFOU(A) put(nRec, 169, A :20.20)
!-----------------------------------------------------------
! FIELD : TLXFOU 
#define S_GEEX1000_TLXFOU peel(pick(nPos, 189, 15), " ")
#define R_GEEX1000_TLXFOU(A) put(nRec, 189, A :15.15)
!-----------------------------------------------------------
! FIELD : EDIFOU 
#define S_GEEX1000_EDIFOU peel(pick(nPos, 204, 14), " ")
#define R_GEEX1000_EDIFOU(A) put(nRec, 204, A :14.14)
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_GEEX1000_CODTRA peel(pick(nPos, 218, 14), " ")
#define R_GEEX1000_CODTRA(A) put(nRec, 218, A :14.14)
!-----------------------------------------------------------
! FIELD : IGLSIT 
#define S_GEEX1000_IGLSIT peel(pick(nPos, 232, 3), " ")
#define R_GEEX1000_IGLSIT(A) put(nRec, 232, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODTRE 
#define S_GEEX1000_CODTRE peel(pick(nPos, 235, 3), " ")
#define R_GEEX1000_CODTRE(A) put(nRec, 235, A :3.3)
!-----------------------------------------------------------
! FIELD : GSTAVI 
#define S_GEEX1000_GSTAVI peel(pick(nPos, 238, 1), " ")
#define R_GEEX1000_GSTAVI(A) put(nRec, 238, A :1.1)
!-----------------------------------------------------------
! FIELD : GSTRCP 
#define S_GEEX1000_GSTRCP peel(pick(nPos, 239, 1), " ")
#define R_GEEX1000_GSTRCP(A) put(nRec, 239, A :1.1)
!-----------------------------------------------------------
! FIELD : TYPPRT 
#define S_GEEX1000_TYPPRT peel(pick(nPos, 240, 1), " ")
#define R_GEEX1000_TYPPRT(A) put(nRec, 240, A :1.1)
!-----------------------------------------------------------
! FIELD : CPIFOU 
#define S_GEEX1000_CPIFOU peel(pick(nPos, 241, 10), " ")
#define R_GEEX1000_CPIFOU(A) put(nRec, 241, A :10.10)
!-----------------------------------------------------------
! FIELD : EMBTIE 
#define S_GEEX1000_EMBTIE peel(pick(nPos, 251, 1), " ")
#define R_GEEX1000_EMBTIE(A) put(nRec, 251, A :1.1)
!-----------------------------------------------------------
! FIELD : FOUGMA 
#define S_GEEX1000_FOUGMA peel(pick(nPos, 252, 1), " ")
#define R_GEEX1000_FOUGMA(A) put(nRec, 252, A :1.1)
!-----------------------------------------------------------
! FIELD : SYSMES 
#define S_GEEX1000_SYSMES peel(pick(nPos, 253, 1), " ")
#define R_GEEX1000_SYSMES(A) put(nRec, 253, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX1000_DISEXC peel(pick(nPos, 254, 3), " ")
#define R_GEEX1000_DISEXC(A) put(nRec, 254, A :3.3)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX1001 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX1001_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX1001_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX1001_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX1001_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX1001_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX1001_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX1001_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX1001_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX1001_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX1001_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_GEEX1001_CODFOU peel(pick(nPos, 10, 14), " ")
#define R_GEEX1001_CODFOU(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : RSPFOU 
#define S_GEEX1001_RSPFOU peel(pick(nPos, 24, 30), " ")
#define R_GEEX1001_RSPFOU(A) put(nRec, 24, A :30.30)
!-----------------------------------------------------------
! FIELD : EMLADR 
#define S_GEEX1001_EMLADR peel(pick(nPos, 54, 50), " ")
#define R_GEEX1001_EMLADR(A) put(nRec, 54, A :50.50)
!-----------------------------------------------------------
! FIELD : CODCOG 
#define S_GEEX1001_CODCOG peel(pick(nPos, 104, 15), " ")
#define R_GEEX1001_CODCOG(A) put(nRec, 104, A :15.15)
!-----------------------------------------------------------
! FIELD : NUMACS 
#define S_GEEX1001_NUMACS peel(pick(nPos, 119, 13), " ")
#define R_GEEX1001_NUMACS(A) put(nRec, 119, A :13.13)
!-----------------------------------------------------------
! FIELD : AFFFAB 
#define S_GEEX1001_AFFFAB peel(pick(nPos, 132, 1), " ")
#define R_GEEX1001_AFFFAB(A) put(nRec, 132, A :1.1)
!-----------------------------------------------------------
! FIELD : CODENL 
#define S_GEEX1001_CODENL peel(pick(nPos, 133, 1), " ")
#define R_GEEX1001_CODENL(A) put(nRec, 133, A :1.1)
!-----------------------------------------------------------
! FIELD : CODFDC 
#define S_GEEX1001_CODFDC peel(pick(nPos, 134, 6), " ")
#define R_GEEX1001_CODFDC(A) put(nRec, 134, A :6.6)
!-----------------------------------------------------------
! FIELD : CODGRP 
#define S_GEEX1001_CODGRP peel(pick(nPos, 140, 1), " ")
#define R_GEEX1001_CODGRP(A) put(nRec, 140, A :1.1)
!-----------------------------------------------------------
! FIELD : CODICM 
#define S_GEEX1001_CODICM peel(pick(nPos, 141, 3), " ")
#define R_GEEX1001_CODICM(A) put(nRec, 141, A :3.3)
!-----------------------------------------------------------
! FIELD : CODTCT 
#define S_GEEX1001_CODTCT peel(pick(nPos, 144, 3), " ")
#define R_GEEX1001_CODTCT(A) put(nRec, 144, A :3.3)
!-----------------------------------------------------------
! FIELD : CUMPRT 
#define S_GEEX1001_CUMPRT peel(pick(nPos, 147, 9), " ")
#define R_GEEX1001_CUMPRT(A) put(nRec, 147, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : FOUGRP 
#define S_GEEX1001_FOUGRP peel(pick(nPos, 156, 14), " ")
#define R_GEEX1001_FOUGRP(A) put(nRec, 156, A :14.14)
!-----------------------------------------------------------
! FIELD : METREC 
#define S_GEEX1001_METREC peel(pick(nPos, 170, 1), " ")
#define R_GEEX1001_METREC(A) put(nRec, 170, A :1.1)
!-----------------------------------------------------------
! FIELD : NULRLQ 
#define S_GEEX1001_NULRLQ peel(pick(nPos, 171, 1), " ")
#define R_GEEX1001_NULRLQ(A) put(nRec, 171, A :1.1)
!-----------------------------------------------------------
! FIELD : PAYFAB 
#define S_GEEX1001_PAYFAB peel(pick(nPos, 172, 20), " ")
#define R_GEEX1001_PAYFAB(A) put(nRec, 172, A :20.20)
!-----------------------------------------------------------
! FIELD : PEREMB 
#define S_GEEX1001_PEREMB peel(pick(nPos, 192, 1), " ")
#define R_GEEX1001_PEREMB(A) put(nRec, 192, A :1.1)
!-----------------------------------------------------------
! FIELD : UNIFSR 
#define S_GEEX1001_UNIFSR peel(pick(nPos, 193, 1), " ")
#define R_GEEX1001_UNIFSR(A) put(nRec, 193, A :1.1)
!-----------------------------------------------------------
! FIELD : CODRGT 
#define S_GEEX1001_CODRGT peel(pick(nPos, 194, 3), " ")
#define R_GEEX1001_CODRGT(A) put(nRec, 194, A :3.3)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX1001_DISEXC peel(pick(nPos, 197, 60), " ")
#define R_GEEX1001_DISEXC(A) put(nRec, 197, A :60.60)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX1002 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX1002_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX1002_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX1002_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX1002_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX1002_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX1002_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX1002_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX1002_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX1002_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX1002_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_GEEX1002_CODFOU peel(pick(nPos, 10, 14), " ")
#define R_GEEX1002_CODFOU(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : CM1FOU 
#define S_GEEX1002_CM1FOU peel(pick(nPos, 24, 45), " ")
#define R_GEEX1002_CM1FOU(A) put(nRec, 24, A :45.45)
!-----------------------------------------------------------
! FIELD : CM2FOU 
#define S_GEEX1002_CM2FOU peel(pick(nPos, 69, 45), " ")
#define R_GEEX1002_CM2FOU(A) put(nRec, 69, A :45.45)
!-----------------------------------------------------------
! FIELD : CM3FOU 
#define S_GEEX1002_CM3FOU peel(pick(nPos, 114, 45), " ")
#define R_GEEX1002_CM3FOU(A) put(nRec, 114, A :45.45)
!-----------------------------------------------------------
! FIELD : LIBCPL 
#define S_GEEX1002_LIBCPL peel(pick(nPos, 159, 38), " ")
#define R_GEEX1002_LIBCPL(A) put(nRec, 159, A :38.38)
!-----------------------------------------------------------
! FIELD : LIBCP2 
#define S_GEEX1002_LIBCP2 peel(pick(nPos, 197, 38), " ")
#define R_GEEX1002_LIBCP2(A) put(nRec, 197, A :38.38)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX1002_DISEXC peel(pick(nPos, 235, 22), " ")
#define R_GEEX1002_DISEXC(A) put(nRec, 235, A :22.22)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX1003 
!===========================================================
! FIELD : CODEXC 
#define S_GEEX1003_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX1003_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX1003_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX1003_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX1003_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX1003_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX1003_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX1003_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX1003_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX1003_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_GEEX1003_CODFOU peel(pick(nPos, 10, 14), " ")
#define R_GEEX1003_CODFOU(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : NOMFOU 
#define S_GEEX1003_NOMFOU peel(pick(nPos, 24, 38), " ")
#define R_GEEX1003_NOMFOU(A) put(nRec, 24, A :38.38)
!-----------------------------------------------------------
! FIELD : AD1FOU 
#define S_GEEX1003_AD1FOU peel(pick(nPos, 62, 38), " ")
#define R_GEEX1003_AD1FOU(A) put(nRec, 62, A :38.38)
!-----------------------------------------------------------
! FIELD : AD2FOU 
#define S_GEEX1003_AD2FOU peel(pick(nPos, 100, 38), " ")
#define R_GEEX1003_AD2FOU(A) put(nRec, 100, A :38.38)
!-----------------------------------------------------------
! FIELD : AD3FOU 
#define S_GEEX1003_AD3FOU peel(pick(nPos, 138, 38), " ")
#define R_GEEX1003_AD3FOU(A) put(nRec, 138, A :38.38)
!-----------------------------------------------------------
! FIELD : VILFOU 
#define S_GEEX1003_VILFOU peel(pick(nPos, 176, 58), " ")
#define R_GEEX1003_VILFOU(A) put(nRec, 176, A :58.58)
!-----------------------------------------------------------
! FIELD : CODCLV 
#define S_GEEX1003_CODCLV peel(pick(nPos, 234, 3), " ")
#define R_GEEX1003_CODCLV(A) put(nRec, 234, A :3.3)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX1003_DISEXC peel(pick(nPos, 237, 20), " ")
#define R_GEEX1003_DISEXC(A) put(nRec, 237, A :20.20)
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

! File GEEXM07 :
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
! Line : GEEX0700
!===========================================================
! FIELD : CODEXC 
#define S_GEEX0700_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX0700_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX0700_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX0700_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX0700_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX0700_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX0700_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX0700_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX0700_BP_CODPAL peel(pick(nPos, 7, 18), " ")
#define R_GEEX0700_BP_CODPAL(A) put(nRec, 7, A :18.18)
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GEEX0700_BP_MOTIMM peel(pick(nPos, 25, 3), " ")
#define R_GEEX0700_BP_MOTIMM(A) put(nRec, 25, A :3.3)
!-----------------------------------------------------------
! FIELD : CODTRT 
#define S_GEEX0700_BP_CODTRT peel(pick(nPos, 28, 1), " ")
#define R_GEEX0700_BP_CODTRT(A) put(nRec, 28, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMPAL 
#define S_GEEX0700_BP_NUMPAL peel(pick(nPos, 29, 9), " ")
#define R_GEEX0700_BP_NUMPAL(A) put(nRec, 29, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : DATTRT 
#define S_GEEX0700_BP_DATTRT peel(pick(nPos, 38, 8), " ")
#define R_GEEX0700_BP_DATTRT(A) put(nRec, 38, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : NUMMSG 
#define S_GEEX0700_BP_NUMMSG peel(pick(nPos, 46, 4), " ")
#define R_GEEX0700_BP_NUMMSG(A) put(nRec, 46, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : LIBMSG 
#define S_GEEX0700_BP_LIBMSG peel(pick(nPos, 50, 30), " ")
#define R_GEEX0700_BP_LIBMSG(A) put(nRec, 50, A :30.30)
!-----------------------------------------------------------
! FIELD : HEUTRT 
#define S_GEEX0700_BP_HEUTRT peel(pick(nPos, 80, 6), " ")
#define R_GEEX0700_BP_HEUTRT(A) put(nRec, 80, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX0700_BP_CODLOT peel(pick(nPos, 86, 20), " ")
#define R_GEEX0700_BP_CODLOT(A) put(nRec, 86, A :20.20)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX0700_BP_CODACT peel(pick(nPos, 106, 3), " ")
#define R_GEEX0700_BP_CODACT(A) put(nRec, 106, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX0700_BP_CODCLI peel(pick(nPos, 109, 14), " ")
#define R_GEEX0700_BP_CODCLI(A) put(nRec, 109, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX0700_BP_CODPRO peel(pick(nPos, 123, 17), " ")
#define R_GEEX0700_BP_CODPRO(A) put(nRec, 123, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX0700_BP_VALPRO peel(pick(nPos, 140, 2), " ")
#define R_GEEX0700_BP_VALPRO(A) put(nRec, 140, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : IDEMSG 
#define S_GEEX0700_BP_IDEMSG peel(pick(nPos, 142, 30), " ")
#define R_GEEX0700_BP_IDEMSG(A) put(nRec, 142, A :30.30)
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_GEEX0700_BP_EDIPRO peel(pick(nPos, 172, 17), " ")
#define R_GEEX0700_BP_EDIPRO(A) put(nRec, 172, A :17.17)
!-----------------------------------------------------------
! FIELD : MLTSIT 
#define S_GEEX0700_BP_MLTSIT peel(pick(nPos, 189, 1), " ")
#define R_GEEX0700_BP_MLTSIT(A) put(nRec, 189, A :1.1)
!-----------------------------------------------------------
! FIELD : DATIMM2 
#define S_GEEX0700_BP_DATIMM2 peel(pick(nPos, 190, 8), " ")
#define R_GEEX0700_BP_DATIMM2(A) put(nRec, 190, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUIMM2 
#define S_GEEX0700_BP_HEUIMM2 peel(pick(nPos, 198, 6), " ")
#define R_GEEX0700_BP_HEUIMM2(A) put(nRec, 198, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_GEEX0700_BP_DATFVI peel(pick(nPos, 204, 8), " ")
#define R_GEEX0700_BP_DATFVI(A) put(nRec, 204, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : INDERR 
#define S_GEEX0700_BP_INDERR peel(pick(nPos, 212, 1), " ")
#define R_GEEX0700_BP_INDERR(A) put(nRec, 212, A :1.1)
!-----------------------------------------------------------
! FIELD : UVCSTO 
#define S_GEEX0700_BP_UVCSTO peel(pick(nPos, 213, 9), " ")
#define R_GEEX0700_BP_UVCSTO(A) put(nRec, 213, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_GEEX0700_BP_PCBPRO peel(pick(nPos, 222, 5), " ")
#define R_GEEX0700_BP_PCBPRO(A) put(nRec, 222, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX0700_BP_DISEXC peel(pick(nPos, 227, 30), " ")
#define R_GEEX0700_BP_DISEXC(A) put(nRec, 227, A :30.30)
!-----------------------------------------------------------
! FIELD : COLSTO 
#define S_GEEX0700_BP_COLSTO peel(pick(nPos, 257, 9), " ")
#define R_GEEX0700_BP_COLSTO(A) put(nRec, 257, build(number(A):R09.0))
!-----------------------------------------------------------
!===========================================================
! Line : GEEX0790
!===========================================================
! FIELD : CODEXC 
#define S_GEEX0790_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX0790_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX0790_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX0790_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX0790_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX0790_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX0790_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX0790_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX0790_BP_CODPAL peel(pick(nPos, 7, 18), " ")
#define R_GEEX0790_BP_CODPAL(A) put(nRec, 7, A :18.18)
!-----------------------------------------------------------
! FIELD : ETAPAL 
#define S_GEEX0790_BP_ETAPAL peel(pick(nPos, 25, 2), " ")
#define R_GEEX0790_BP_ETAPAL(A) put(nRec, 25, A :2.2)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX0790_BP_CODACT peel(pick(nPos, 27, 3), " ")
#define R_GEEX0790_BP_CODACT(A) put(nRec, 27, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX0790_BP_CODCLI peel(pick(nPos, 30, 14), " ")
#define R_GEEX0790_BP_CODCLI(A) put(nRec, 30, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX0790_BP_CODPRO peel(pick(nPos, 44, 17), " ")
#define R_GEEX0790_BP_CODPRO(A) put(nRec, 44, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX0790_BP_VALPRO peel(pick(nPos, 61, 2), " ")
#define R_GEEX0790_BP_VALPRO(A) put(nRec, 61, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_GEEX0790_BP_MOTIMM peel(pick(nPos, 63, 9), " ")
#define R_GEEX0790_BP_MOTIMM(A) put(nRec, 63, A :9.9)
!-----------------------------------------------------------
! FIELD : DATLIB 
#define S_GEEX0790_BP_DATLIB peel(pick(nPos, 72, 24), " ")
#define R_GEEX0790_BP_DATLIB(A) put(nRec, 72, build(number(A):R024.0))
!-----------------------------------------------------------
! FIELD : HEULIB 
#define S_GEEX0790_BP_HEULIB peel(pick(nPos, 96, 18), " ")
#define R_GEEX0790_BP_HEULIB(A) put(nRec, 96, build(number(A):R018.0))
!-----------------------------------------------------------
! FIELD : INDLIB 
#define S_GEEX0790_BP_INDLIB peel(pick(nPos, 114, 3), " ")
#define R_GEEX0790_BP_INDLIB(A) put(nRec, 114, A :3.3)
!-----------------------------------------------------------
! FIELD : IDEMSG 
#define S_GEEX0790_BP_IDEMSG peel(pick(nPos, 117, 30), " ")
#define R_GEEX0790_BP_IDEMSG(A) put(nRec, 117, A :30.30)
!-----------------------------------------------------------
! FIELD : IMMBKL 
#define S_GEEX0790_BP_IMMBKL peel(pick(nPos, 147, 3), " ")
#define R_GEEX0790_BP_IMMBKL(A) put(nRec, 147, A :3.3)
!-----------------------------------------------------------
! FIELD : PALIMM 
#define S_GEEX0790_BP_PALIMM peel(pick(nPos, 150, 3), " ")
#define R_GEEX0790_BP_PALIMM(A) put(nRec, 150, A :3.3)
!-----------------------------------------------------------
! FIELD : DATBKL 
#define S_GEEX0790_BP_DATBKL peel(pick(nPos, 153, 8), " ")
#define R_GEEX0790_BP_DATBKL(A) put(nRec, 153, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUBKL 
#define S_GEEX0790_BP_HEUBKL peel(pick(nPos, 161, 6), " ")
#define R_GEEX0790_BP_HEUBKL(A) put(nRec, 161, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : DATIMM 
#define S_GEEX0790_BP_DATIMM peel(pick(nPos, 167, 8), " ")
#define R_GEEX0790_BP_DATIMM(A) put(nRec, 167, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUIMM 
#define S_GEEX0790_BP_HEUIMM peel(pick(nPos, 175, 6), " ")
#define R_GEEX0790_BP_HEUIMM(A) put(nRec, 175, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : LIBIMO 
#define S_GEEX0790_BP_LIBIMO peel(pick(nPos, 181, 46), " ")
#define R_GEEX0790_BP_LIBIMO(A) put(nRec, 181, A :46.46)
!-----------------------------------------------------------
! FIELD : DS1PRO 
#define S_GEEX0790_BP_DS1PRO peel(pick(nPos, 227, 35), " ")
#define R_GEEX0790_BP_DS1PRO(A) put(nRec, 227, A :35.35)
!-----------------------------------------------------------
! FIELD : DS2PRO 
#define S_GEEX0790_BP_DS2PRO peel(pick(nPos, 262, 35), " ")
#define R_GEEX0790_BP_DS2PRO(A) put(nRec, 262, A :35.35)
!-----------------------------------------------------------
! FIELD : DS3PRO 
#define S_GEEX0790_BP_DS3PRO peel(pick(nPos, 297, 35), " ")
#define R_GEEX0790_BP_DS3PRO(A) put(nRec, 297, A :35.35)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX0790_BP_DISEXC peel(pick(nPos, 332, 30), " ")
#define R_GEEX0790_BP_DISEXC(A) put(nRec, 332, A :30.30)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX0791
!===========================================================
! FIELD : CODEXC 
#define S_GEEX0791_BP_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX0791_BP_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_GEEX0791_BP_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX0791_BP_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_GEEX0791_BP_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX0791_BP_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_GEEX0791_BP_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX0791_BP_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_GEEX0791_BP_CODPAL peel(pick(nPos, 7, 18), " ")
#define R_GEEX0791_BP_CODPAL(A) put(nRec, 7, A :18.18)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_GEEX0791_BP_CODACT peel(pick(nPos, 25, 3), " ")
#define R_GEEX0791_BP_CODACT(A) put(nRec, 25, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_GEEX0791_BP_CODCLI peel(pick(nPos, 28, 14), " ")
#define R_GEEX0791_BP_CODCLI(A) put(nRec, 28, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_GEEX0791_BP_CODPRO peel(pick(nPos, 42, 17), " ")
#define R_GEEX0791_BP_CODPRO(A) put(nRec, 42, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_GEEX0791_BP_VALPRO peel(pick(nPos, 59, 2), " ")
#define R_GEEX0791_BP_VALPRO(A) put(nRec, 59, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_GEEX0791_BP_CODLOT peel(pick(nPos, 61, 20), " ")
#define R_GEEX0791_BP_CODLOT(A) put(nRec, 61, A :20.20)
!-----------------------------------------------------------
! FIELD : CODRUB 
#define S_GEEX0791_BP_CODRUB peel(pick(nPos, 81, 12), " ")
#define R_GEEX0791_BP_CODRUB(A) put(nRec, 81, A :12.12)
!-----------------------------------------------------------
! FIELD : VALRUB 
#define S_GEEX0791_BP_VALRUB peel(pick(nPos, 93, 105), " ")
#define R_GEEX0791_BP_VALRUB(A) put(nRec, 93, A :105.105)
!-----------------------------------------------------------
! FIELD : IDEMSG 
#define S_GEEX0791_BP_IDEMSG peel(pick(nPos, 198, 30), " ")
#define R_GEEX0791_BP_IDEMSG(A) put(nRec, 198, A :30.30)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_GEEX0791_BP_DISEXC peel(pick(nPos, 228, 29), " ")
#define R_GEEX0791_BP_DISEXC(A) put(nRec, 228, A :29.29)
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

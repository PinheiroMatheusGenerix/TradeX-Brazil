! File M44 : 
!===========================================================
! Line : M4460 
!===========================================================
! FIELD : CODEXC 
#define S_M4460_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_M4460_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_M4460_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_M4460_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_M4460_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_M4460_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_M4460_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_M4460_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : REFCAF 
#define S_M4460_REFCAF peel(pick(nPos, 7, 30), " ")
#define R_M4460_REFCAF(A) put(nRec, 7, A :30.30)
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_M4460_CODLOT peel(pick(nPos, 37, 20), " ")
#define R_M4460_CODLOT(A) put(nRec, 37, A :20.20)
!-----------------------------------------------------------
! FIELD : ACTPRN 
#define S_M4460_ACTPRN peel(pick(nPos, 57, 3), " ")
#define R_M4460_ACTPRN(A) put(nRec, 57, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_M4460_CODCLI peel(pick(nPos, 60, 14), " ")
#define R_M4460_CODCLI(A) put(nRec, 60, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRN 
#define S_M4460_CODPRN peel(pick(nPos, 74, 17), " ")
#define R_M4460_CODPRN(A) put(nRec, 74, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRN 
#define S_M4460_VALPRN peel(pick(nPos, 91, 2), " ")
#define R_M4460_VALPRN(A) put(nRec, 91, A :2.2)
!-----------------------------------------------------------
! FIELD : EDIPRN 
#define S_M4460_EDIPRN peel(pick(nPos, 93, 17), " ")
#define R_M4460_EDIPRN(A) put(nRec, 93, A :17.17)
!-----------------------------------------------------------
! FIELD : PALPRN 
#define S_M4460_PALPRN peel(pick(nPos, 110, 18), " ")
#define R_M4460_PALPRN(A) put(nRec, 110, A :18.18)
!-----------------------------------------------------------
! FIELD : UVCFAB 
#define S_M4460_UVCFAB peel(pick(nPos, 128, 9), " ")
#define R_M4460_UVCFAB(A) put(nRec, 128, A :9.9)
!-----------------------------------------------------------
! FIELD : DATFAB 
#define S_M4460_DATFAB peel(pick(nPos, 137, 16), " ")
#define R_M4460_DATFAB(A) put(nRec, 137, A :16.16)
!-----------------------------------------------------------
! FIELD : HEUFAB 
#define S_M4460_HEUFAB peel(pick(nPos, 153, 12), " ")
#define R_M4460_HEUFAB(A) put(nRec, 153, A :12.12)
!-----------------------------------------------------------
! FIELD : MACFAB 
#define S_M4460_MACFAB peel(pick(nPos, 165, 3), " ")
#define R_M4460_MACFAB(A) put(nRec, 165, A :3.3)
!-----------------------------------------------------------
! FIELD : SITPAL 
#define S_M4460_SITPAL peel(pick(nPos, 168, 3), " ")
#define R_M4460_SITPAL(A) put(nRec, 168, A :3.3)
!-----------------------------------------------------------
! FIELD : EDISIT 
#define S_M4460_EDISIT peel(pick(nPos, 171, 14), " ")
#define R_M4460_EDISIT(A) put(nRec, 171, A :14.14)
!-----------------------------------------------------------
! FIELD : PDBPAL 
#define S_M4460_PDBPAL peel(pick(nPos, 185, 7), " ")
#define R_M4460_PDBPAL(A) put(nRec, 185, A :7.7)
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_M4460_MOTIMM peel(pick(nPos, 192, 3), " ")
#define R_M4460_MOTIMM(A) put(nRec, 192, A :3.3)
!-----------------------------------------------------------
! FIELD : DATIMM1 
#define S_M4460_DATIMM1 peel(pick(nPos, 195, 8), " ")
#define R_M4460_DATIMM1(A) put(nRec, 195, A :8.8)
!-----------------------------------------------------------
! FIELD : HEUIMM1 
#define S_M4460_HEUIMM1 peel(pick(nPos, 203, 6), " ")
#define R_M4460_HEUIMM1(A) put(nRec, 203, A :6.6)
!-----------------------------------------------------------
! FIELD : DATIMM2 
#define S_M4460_DATIMM2 peel(pick(nPos, 209, 8), " ")
#define R_M4460_DATIMM2(A) put(nRec, 209, A :8.8)
!-----------------------------------------------------------
! FIELD : HEUIMM2 
#define S_M4460_HEUIMM2 peel(pick(nPos, 217, 6), " ")
#define R_M4460_HEUIMM2(A) put(nRec, 217, A :6.6)
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_M4460_DATFVI peel(pick(nPos, 223, 8), " ")
#define R_M4460_DATFVI(A) put(nRec, 223, A :8.8)
!-----------------------------------------------------------
! FIELD : CODEMB 
#define S_M4460_CODEMB peel(pick(nPos, 231, 3), " ")
#define R_M4460_CODEMB(A) put(nRec, 231, A :3.3)
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_M4460_PCBPRO peel(pick(nPos, 234, 5), " ")
#define R_M4460_PCBPRO(A) put(nRec, 234, A :5.5)
!-----------------------------------------------------------
! FIELD : NUMPAL 
#define S_M4460_NUMPAL peel(pick(nPos, 239, 8), " ")
#define R_M4460_NUMPAL(A) put(nRec, 239, A :8.8)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_M4460_DISEXC peel(pick(nPos, 247, 10), " ")
#define R_M4460_DISEXC(A) put(nRec, 247, A :10.10)
!-----------------------------------------------------------
!===========================================================
! Line : M4480 
!===========================================================
! FIELD : CODEXC 
#define S_M4480_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_M4480_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_M4480_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_M4480_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_M4480_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_M4480_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_M4480_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_M4480_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : REFCAF 
#define S_M4480_REFCAF peel(pick(nPos, 7, 30), " ")
#define R_M4480_REFCAF(A) put(nRec, 7, A :30.30)
!-----------------------------------------------------------
! FIELD : PALPRN 
#define S_M4480_PALPRN peel(pick(nPos, 37, 18), " ")
#define R_M4480_PALPRN(A) put(nRec, 37, A :18.18)
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_M4480_CODPAL peel(pick(nPos, 55, 18), " ")
#define R_M4480_CODPAL(A) put(nRec, 55, A :18.18)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_M4480_CODACT peel(pick(nPos, 73, 3), " ")
#define R_M4480_CODACT(A) put(nRec, 73, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_M4480_CODCLI peel(pick(nPos, 76, 14), " ")
#define R_M4480_CODCLI(A) put(nRec, 76, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_M4480_CODPRO peel(pick(nPos, 90, 17), " ")
#define R_M4480_CODPRO(A) put(nRec, 90, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_M4480_VALPRO peel(pick(nPos, 107, 2), " ")
#define R_M4480_VALPRO(A) put(nRec, 107, A :2.2)
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_M4480_EDIPRO peel(pick(nPos, 109, 17), " ")
#define R_M4480_EDIPRO(A) put(nRec, 109, A :17.17)
!-----------------------------------------------------------
! FIELD : UVCUTI 
#define S_M4480_UVCUTI peel(pick(nPos, 126, 9), " ")
#define R_M4480_UVCUTI(A) put(nRec, 126, A :9.9)
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_M4480_DATFVI peel(pick(nPos, 135, 8), " ")
#define R_M4480_DATFVI(A) put(nRec, 135, A :8.8)
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_M4480_CODLOT peel(pick(nPos, 143, 20), " ")
#define R_M4480_CODLOT(A) put(nRec, 143, A :20.20)
!-----------------------------------------------------------
! FIELD : CODEMB 
#define S_M4480_CODEMB peel(pick(nPos, 163, 3), " ")
#define R_M4480_CODEMB(A) put(nRec, 163, A :3.3)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_M4480_DISEXC peel(pick(nPos, 166, 91), " ")
#define R_M4480_DISEXC(A) put(nRec, 166, A :91.91)
!-----------------------------------------------------------

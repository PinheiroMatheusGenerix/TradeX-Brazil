! File M41_TXT_LASA : 
!===========================================================
! Line : S0 
!===========================================================
! FIELD : TIPO_REGISTRO 
#define S_S0_TIPO_REGISTRO peel(pick(nPos, 1, 2), " ")
#define R_S0_TIPO_REGISTRO(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : VERSAO 
#define S_S0_VERSAO peel(pick(nPos, 3, 8), " ")
#define R_S0_VERSAO(A) put(nRec, 3, A :8.8)
!-----------------------------------------------------------
!===========================================================
! Line : S1 
!===========================================================
! FIELD : TIPO_REG 
#define S_S1_TIPO_REG peel(pick(nPos, 1, 2), " ")
#define R_S1_TIPO_REG(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SHIP 
#define S_S1_SHIP peel(pick(nPos, 3, 3), " ")
#define R_S1_SHIP(A) put(nRec, 3, A :3.3)
!-----------------------------------------------------------
! FIELD : DATA 
#define S_S1_DATA peel(pick(nPos, 6, 8), " ")
#define R_S1_DATA(A) put(nRec, 6, A :8.8)
!-----------------------------------------------------------
! FIELD : HORA 
#define S_S1_HORA peel(pick(nPos, 14, 6), " ")
#define R_S1_HORA(A) put(nRec, 14, A :6.6)
!-----------------------------------------------------------
! FIELD : TKNUM 
#define S_S1_TKNUM peel(pick(nPos, 22, 10), " ")
#define R_S1_TKNUM(A) put(nRec, 22, A :10.10)
!-----------------------------------------------------------
! FIELD : VBELN 
#define S_S1_VBELN peel(pick(nPos, 32, 10), " ")
#define R_S1_VBELN(A) put(nRec, 32, A :10.10)
!-----------------------------------------------------------
!===========================================================
! Line : S2 
!===========================================================
! FIELD : TIPO_REG 
#define S_S2_TIPO_REG peel(pick(nPos, 1, 2), " ")
#define R_S2_TIPO_REG(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : POSNR 
#define S_S2_POSNR peel(pick(nPos, 3, 3), " ")
#define R_S2_POSNR(A) put(nRec, 3, A :3.3)
!-----------------------------------------------------------
! FIELD : MATNR 
#define S_S2_MATNR peel(pick(nPos, 6, 15), " ")
#define R_S2_MATNR(A) put(nRec, 6, A :15.15)
!-----------------------------------------------------------
! FIELD : CANTIDAD 
#define S_S2_CANTIDAD peel(pick(nPos, 21, 9), " ")
#define R_S2_CANTIDAD(A) put(nRec, 21, A :9.9)
!-----------------------------------------------------------
! FIELD : MEINS 
#define S_S2_MEINS peel(pick(nPos, 30, 3), " ")
#define R_S2_MEINS(A) put(nRec, 30, A :3.3)
!-----------------------------------------------------------
! FIELD : CHARG 
#define S_S2_CHARG peel(pick(nPos, 33, 10), " ")
#define R_S2_CHARG(A) put(nRec, 33, A :10.10)
!-----------------------------------------------------------
!===========================================================
! Line : S3 
!===========================================================
! FIELD : TIPO_REG 
#define S_S3_TIPO_REG peel(pick(nPos, 1, 2), " ")
#define R_S3_TIPO_REG(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : CANT_REG 
#define S_S3_CANT_REG peel(pick(nPos, 3, 6), " ")
#define R_S3_CANT_REG(A) put(nRec, 3, A :6.6)
!-----------------------------------------------------------
! FIELD : CANT_TOT 
#define S_S3_CANT_TOT peel(pick(nPos, 9, 10), " ")
#define R_S3_CANT_TOT(A) put(nRec, 9, A :10.10)
!-----------------------------------------------------------

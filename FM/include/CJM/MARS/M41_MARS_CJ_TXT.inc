! File M41_TXT_LASA : 
!===========================================================
! Line : S0 
!===========================================================
! FIELD : TIPO_REGISTRO 
#define S_S0_TIPO_REGISTRO peel(pick(nPos, 1, 2), " ")
#define R_S0_TIPO_REGISTRO(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : DATA 
#define S_S0_DATA peel(pick(nPos, 3, 8), " ")
#define R_S0_DATA(A) put(nRec, 3, A :8.8)
!-----------------------------------------------------------
! FIELD : HORA 
#define S_S0_HORA peel(pick(nPos, 11, 16), " ")
#define R_S0_HORA(A) put(nRec, 11, A :16.16)
!-----------------------------------------------------------
!===========================================================
! Line : S1 
!===========================================================
! FIELD : TIPO_REGISTRO 
#define S_S1_TIPO_REGISTRO peel(pick(nPos, 1, 2), " ")
#define R_S1_TIPO_REGISTRO(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : DOCNUM 
#define S_S1_DOCNUM peel(pick(nPos, 3, 10), " ")
#define R_S1_DOCNUM(A) put(nRec, 3, A :10.10)
!-----------------------------------------------------------
! FIELD : MATERIAL 
#define S_S1_MATERIAL peel(pick(nPos, 13, 18), " ")
#define R_S1_MATERIAL(A) put(nRec, 13, A :18.18)
!-----------------------------------------------------------
! FIELD : QUANTIDADE 
#define S_S1_QUANTIDADE peel(pick(nPos, 31, 16), " ")
#define R_S1_QUANTIDADE(A) put(nRec, 31, A :16.16)
!-----------------------------------------------------------
! FIELD : STATUS 
#define S_S1_STATUS peel(pick(nPos, 47, 10), " ")
#define R_S1_STATUS(A) put(nRec, 47, A :10.10)
!-----------------------------------------------------------
! FIELD : LOTE 
#define S_S1_LOTE peel(pick(nPos, 57, 10), " ")
#define R_S1_LOTE(A) put(nRec, 57, A :10.10)
!-----------------------------------------------------------
! FIELD : EBELP 
#define S_S1_EBELP peel(pick(nPos, 68, 5), " ")
#define R_S1_EBELP(A) put(nRec, 68, A :5.5)
!-----------------------------------------------------------
! FIELD : MBLNR 
#define S_S1_MBLNR peel(pick(nPos, 74, 10), " ")
#define R_S1_MBLNR(A) put(nRec, 74, A :10.10)
!-----------------------------------------------------------

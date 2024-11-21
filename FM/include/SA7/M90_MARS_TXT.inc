! File M40_TXT_LASA : 
!===========================================================
! Line : HEADER 
!===========================================================
! FIELD : TIPO_REGISTRO 
#define S_HEADER_TIPO_REGISTRO peel(pick(nPos, 1, 2), " ")
#define R_HEADER_TIPO_REGISTRO(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : DATA 
#define S_HEADER_DATA peel(pick(nPos, 3, 8), " ")
#define R_HEADER_DATA(A) put(nRec, 3, A :8.8)
!-----------------------------------------------------------
! FIELD : HORA 
#define S_HEADER_HORA peel(pick(nPos, 11, 6), " ")
#define R_HEADER_HORA(A) put(nRec, 11, A :6.6)
!-----------------------------------------------------------
!===========================================================
! Line : DETAIL 
!===========================================================
! FIELD : TIPO_REGISTRO 
#define S_DETAIL_TIPO_REGISTRO peel(pick(nPos, 1, 2), " ")
#define R_DETAIL_TIPO_REGISTRO(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : MATERIAL 
#define S_DETAIL_MATERIAL peel(pick(nPos, 3, 18), " ")
#define R_DETAIL_MATERIAL(A) put(nRec, 3, A :18.18)
!-----------------------------------------------------------
! FIELD : QUANTIDADE 
#define S_DETAIL_QUANTIDADE peel(pick(nPos, 21, 16), " ")
#define R_DETAIL_QUANTIDADE(A) put(nRec, 21, A :16.16)
!-----------------------------------------------------------
! FIELD : STATUS 
#define S_DETAIL_STATUS peel(pick(nPos, 37, 4), " ")
#define R_DETAIL_STATUS(A) put(nRec, 37, A :4.4)
!-----------------------------------------------------------
! FIELD : LOTE 
#define S_DETAIL_LOTE peel(pick(nPos, 42, 10), " ")
#define R_DETAIL_LOTE(A) put(nRec, 42, A :10.10)
!-----------------------------------------------------------
! FIELD : STATUS_DO_LOTE 
#define S_DETAIL_STATUS_DO_LOTE peel(pick(nPos, 53, 1), " ")
#define R_DETAIL_STATUS_DO_LOTE(A) put(nRec, 53, A :1.1)
!-----------------------------------------------------------
! FIELD : CENTRO 
#define S_DETAIL_CENTRO peel(pick(nPos, 55, 4), " ")
#define R_DETAIL_CENTRO(A) put(nRec, 55, A :4.4)
!-----------------------------------------------------------

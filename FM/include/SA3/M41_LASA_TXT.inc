! File M41_LASA_TXT : 
!===========================================================
! Line : HEADER 
!===========================================================
! FIELD : LOCATION 
#define S_HEADER_LOCATION peel(pick(nPos, 1, 4), " ")
#define R_HEADER_LOCATION(A) put(nRec, 1, A :4.4)
!-----------------------------------------------------------
! FIELD : APPT_NBR 
#define S_HEADER_APPT_NBR peel(pick(nPos, 6, 9), " ")
#define R_HEADER_APPT_NBR(A) put(nRec, 6, A :9.9)
!-----------------------------------------------------------
! FIELD : ITEM_ID 
#define S_HEADER_ITEM_ID peel(pick(nPos, 16, 16), " ")
#define R_HEADER_ITEM_ID(A) put(nRec, 16, A :16.16)
!-----------------------------------------------------------
! FIELD : UNIT_QTY 
#define S_HEADER_UNIT_QTY peel(pick(nPos, 33, 11), " ")
#define R_HEADER_UNIT_QTY(A) put(nRec, 33, A :11.11)
!-----------------------------------------------------------
! FIELD : ZEROS_UNIT_QTY 
#define S_HEADER_ZEROS_UNIT_QTY peel(pick(nPos, 44, 3), " ")
#define R_HEADER_ZEROS_UNIT_QTY(A) put(nRec, 44, A :3.3)
!-----------------------------------------------------------
! FIELD : IT_PALLET 
#define S_HEADER_IT_PALLET peel(pick(nPos, 48, 2), " ")
#define R_HEADER_IT_PALLET(A) put(nRec, 48, A :2.2)
!-----------------------------------------------------------

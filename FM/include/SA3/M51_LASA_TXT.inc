! File M40_TXT_LASA : 
!===========================================================
! Line : HEADER 
!===========================================================
! FIELD : REGISTRO 
#define S_HEADER_REGISTRO peel(pick(nPos, 1, 1), " ")
#define R_HEADER_REGISTRO(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : LOCATION 
#define S_HEADER_LOCATION peel(pick(nPos, 3, 4), " ")
#define R_HEADER_LOCATION(A) put(nRec, 3, A :4.4)
!-----------------------------------------------------------
! FIELD : BATCH_NUMBER 
#define S_HEADER_BATCH_NUMBER peel(pick(nPos, 8, 7), " ")
#define R_HEADER_BATCH_NUMBER(A) put(nRec, 8, A :7.7)
!-----------------------------------------------------------
! FIELD : BOL_NUMBER_LOJA 
#define S_HEADER_BOL_NUMBER_LOJA peel(pick(nPos, 16, 4), " ")
#define R_HEADER_BOL_NUMBER_LOJA(A) put(nRec, 16, A :4.4)
!-----------------------------------------------------------
! FIELD : BOL_NUMBER_SEQUENCIA 
#define S_HEADER_BOL_NUMBER_SEQUENCIA peel(pick(nPos, 20, 5), " ")
#define R_HEADER_BOL_NUMBER_SEQUENCIA(A) put(nRec, 20, A :5.5)
!-----------------------------------------------------------
! FIELD : ADDRESS_1 
#define S_HEADER_ADDRESS_1 peel(pick(nPos, 26, 30), " ")
#define R_HEADER_ADDRESS_1(A) put(nRec, 26, A :30.30)
!-----------------------------------------------------------
! FIELD : ADDRESS_2 
#define S_HEADER_ADDRESS_2 peel(pick(nPos, 57, 30), " ")
#define R_HEADER_ADDRESS_2(A) put(nRec, 57, A :30.30)
!-----------------------------------------------------------
! FIELD : CITY 
#define S_HEADER_CITY peel(pick(nPos, 88, 25), " ")
#define R_HEADER_CITY(A) put(nRec, 88, A :25.25)
!-----------------------------------------------------------
! FIELD : STATE 
#define S_HEADER_STATE peel(pick(nPos, 114, 3), " ")
#define R_HEADER_STATE(A) put(nRec, 114, A :3.3)
!-----------------------------------------------------------
! FIELD : ZIP 
#define S_HEADER_ZIP peel(pick(nPos, 118, 10), " ")
#define R_HEADER_ZIP(A) put(nRec, 118, A :10.10)
!-----------------------------------------------------------
! FIELD : CARRIER 
#define S_HEADER_CARRIER peel(pick(nPos, 129, 30), " ")
#define R_HEADER_CARRIER(A) put(nRec, 129, A :30.30)
!-----------------------------------------------------------
! FIELD : TRAILER_ID 
#define S_HEADER_TRAILER_ID peel(pick(nPos, 160, 12), " ")
#define R_HEADER_TRAILER_ID(A) put(nRec, 160, A :12.12)
!-----------------------------------------------------------
! FIELD : SEAL_NUMBER 
#define S_HEADER_SEAL_NUMBER peel(pick(nPos, 173, 12), " ")
#define R_HEADER_SEAL_NUMBER(A) put(nRec, 173, A :12.12)
!-----------------------------------------------------------
! FIELD : SCHEDULED_ARRIVAL_DATE_TIME 
#define S_HEADER_SCHEDULED_ARRIVAL_DATE_TIME peel(pick(nPos, 186, 12), " ")
#define R_HEADER_SCHEDULED_ARRIVAL_DATE_TIME(A) put(nRec, 186, A :12.12)
!-----------------------------------------------------------
!===========================================================
! Line : DETAIL 
!===========================================================
! FIELD : REGISTRO 
#define S_DETAIL_REGISTRO peel(pick(nPos, 1, 1), " ")
#define R_DETAIL_REGISTRO(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : LOCATION 
#define S_DETAIL_LOCATION peel(pick(nPos, 3, 4), " ")
#define R_DETAIL_LOCATION(A) put(nRec, 3, A :4.4)
!-----------------------------------------------------------
! FIELD : BATCH_NUMBER 
#define S_DETAIL_BATCH_NUMBER peel(pick(nPos, 8, 7), " ")
#define R_DETAIL_BATCH_NUMBER(A) put(nRec, 8, A :7.7)
!-----------------------------------------------------------
! FIELD : BOL_NUMBER_LOJA 
#define S_DETAIL_BOL_NUMBER_LOJA peel(pick(nPos, 16, 4), " ")
#define R_DETAIL_BOL_NUMBER_LOJA(A) put(nRec, 16, A :4.4)
!-----------------------------------------------------------
! FIELD : BOL_NUMBER_SEQUENCIA 
#define S_DETAIL_BOL_NUMBER_SEQUENCIA peel(pick(nPos, 20, 5), " ")
#define R_DETAIL_BOL_NUMBER_SEQUENCIA(A) put(nRec, 20, A :5.5)
!-----------------------------------------------------------
! FIELD : ITEM_ID 
#define S_DETAIL_ITEM_ID peel(pick(nPos, 26, 16), " ")
#define R_DETAIL_ITEM_ID(A) put(nRec, 26, A :16.16)
!-----------------------------------------------------------
! FIELD : DISTRIBUTION_ORDER_NUMBER 
#define S_DETAIL_DISTRIBUTION_ORDER_NUMBER peel(pick(nPos, 43, 9), " ")
#define R_DETAIL_DISTRIBUTION_ORDER_NUMBER(A) put(nRec, 43, A :9.9)
!-----------------------------------------------------------
! FIELD : UNIT_QUANTITY 
#define S_DETAIL_UNIT_QUANTITY peel(pick(nPos, 53, 8), " ")
#define R_DETAIL_UNIT_QUANTITY(A) put(nRec, 53, A :8.8)
!-----------------------------------------------------------
! FIELD : SHIPPED_WEIGHT 
#define S_DETAIL_SHIPPED_WEIGHT peel(pick(nPos, 62, 13), " ")
#define R_DETAIL_SHIPPED_WEIGHT(A) put(nRec, 62, A :13.13)
!-----------------------------------------------------------
! FIELD : ALLOCATED_WEIGHT 
#define S_DETAIL_ALLOCATED_WEIGHT peel(pick(nPos, 76, 13), " ")
#define R_DETAIL_ALLOCATED_WEIGHT(A) put(nRec, 76, A :13.13)
!-----------------------------------------------------------
! FIELD : OLD_DEST_ID 
#define S_DETAIL_OLD_DEST_ID peel(pick(nPos, 90, 4), " ")
#define R_DETAIL_OLD_DEST_ID(A) put(nRec, 90, A :4.4)
!-----------------------------------------------------------

! File M40_TXT_LASA : 
!===========================================================
! Line : HEADER 
!===========================================================
! FIELD : REGISTRO 
#define S_HEADER_REGISTRO peel(pick(nPos, 1, 1), " ")
#define R_HEADER_REGISTRO(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : ACTION_TYPE 
#define S_HEADER_ACTION_TYPE peel(pick(nPos, 3, 1), " ")
#define R_HEADER_ACTION_TYPE(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : LOCATION 
#define S_HEADER_LOCATION peel(pick(nPos, 5, 4), " ")
#define R_HEADER_LOCATION(A) put(nRec, 5, A :4.4)
!-----------------------------------------------------------
! FIELD : TRANSACTION_TS 
#define S_HEADER_TRANSACTION_TS peel(pick(nPos, 10, 12), " ")
#define R_HEADER_TRANSACTION_TS(A) put(nRec, 10, A :12.12)
!-----------------------------------------------------------
! FIELD : APPT_NBR 
#define S_HEADER_APPT_NBR peel(pick(nPos, 23, 9), " ")
#define R_HEADER_APPT_NBR(A) put(nRec, 23, A :9.9)
!-----------------------------------------------------------
! FIELD : CARRIER_CODE 
#define S_HEADER_CARRIER_CODE peel(pick(nPos, 33, 4), " ")
#define R_HEADER_CARRIER_CODE(A) put(nRec, 33, A :4.4)
!-----------------------------------------------------------
! FIELD : ARRIVAL_TIME 
#define S_HEADER_ARRIVAL_TIME peel(pick(nPos, 38, 12), " ")
#define R_HEADER_ARRIVAL_TIME(A) put(nRec, 38, A :12.12)
!-----------------------------------------------------------
! FIELD : CONTAINER_QTY 
#define S_HEADER_CONTAINER_QTY peel(pick(nPos, 51, 6), " ")
#define R_HEADER_CONTAINER_QTY(A) put(nRec, 51, A :6.6)
!-----------------------------------------------------------
! FIELD : DURATION 
#define S_HEADER_DURATION peel(pick(nPos, 58, 4), " ")
#define R_HEADER_DURATION(A) put(nRec, 58, A :4.4)
!-----------------------------------------------------------
! FIELD : TRAILER_ID 
#define S_HEADER_TRAILER_ID peel(pick(nPos, 63, 10), " ")
#define R_HEADER_TRAILER_ID(A) put(nRec, 63, A :10.10)
!-----------------------------------------------------------
! FIELD : DOOR_ID 
#define S_HEADER_DOOR_ID peel(pick(nPos, 74, 4), " ")
#define R_HEADER_DOOR_ID(A) put(nRec, 74, A :4.4)
!-----------------------------------------------------------
! FIELD : DEPARTAMENTO 
#define S_HEADER_DEPARTAMENTO peel(pick(nPos, 79, 4), " ")
#define R_HEADER_DEPARTAMENTO(A) put(nRec, 79, A :4.4)
!-----------------------------------------------------------
! FIELD : DEPOSITO 
#define S_HEADER_DEPOSITO peel(pick(nPos, 84, 4), " ")
#define R_HEADER_DEPOSITO(A) put(nRec, 84, A :4.4)
!-----------------------------------------------------------
!===========================================================
! Line : DETAIL 
!===========================================================
! FIELD : REGISTRO 
#define S_DETAIL_REGISTRO peel(pick(nPos, 1, 1), " ")
#define R_DETAIL_REGISTRO(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : ACTION_TYPE 
#define S_DETAIL_ACTION_TYPE peel(pick(nPos, 3, 1), " ")
#define R_DETAIL_ACTION_TYPE(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : LOCATION 
#define S_DETAIL_LOCATION peel(pick(nPos, 5, 4), " ")
#define R_DETAIL_LOCATION(A) put(nRec, 5, A :4.4)
!-----------------------------------------------------------
! FIELD : TRANSACTION_TS 
#define S_DETAIL_TRANSACTION_TS peel(pick(nPos, 10, 12), " ")
#define R_DETAIL_TRANSACTION_TS(A) put(nRec, 10, A :12.12)
!-----------------------------------------------------------
! FIELD : APPT_NBR 
#define S_DETAIL_APPT_NBR peel(pick(nPos, 23, 9), " ")
#define R_DETAIL_APPT_NBR(A) put(nRec, 23, A :9.9)
!-----------------------------------------------------------
! FIELD : PO_NBR 
#define S_DETAIL_PO_NBR peel(pick(nPos, 33, 9), " ")
#define R_DETAIL_PO_NBR(A) put(nRec, 33, A :9.9)
!-----------------------------------------------------------
! FIELD : ITEM_ID 
#define S_DETAIL_ITEM_ID peel(pick(nPos, 43, 16), " ")
#define R_DETAIL_ITEM_ID(A) put(nRec, 43, A :16.16)
!-----------------------------------------------------------
! FIELD : UNIT_QTY 
#define S_DETAIL_UNIT_QTY peel(pick(nPos, 60, 6), " ")
#define R_DETAIL_UNIT_QTY(A) put(nRec, 60, A :6.6)
!-----------------------------------------------------------
! FIELD : CASEPACK 
#define S_DETAIL_CASEPACK peel(pick(nPos, 67, 4), " ")
#define R_DETAIL_CASEPACK(A) put(nRec, 67, A :4.4)
!-----------------------------------------------------------
! FIELD : BULK_FLAG 
#define S_DETAIL_BULK_FLAG peel(pick(nPos, 72, 1), " ")
#define R_DETAIL_BULK_FLAG(A) put(nRec, 72, A :1.1)
!-----------------------------------------------------------
! FIELD : CNPJ 
#define S_DETAIL_CNPJ peel(pick(nPos, 74, 16), " ")
#define R_DETAIL_CNPJ(A) put(nRec, 74, A :16.16)
!-----------------------------------------------------------
! FIELD : NOTA 
#define S_DETAIL_NOTA peel(pick(nPos, 91, 9), " ")
#define R_DETAIL_NOTA(A) put(nRec, 91, A :9.9)
!-----------------------------------------------------------
! FIELD : SERIE 
#define S_DETAIL_SERIE peel(pick(nPos, 101, 3), " ")
#define R_DETAIL_SERIE(A) put(nRec, 101, A :3.3)
!-----------------------------------------------------------

! File M50_TXT_LASA : 
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
! FIELD : DISTRO_NBR 
#define S_HEADER_DISTRO_NBR peel(pick(nPos, 23, 9), " ")
#define R_HEADER_DISTRO_NBR(A) put(nRec, 23, A :9.9)
!-----------------------------------------------------------
! FIELD : DL_COMMENT 
#define S_HEADER_DL_COMMENT peel(pick(nPos, 33, 30), " ")
#define R_HEADER_DL_COMMENT(A) put(nRec, 33, A :30.30)
!-----------------------------------------------------------
! FIELD : PICK_NOT_BEFORE_DATE 
#define S_HEADER_PICK_NOT_BEFORE_DATE peel(pick(nPos, 64, 8), " ")
#define R_HEADER_PICK_NOT_BEFORE_DATE(A) put(nRec, 64, A :8.8)
!-----------------------------------------------------------
! FIELD : PICK_NOT_AFTER_DATE 
#define S_HEADER_PICK_NOT_AFTER_DATE peel(pick(nPos, 73, 8), " ")
#define R_HEADER_PICK_NOT_AFTER_DATE(A) put(nRec, 73, A :8.8)
!-----------------------------------------------------------
! FIELD : EVENT_CODE 
#define S_HEADER_EVENT_CODE peel(pick(nPos, 82, 6), " ")
#define R_HEADER_EVENT_CODE(A) put(nRec, 82, A :6.6)
!-----------------------------------------------------------
! FIELD : EVENT_DESCRIPTION 
#define S_HEADER_EVENT_DESCRIPTION peel(pick(nPos, 89, 25), " ")
#define R_HEADER_EVENT_DESCRIPTION(A) put(nRec, 89, A :25.25)
!-----------------------------------------------------------
! FIELD : PRIORITY 
#define S_HEADER_PRIORITY peel(pick(nPos, 115, 4), " ")
#define R_HEADER_PRIORITY(A) put(nRec, 115, A :4.4)
!-----------------------------------------------------------
! FIELD : ORDER_TYPE 
#define S_HEADER_ORDER_TYPE peel(pick(nPos, 120, 9), " ")
#define R_HEADER_ORDER_TYPE(A) put(nRec, 120, A :9.9)
!-----------------------------------------------------------
! FIELD : BREAK_BY_DISTRO 
#define S_HEADER_BREAK_BY_DISTRO peel(pick(nPos, 130, 1), " ")
#define R_HEADER_BREAK_BY_DISTRO(A) put(nRec, 130, A :1.1)
!-----------------------------------------------------------
! FIELD : CARRIER_CODE 
#define S_HEADER_CARRIER_CODE peel(pick(nPos, 132, 4), " ")
#define R_HEADER_CARRIER_CODE(A) put(nRec, 132, A :4.4)
!-----------------------------------------------------------
! FIELD : CARRIER_SERVICE_CODE 
#define S_HEADER_CARRIER_SERVICE_CODE peel(pick(nPos, 137, 6), " ")
#define R_HEADER_CARRIER_SERVICE_CODE(A) put(nRec, 137, A :6.6)
!-----------------------------------------------------------
! FIELD : ROUTE 
#define S_HEADER_ROUTE peel(pick(nPos, 144, 10), " ")
#define R_HEADER_ROUTE(A) put(nRec, 144, A :10.10)
!-----------------------------------------------------------
! FIELD : SHIP_ADDRESS_DESCRIPTION 
#define S_HEADER_SHIP_ADDRESS_DESCRIPTION peel(pick(nPos, 155, 30), " ")
#define R_HEADER_SHIP_ADDRESS_DESCRIPTION(A) put(nRec, 155, A :30.30)
!-----------------------------------------------------------
! FIELD : SHIP_ADDRESS1 
#define S_HEADER_SHIP_ADDRESS1 peel(pick(nPos, 186, 30), " ")
#define R_HEADER_SHIP_ADDRESS1(A) put(nRec, 186, A :30.30)
!-----------------------------------------------------------
! FIELD : SHIP_ADDRESS2 
#define S_HEADER_SHIP_ADDRESS2 peel(pick(nPos, 217, 30), " ")
#define R_HEADER_SHIP_ADDRESS2(A) put(nRec, 217, A :30.30)
!-----------------------------------------------------------
! FIELD : SHIP_ADDRESS3 
#define S_HEADER_SHIP_ADDRESS3 peel(pick(nPos, 248, 30), " ")
#define R_HEADER_SHIP_ADDRESS3(A) put(nRec, 248, A :30.30)
!-----------------------------------------------------------
! FIELD : SHIP_ADDRESS4 
#define S_HEADER_SHIP_ADDRESS4 peel(pick(nPos, 279, 30), " ")
#define R_HEADER_SHIP_ADDRESS4(A) put(nRec, 279, A :30.30)
!-----------------------------------------------------------
! FIELD : SHIP_ADDRESS5 
#define S_HEADER_SHIP_ADDRESS5 peel(pick(nPos, 310, 30), " ")
#define R_HEADER_SHIP_ADDRESS5(A) put(nRec, 310, A :30.30)
!-----------------------------------------------------------
! FIELD : CITY 
#define S_HEADER_CITY peel(pick(nPos, 341, 25), " ")
#define R_HEADER_CITY(A) put(nRec, 341, A :25.25)
!-----------------------------------------------------------
! FIELD : STATE 
#define S_HEADER_STATE peel(pick(nPos, 367, 3), " ")
#define R_HEADER_STATE(A) put(nRec, 367, A :3.3)
!-----------------------------------------------------------
! FIELD : ZIP 
#define S_HEADER_ZIP peel(pick(nPos, 371, 10), " ")
#define R_HEADER_ZIP(A) put(nRec, 371, A :10.10)
!-----------------------------------------------------------
! FIELD : BILL_ADDRESS_DESCRIPTION 
#define S_HEADER_BILL_ADDRESS_DESCRIPTION peel(pick(nPos, 382, 30), " ")
#define R_HEADER_BILL_ADDRESS_DESCRIPTION(A) put(nRec, 382, A :30.30)
!-----------------------------------------------------------
! FIELD : BILL_ADDRESS1 
#define S_HEADER_BILL_ADDRESS1 peel(pick(nPos, 413, 30), " ")
#define R_HEADER_BILL_ADDRESS1(A) put(nRec, 413, A :30.30)
!-----------------------------------------------------------
! FIELD : BILL_ADDRESS2 
#define S_HEADER_BILL_ADDRESS2 peel(pick(nPos, 444, 30), " ")
#define R_HEADER_BILL_ADDRESS2(A) put(nRec, 444, A :30.30)
!-----------------------------------------------------------
! FIELD : BILL_ADDRESS3 
#define S_HEADER_BILL_ADDRESS3 peel(pick(nPos, 475, 30), " ")
#define R_HEADER_BILL_ADDRESS3(A) put(nRec, 475, A :30.30)
!-----------------------------------------------------------
! FIELD : BILL_ADDRESS4 
#define S_HEADER_BILL_ADDRESS4 peel(pick(nPos, 506, 30), " ")
#define R_HEADER_BILL_ADDRESS4(A) put(nRec, 506, A :30.30)
!-----------------------------------------------------------
! FIELD : BILL_ADDRESS5 
#define S_HEADER_BILL_ADDRESS5 peel(pick(nPos, 537, 30), " ")
#define R_HEADER_BILL_ADDRESS5(A) put(nRec, 537, A :30.30)
!-----------------------------------------------------------
! FIELD : AMOUNT1 
#define S_HEADER_AMOUNT1 peel(pick(nPos, 568, 9), " ")
#define R_HEADER_AMOUNT1(A) put(nRec, 568, A :9.9)
!-----------------------------------------------------------
! FIELD : AMOUNT2 
#define S_HEADER_AMOUNT2 peel(pick(nPos, 578, 9), " ")
#define R_HEADER_AMOUNT2(A) put(nRec, 578, A :9.9)
!-----------------------------------------------------------
! FIELD : AMOUNT3 
#define S_HEADER_AMOUNT3 peel(pick(nPos, 588, 9), " ")
#define R_HEADER_AMOUNT3(A) put(nRec, 588, A :9.9)
!-----------------------------------------------------------
! FIELD : PO_NBR 
#define S_HEADER_PO_NBR peel(pick(nPos, 598, 9), " ")
#define R_HEADER_PO_NBR(A) put(nRec, 598, A :9.9)
!-----------------------------------------------------------
! FIELD : PICK_COMPLETE 
#define S_HEADER_PICK_COMPLETE peel(pick(nPos, 608, 1), " ")
#define R_HEADER_PICK_COMPLETE(A) put(nRec, 608, A :1.1)
!-----------------------------------------------------------
! FIELD : ROLLBACK_ALOCATION 
#define S_HEADER_ROLLBACK_ALOCATION peel(pick(nPos, 610, 1), " ")
#define R_HEADER_ROLLBACK_ALOCATION(A) put(nRec, 610, A :1.1)
!-----------------------------------------------------------
! FIELD : CONTAINER_TYPE 
#define S_HEADER_CONTAINER_TYPE peel(pick(nPos, 612, 6), " ")
#define R_HEADER_CONTAINER_TYPE(A) put(nRec, 612, A :6.6)
!-----------------------------------------------------------
! FIELD : MESSAGE 
#define S_HEADER_MESSAGE peel(pick(nPos, 619, 300), " ")
#define R_HEADER_MESSAGE(A) put(nRec, 619, A :300.300)
!-----------------------------------------------------------
! FIELD : ORDER_UDA1 
#define S_HEADER_ORDER_UDA1 peel(pick(nPos, 920, 10), " ")
#define R_HEADER_ORDER_UDA1(A) put(nRec, 920, A :10.10)
!-----------------------------------------------------------
! FIELD : ORDER_UDA2 
#define S_HEADER_ORDER_UDA2 peel(pick(nPos, 931, 10), " ")
#define R_HEADER_ORDER_UDA2(A) put(nRec, 931, A :10.10)
!-----------------------------------------------------------
! FIELD : ORDER_UDA3 
#define S_HEADER_ORDER_UDA3 peel(pick(nPos, 942, 10), " ")
#define R_HEADER_ORDER_UDA3(A) put(nRec, 942, A :10.10)
!-----------------------------------------------------------
! FIELD : ORDER_UDA4 
#define S_HEADER_ORDER_UDA4 peel(pick(nPos, 953, 10), " ")
#define R_HEADER_ORDER_UDA4(A) put(nRec, 953, A :10.10)
!-----------------------------------------------------------
! FIELD : ORDER_UDA5 
#define S_HEADER_ORDER_UDA5 peel(pick(nPos, 964, 10), " ")
#define R_HEADER_ORDER_UDA5(A) put(nRec, 964, A :10.10)
!-----------------------------------------------------------
! FIELD : ORDER_UDA6 
#define S_HEADER_ORDER_UDA6 peel(pick(nPos, 975, 20), " ")
#define R_HEADER_ORDER_UDA6(A) put(nRec, 975, A :20.20)
!-----------------------------------------------------------
! FIELD : ORDER_UDA7 
#define S_HEADER_ORDER_UDA7 peel(pick(nPos, 996, 20), " ")
#define R_HEADER_ORDER_UDA7(A) put(nRec, 996, A :20.20)
!-----------------------------------------------------------
! FIELD : ORDER_UDA8 
#define S_HEADER_ORDER_UDA8 peel(pick(nPos, 1017, 20), " ")
#define R_HEADER_ORDER_UDA8(A) put(nRec, 1017, A :20.20)
!-----------------------------------------------------------
! FIELD : ORDER_UDA9 
#define S_HEADER_ORDER_UDA9 peel(pick(nPos, 1038, 60), " ")
#define R_HEADER_ORDER_UDA9(A) put(nRec, 1038, A :60.60)
!-----------------------------------------------------------
! FIELD : ORDER_UDA10 
#define S_HEADER_ORDER_UDA10 peel(pick(nPos, 1099, 60), " ")
#define R_HEADER_ORDER_UDA10(A) put(nRec, 1099, A :60.60)
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
! FIELD : DISTRO_NBR 
#define S_DETAIL_DISTRO_NBR peel(pick(nPos, 23, 9), " ")
#define R_DETAIL_DISTRO_NBR(A) put(nRec, 23, A :9.9)
!-----------------------------------------------------------
! FIELD : ITEM_ID 
#define S_DETAIL_ITEM_ID peel(pick(nPos, 33, 16), " ")
#define R_DETAIL_ITEM_ID(A) put(nRec, 33, A :16.16)
!-----------------------------------------------------------
! FIELD : REQUESTED_UNIT_QTY 
#define S_DETAIL_REQUESTED_UNIT_QTY peel(pick(nPos, 50, 13), " ")
#define R_DETAIL_REQUESTED_UNIT_QTY(A) put(nRec, 50, A :13.13)
!-----------------------------------------------------------
! FIELD : DEST_ID 
#define S_DETAIL_DEST_ID peel(pick(nPos, 64, 4), " ")
#define R_DETAIL_DEST_ID(A) put(nRec, 64, A :4.4)
!-----------------------------------------------------------
! FIELD : RETAIL_PRICE 
#define S_DETAIL_RETAIL_PRICE peel(pick(nPos, 69, 8), " ")
#define R_DETAIL_RETAIL_PRICE(A) put(nRec, 69, A :8.8)
!-----------------------------------------------------------
! FIELD : PRINT_UPC_FLAG 
#define S_DETAIL_PRINT_UPC_FLAG peel(pick(nPos, 78, 1), " ")
#define R_DETAIL_PRINT_UPC_FLAG(A) put(nRec, 78, A :1.1)
!-----------------------------------------------------------
! FIELD : TICKET_TYPE 
#define S_DETAIL_TICKET_TYPE peel(pick(nPos, 80, 4), " ")
#define R_DETAIL_TICKET_TYPE(A) put(nRec, 80, A :4.4)
!-----------------------------------------------------------
! FIELD : PRIORITY 
#define S_DETAIL_PRIORITY peel(pick(nPos, 85, 4), " ")
#define R_DETAIL_PRIORITY(A) put(nRec, 85, A :4.4)
!-----------------------------------------------------------
! FIELD : EXPEDITE_FLAG 
#define S_DETAIL_EXPEDITE_FLAG peel(pick(nPos, 90, 1), " ")
#define R_DETAIL_EXPEDITE_FLAG(A) put(nRec, 90, A :1.1)
!-----------------------------------------------------------
! FIELD : AMOUNT1 
#define S_DETAIL_AMOUNT1 peel(pick(nPos, 92, 17), " ")
#define R_DETAIL_AMOUNT1(A) put(nRec, 92, A :17.17)
!-----------------------------------------------------------
! FIELD : AMOUNT2 
#define S_DETAIL_AMOUNT2 peel(pick(nPos, 110, 17), " ")
#define R_DETAIL_AMOUNT2(A) put(nRec, 110, A :17.17)
!-----------------------------------------------------------
! FIELD : AMOUNT3 
#define S_DETAIL_AMOUNT3 peel(pick(nPos, 128, 17), " ")
#define R_DETAIL_AMOUNT3(A) put(nRec, 128, A :17.17)
!-----------------------------------------------------------
! FIELD : ITEM_STATUS 
#define S_DETAIL_ITEM_STATUS peel(pick(nPos, 146, 1), " ")
#define R_DETAIL_ITEM_STATUS(A) put(nRec, 146, A :1.1)
!-----------------------------------------------------------
! FIELD : ORDER_DETAIL_UDA1 
#define S_DETAIL_ORDER_DETAIL_UDA1 peel(pick(nPos, 148, 10), " ")
#define R_DETAIL_ORDER_DETAIL_UDA1(A) put(nRec, 148, A :10.10)
!-----------------------------------------------------------
! FIELD : ORDER_DETAIL_UDA2 
#define S_DETAIL_ORDER_DETAIL_UDA2 peel(pick(nPos, 159, 10), " ")
#define R_DETAIL_ORDER_DETAIL_UDA2(A) put(nRec, 159, A :10.10)
!-----------------------------------------------------------
! FIELD : ORDER_DETAIL_UDA3 
#define S_DETAIL_ORDER_DETAIL_UDA3 peel(pick(nPos, 170, 10), " ")
#define R_DETAIL_ORDER_DETAIL_UDA3(A) put(nRec, 170, A :10.10)
!-----------------------------------------------------------
! FIELD : ORDER_DETAIL_UDA4 
#define S_DETAIL_ORDER_DETAIL_UDA4 peel(pick(nPos, 181, 20), " ")
#define R_DETAIL_ORDER_DETAIL_UDA4(A) put(nRec, 181, A :20.20)
!-----------------------------------------------------------
! FIELD : ORDER_DETAIL_UDA5 
#define S_DETAIL_ORDER_DETAIL_UDA5 peel(pick(nPos, 202, 20), " ")
#define R_DETAIL_ORDER_DETAIL_UDA5(A) put(nRec, 202, A :20.20)
!-----------------------------------------------------------

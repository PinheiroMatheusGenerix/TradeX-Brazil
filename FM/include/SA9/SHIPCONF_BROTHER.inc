! File SHIPCONF : 
!===========================================================
! Line : VALUE 
#define S_VALUE split(pick(1,1,EOL), taVALUE, ";")
!===========================================================
! FIELD : RECIPIENT_CNPJ_CPF 
#define S_VALUE_RECIPIENT_CNPJ_CPF taVALUE[1]
#define R_VALUE_RECIPIENT_CNPJ_CPF(A) taVALUE[1] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : ORDER_NUMBER 
#define S_VALUE_ORDER_NUMBER taVALUE[2]
#define R_VALUE_ORDER_NUMBER(A) taVALUE[2] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : GROSS_WEIGHT_DOCUMENT 
#define S_VALUE_GROSS_WEIGHT_DOCUMENT taVALUE[3]
#define R_VALUE_GROSS_WEIGHT_DOCUMENT(A) taVALUE[3] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : QUANTITY_OF_DOCUMENT_VOLUMES 
#define S_VALUE_QUANTITY_OF_DOCUMENT_VOLUMES taVALUE[4]
#define R_VALUE_QUANTITY_OF_DOCUMENT_VOLUMES(A) taVALUE[4] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : PRODUCT_SEQUENCE 
#define S_VALUE_PRODUCT_SEQUENCE taVALUE[5]
#define R_VALUE_PRODUCT_SEQUENCE(A) taVALUE[5] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : PRODUCT_CODE 
#define S_VALUE_PRODUCT_CODE taVALUE[6]
#define R_VALUE_PRODUCT_CODE(A) taVALUE[6] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : PRODUCT_QUANTITY 
#define S_VALUE_PRODUCT_QUANTITY taVALUE[7]
#define R_VALUE_PRODUCT_QUANTITY(A) taVALUE[7] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : FILLER 
#define S_VALUE_FILLER taVALUE[8]
#define R_VALUE_FILLER(A) taVALUE[8] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : PRODUCT_MEASUREMENT_UNIT 
#define S_VALUE_PRODUCT_MEASUREMENT_UNIT taVALUE[9]
#define R_VALUE_PRODUCT_MEASUREMENT_UNIT(A) taVALUE[9] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : NET_WEIGHT_DOCUMENT 
#define S_VALUE_NET_WEIGHT_DOCUMENT taVALUE[10]
#define R_VALUE_NET_WEIGHT_DOCUMENT(A) taVALUE[10] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : PRODUCT_STOCK_TYPE 
#define S_VALUE_PRODUCT_STOCK_TYPE taVALUE[11]
#define R_VALUE_PRODUCT_STOCK_TYPE(A) taVALUE[11] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : PRODUCT_SERIAL_NUMBER 
#define S_VALUE_PRODUCT_SERIAL_NUMBER taVALUE[12]
#define R_VALUE_PRODUCT_SERIAL_NUMBER(A) taVALUE[12] := build(A :0.100)
!-----------------------------------------------------------

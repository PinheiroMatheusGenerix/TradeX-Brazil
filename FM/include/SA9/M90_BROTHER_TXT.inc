! File M90_BROTHER_TXT : 
!===========================================================
! Line : VALUE 
#define S_VALUE split(pick(1,1,EOL), taVALUE, ";")
!===========================================================
! FIELD : PRODUCT_CODE 
#define S_VALUE_PRODUCT_CODE taVALUE[1]
#define R_VALUE_PRODUCT_CODE(A) taVALUE[1] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : CNPJ_ORIGIN 
#define S_VALUE_CNPJ_ORIGIN taVALUE[2]
#define R_VALUE_CNPJ_ORIGIN(A) taVALUE[2] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : CURRENT_DATA 
#define S_VALUE_CURRENT_DATA taVALUE[3]
#define R_VALUE_CURRENT_DATA(A) taVALUE[3] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : CURRENT_TIME 
#define S_VALUE_CURRENT_TIME taVALUE[4]
#define R_VALUE_CURRENT_TIME(A) taVALUE[4] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : DAMAGED_QUANTITY_OF_PRODUCT 
#define S_VALUE_DAMAGED_QUANTITY_OF_PRODUCT taVALUE[5]
#define R_VALUE_DAMAGED_QUANTITY_OF_PRODUCT(A) taVALUE[5] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : PRODUCT_QUANTITY 
#define S_VALUE_PRODUCT_QUANTITY taVALUE[6]
#define R_VALUE_PRODUCT_QUANTITY(A) taVALUE[6] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : PRODUCT_MEASUREMENT_UNIT 
#define S_VALUE_PRODUCT_MEASUREMENT_UNIT taVALUE[7]
#define R_VALUE_PRODUCT_MEASUREMENT_UNIT(A) taVALUE[7] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : STOCK_TYPE 
#define S_VALUE_STOCK_TYPE taVALUE[8]
#define R_VALUE_STOCK_TYPE(A) taVALUE[8] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : SERIAL_NUMBER 
#define S_VALUE_SERIAL_NUMBER taVALUE[9]
#define R_VALUE_SERIAL_NUMBER(A) taVALUE[9] := build(A :0.100)
!-----------------------------------------------------------

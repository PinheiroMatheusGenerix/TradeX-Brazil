! File GNRE_BROTHER_CSV : 
!===========================================================
! Line : VALUE 
#define S_VALUE split(pick(1,1,EOL), taVALUE, ";")
!===========================================================
! FIELD : PEDIDO
#define S_VALUE_PEDIDO taVALUE[1]
#define R_VALUE_PEDIDO(A) taVALUE[1] := build(A :0.300)
!-----------------------------------------------------------
! FIELD : STATUS
#define S_VALUE_STATUS taVALUE[2]
#define R_VALUE_STATUS(A) taVALUE[2] := build(A :0.300)
!-----------------------------------------------------------

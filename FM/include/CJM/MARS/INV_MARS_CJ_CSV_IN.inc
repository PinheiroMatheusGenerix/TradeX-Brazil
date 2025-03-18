! File INV_MARS_CJ_CSV_IN : 
!===========================================================
! Line : REGISTRO 
#define S_REGISTRO split(pick(1,1,EOL), taREGISTRO, ";")
!===========================================================
! FIELD : Referencia 
#define S_REGISTRO_Referencia taREGISTRO[1]
#define R_REGISTRO_Referencia(A) taREGISTRO[1] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : Plano 
#define S_REGISTRO_Plano taREGISTRO[2]
#define R_REGISTRO_Plano(A) taREGISTRO[2] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : Contagem 
#define S_REGISTRO_Contagem taREGISTRO[3]
#define R_REGISTRO_Contagem(A) taREGISTRO[3] := build(A :0.75)
!-----------------------------------------------------------

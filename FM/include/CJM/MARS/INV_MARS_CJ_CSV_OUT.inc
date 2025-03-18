! File INV_MARS_CJ_CSV_OUT : 
!===========================================================
! Line : H 
#define S_H split(pick(1,1,EOL), taH, ";")
!===========================================================
! FIELD : Identificacao 
#define S_H_Identificacao taH[1]
#define R_H_Identificacao(A) taH[1] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : Rua_SAP 
#define S_H_Rua_SAP taH[2]
#define R_H_Rua_SAP(A) taH[2] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : Deposito_SAP 
#define S_H_Deposito_SAP taH[3]
#define R_H_Deposito_SAP(A) taH[3] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : Plano_Inventario 
#define S_H_Plano_Inventario taH[4]
#define R_H_Plano_Inventario(A) taH[4] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : Numero_Contagem 
#define S_H_Numero_Contagem taH[5]
#define R_H_Numero_Contagem(A) taH[5] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : Data_Contagem 
#define S_H_Data_Contagem taH[6]
#define R_H_Data_Contagem(A) taH[6] := build(A :0.75)
!-----------------------------------------------------------
!===========================================================
! Line : I
!===========================================================
! FIELD : Identificacao 
#define S_I_Identificacao taI[1]
#define R_I_Identificacao(A) taI[1] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : Codigo_SKU 
#define S_I_Codigo_SKU taI[2]
#define R_I_Codigo_SKU(A) taI[2] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : Codigo_Lote 
#define S_I_Codigo_Lote taI[3]
#define R_I_Codigo_Lote(A) taI[3] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : Tipo_Estoque 
#define S_I_Tipo_Estoque taI[4]
#define R_I_Tipo_Estoque(A) taI[4] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : Quantidade 
#define S_I_Quantidade taI[5]
#define R_I_Quantidade(A) taI[5] := build(A :0.75)
!-----------------------------------------------------------

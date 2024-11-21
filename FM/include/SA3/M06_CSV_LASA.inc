! File M06_CSV_QUALIDADE : 
!===========================================================
! Line : REGISTRO 
#define S_REGISTRO split(pick(1,1,EOL), taREGISTRO, ";")
!===========================================================
! FIELD : REFERENCIA_RECEPCAO 
#define S_REGISTRO_REFERENCIA_RECEPCAO taREGISTRO[1]
#define R_REGISTRO_REFERENCIA_RECEPCAO(A) taREGISTRO[1] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : EMBARQUE 
#define S_REGISTRO_EMBARQUE taREGISTRO[2]
#define R_REGISTRO_EMBARQUE(A) taREGISTRO[2] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : DATA_RECEPCAO 
#define S_REGISTRO_DATA_RECEPCAO taREGISTRO[3]
#define R_REGISTRO_DATA_RECEPCAO(A) taREGISTRO[3] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : ENDERECO 
#define S_REGISTRO_ENDERECO taREGISTRO[4]
#define R_REGISTRO_ENDERECO(A) taREGISTRO[4] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : ATIVIDADE 
#define S_REGISTRO_ATIVIDADE taREGISTRO[5]
#define R_REGISTRO_ATIVIDADE(A) taREGISTRO[5] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : COD_PRODUTO 
#define S_REGISTRO_COD_PRODUTO taREGISTRO[6]
#define R_REGISTRO_COD_PRODUTO(A) taREGISTRO[6] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : DESCRICAO 
#define S_REGISTRO_DESCRICAO taREGISTRO[7]
#define R_REGISTRO_DESCRICAO(A) taREGISTRO[7] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : CODIGO_PALETE 
#define S_REGISTRO_CODIGO_PALETE taREGISTRO[8]
#define R_REGISTRO_CODIGO_PALETE(A) taREGISTRO[8] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : LOTE 
#define S_REGISTRO_LOTE taREGISTRO[9]
#define R_REGISTRO_LOTE(A) taREGISTRO[9] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : QUANTIDADE 
#define S_REGISTRO_QUANTIDADE taREGISTRO[10]
#define R_REGISTRO_QUANTIDADE(A) taREGISTRO[10] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : MOTIVO_IMOBILIZACAO 
#define S_REGISTRO_MOTIVO_IMOBILIZACAO taREGISTRO[11]
#define R_REGISTRO_MOTIVO_IMOBILIZACAO(A) taREGISTRO[11] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : DATA_VALIDADE 
#define S_REGISTRO_DATA_VALIDADE taREGISTRO[12]
#define R_REGISTRO_DATA_VALIDADE(A) taREGISTRO[12] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : QUALIDADE 
#define S_REGISTRO_QUALIDADE taREGISTRO[13]
#define R_REGISTRO_QUALIDADE(A) taREGISTRO[13] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : PEDIDO_TOPCAU 
#define S_REGISTRO_PEDIDO_TOPCAU taREGISTRO[14]
#define R_REGISTRO_PEDIDO_TOPCAU(A) taREGISTRO[14] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : SKU_LASA_DE_PARA 
#define S_REGISTRO_SKU_LASA_DE_PARA taREGISTRO[15]
#define R_REGISTRO_SKU_LASA_DE_PARA(A) taREGISTRO[15] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : QTDE_TOTAL_PEDIDO 
#define S_REGISTRO_QTDE_TOTAL_PEDIDO taREGISTRO[16]
#define R_REGISTRO_QTDE_TOTAL_PEDIDO(A) taREGISTRO[16] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : TIHI_PLT_LASA 
#define S_REGISTRO_TIHI_PLT_LASA taREGISTRO[17]
#define R_REGISTRO_TIHI_PLT_LASA(A) taREGISTRO[17] := build(A :0.75)
!-----------------------------------------------------------

! File M06_CSV_QUALIDADE : 
!===========================================================
! Line : REGISTRO 
#define S_REGISTRO split(pick(1,1,EOL), taREGISTRO, ";")
!===========================================================
! FIELD : ReferenciaRecepcao 
#define S_REGISTRO_ReferenciaRecepcao taREGISTRO[1]
#define R_REGISTRO_ReferenciaRecepcao(A) taREGISTRO[1] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : Embarque 
#define S_REGISTRO_Embarque taREGISTRO[2]
#define R_REGISTRO_Embarque(A) taREGISTRO[2] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : DataRecepcao 
#define S_REGISTRO_DataRecepcao taREGISTRO[3]
#define R_REGISTRO_DataRecepcao(A) taREGISTRO[3] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : Endereco 
#define S_REGISTRO_Endereco taREGISTRO[4]
#define R_REGISTRO_Endereco(A) taREGISTRO[4] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : Atividade 
#define S_REGISTRO_Atividade taREGISTRO[5]
#define R_REGISTRO_Atividade(A) taREGISTRO[5] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : CodProduto 
#define S_REGISTRO_CodProduto taREGISTRO[6]
#define R_REGISTRO_CodProduto(A) taREGISTRO[6] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : Descricao 
#define S_REGISTRO_Descricao taREGISTRO[7]
#define R_REGISTRO_Descricao(A) taREGISTRO[7] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : CodPalete 
#define S_REGISTRO_CodPalete taREGISTRO[8]
#define R_REGISTRO_CodPalete(A) taREGISTRO[8] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : Lote 
#define S_REGISTRO_Lote taREGISTRO[9]
#define R_REGISTRO_Lote(A) taREGISTRO[9] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : Quantidade 
#define S_REGISTRO_Quantidade taREGISTRO[10]
#define R_REGISTRO_Quantidade(A) taREGISTRO[10] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : MotImobilizacao 
#define S_REGISTRO_MotImobilizacao taREGISTRO[11]
#define R_REGISTRO_MotImobilizacao(A) taREGISTRO[11] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : DataValidade 
#define S_REGISTRO_DataValidade taREGISTRO[12]
#define R_REGISTRO_DataValidade(A) taREGISTRO[12] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : Qualidade 
#define S_REGISTRO_Qualidade taREGISTRO[13]
#define R_REGISTRO_Qualidade(A) taREGISTRO[13] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : DO 
#define S_REGISTRO_DO taREGISTRO[14]
#define R_REGISTRO_DO(A) taREGISTRO[14] := build(A :0.75)
!-----------------------------------------------------------
! FIELD : Transporte 
#define S_REGISTRO_Transporte taREGISTRO[15]
#define R_REGISTRO_Transporte(A) taREGISTRO[15] := build(A :0.75)
!-----------------------------------------------------------

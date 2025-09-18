! File SERIEHARMAN : 
!===========================================================
! Line : SERIE 
#define S_SERIE split(pick(1,1,EOL), taSERIE, ";")
!===========================================================
! FIELD : NotaFiscal 
#define S_SERIE_NotaFiscal taSERIE[1]
#define R_SERIE_NotaFiscal(A) taSERIE[1] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : SerieNF 
#define S_SERIE_SerieNF taSERIE[2]
#define R_SERIE_SerieNF(A) taSERIE[2] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : Produto 
#define S_SERIE_Produto taSERIE[3]
#define R_SERIE_Produto(A) taSERIE[3] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : DescricaoProduto 
#define S_SERIE_DescricaoProduto taSERIE[4]
#define R_SERIE_DescricaoProduto(A) taSERIE[4] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : NumeroSerie 
#define S_SERIE_NumeroSerie taSERIE[5]
#define R_SERIE_NumeroSerie(A) taSERIE[5] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : DataEmissao 
#define S_SERIE_DataEmissao taSERIE[6]
#define R_SERIE_DataEmissao(A) taSERIE[6] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : DataExpedicao 
#define S_SERIE_DataExpedicao taSERIE[7]
#define R_SERIE_DataExpedicao(A) taSERIE[7] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : ChaveNF 
#define S_SERIE_ChaveNF taSERIE[8]
#define R_SERIE_ChaveNF(A) taSERIE[8] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : Garantia 
#define S_SERIE_Garantia taSERIE[9]
#define R_SERIE_Garantia(A) taSERIE[9] := build(A :0.50)
!-----------------------------------------------------------

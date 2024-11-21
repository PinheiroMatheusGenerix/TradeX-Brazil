! File SERIEHARMAN : 
!===========================================================
! Line : SERIE 
#define S_SERIE split(pick(1,1,EOL), taSERIE, ";")
!===========================================================
! FIELD : Produto 
#define S_SERIE_Produto taSERIE[1]
#define R_SERIE_Produto(A) taSERIE[1] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : NumeroSerie 
#define S_SERIE_NumeroSerie taSERIE[2]
#define R_SERIE_NumeroSerie(A) taSERIE[2] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : NotaFiscal 
#define S_SERIE_NotaFiscal taSERIE[3]
#define R_SERIE_NotaFiscal(A) taSERIE[3] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : DataEmissao 
#define S_SERIE_DataEmissao taSERIE[4]
#define R_SERIE_DataEmissao(A) taSERIE[4] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : DatExpedicao 
#define S_SERIE_DatExpedicao taSERIE[5]
#define R_SERIE_DatExpedicao(A) taSERIE[5] := build(A :0.50)
!-----------------------------------------------------------

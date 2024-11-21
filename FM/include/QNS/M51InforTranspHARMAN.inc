! File M51InforTranspHARMAN : 
!===========================================================
! Line : Header 
#define S_Header split(pick(1,1,EOL), taHeader, ";")
!===========================================================
! FIELD : Titulo 
#define S_Header_Titulo taHeader[1]
#define R_Header_Titulo(A) taHeader[1] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : Cliente 
#define S_Header_Cliente taHeader[2]
#define R_Header_Cliente(A) taHeader[2] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : DataInterface 
#define S_Header_DataInterface taHeader[3]
#define R_Header_DataInterface(A) taHeader[3] := build(A :0.50)
!-----------------------------------------------------------
!===========================================================
! Line : Detalhe 
#define S_Detalhe split(pick(1,1,EOL), taDetalhe, ";")
!===========================================================
! FIELD : Serie 
#define S_Detalhe_Serie taDetalhe[1]
#define R_Detalhe_Serie(A) taDetalhe[1] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : NotaFiscal 
#define S_Detalhe_NotaFiscal taDetalhe[2]
#define R_Detalhe_NotaFiscal(A) taDetalhe[2] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : DataEmissao 
#define S_Detalhe_DataEmissao taDetalhe[3]
#define R_Detalhe_DataEmissao(A) taDetalhe[3] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : Transportadora 
#define S_Detalhe_Transportadora taDetalhe[4]
#define R_Detalhe_Transportadora(A) taDetalhe[4] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Nome 
#define S_Detalhe_Nome taDetalhe[5]
#define R_Detalhe_Nome(A) taDetalhe[5] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : CNPJ 
#define S_Detalhe_CNPJ taDetalhe[6]
#define R_Detalhe_CNPJ(A) taDetalhe[6] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : ValorNotaFiscal 
#define S_Detalhe_ValorNotaFiscal taDetalhe[7]
#define R_Detalhe_ValorNotaFiscal(A) taDetalhe[7] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : EstadoDestino 
#define S_Detalhe_EstadoDestino taDetalhe[8]
#define R_Detalhe_EstadoDestino(A) taDetalhe[8] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Cidade 
#define S_Detalhe_Cidade taDetalhe[9]
#define R_Detalhe_Cidade(A) taDetalhe[9] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : PesoBruto 
#define S_Detalhe_PesoBruto taDetalhe[10]
#define R_Detalhe_PesoBruto(A) taDetalhe[10] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : QtdEmbalagem 
#define S_Detalhe_QtdEmbalagem taDetalhe[11]
#define R_Detalhe_QtdEmbalagem(A) taDetalhe[11] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : VolumeM3 
#define S_Detalhe_VolumeM3 taDetalhe[12]
#define R_Detalhe_VolumeM3(A) taDetalhe[12] := build(A :0.20)
!-----------------------------------------------------------

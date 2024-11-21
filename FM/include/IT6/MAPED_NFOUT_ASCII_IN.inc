! File MAPED_NFOUT_ASCII_IN : 
!===========================================================
! Line : Cabecalho 
!===========================================================
! FIELD : TipoRegisto 
#define S_Cabecalho_TipoRegisto peel(pick(nPos, 1, 2), " ")
#define R_Cabecalho_TipoRegisto(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : CodigoDepositante 
#define S_Cabecalho_CodigoDepositante peel(pick(nPos, 3, 15), " ")
#define R_Cabecalho_CodigoDepositante(A) put(nRec, 3, A :15.15)
!-----------------------------------------------------------
! FIELD : CNPJCliente 
#define S_Cabecalho_CNPJCliente peel(pick(nPos, 18, 15), " ")
#define R_Cabecalho_CNPJCliente(A) put(nRec, 18, A :15.15)
!-----------------------------------------------------------
! FIELD : NomeForncedor 
#define S_Cabecalho_NomeForncedor peel(pick(nPos, 33, 40), " ")
#define R_Cabecalho_NomeForncedor(A) put(nRec, 33, A :40.40)
!-----------------------------------------------------------
! FIELD : EnderecoFornecedor 
#define S_Cabecalho_EnderecoFornecedor peel(pick(nPos, 73, 40), " ")
#define R_Cabecalho_EnderecoFornecedor(A) put(nRec, 73, A :40.40)
!-----------------------------------------------------------
! FIELD : BairroFornecedor 
#define S_Cabecalho_BairroFornecedor peel(pick(nPos, 113, 25), " ")
#define R_Cabecalho_BairroFornecedor(A) put(nRec, 113, A :25.25)
!-----------------------------------------------------------
! FIELD : MunicipioFornecedor 
#define S_Cabecalho_MunicipioFornecedor peel(pick(nPos, 138, 25), " ")
#define R_Cabecalho_MunicipioFornecedor(A) put(nRec, 138, A :25.25)
!-----------------------------------------------------------
! FIELD : EstadoFornecedor 
#define S_Cabecalho_EstadoFornecedor peel(pick(nPos, 163, 2), " ")
#define R_Cabecalho_EstadoFornecedor(A) put(nRec, 163, A :2.2)
!-----------------------------------------------------------
! FIELD : CEPForncedor 
#define S_Cabecalho_CEPForncedor peel(pick(nPos, 165, 9), " ")
#define R_Cabecalho_CEPForncedor(A) put(nRec, 165, A :9.9)
!-----------------------------------------------------------
! FIELD : InsEstadualForncedor 
#define S_Cabecalho_InsEstadualForncedor peel(pick(nPos, 174, 15), " ")
#define R_Cabecalho_InsEstadualForncedor(A) put(nRec, 174, A :15.15)
!-----------------------------------------------------------
! FIELD : TipoDocumento 
#define S_Cabecalho_TipoDocumento peel(pick(nPos, 189, 5), " ")
#define R_Cabecalho_TipoDocumento(A) put(nRec, 189, A :5.5)
!-----------------------------------------------------------
! FIELD : SerieDocumento 
#define S_Cabecalho_SerieDocumento peel(pick(nPos, 194, 5), " ")
#define R_Cabecalho_SerieDocumento(A) put(nRec, 194, A :5.5)
!-----------------------------------------------------------
! FIELD : NumeroDocumento 
#define S_Cabecalho_NumeroDocumento peel(pick(nPos, 199, 10), " ")
#define R_Cabecalho_NumeroDocumento(A) put(nRec, 199, A :10.10)
!-----------------------------------------------------------
! FIELD : DataEmissao 
#define S_Cabecalho_DataEmissao peel(pick(nPos, 209, 8), " ")
#define R_Cabecalho_DataEmissao(A) put(nRec, 209, A :8.8)
!-----------------------------------------------------------
! FIELD : ValorTotal 
#define S_Cabecalho_ValorTotal peel(pick(nPos, 217, 20), " ")
#define R_Cabecalho_ValorTotal(A) put(nRec, 217, A :20.20)
!-----------------------------------------------------------
! FIELD : PesoBrutoTotal 
#define S_Cabecalho_PesoBrutoTotal peel(pick(nPos, 237, 20), " ")
#define R_Cabecalho_PesoBrutoTotal(A) put(nRec, 237, A :20.20)
!-----------------------------------------------------------
! FIELD : PesoLiquidoTotal 
#define S_Cabecalho_PesoLiquidoTotal peel(pick(nPos, 257, 20), " ")
#define R_Cabecalho_PesoLiquidoTotal(A) put(nRec, 257, A :20.20)
!-----------------------------------------------------------
! FIELD : QTDEVolume 
#define S_Cabecalho_QTDEVolume peel(pick(nPos, 277, 20), " ")
#define R_Cabecalho_QTDEVolume(A) put(nRec, 277, A :20.20)
!-----------------------------------------------------------
! FIELD : SeriePedido 
#define S_Cabecalho_SeriePedido peel(pick(nPos, 297, 5), " ")
#define R_Cabecalho_SeriePedido(A) put(nRec, 297, A :5.5)
!-----------------------------------------------------------
! FIELD : NumeroPedido 
#define S_Cabecalho_NumeroPedido peel(pick(nPos, 302, 10), " ")
#define R_Cabecalho_NumeroPedido(A) put(nRec, 302, A :10.10)
!-----------------------------------------------------------
! FIELD : DataHoraColeta 
#define S_Cabecalho_DataHoraColeta peel(pick(nPos, 312, 8), " ")
#define R_Cabecalho_DataHoraColeta(A) put(nRec, 312, A :8.8)
!-----------------------------------------------------------
! FIELD : Placa 
#define S_Cabecalho_Placa peel(pick(nPos, 320, 10), " ")
#define R_Cabecalho_Placa(A) put(nRec, 320, A :10.10)
!-----------------------------------------------------------
! FIELD : Transportadora 
#define S_Cabecalho_Transportadora peel(pick(nPos, 336, 14), " ")
#define R_Cabecalho_Transportadora(A) put(nRec, 336, A :14.14)
!-----------------------------------------------------------

!===========================================================
! Line : Detalhe 
!===========================================================
! FIELD : TipoRegisto 
#define S_Detalhe_TipoRegisto peel(pick(nPos, 1, 2), " ")
#define R_Detalhe_TipoRegisto(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : TipoDocumento 
#define S_Detalhe_TipoDocumento peel(pick(nPos, 3, 5), " ")
#define R_Detalhe_TipoDocumento(A) put(nRec, 3, A :5.5)
!-----------------------------------------------------------
! FIELD : SerieDocumento 
#define S_Detalhe_SerieDocumento peel(pick(nPos, 8, 5), " ")
#define R_Detalhe_SerieDocumento(A) put(nRec, 8, A :5.5)
!-----------------------------------------------------------
! FIELD : NumeroDocumento 
#define S_Detalhe_NumeroDocumento peel(pick(nPos, 13, 10), " ")
#define R_Detalhe_NumeroDocumento(A) put(nRec, 13, A :10.10)
!-----------------------------------------------------------
! FIELD : CodigoDepositante 
#define S_Detalhe_CodigoDepositante peel(pick(nPos, 23, 15), " ")
#define R_Detalhe_CodigoDepositante(A) put(nRec, 23, A :15.15)
!-----------------------------------------------------------
! FIELD : SequenciaItem 
#define S_Detalhe_SequenciaItem peel(pick(nPos, 38, 3), " ")
#define R_Detalhe_SequenciaItem(A) put(nRec, 38, A :3.3)
!-----------------------------------------------------------
! FIELD : CodigoProduto 
#define S_Detalhe_CodigoProduto peel(pick(nPos, 41, 25), " ")
#define R_Detalhe_CodigoProduto(A) put(nRec, 41, A :25.25)
!-----------------------------------------------------------
! FIELD : QTDEProduto 
#define S_Detalhe_QTDEProduto peel(pick(nPos, 66, 20), " ")
#define R_Detalhe_QTDEProduto(A) put(nRec, 66, A :20.20)
!-----------------------------------------------------------
! FIELD : TipoUNDAcond 
#define S_Detalhe_TipoUNDAcond peel(pick(nPos, 86, 5), " ")
#define R_Detalhe_TipoUNDAcond(A) put(nRec, 86, A :5.5)
!-----------------------------------------------------------
! FIELD : ValorUnitProduto 
#define S_Detalhe_ValorUnitProduto peel(pick(nPos, 91, 20), " ")
#define R_Detalhe_ValorUnitProduto(A) put(nRec, 91, A :20.20)
!-----------------------------------------------------------
! FIELD : PesoBrutoUnit 
#define S_Detalhe_PesoBrutoUnit peel(pick(nPos, 111, 20), " ")
#define R_Detalhe_PesoBrutoUnit(A) put(nRec, 111, A :20.20)
!-----------------------------------------------------------
! FIELD : PesoLiqUnit 
#define S_Detalhe_PesoLiqUnit peel(pick(nPos, 131, 20), " ")
#define R_Detalhe_PesoLiqUnit(A) put(nRec, 131, A :20.20)
!-----------------------------------------------------------

! File PedidoMaped : 
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
! FIELD : NomeCliente 
#define S_Cabecalho_NomeCliente peel(pick(nPos, 33, 40), " ")
#define R_Cabecalho_NomeCliente(A) put(nRec, 33, A :40.40)
!-----------------------------------------------------------
! FIELD : EnderecoCliente 
#define S_Cabecalho_EnderecoCliente peel(pick(nPos, 73, 40), " ")
#define R_Cabecalho_EnderecoCliente(A) put(nRec, 73, A :40.40)
!-----------------------------------------------------------
! FIELD : BairroCliente 
#define S_Cabecalho_BairroCliente peel(pick(nPos, 113, 25), " ")
#define R_Cabecalho_BairroCliente(A) put(nRec, 113, A :25.25)
!-----------------------------------------------------------
! FIELD : MunicipioCliente 
#define S_Cabecalho_MunicipioCliente peel(pick(nPos, 138, 25), " ")
#define R_Cabecalho_MunicipioCliente(A) put(nRec, 138, A :25.25)
!-----------------------------------------------------------
! FIELD : EstadoCliente 
#define S_Cabecalho_EstadoCliente peel(pick(nPos, 163, 2), " ")
#define R_Cabecalho_EstadoCliente(A) put(nRec, 163, A :2.2)
!-----------------------------------------------------------
! FIELD : CEPCliente 
#define S_Cabecalho_CEPCliente peel(pick(nPos, 165, 9), " ")
#define R_Cabecalho_CEPCliente(A) put(nRec, 165, A :9.9)
!-----------------------------------------------------------
! FIELD : InscricaoEstadualCliente 
#define S_Cabecalho_InscricaoEstadualCliente peel(pick(nPos, 174, 15), " ")
#define R_Cabecalho_InscricaoEstadualCliente(A) put(nRec, 174, A :15.15)
!-----------------------------------------------------------
! FIELD : TipoDocumento 
#define S_Cabecalho_TipoDocumento peel(pick(nPos, 189, 5), " ")
#define R_Cabecalho_TipoDocumento(A) put(nRec, 189, A :5.5)
!-----------------------------------------------------------
! FIELD : serieDocumento 
#define S_Cabecalho_serieDocumento peel(pick(nPos, 194, 5), " ")
#define R_Cabecalho_serieDocumento(A) put(nRec, 194, A :5.5)
!-----------------------------------------------------------
! FIELD : NumeroDocumento 
#define S_Cabecalho_NumeroDocumento peel(pick(nPos, 199, 10), " ")
#define R_Cabecalho_NumeroDocumento(A) put(nRec, 199, A :10.10)
!-----------------------------------------------------------
! FIELD : DataEmissao 
#define S_Cabecalho_DataEmissao peel(pick(nPos, 209, 8), " ")
#define R_Cabecalho_DataEmissao(A) put(nRec, 209, A :8.8)
!-----------------------------------------------------------
! FIELD : CNPJTransp 
#define S_Cabecalho_CNPJTransp peel(pick(nPos, 217, 15), " ")
#define R_Cabecalho_CNPJTransp(A) put(nRec, 217, A :15.15)
!-----------------------------------------------------------
! FIELD : PesoTotalBruto 
#define S_Cabecalho_PesoTotalBruto peel(pick(nPos, 232, 20), " ")
#define R_Cabecalho_PesoTotalBruto(A) put(nRec, 232, A :20.20)
!-----------------------------------------------------------
! FIELD : PesoTotalLiquido 
#define S_Cabecalho_PesoTotalLiquido peel(pick(nPos, 252, 20), " ")
#define R_Cabecalho_PesoTotalLiquido(A) put(nRec, 252, A :20.20)
!-----------------------------------------------------------
! FIELD : QTDEVolume 
#define S_Cabecalho_QTDEVolume peel(pick(nPos, 272, 20), " ")
#define R_Cabecalho_QTDEVolume(A) put(nRec, 272, A :20.20)
!-----------------------------------------------------------
!===========================================================
! Line : Detalhe 
!===========================================================
! FIELD : TipoRegisto04 
#define S_Detalhe_TipoRegisto04 peel(pick(nPos, 1, 2), " ")
#define R_Detalhe_TipoRegisto04(A) put(nRec, 1, A :2.2)
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
! FIELD : CodigoDeposiutante 
#define S_Detalhe_CodigoDeposiutante peel(pick(nPos, 23, 15), " ")
#define R_Detalhe_CodigoDeposiutante(A) put(nRec, 23, A :15.15)
!-----------------------------------------------------------
! FIELD : CodigoProduto 
#define S_Detalhe_CodigoProduto peel(pick(nPos, 38, 25), " ")
#define R_Detalhe_CodigoProduto(A) put(nRec, 38, A :25.25)
!-----------------------------------------------------------
! FIELD : QTDEDoProdutoNoPedido 
#define S_Detalhe_QTDEDoProdutoNoPedido peel(pick(nPos, 63, 20), " ")
#define R_Detalhe_QTDEDoProdutoNoPedido(A) put(nRec, 63, A :20.20)
!-----------------------------------------------------------
! FIELD : UOM 
#define S_Detalhe_UOM peel(pick(nPos, 83, 5), " ")
#define R_Detalhe_UOM(A) put(nRec, 83, A :5.5)
!-----------------------------------------------------------
! FIELD : ValorUnitario 
#define S_Detalhe_ValorUnitario peel(pick(nPos, 88, 20), " ")
#define R_Detalhe_ValorUnitario(A) put(nRec, 88, A :20.20)
!-----------------------------------------------------------
! FIELD : ClasseProduto 
#define S_Detalhe_ClasseProduto peel(pick(nPos, 108, 5), " ")
#define R_Detalhe_ClasseProduto(A) put(nRec, 108, A :5.5)
!-----------------------------------------------------------
! FIELD : SeqItemNoPedido 
#define S_Detalhe_SeqItemNoPedido peel(pick(nPos, 113, 5), " ")
#define R_Detalhe_SeqItemNoPedido(A) put(nRec, 113, A :5.5)
!-----------------------------------------------------------
! FIELD : PesoBrutoUnit 
#define S_Detalhe_PesoBrutoUnit peel(pick(nPos, 118, 20), " ")
#define R_Detalhe_PesoBrutoUnit(A) put(nRec, 118, A :20.20)
!-----------------------------------------------------------
! FIELD : PesoLiqUnit 
#define S_Detalhe_PesoLiqUnit peel(pick(nPos, 138, 20), " ")
#define R_Detalhe_PesoLiqUnit(A) put(nRec, 138, A :20.20)
!-----------------------------------------------------------

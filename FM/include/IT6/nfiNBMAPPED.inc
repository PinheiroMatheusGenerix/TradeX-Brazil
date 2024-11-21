! File nfiNB : 
!===========================================================
! Line : Header 
!===========================================================
! FIELD : TipoRegistoHeader 
#define S_Header_TipoRegistoHeader peel(pick(nPos, 1, 2), " ")
#define R_Header_TipoRegistoHeader(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : CodigoDepositante 
#define S_Header_CodigoDepositante peel(pick(nPos, 3, 15), " ")
#define R_Header_CodigoDepositante(A) put(nRec, 3, A :15.15)
!-----------------------------------------------------------
! FIELD : CNPJCliente 
#define S_Header_CNPJCliente peel(pick(nPos, 18, 15), " ")
#define R_Header_CNPJCliente(A) put(nRec, 18, A :15.15)
!-----------------------------------------------------------
! FIELD : NomeCliente 
#define S_Header_NomeCliente peel(pick(nPos, 33, 40), " ")
#define R_Header_NomeCliente(A) put(nRec, 33, A :40.40)
!-----------------------------------------------------------
! FIELD : EnderecoCliente 
#define S_Header_EnderecoCliente peel(pick(nPos, 73, 40), " ")
#define R_Header_EnderecoCliente(A) put(nRec, 73, A :40.40)
!-----------------------------------------------------------
! FIELD : BairroCliente 
#define S_Header_BairroCliente peel(pick(nPos, 113, 25), " ")
#define R_Header_BairroCliente(A) put(nRec, 113, A :25.25)
!-----------------------------------------------------------
! FIELD : MunicipioCliente 
#define S_Header_MunicipioCliente peel(pick(nPos, 138, 25), " ")
#define R_Header_MunicipioCliente(A) put(nRec, 138, A :25.25)
!-----------------------------------------------------------
! FIELD : EStadoCliente 
#define S_Header_EStadoCliente peel(pick(nPos, 163, 2), " ")
#define R_Header_EStadoCliente(A) put(nRec, 163, A :2.2)
!-----------------------------------------------------------
! FIELD : CEPCliente 
#define S_Header_CEPCliente peel(pick(nPos, 165, 9), " ")
#define R_Header_CEPCliente(A) put(nRec, 165, A :9.9)
!-----------------------------------------------------------
! FIELD : InsEstadualCliente 
#define S_Header_InsEstadualCliente peel(pick(nPos, 174, 15), " ")
#define R_Header_InsEstadualCliente(A) put(nRec, 174, A :15.15)
!-----------------------------------------------------------
! FIELD : TipoDocumento 
#define S_Header_TipoDocumento peel(pick(nPos, 189, 5), " ")
#define R_Header_TipoDocumento(A) put(nRec, 189, A :5.5)
!-----------------------------------------------------------
! FIELD : SerieDocumento 
#define S_Header_SerieDocumento peel(pick(nPos, 194, 5), " ")
#define R_Header_SerieDocumento(A) put(nRec, 194, A :5.5)
!-----------------------------------------------------------
! FIELD : NumeroDocumento 
#define S_Header_NumeroDocumento peel(pick(nPos, 199, 10), " ")
#define R_Header_NumeroDocumento(A) put(nRec, 199, A :10.10)
!-----------------------------------------------------------
! FIELD : DataEmissao 
#define S_Header_DataEmissao peel(pick(nPos, 209, 8), " ")
#define R_Header_DataEmissao(A) put(nRec, 209, A :8.8)
!-----------------------------------------------------------
! FIELD : ValorTotal 
#define S_Header_ValorTotal peel(pick(nPos, 217, 20), " ")
#define R_Header_ValorTotal(A) put(nRec, 217, A :20.20)
!-----------------------------------------------------------
! FIELD : CNPJTransportadora 
#define S_Header_CNPJTransportadora peel(pick(nPos, 237, 15), " ")
#define R_Header_CNPJTransportadora(A) put(nRec, 237, A :15.15)
!-----------------------------------------------------------
! FIELD : PesoBrutoTiotal 
#define S_Header_PesoBrutoTiotal peel(pick(nPos, 252, 20), " ")
#define R_Header_PesoBrutoTiotal(A) put(nRec, 252, A :20.20)
!-----------------------------------------------------------
! FIELD : PesoLiquidoTotal 
#define S_Header_PesoLiquidoTotal peel(pick(nPos, 272, 20), " ")
#define R_Header_PesoLiquidoTotal(A) put(nRec, 272, A :20.20)
!-----------------------------------------------------------
! FIELD : QTDEVolume 
#define S_Header_QTDEVolume peel(pick(nPos, 292, 20), " ")
#define R_Header_QTDEVolume(A) put(nRec, 292, A :20.20)
!-----------------------------------------------------------
!===========================================================
! Line : Detail 
!===========================================================
! FIELD : TipoRegisto 
#define S_Detail_TipoRegisto peel(pick(nPos, 1, 2), " ")
#define R_Detail_TipoRegisto(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : CodigoEmpresa 
#define S_Detail_CodigoEmpresa peel(pick(nPos, 3, 15), " ")
#define R_Detail_CodigoEmpresa(A) put(nRec, 3, A :15.15)
!-----------------------------------------------------------
! FIELD : TipoDocumento 
#define S_Detail_TipoDocumento peel(pick(nPos, 18, 5), " ")
#define R_Detail_TipoDocumento(A) put(nRec, 18, A :5.5)
!-----------------------------------------------------------
! FIELD : SerieDocumento 
#define S_Detail_SerieDocumento peel(pick(nPos, 23, 5), " ")
#define R_Detail_SerieDocumento(A) put(nRec, 23, A :5.5)
!-----------------------------------------------------------
! FIELD : NumeroDocumento 
#define S_Detail_NumeroDocumento peel(pick(nPos, 28, 10), " ")
#define R_Detail_NumeroDocumento(A) put(nRec, 28, A :10.10)
!-----------------------------------------------------------
! FIELD : CodigoDepositante 
#define S_Detail_CodigoDepositante peel(pick(nPos, 38, 15), " ")
#define R_Detail_CodigoDepositante(A) put(nRec, 38, A :15.15)
!-----------------------------------------------------------
! FIELD : CodigoProduto 
#define S_Detail_CodigoProduto peel(pick(nPos, 53, 25), " ")
#define R_Detail_CodigoProduto(A) put(nRec, 53, A :25.25)
!-----------------------------------------------------------
! FIELD : QTDEProdutoNoDOC 
#define S_Detail_QTDEProdutoNoDOC peel(pick(nPos, 78, 20), " ")
#define R_Detail_QTDEProdutoNoDOC(A) put(nRec, 78, A :20.20)
!-----------------------------------------------------------
! FIELD : TipoUnidadeAcond 
#define S_Detail_TipoUnidadeAcond peel(pick(nPos, 98, 5), " ")
#define R_Detail_TipoUnidadeAcond(A) put(nRec, 98, A :5.5)
!-----------------------------------------------------------
! FIELD : ValorUnitProduto 
#define S_Detail_ValorUnitProduto peel(pick(nPos, 103, 20), " ")
#define R_Detail_ValorUnitProduto(A) put(nRec, 103, A :20.20)
!-----------------------------------------------------------
! FIELD : ClassePrtoduto 
#define S_Detail_ClassePrtoduto peel(pick(nPos, 123, 5), " ")
#define R_Detail_ClassePrtoduto(A) put(nRec, 123, A :5.5)
!-----------------------------------------------------------
! FIELD : SeqItemDocumento 
#define S_Detail_SeqItemDocumento peel(pick(nPos, 128, 3), " ")
#define R_Detail_SeqItemDocumento(A) put(nRec, 128, A :3.3)
!-----------------------------------------------------------
! FIELD : PesoBrutoUnit 
#define S_Detail_PesoBrutoUnit peel(pick(nPos, 131, 20), " ")
#define R_Detail_PesoBrutoUnit(A) put(nRec, 131, A :20.20)
!-----------------------------------------------------------
! FIELD : PesoLiqUnit 
#define S_Detail_PesoLiqUnit peel(pick(nPos, 151, 20), " ")
#define R_Detail_PesoLiqUnit(A) put(nRec, 151, A :20.20)
!-----------------------------------------------------------

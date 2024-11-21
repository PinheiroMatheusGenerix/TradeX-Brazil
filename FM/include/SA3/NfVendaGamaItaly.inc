! File NfVenda : 
!===========================================================
! Line : IDArquivo 
!===========================================================
! FIELD : IDArquivo 
#define S_IDArquivo_IDArquivo peel(pick(nPos, 1, 2), " ")
#define R_IDArquivo_IDArquivo(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
!===========================================================
! Line : CABECALHOVenda 
!===========================================================
! FIELD : IdCabecalho 
#define S_CABECALHOVenda_IdCabecalho peel(pick(nPos, 1, 1), " ")
#define R_CABECALHOVenda_IdCabecalho(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : Nf 
#define S_CABECALHOVenda_Nf peel(pick(nPos, 2, 9), " ")
#define R_CABECALHOVenda_Nf(A) put(nRec, 2, A :9.9)
!-----------------------------------------------------------
! FIELD : BRANCO 
#define S_CABECALHOVenda_BRANCO peel(pick(nPos, 11, 1), " ")
#define R_CABECALHOVenda_BRANCO(A) put(nRec, 11, A :1.1)
!-----------------------------------------------------------
! FIELD : SolicitanteCNPJ 
#define S_CABECALHOVenda_SolicitanteCNPJ peel(pick(nPos, 12, 14), " ")
#define R_CABECALHOVenda_SolicitanteCNPJ(A) put(nRec, 12, A :14.14)
!-----------------------------------------------------------
! FIELD : BRANCO2 
#define S_CABECALHOVenda_BRANCO2 peel(pick(nPos, 26, 1), " ")
#define R_CABECALHOVenda_BRANCO2(A) put(nRec, 26, A :1.1)
!-----------------------------------------------------------
! FIELD : Nome 
#define S_CABECALHOVenda_Nome peel(pick(nPos, 27, 35), " ")
#define R_CABECALHOVenda_Nome(A) put(nRec, 27, A :35.35)
!-----------------------------------------------------------
! FIELD : Endereco 
#define S_CABECALHOVenda_Endereco peel(pick(nPos, 62, 30), " ")
#define R_CABECALHOVenda_Endereco(A) put(nRec, 62, A :30.30)
!-----------------------------------------------------------
! FIELD : Numero 
#define S_CABECALHOVenda_Numero peel(pick(nPos, 92, 9), " ")
#define R_CABECALHOVenda_Numero(A) put(nRec, 92, A :9.9)
!-----------------------------------------------------------
! FIELD : Complemento 
#define S_CABECALHOVenda_Complemento peel(pick(nPos, 101, 40), " ")
#define R_CABECALHOVenda_Complemento(A) put(nRec, 101, A :40.40)
!-----------------------------------------------------------
! FIELD : Bairro 
#define S_CABECALHOVenda_Bairro peel(pick(nPos, 141, 40), " ")
#define R_CABECALHOVenda_Bairro(A) put(nRec, 141, A :40.40)
!-----------------------------------------------------------
! FIELD : Cidade 
#define S_CABECALHOVenda_Cidade peel(pick(nPos, 181, 60), " ")
#define R_CABECALHOVenda_Cidade(A) put(nRec, 181, A :60.60)
!-----------------------------------------------------------
! FIELD : Estado 
#define S_CABECALHOVenda_Estado peel(pick(nPos, 241, 2), " ")
#define R_CABECALHOVenda_Estado(A) put(nRec, 241, A :2.2)
!-----------------------------------------------------------
! FIELD : Cep 
#define S_CABECALHOVenda_Cep peel(pick(nPos, 243, 8), " ")
#define R_CABECALHOVenda_Cep(A) put(nRec, 243, A :8.8)
!-----------------------------------------------------------
! FIELD : EmissorCNPJ 
#define S_CABECALHOVenda_EmissorCNPJ peel(pick(nPos, 251, 14), " ")
#define R_CABECALHOVenda_EmissorCNPJ(A) put(nRec, 251, A :14.14)
!-----------------------------------------------------------
! FIELD : brancos 
#define S_CABECALHOVenda_brancos peel(pick(nPos, 265, 2), " ")
#define R_CABECALHOVenda_brancos(A) put(nRec, 265, A :2.2)
!-----------------------------------------------------------
! FIELD : DatadeEmissao 
#define S_CABECALHOVenda_DatadeEmissao peel(pick(nPos, 273, 8), " ")
#define R_CABECALHOVenda_DatadeEmissao(A) put(nRec, 273, A :8.8)
!-----------------------------------------------------------
! FIELD : CodDeOperacao 
#define S_CABECALHOVenda_CodDeOperacao peel(pick(nPos, 281, 3), " ")
#define R_CABECALHOVenda_CodDeOperacao(A) put(nRec, 281, A :3.3)
!-----------------------------------------------------------
! FIELD : BRANCO3 
#define S_CABECALHOVenda_BRANCO3 peel(pick(nPos, 284, 200), " ")
#define R_CABECALHOVenda_BRANCO3(A) put(nRec, 284, A :200.200)
!-----------------------------------------------------------
! FIELD : CodigoTransportadora 
#define S_CABECALHOVenda_CodigoTransportadora peel(pick(nPos, 484, 6), " ")
#define R_CABECALHOVenda_CodigoTransportadora(A) put(nRec, 484, A :6.6)
!-----------------------------------------------------------
! FIELD : Transportadora 
#define S_CABECALHOVenda_Transportadora peel(pick(nPos, 490, 30), " ")
#define R_CABECALHOVenda_Transportadora(A) put(nRec, 490, A :30.30)
!-----------------------------------------------------------
! FIELD : SerieNF 
#define S_CABECALHOVenda_SerieNF peel(pick(nPos, 520, 3), " ")
#define R_CABECALHOVenda_SerieNF(A) put(nRec, 520, A :3.3)
!-----------------------------------------------------------
! FIELD : InscrEstadual 
#define S_CABECALHOVenda_InscrEstadual peel(pick(nPos, 523, 20), " ")
#define R_CABECALHOVenda_InscrEstadual(A) put(nRec, 523, A :20.20)
!-----------------------------------------------------------
! FIELD : CodIbgeMun 
#define S_CABECALHOVenda_CodIbgeMun peel(pick(nPos, 543, 10), " ")
#define R_CABECALHOVenda_CodIbgeMun(A) put(nRec, 543, A :10.10)
!-----------------------------------------------------------
! FIELD : Email 
#define S_CABECALHOVenda_Email peel(pick(nPos, 553, 200), " ")
#define R_CABECALHOVenda_Email(A) put(nRec, 553, A :200.200)
!-----------------------------------------------------------
! FIELD : Volumes 
#define S_CABECALHOVenda_Volumes peel(pick(nPos, 753, 6), " ")
#define R_CABECALHOVenda_Volumes(A) put(nRec, 753, A :6.6)
!-----------------------------------------------------------
! FIELD : ValortotaldaNF 
#define S_CABECALHOVenda_ValortotaldaNF peel(pick(nPos, 759, 16), " ")
#define R_CABECALHOVenda_ValortotaldaNF(A) put(nRec, 759, A :16.16)
!-----------------------------------------------------------
! FIELD : PesoLiquidodaNF 
#define S_CABECALHOVenda_PesoLiquidodaNF peel(pick(nPos, 775, 12), " ")
#define R_CABECALHOVenda_PesoLiquidodaNF(A) put(nRec, 775, A :12.12)
!-----------------------------------------------------------
! FIELD : PesoBrutodaNF 
#define S_CABECALHOVenda_PesoBrutodaNF peel(pick(nPos, 787, 12), " ")
#define R_CABECALHOVenda_PesoBrutodaNF(A) put(nRec, 787, A :12.12)
!-----------------------------------------------------------
! FIELD : ChavedaNotaFiscal 
#define S_CABECALHOVenda_ChavedaNotaFiscal peel(pick(nPos, 799, 44), " ")
#define R_CABECALHOVenda_ChavedaNotaFiscal(A) put(nRec, 799, A :44.44)
!-----------------------------------------------------------
! FIELD : Icmsst 
#define S_CABECALHOVenda_Icmsst peel(pick(nPos, 843, 9), " ")
#define R_CABECALHOVenda_Icmsst(A) put(nRec, 843, A :9.9)
!-----------------------------------------------------------
!===========================================================
! Line : DETALHEVenda 
!===========================================================
! FIELD : IdDetalhePedido 
#define S_DETALHEVenda_IdDetalhePedido peel(pick(nPos, 1, 1), " ")
#define R_DETALHEVenda_IdDetalhePedido(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : Nf 
#define S_DETALHEVenda_Nf peel(pick(nPos, 2, 9), " ")
#define R_DETALHEVenda_Nf(A) put(nRec, 2, A :9.9)
!-----------------------------------------------------------
! FIELD : BRANCO4 
#define S_DETALHEVenda_BRANCO4 peel(pick(nPos, 11, 1), " ")
#define R_DETALHEVenda_BRANCO4(A) put(nRec, 11, A :1.1)
!-----------------------------------------------------------
! FIELD : ItemdoPedido 
#define S_DETALHEVenda_ItemdoPedido peel(pick(nPos, 12, 3), " ")
#define R_DETALHEVenda_ItemdoPedido(A) put(nRec, 12, A :3.3)
!-----------------------------------------------------------
! FIELD : Produto 
#define S_DETALHEVenda_Produto peel(pick(nPos, 15, 8), " ")
#define R_DETALHEVenda_Produto(A) put(nRec, 15, A :8.8)
!-----------------------------------------------------------
! FIELD : BRANCO5 
#define S_DETALHEVenda_BRANCO5 peel(pick(nPos, 23, 17), " ")
#define R_DETALHEVenda_BRANCO5(A) put(nRec, 23, A :17.17)
!-----------------------------------------------------------
! FIELD : Descricao 
#define S_DETALHEVenda_Descricao peel(pick(nPos, 40, 20), " ")
#define R_DETALHEVenda_Descricao(A) put(nRec, 40, A :20.20)
!-----------------------------------------------------------
! FIELD : UnidadedeMedida 
#define S_DETALHEVenda_UnidadedeMedida peel(pick(nPos, 60, 2), " ")
#define R_DETALHEVenda_UnidadedeMedida(A) put(nRec, 60, A :2.2)
!-----------------------------------------------------------
! FIELD : Quantidade 
#define S_DETALHEVenda_Quantidade peel(pick(nPos, 62, 11), " ")
#define R_DETALHEVenda_Quantidade(A) put(nRec, 62, A :11.11)
!-----------------------------------------------------------
! FIELD : ValorUnitario 
#define S_DETALHEVenda_ValorUnitario peel(pick(nPos, 73, 16), " ")
#define R_DETALHEVenda_ValorUnitario(A) put(nRec, 73, A :16.16)
!-----------------------------------------------------------
! FIELD : BRANCO6 
#define S_DETALHEVenda_BRANCO6 peel(pick(nPos, 89, 15), " ")
#define R_DETALHEVenda_BRANCO6(A) put(nRec, 89, A :15.15)
!-----------------------------------------------------------
! FIELD : Lote 
#define S_DETALHEVenda_Lote peel(pick(nPos, 104, 16), " ")
#define R_DETALHEVenda_Lote(A) put(nRec, 104, A :16.16)
!-----------------------------------------------------------

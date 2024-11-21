! File NFRemessa : 
!===========================================================
! Line : IDArquivo 
!===========================================================
! FIELD : IDArquivo 
#define S_IDArquivo_IDArquivo peel(pick(nPos, 1, 2), " ")
#define R_IDArquivo_IDArquivo(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
!===========================================================
! Line : CABECALHORemessa 
!===========================================================
! FIELD : IdCabecalho 
#define S_CABECALHORemessa_IdCabecalho peel(pick(nPos, 1, 1), " ")
#define R_CABECALHORemessa_IdCabecalho(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : Nf 
#define S_CABECALHORemessa_Nf peel(pick(nPos, 2, 9), " ")
#define R_CABECALHORemessa_Nf(A) put(nRec, 2, A :9.9)
!-----------------------------------------------------------
! FIELD : BRANCO 
#define S_CABECALHORemessa_BRANCO peel(pick(nPos, 11, 1), " ")
#define R_CABECALHORemessa_BRANCO(A) put(nRec, 11, A :1.1)
!-----------------------------------------------------------
! FIELD : SolicitanteCNPJ 
#define S_CABECALHORemessa_SolicitanteCNPJ peel(pick(nPos, 12, 14), " ")
#define R_CABECALHORemessa_SolicitanteCNPJ(A) put(nRec, 12, A :14.14)
!-----------------------------------------------------------
! FIELD : BRANCO2 
#define S_CABECALHORemessa_BRANCO2 peel(pick(nPos, 26, 1), " ")
#define R_CABECALHORemessa_BRANCO2(A) put(nRec, 26, A :1.1)
!-----------------------------------------------------------
! FIELD : Nome 
#define S_CABECALHORemessa_Nome peel(pick(nPos, 27, 35), " ")
#define R_CABECALHORemessa_Nome(A) put(nRec, 27, A :35.35)
!-----------------------------------------------------------
! FIELD : Endereco 
#define S_CABECALHORemessa_Endereco peel(pick(nPos, 62, 30), " ")
#define R_CABECALHORemessa_Endereco(A) put(nRec, 62, A :30.30)
!-----------------------------------------------------------
! FIELD : Complemento 
#define S_CABECALHORemessa_Complemento peel(pick(nPos, 92, 20), " ")
#define R_CABECALHORemessa_Complemento(A) put(nRec, 92, A :20.20)
!-----------------------------------------------------------
! FIELD : Bairro 
#define S_CABECALHORemessa_Bairro peel(pick(nPos, 112, 15), " ")
#define R_CABECALHORemessa_Bairro(A) put(nRec, 112, A :15.15)
!-----------------------------------------------------------
! FIELD : Cidade 
#define S_CABECALHORemessa_Cidade peel(pick(nPos, 127, 20), " ")
#define R_CABECALHORemessa_Cidade(A) put(nRec, 127, A :20.20)
!-----------------------------------------------------------
! FIELD : Estado 
#define S_CABECALHORemessa_Estado peel(pick(nPos, 147, 2), " ")
#define R_CABECALHORemessa_Estado(A) put(nRec, 147, A :2.2)
!-----------------------------------------------------------
! FIELD : Cep 
#define S_CABECALHORemessa_Cep peel(pick(nPos, 149, 8), " ")
#define R_CABECALHORemessa_Cep(A) put(nRec, 149, A :8.8)
!-----------------------------------------------------------
! FIELD : EmissorCNPJ 
#define S_CABECALHORemessa_EmissorCNPJ peel(pick(nPos, 157, 14), " ")
#define R_CABECALHORemessa_EmissorCNPJ(A) put(nRec, 157, A :14.14)
!-----------------------------------------------------------
! FIELD : DataLimite 
#define S_CABECALHORemessa_DataLimite peel(pick(nPos, 171, 8), " ")
#define R_CABECALHORemessa_DataLimite(A) put(nRec, 171, A :8.8)
!-----------------------------------------------------------
! FIELD : DatadeEmissao 
#define S_CABECALHORemessa_DatadeEmissao peel(pick(nPos, 179, 8), " ")
#define R_CABECALHORemessa_DatadeEmissao(A) put(nRec, 179, A :8.8)
!-----------------------------------------------------------
! FIELD : CodDeOperacao 
#define S_CABECALHORemessa_CodDeOperacao peel(pick(nPos, 187, 3), " ")
#define R_CABECALHORemessa_CodDeOperacao(A) put(nRec, 187, A :3.3)
!-----------------------------------------------------------
! FIELD : BRANCO3 
#define S_CABECALHORemessa_BRANCO3 peel(pick(nPos, 190, 200), " ")
#define R_CABECALHORemessa_BRANCO3(A) put(nRec, 190, A :200.200)
!-----------------------------------------------------------
! FIELD : CodigoTransportadora 
#define S_CABECALHORemessa_CodigoTransportadora peel(pick(nPos, 390, 6), " ")
#define R_CABECALHORemessa_CodigoTransportadora(A) put(nRec, 390, A :6.6)
!-----------------------------------------------------------
! FIELD : Transportadora 
#define S_CABECALHORemessa_Transportadora peel(pick(nPos, 396, 30), " ")
#define R_CABECALHORemessa_Transportadora(A) put(nRec, 396, A :30.30)
!-----------------------------------------------------------
! FIELD : SerieNF 
#define S_CABECALHORemessa_SerieNF peel(pick(nPos, 426, 3), " ")
#define R_CABECALHORemessa_SerieNF(A) put(nRec, 426, A :3.3)
!-----------------------------------------------------------
! FIELD : InscrEstadual 
#define S_CABECALHORemessa_InscrEstadual peel(pick(nPos, 429, 20), " ")
#define R_CABECALHORemessa_InscrEstadual(A) put(nRec, 429, A :20.20)
!-----------------------------------------------------------
! FIELD : CodIbgeMun 
#define S_CABECALHORemessa_CodIbgeMun peel(pick(nPos, 449, 10), " ")
#define R_CABECALHORemessa_CodIbgeMun(A) put(nRec, 449, A :10.10)
!-----------------------------------------------------------
! FIELD : Email 
#define S_CABECALHORemessa_Email peel(pick(nPos, 459, 60), " ")
#define R_CABECALHORemessa_Email(A) put(nRec, 459, A :60.60)
!-----------------------------------------------------------
! FIELD : Volumes 
#define S_CABECALHORemessa_Volumes peel(pick(nPos, 519, 6), " ")
#define R_CABECALHORemessa_Volumes(A) put(nRec, 519, A :6.6)
!-----------------------------------------------------------
!===========================================================
! Line : DETALHERemessa 
!===========================================================
! FIELD : IdDetalhePedido 
#define S_DETALHERemessa_IdDetalhePedido peel(pick(nPos, 1, 1), " ")
#define R_DETALHERemessa_IdDetalhePedido(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : Nf 
#define S_DETALHERemessa_Nf peel(pick(nPos, 2, 9), " ")
#define R_DETALHERemessa_Nf(A) put(nRec, 2, A :9.9)
!-----------------------------------------------------------
! FIELD : BRANCO4 
#define S_DETALHERemessa_BRANCO4 peel(pick(nPos, 11, 1), " ")
#define R_DETALHERemessa_BRANCO4(A) put(nRec, 11, A :1.1)
!-----------------------------------------------------------
! FIELD : ItemdoPedido 
#define S_DETALHERemessa_ItemdoPedido peel(pick(nPos, 12, 3), " ")
#define R_DETALHERemessa_ItemdoPedido(A) put(nRec, 12, A :3.3)
!-----------------------------------------------------------
! FIELD : Produto 
#define S_DETALHERemessa_Produto peel(pick(nPos, 15, 8), " ")
#define R_DETALHERemessa_Produto(A) put(nRec, 15, A :8.8)
!-----------------------------------------------------------
! FIELD : BRANCO5 
#define S_DETALHERemessa_BRANCO5 peel(pick(nPos, 23, 17), " ")
#define R_DETALHERemessa_BRANCO5(A) put(nRec, 23, A :17.17)
!-----------------------------------------------------------
! FIELD : Descricao 
#define S_DETALHERemessa_Descricao peel(pick(nPos, 40, 20), " ")
#define R_DETALHERemessa_Descricao(A) put(nRec, 40, A :20.20)
!-----------------------------------------------------------
! FIELD : UnidadedeMedida 
#define S_DETALHERemessa_UnidadedeMedida peel(pick(nPos, 60, 2), " ")
#define R_DETALHERemessa_UnidadedeMedida(A) put(nRec, 60, A :2.2)
!-----------------------------------------------------------
! FIELD : Quantidade 
#define S_DETALHERemessa_Quantidade peel(pick(nPos, 62, 11), " ")
#define R_DETALHERemessa_Quantidade(A) put(nRec, 62, A :11.11)
!-----------------------------------------------------------
! FIELD : ValorUnitario 
#define S_DETALHERemessa_ValorUnitario peel(pick(nPos, 73, 16), " ")
#define R_DETALHERemessa_ValorUnitario(A) put(nRec, 73, A :16.16)
!-----------------------------------------------------------
! FIELD : BRANCO6 
#define S_DETALHERemessa_BRANCO6 peel(pick(nPos, 89, 15), " ")
#define R_DETALHERemessa_BRANCO6(A) put(nRec, 89, A :15.15)
!-----------------------------------------------------------
! FIELD : Lote 
#define S_DETALHERemessa_Lote peel(pick(nPos, 104, 16), " ")
#define R_DETALHERemessa_Lote(A) put(nRec, 104, A :16.16)
!-----------------------------------------------------------

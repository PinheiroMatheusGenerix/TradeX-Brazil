! File NfVenda : 
!===========================================================
! Line : Header 
!===========================================================
! FIELD : Header 
#define S_Header_TipoRegisto0 peel(pick(nPos, 1, 1), " ")
#define R_Header_TipoRegisto0(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : CNPJORIGEM
#define S_Header_CNPJORIGEM peel(pick(nPos, 2, 15), " ")
#define R_Header_CNPJORIGEM(A) put(nRec, 2, A :15.15)
!-----------------------------------------------------------
! FIELD : CNPJDESTINATARIO
#define S_Header_CNPJDESTINATARIO peel(pick(nPos, 17, 15), " ")
#define R_Header_CNPJDESTINATARIO(A) put(nRec, 17, A :15.15)






!===========================================================
! Line : HeaderPedido 
!===========================================================
! FIELD : IdCabecalho 
#define S_HeaderPedido_TipoRegisto2 peel(pick(nPos, 1, 1), " ")
#define R_HeaderPedido_TipoRegisto2(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : TipoSolicitacao 
#define S_HeaderPedido_TipoSolicitacao peel(pick(nPos, 2, 1), " ")
#define R_HeaderPedido_TipoSolicitacao(A) put(nRec, 2, A :1.1)
!-----------------------------------------------------------
! FIELD : SerieDocumento 
#define S_HeaderPedido_SerieDocumento peel(pick(nPos, 3, 3), " ")
#define R_HeaderPedido_SerieDocumento(A) put(nRec, 3, A :3.3)
!-----------------------------------------------------------
! FIELD : NumeroPedido 
#define S_HeaderPedido_NumeroPedido peel(pick(nPos, 6, 6), " ")
#define R_HeaderPedido_NumeroPedido(A) put(nRec, 6, A :6.6)
!-----------------------------------------------------------
! FIELD : NaturezaOperacao 
#define S_HeaderPedido_NaturezaOperacao peel(pick(nPos, 12, 4), " ")
#define R_HeaderPedido_NaturezaOperacao(A) put(nRec, 12, A :4.4)
!-----------------------------------------------------------
! FIELD : DataPedido 
#define S_HeaderPedido_DataPedido peel(pick(nPos, 16, 8), " ")
#define R_HeaderPedido_DataPedido(A) put(nRec, 16, A :8.8)
!-----------------------------------------------------------
! FIELD : Nome 
#define S_HeaderPedido_Nome peel(pick(nPos, 24, 50), " ")
#define R_HeaderPedido_Nome(A) put(nRec, 24, A :50.50)
!-----------------------------------------------------------
! FIELD : Endereco 
#define S_HeaderPedido_Endereco peel(pick(nPos, 74, 50), " ")
#define R_HeaderPedido_Endereco(A) put(nRec, 74, A :50.50)
!-----------------------------------------------------------
! FIELD : Numero 
#define S_HeaderPedido_Municipio peel(pick(nPos, 124, 50), " ")
#define R_HeaderPedido_Municipio(A) put(nRec, 124, A :50.50)
!-----------------------------------------------------------
! FIELD : Estado 
#define S_HeaderPedido_Estado peel(pick(nPos, 174, 2), " ")
#define R_HeaderPedido_Estado(A) put(nRec, 174, A :2.2)
!-----------------------------------------------------------
! FIELD : EmissorCNPJ 
#define S_HeaderPedido_EmissorCNPJ peel(pick(nPos, 176, 15), " ")
#define R_HeaderPedido_EmissorCNPJ(A) put(nRec, 176, A :15.15)
!-----------------------------------------------------------

! FIELD : IndicadorCNPJ 
#define S_HeaderPedido_IndicadorCNPJ peel(pick(nPos, 191, 1), " ")
#define R_HeaderPedido_IndicadorCNPJ(A) put(nRec, 191, A :1.1)
!-----------------------------------------------------------
! FIELD : IE 
#define S_HeaderPedido_IE peel(pick(nPos, 192, 20), " ")
#define R_HeaderPedido_IE(A) put(nRec, 192, A :20.20)
!-----------------------------------------------------------
! FIELD : TranspCNPJ 
#define S_HeaderPedido_TranspCNPJ peel(pick(nPos, 213, 15), " ")
#define R_HeaderPedido_TranspCNPJ(A) put(nRec, 213, A :15.15)
!-----------------------------------------------------------
! FIELD : Cep 
#define S_HeaderPedido_Cep peel(pick(nPos, 229, 8), " ")
#define R_HeaderPedido_Cep(A) put(nRec, 229, A :8.8)
!-----------------------------------------------------------
! FIELD : Prioridade 
#define S_HeaderPedido_Prioridade peel(pick(nPos, 225, 1), " ")
#define R_HeaderPedido_Prioridade(A) put(nRec, 225, A :1.1)
!-----------------------------------------------------------
!-----------------------------------------------------------
! FIELD : NumeroEndereco 
#define S_HeaderPedido_NumeroEndereco peel(pick(nPos, 425, 10), " ")
#define R_HeaderPedido_NumeroEndereco(A) put(nRec, 425, A :10.10)
!-----------------------------------------------------------
! FIELD : ComplementoEndereco
#define S_HeaderPedido_ComplementoEndereco peel(pick(nPos, 435, 30), " ")
#define R_HeaderPedido_ComplementoEndereco(A) put(nRec, 435, A :30.30)
!-----------------------------------------------------------
! FIELD : PesoBruto
#define S_HeaderPedido_PesoBruto peel(pick(nPos, 486, 9), " ")
#define R_HeaderPedido_PesoBruto(A) put(nRec, 486, A :9.9)
!-----------------------------------------------------------
! FIELD : QtdVolumes
#define S_HeaderPedido_QtdVolumes peel(pick(nPos, 504, 5), " ")
#define R_HeaderPedido_QtdVolumes(A) put(nRec, 504, A :5.5)
!-----------------------------------------------------------
! FIELD : BairroDestinatario
#define S_HeaderPedido_BairroDestinatario peel(pick(nPos, 569, 50), " ")
#define R_HeaderPedido_BairroDestinatario(A) put(nRec, 569, A :50.50)
!-----------------------------------------------------------
! FIELD : CodOrdemCarga
#define S_HeaderPedido_CodOrdemCarga peel(pick(nPos, 619, 20), " ")
#define R_HeaderPedido_CodOrdemCarga(A) put(nRec, 619, A :20.20)
!-----------------------------------------------------------
! FIELD : ChaveNF
#define S_HeaderPedido_ChaveNF peel(pick(nPos, 648, 45), " ")
#define R_HeaderPedido_ChaveNF(A) put(nRec, 648, A :45.45)
!-----------------------------------------------------------
! FIELD : PaisDestinatario
#define S_HeaderPedido_PaisDestinatario peel(pick(nPos, 738, 30), " ")
#define R_HeaderPedido_PaisDestinatario(A) put(nRec, 738, A :30.30)
!-----------------------------------------------------------
! FIELD : TelDestinatario
#define S_HeaderPedido_TelDestinatario peel(pick(nPos, 768, 10), " ")
#define R_HeaderPedido_TelDestinatario(A) put(nRec, 768, A :10.10)
!-----------------------------------------------------------
! FIELD : EmailDestinatario
#define S_HeaderPedido_EmailDestinatario peel(pick(nPos, 778, 50), " ")
#define R_HeaderPedido_EmailDestinatario(A) put(nRec, 778, A :50.50)
!-----------------------------------------------------------
! FIELD : ValorTotalNF
#define S_HeaderPedido_ValorTotalNF peel(pick(nPos, 1100, 20), " ")
#define R_HeaderPedido_ValorTotalNF(A) put(nRec, 1100, A :20.20)
!-----------------------------------------------------------
! FIELD : CubagemTotal
#define S_HeaderPedido_CubagemTotal peel(pick(nPos, 1120, 20), " ")
#define R_HeaderPedido_CubagemTotal(A) put(nRec, 1120, A :20.20)
!-----------------------------------------------------------
!===========================================================
! Line : DetalhePedido 
!===========================================================
! FIELD : IdDetalhePedido 
#define S_DetalhePedido_IdDetalhePedido peel(pick(nPos, 1, 1), " ")
#define R_DetalhePedido_IdDetalhePedido(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : Produto 
#define S_DetalhePedido_Produto peel(pick(nPos, 2, 25), " ")
#define R_DetalhePedido_Produto(A) put(nRec, 2, A :25.25)
!-----------------------------------------------------------
! FIELD : Quantidade 
#define S_DetalhePedido_Quantidade peel(pick(nPos, 27, 19), " ")
#define R_DetalhePedido_Quantidade(A) put(nRec, 27, A :19.19)
!-----------------------------------------------------------
! FIELD : UnidadedeMedida 
#define S_DetalhePedido_UnidadedeMedida peel(pick(nPos, 46, 4), " ")
#define R_DetalhePedido_UnidadedeMedida(A) put(nRec, 46, A :4.4)
!-----------------------------------------------------------
! FIELD : ValorUnitario 
#define S_DetalhePedido_ValorUnitario peel(pick(nPos, 50, 19), " ")
#define R_DetalhePedido_ValorUnitario(A) put(nRec, 50, A :19.19)
!-----------------------------------------------------------
! FIELD : Lote 
#define S_DetalhePedido_Lote peel(pick(nPos, 117, 20), " ")
#define R_DetalhePedido_Lote(A) put(nRec, 117, A :20.20)
!-----------------------------------------------------------
! FIELD : Sequencia 
#define S_DetalhePedido_Sequencia peel(pick(nPos, 188, 1), " ")
#define R_DetalhePedido_Sequencia(A) put(nRec, 188, A :1.1)
!-----------------------------------------------------------
! FIELD : InstrucaoEmbalagem 
#define S_DetalhePedido_InstrucaoEmbalagem peel(pick(nPos, 125, 30), " ")
#define R_DetalhePedido_InstrucaoEmbalagem(A) put(nRec, 125, A :30.30)
!===========================================================
! Line : Trailler
!===========================================================
! FIELD : Trailler 
#define S_Trailler_IdTraillero peel(pick(nPos, 1, 1), " ")
#define R_Trailler_IdTrailler(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
!-----------------------------------------------------------
! FIELD : TotalLinhas 
#define S_Trailler_TotalLinhas peel(pick(nPos, 2, 2), " ")
#define R_Trailler_TotalLinhas(A) put(nRec, 2, A :2.2)


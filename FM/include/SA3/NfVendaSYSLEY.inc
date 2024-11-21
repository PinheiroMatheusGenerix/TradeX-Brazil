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
!-----------------------------------------------------------
! FIELD : CLIPROPRI
#define S_Header_CLIPROPRI peel(pick(nPos, 32, 15), " ")
#define R_Header_CLIPROPRI(A) put(nRec, 32, A :15.15)
!===========================================================
! Line : HeaderOrdemCarga 
!===========================================================
! FIELD : IdCabecalho 
#define S_HeaderOrdemCarga_TipoRegisto1 peel(pick(nPos, 1, 1), " ")
#define R_HeaderOrdemCarga_TipoRegisto1(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : Nf 
#define S_HeaderOrdemCarga_TipoOperacao peel(pick(nPos, 2, 2), " ")
#define R_HeaderOrdemCarga_TipoOperacao(A) put(nRec, 2, A :2.2)
!-----------------------------------------------------------
! FIELD : BRANCO 
#define S_HeaderOrdemCarga_OrdemCarga peel(pick(nPos, 4, 20), " ")
#define R_HeaderOrdemCarga_OrdemCarga(A) put(nRec, 4, A :20.20)
!-----------------------------------------------------------
! FIELD : SolicitanteCNPJ 
#define S_HeaderOrdemCarga_CNPJTRANSPORTADORA peel(pick(nPos, 24, 15), " ")
#define R_HeaderOrdemCarga_CNPJTRANSPORTADORA(A) put(nRec, 24, A :15.15)
!-----------------------------------------------------------
! FIELD : BRANCO2 
#define S_HeaderOrdemCarga_PREVISAOCOLETA peel(pick(nPos, 39, 8), " ")
#define R_HeaderOrdemCarga_PREVISAOCOLETA(A) put(nRec, 39, A :8.8)
!-----------------------------------------------------------
!===========================================================
! Line : HeaderPedido 
!===========================================================
! FIELD : IdCabecalho 
#define S_HeaderPedido_TipoRegisto2 peel(pick(nPos, 1, 1), " ")
#define R_HeaderPedido_TipoRegisto2(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : NumeroPedido 
#define S_HeaderPedido_NumeroPedido peel(pick(nPos, 2, 20), " ")
#define R_HeaderPedido_NumeroPedido(A) put(nRec, 2, A :20.20)
!-----------------------------------------------------------
! FIELD : DataPedido 
#define S_HeaderPedido_DataPedido peel(pick(nPos, 22, 8), " ")
#define R_HeaderPedido_DataPedido(A) put(nRec, 22, A :8.8)
!-----------------------------------------------------------
! FIELD : Nome 
#define S_HeaderPedido_Nome peel(pick(nPos, 30, 50), " ")
#define R_HeaderPedido_Nome(A) put(nRec, 30, A :50.50)
!-----------------------------------------------------------
! FIELD : Endereco 
#define S_HeaderPedido_Endereco peel(pick(nPos, 80, 50), " ")
#define R_HeaderPedido_Endereco(A) put(nRec, 80, A :50.50)
!-----------------------------------------------------------
! FIELD : Numero 
#define S_HeaderPedido_Municipio peel(pick(nPos, 130, 50), " ")
#define R_HeaderPedido_Municipio(A) put(nRec, 130, A :50.50)
!-----------------------------------------------------------
! FIELD : Estado 
#define S_HeaderPedido_Estado peel(pick(nPos, 180, 2), " ")
#define R_HeaderPedido_Estado(A) put(nRec, 180, A :2.2)
!-----------------------------------------------------------
! FIELD : EmissorCNPJ 
#define S_HeaderPedido_EmissorCNPJ peel(pick(nPos, 182, 15), " ")
#define R_HeaderPedido_EmissorCNPJ(A) put(nRec, 182, A :15.15)
!-----------------------------------------------------------
! FIELD : IE 
#define S_HeaderPedido_IE peel(pick(nPos, 197, 20), " ")
#define R_HeaderPedido_IE(A) put(nRec, 197, A :20.20)
!-----------------------------------------------------------
! FIELD : Cep 
#define S_HeaderPedido_Cep peel(pick(nPos, 217, 8), " ")
#define R_HeaderPedido_Cep(A) put(nRec, 217, A :8.8)
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
! FIELD : Email
#define S_HeaderPedido_Email peel(pick(nPos, 465, 60), " ")
#define R_HeaderPedido_Email(A) put(nRec, 465, A :60.60)
!-----------------------------------------------------------
! FIELD : Nome_Entrega
#define S_HeaderPedido_Nome_Entrega peel(pick(nPos, 525, 50), " ")
#define R_HeaderPedido_Nome_Entrega(A) put(nRec, 525, A :50.50)
!-----------------------------------------------------------
! FIELD : Endereco_Entrega
#define S_HeaderPedido_Endereco_Entrega peel(pick(nPos, 575, 50), " ")
#define R_HeaderPedido_Endereco_Entrega(A) put(nRec, 575, A :50.50)
!-----------------------------------------------------------
! FIELD : Municipio_Entrega
#define S_HeaderPedido_Municipio_Entrega peel(pick(nPos, 625, 50), " ")
#define R_HeaderPedido_Municipio_Entrega(A) put(nRec, 625, A :50.50)
!-----------------------------------------------------------
! FIELD : UF_Entrega
#define S_HeaderPedido_UF_Entrega peel(pick(nPos, 675, 2), " ")
#define R_HeaderPedido_UF_Entrega(A) put(nRec, 675, A :2.2)
!-----------------------------------------------------------
! FIELD : Cep_entrega
#define S_HeaderPedido_Cep_entrega peel(pick(nPos, 677, 8), " ")
#define R_HeaderPedido_Cep_entrega(A) put(nRec, 677, A :8.8)
!-----------------------------------------------------------
! FIELD : Numero_Endereco_entrega
#define S_HeaderPedido_Numero_Endereco_entrega peel(pick(nPos, 685, 10), " ")
#define R_HeaderPedido_Numero_Endereco_entrega(A) put(nRec, 685, A :10.10)
!-----------------------------------------------------------
! FIELD : Complemento_Endereco_entrega
#define S_HeaderPedido_Complemento_Endereco_entrega peel(pick(nPos, 695, 30), " ")
#define R_HeaderPedido_Complemento_Endereco_entrega(A) put(nRec, 695, A :30.30)
!-----------------------------------------------------------
! FIELD : Bairro_Entrega
#define S_HeaderPedido_Bairro_Entrega peel(pick(nPos, 725, 30), " ")
#define R_HeaderPedido_Bairro_Entrega(A) put(nRec, 725, A :30.30)
!-----------------------------------------------------------
! FIELD : Valor_Frete
#define S_HeaderPedido_Valor_Frete peel(pick(nPos, 755, 14), " ")
#define R_HeaderPedido_Valor_Frete(A) put(nRec, 755, A :14.14) 
!----------------------------------------------------------- 
!===========================================================
! Line : DetalhePedido 
!===========================================================
! FIELD : IdDetalhePedido 
#define S_DetalhePedido_IdDetalhePedido peel(pick(nPos, 1, 1), " ")
#define R_DetalhePedido_IdDetalhePedido(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
!-----------------------------------------------------------
! FIELD : ItemdoPedido 
#define S_DetalhePedido_ItemdoPedido peel(pick(nPos, 2, 6), " ")
#define R_DetalhePedido_ItemdoPedido(A) put(nRec, 2, A :6.6)
!-----------------------------------------------------------
! FIELD : Produto 
#define S_DetalhePedido_Produto peel(pick(nPos, 8, 25), " ")
#define R_DetalhePedido_Produto(A) put(nRec, 8, A :25.25)
!-----------------------------------------------------------
! FIELD : Quantidade 
#define S_DetalhePedido_Quantidade peel(pick(nPos, 33, 19), " ")
#define R_DetalhePedido_Quantidade(A) put(nRec, 33, A :19.19)
!-----------------------------------------------------------
! FIELD : UnidadedeMedida 
#define S_DetalhePedido_UnidadedeMedida peel(pick(nPos, 52, 4), " ")
#define R_DetalhePedido_UnidadedeMedida(A) put(nRec, 52, A :4.4)
!-----------------------------------------------------------
! FIELD : ValorUnitario 
#define S_DetalhePedido_ValorUnitario peel(pick(nPos, 56, 19), " ")
#define R_DetalhePedido_ValorUnitario(A) put(nRec, 56, A :19.19)
!-----------------------------------------------------------
! FIELD : Lote 
#define S_DetalhePedido_Lote peel(pick(nPos, 75, 20), " ")
#define R_DetalhePedido_Lote(A) put(nRec, 75, A :20.20)
!-----------------------------------------------------------
! FIELD : Deposito 
#define S_DetalhePedido_Deposito peel(pick(nPos, 95, 30), " ")
#define R_DetalhePedido_Deposito(A) put(nRec, 95, A :30.30)
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


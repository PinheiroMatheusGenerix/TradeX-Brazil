! File ConfRecebimentoSYSLEY : 
!===========================================================
! Line : Header 
!===========================================================
! FIELD : TIPODEREGISTRO 
#define S_Header_TIPODEREGISTRO peel(pick(nPos, 1, 1), " ")
#define R_Header_TIPODEREGISTRO(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : CNPJORIGEM 
#define S_Header_CNPJORIGEM peel(pick(nPos, 2, 15), " ")
#define R_Header_CNPJORIGEM(A) put(nRec, 2, A :15.15)
!-----------------------------------------------------------
! FIELD : CNPJDESTINATARIO 
#define S_Header_CNPJDESTINATARIO peel(pick(nPos, 17, 15), " ")
#define R_Header_CNPJDESTINATARIO(A) put(nRec, 17, A :15.15)
!-----------------------------------------------------------
! FIELD : TIPORECEBIMENTO 
#define S_Header_TIPORECEBIMENTO peel(pick(nPos, 32, 2), " ")
#define R_Header_TIPORECEBIMENTO(A) put(nRec, 32, A :2.2)
!-----------------------------------------------------------
! FIELD : DATARECEBIMENTO 
#define S_Header_DATARECEBIMENTO peel(pick(nPos, 34, 8), " ")
#define R_Header_DATARECEBIMENTO(A) put(nRec, 34, A :8.8)
!-----------------------------------------------------------
! FIELD : NUMEROBL 
#define S_Header_NUMEROBL peel(pick(nPos, 42, 20), " ")
#define R_Header_NUMEROBL(A) put(nRec, 42, A :20.20)
!-----------------------------------------------------------
! FIELD : COMPLHEADER 
#define S_Header_COMPLHEADER peel(pick(nPos, 62, 90), " ")
#define R_Header_COMPLHEADER(A) put(nRec, 62, A :90.90)
!-----------------------------------------------------------
!===========================================================
! Line : HeaderNF 
!===========================================================
! FIELD : Identificacaodoregistro 
#define S_HeaderNF_Identificacaodoregistro peel(pick(nPos, 1, 1), " ")
#define R_HeaderNF_Identificacaodoregistro(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : SeriedaNF 
#define S_HeaderNF_SeriedaNF peel(pick(nPos, 2, 3), " ")
#define R_HeaderNF_SeriedaNF(A) put(nRec, 2, A :3.3)
!-----------------------------------------------------------
! FIELD : NumerodaNotaFiscal 
#define S_HeaderNF_NumerodaNotaFiscal peel(pick(nPos, 5, 9), " ")
#define R_HeaderNF_NumerodaNotaFiscal(A) put(nRec, 5, A :9.9)
!-----------------------------------------------------------
! FIELD : NumerodoPedidodeCompra 
#define S_HeaderNF_NumerodoPedidodeCompra peel(pick(nPos, 14, 20), " ")
#define R_HeaderNF_NumerodoPedidodeCompra(A) put(nRec, 14, A :20.20)
!-----------------------------------------------------------
! FIELD : dataemissaonf
#define S_HeaderNF_dataemissaonf  peel(pick(nPos, 34, 8), " ")
#define R_HeaderNF_dataemissaonf(A) put(nRec, 34, A :8.8)
!-----------------------------------------------------------
! FIELD : cnpjfornecedor
#define S_HeaderNF_cnpjfornecedor  peel(pick(nPos, 42, 15), " ")
#define R_HeaderNF_cnpjfornecedor(A) put(nRec, 42, A :15.15)
!-----------------------------------------------------------
!===========================================================
! Line : Detalhe 
!===========================================================
! FIELD : Identificacaodoregistro 
#define S_Detalhe_Identificacaodoregistro peel(pick(nPos, 1, 1), " ")
#define R_Detalhe_Identificacaodoregistro(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : SequenciadoprodutonaNotaFiscal 
#define S_Detalhe_SequenciadoprodutonaNotaFiscal peel(pick(nPos, 2, 6), " ")
#define R_Detalhe_SequenciadoprodutonaNotaFiscal(A) put(nRec, 2, A :6.6)
!-----------------------------------------------------------
! FIELD : CodigodoSKU 
#define S_Detalhe_CodigodoSKU peel(pick(nPos, 8, 25), " ")
#define R_Detalhe_CodigodoSKU(A) put(nRec, 8, A :25.25)
!-----------------------------------------------------------
! FIELD : Depositooustatusesperadonorecebimento 
#define S_Detalhe_Depositooustatusesperadonorecebimento peel(pick(nPos, 33, 30), " ")
#define R_Detalhe_Depositooustatusesperadonorecebimento(A) put(nRec, 33, A :30.30)
!-----------------------------------------------------------
! FIELD : Codigodolotedefabricacaorecebido 
#define S_Detalhe_Codigodolotedefabricacaorecebido peel(pick(nPos, 63, 20), " ")
#define R_Detalhe_Codigodolotedefabricacaorecebido(A) put(nRec, 63, A :20.20)
!-----------------------------------------------------------
! FIELD : Validadedolotedefabricacaodoproduto 
#define S_Detalhe_Validadedolotedefabricacaodoproduto peel(pick(nPos, 83, 8), " ")
#define R_Detalhe_Validadedolotedefabricacaodoproduto(A) put(nRec, 83, A :8.8)
!-----------------------------------------------------------
! FIELD : UnidadedeMedidadoproduto 
#define S_Detalhe_UnidadedeMedidadoproduto peel(pick(nPos, 91, 4), " ")
#define R_Detalhe_UnidadedeMedidadoproduto(A) put(nRec, 91, A :4.4)
!-----------------------------------------------------------
! FIELD : QuantidadedoprodutonaNF 
#define S_Detalhe_QuantidadedoprodutonaNF peel(pick(nPos, 95, 19), " ")
#define R_Detalhe_QuantidadedoprodutonaNF(A) put(nRec, 95, A :19.19)
!-----------------------------------------------------------
! FIELD : Quantidadeefetivamenterecebida 
#define S_Detalhe_Quantidadeefetivamenterecebida peel(pick(nPos, 114, 19), " ")
#define R_Detalhe_Quantidadeefetivamenterecebida(A) put(nRec, 114, A :19.19)
!-----------------------------------------------------------
! FIELD : QuantidadeAvariada 
#define S_Detalhe_QuantidadeAvariada peel(pick(nPos, 133, 19), " ")
#define R_Detalhe_QuantidadeAvariada(A) put(nRec, 133, A :19.19)
!-----------------------------------------------------------
!===========================================================
! Line : Trailler 
!===========================================================
! FIELD : Identificacaodoregistro 
#define S_Trailler_Identificacaodoregistro peel(pick(nPos, 1, 1), " ")
#define R_Trailler_Identificacaodoregistro(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : Totaldelinhasdodetalhe 
#define S_Trailler_Totaldelinhasdodetalhe peel(pick(nPos, 2, 3), " ")
#define R_Trailler_Totaldelinhasdodetalhe(A) put(nRec, 2, A :3.3)
!-----------------------------------------------------------
! FIELD : COMPLHEADER3 
#define S_Trailler_COMPLHEADER3 peel(pick(nPos, 5, 147), " ")
#define R_Trailler_COMPLHEADER3(A) put(nRec, 5, A :147.147)
!-----------------------------------------------------------

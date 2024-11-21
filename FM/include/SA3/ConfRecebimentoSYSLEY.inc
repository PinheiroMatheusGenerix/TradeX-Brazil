! File ConfRecebimentoSYSLEY : 
!===========================================================
! Line : Header 
!===========================================================
! FIELD : TIPODEREGISTRO 
#define S_HeaderSIS_TIPODEREGISTRO peel(pick(nPos, 1, 1), " ")
#define R_HeaderSIS_TIPODEREGISTRO(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : CNPJORIGEM 
#define S_HeaderSIS_CNPJORIGEM peel(pick(nPos, 2, 15), " ")
#define R_HeaderSIS_CNPJORIGEM(A) put(nRec, 2, A :15.15)
!-----------------------------------------------------------
! FIELD : CNPJDESTINATARIO 
#define S_HeaderSIS_CNPJDESTINATARIO peel(pick(nPos, 17, 15), " ")
#define R_HeaderSIS_CNPJDESTINATARIO(A) put(nRec, 17, A :15.15)
!-----------------------------------------------------------
! FIELD : TIPORECEBIMENTO 
#define S_HeaderSIS_TIPORECEBIMENTO peel(pick(nPos, 32, 2), " ")
#define R_HeaderSIS_TIPORECEBIMENTO(A) put(nRec, 32, A :2.2)
!-----------------------------------------------------------
! FIELD : DATARECEBIMENTO 
#define S_HeaderSIS_DATARECEBIMENTO peel(pick(nPos, 34, 8), " ")
#define R_HeaderSIS_DATARECEBIMENTO(A) put(nRec, 34, A :8.8)
!-----------------------------------------------------------
! FIELD : NUMEROBL 
#define S_HeaderSIS_NUMEROBL peel(pick(nPos, 42, 20), " ")
#define R_HeaderSIS_NUMEROBL(A) put(nRec, 42, A :20.20)
!-----------------------------------------------------------
! FIELD : COMPLHEADER 
#define S_HeaderSIS_COMPLHEADER peel(pick(nPos, 62, 90), " ")
#define R_HeaderSIS_COMPLHEADER(A) put(nRec, 62, A :90.90)
!-----------------------------------------------------------
!===========================================================
! Line : HeaderNF 
!===========================================================
! FIELD : Identificacaodoregistro 
#define S_HeaderNFSIS_Identificacaodoregistro peel(pick(nPos, 1, 1), " ")
#define R_HeaderNFSIS_Identificacaodoregistro(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : SeriedaNF 
#define S_HeaderNFSIS_SeriedaNF peel(pick(nPos, 2, 3), " ")
#define R_HeaderNFSIS_SeriedaNF(A) put(nRec, 2, A :3.3)
!-----------------------------------------------------------
! FIELD : NumerodaNotaFiscal 
#define S_HeaderNFSIS_NumerodaNotaFiscal peel(pick(nPos, 5, 9), " ")
#define R_HeaderNFSIS_NumerodaNotaFiscal(A) put(nRec, 5, A :9.9)
!-----------------------------------------------------------
! FIELD : NumerodoPedidodeCompra 
#define S_HeaderNFSIS_NumerodoPedidodeCompra peel(pick(nPos, 14, 20), " ")
#define R_HeaderNFSIS_NumerodoPedidodeCompra(A) put(nRec, 14, A :20.20)
!-----------------------------------------------------------
! FIELD : COMPLHEADER2 
#define S_HeaderNFSIS_comnf  peel(pick(nPos, 34, 118), " ")
#define R_HeaderNFSIS_comnf(A) put(nRec, 34, A :118.118)
!-----------------------------------------------------------
!===========================================================
! Line : Detalhe 
!===========================================================
! FIELD : Identificacaodoregistro 
#define S_DetalheSIS_Identificacaodoregistro peel(pick(nPos, 1, 1), " ")
#define R_DetalheSIS_Identificacaodoregistro(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : SequenciadoprodutonaNotaFiscal 
#define S_DetalheSIS_SequenciadoprodutonaNotaFiscal peel(pick(nPos, 2, 6), " ")
#define R_DetalheSIS_SequenciadoprodutonaNotaFiscal(A) put(nRec, 2, A :6.6)
!-----------------------------------------------------------
! FIELD : CodigodoSKU 
#define S_DetalheSIS_CodigodoSKU peel(pick(nPos, 8, 25), " ")
#define R_DetalheSIS_CodigodoSKU(A) put(nRec, 8, A :25.25)
!-----------------------------------------------------------
! FIELD : Depositooustatusesperadonorecebimento 
#define S_DetalheSIS_Depositooustatusesperadonorecebimento peel(pick(nPos, 33, 30), " ")
#define R_DetalheSIS_Depositooustatusesperadonorecebimento(A) put(nRec, 33, A :30.30)
!-----------------------------------------------------------
! FIELD : Codigodolotedefabricacaorecebido 
#define S_DetalheSIS_Codigodolotedefabricacaorecebido peel(pick(nPos, 63, 20), " ")
#define R_DetalheSIS_Codigodolotedefabricacaorecebido(A) put(nRec, 63, A :20.20)
!-----------------------------------------------------------
! FIELD : Validadedolotedefabricacaodoproduto 
#define S_DetalheSIS_Validadedolotedefabricacaodoproduto peel(pick(nPos, 83, 8), " ")
#define R_DetalheSIS_Validadedolotedefabricacaodoproduto(A) put(nRec, 83, A :8.8)
!-----------------------------------------------------------
! FIELD : UnidadedeMedidadoproduto 
#define S_DetalheSIS_UnidadedeMedidadoproduto peel(pick(nPos, 91, 4), " ")
#define R_DetalheSIS_UnidadedeMedidadoproduto(A) put(nRec, 91, A :4.4)
!-----------------------------------------------------------
! FIELD : QuantidadedoprodutonaNF 
#define S_DetalheSIS_QuantidadedoprodutonaNF peel(pick(nPos, 95, 19), " ")
#define R_DetalheSIS_QuantidadedoprodutonaNF(A) put(nRec, 95, A :19.19)
!-----------------------------------------------------------
! FIELD : Quantidadeefetivamenterecebida 
#define S_DetalheSIS_Quantidadeefetivamenterecebida peel(pick(nPos, 114, 19), " ")
#define R_DetalheSIS_Quantidadeefetivamenterecebida(A) put(nRec, 114, A :19.19)
!-----------------------------------------------------------
! FIELD : QuantidadeAvariada 
#define S_DetalheSIS_QuantidadeAvariada peel(pick(nPos, 133, 19), " ")
#define R_DetalheSIS_QuantidadeAvariada(A) put(nRec, 133, A :19.19)
!-----------------------------------------------------------
!===========================================================
! Line : Trailler 
!===========================================================
! FIELD : Identificacaodoregistro 
#define S_TraillerSIS_Identificacaodoregistro peel(pick(nPos, 1, 1), " ")
#define R_TraillerSIS_Identificacaodoregistro(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : Totaldelinhasdodetalhe 
#define S_TraillerSIS_Totaldelinhasdodetalhe peel(pick(nPos, 2, 3), " ")
#define R_TraillerSIS_Totaldelinhasdodetalhe(A) put(nRec, 2, A :3.3)
!-----------------------------------------------------------
! FIELD : COMPLHEADER3 
#define S_TraillerSIS_COMPLHEADER3 peel(pick(nPos, 5, 147), " ")
#define R_TraillerSIS_COMPLHEADER3(A) put(nRec, 5, A :147.147)
!-----------------------------------------------------------

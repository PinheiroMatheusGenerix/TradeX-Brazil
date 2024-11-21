! File SISLEY_AJUSTES : 
!===========================================================
! Line : HEADER 
!===========================================================
! FIELD : TipoRegistoHeader 
#define S_HEADERSIS_TipoRegistoHeader peel(pick(nPos, 1, 1), " ")
#define R_HEADERSIS_TipoRegistoHeader(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : CNPJOrigem 
#define S_HEADERSIS_CNPJOrigem peel(pick(nPos, 2, 15), " ")
#define R_HEADERSIS_CNPJOrigem(A) put(nRec, 2, A :15.15)
!-----------------------------------------------------------
! FIELD : CNPJDestino 
#define S_HEADERSIS_CNPJDestino peel(pick(nPos, 17, 15), " ")
#define R_HEADERSIS_CNPJDestino(A) put(nRec, 17, A :15.15)
!-----------------------------------------------------------
! FIELD : DataHoraPosicao 
#define S_HEADERSIS_DataHoraPosicao peel(pick(nPos, 32, 14), " ")
#define R_HEADERSIS_DataHoraPosicao(A) put(nRec, 32, A :14.14)
!-----------------------------------------------------------
!===========================================================
! Line : DETAIL 
!===========================================================
! FIELD : TipoRegistoDetalhe 
#define S_DETAILSIS_TipoRegistoDetalhe peel(pick(nPos, 1, 1), " ")
#define R_DETAILSIS_TipoRegistoDetalhe(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : TipoMovimento 
#define S_DETAILSIS_TipoMovimento peel(pick(nPos, 2, 10), " ")
#define R_DETAILSIS_TipoMovimento(A) put(nRec, 2, A :10.10)
!-----------------------------------------------------------
! FIELD : DataAjuste 
#define S_DETAILSIS_DataAjuste peel(pick(nPos, 12, 8), " ")
#define R_DETAILSIS_DataAjuste(A) put(nRec, 12, A :8.8)
!-----------------------------------------------------------
! FIELD : CodigoProduto 
#define S_DETAILSIS_CodigoProduto peel(pick(nPos, 20, 25), " ")
#define R_DETAILSIS_CodigoProduto(A) put(nRec, 20, A :25.25)
!-----------------------------------------------------------
! FIELD : SentidoMovimento 
#define S_DETAILSIS_SentidoMovimento peel(pick(nPos, 45, 1), " ")
#define R_DETAILSIS_SentidoMovimento(A) put(nRec, 45, A :1.1)
!-----------------------------------------------------------
! FIELD : QuantidadeMovimentada 
#define S_DETAILSIS_QuantidadeMovimentada peel(pick(nPos, 46, 12), " ")
#define R_DETAILSIS_QuantidadeMovimentada(A) put(nRec, 46, A :12.12)
!-----------------------------------------------------------
! FIELD : DepositoOrigem 
#define S_DETAILSIS_DepositoOrigem peel(pick(nPos, 58, 4), " ")
#define R_DETAILSIS_DepositoOrigem(A) put(nRec, 58, A :4.4)
!-----------------------------------------------------------
! FIELD : LoteFabricacaoOrigem 
#define S_DETAILSIS_LoteFabricacaoOrigem peel(pick(nPos, 62, 10), " ")
#define R_DETAILSIS_LoteFabricacaoOrigem(A) put(nRec, 62, A :10.10)
!-----------------------------------------------------------
! FIELD : DepositoDestinoImobilizacao 
#define S_DETAILSIS_DepositoDestinoImobilizacao peel(pick(nPos, 72, 4), " ")
#define R_DETAILSIS_DepositoDestinoImobilizacao(A) put(nRec, 72, A :4.4)
!-----------------------------------------------------------
! FIELD : LotefabricacaoDestino 
#define S_DETAILSIS_LotefabricacaoDestino peel(pick(nPos, 76, 10), " ")
#define R_DETAILSIS_LotefabricacaoDestino(A) put(nRec, 76, A :10.10)
!-----------------------------------------------------------
!===========================================================
! Line : EstoqueAtual 
!===========================================================
! FIELD : TipoRegistoEA 
#define S_EstoqueAtual_TipoRegistoEA peel(pick(nPos, 1, 1), " ")
#define R_EstoqueAtual_TipoRegistoEA(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : CodigoProduto 
#define S_EstoqueAtual_CodigoProduto peel(pick(nPos, 2, 25), " ")
#define R_EstoqueAtual_CodigoProduto(A) put(nRec, 2, A :25.25)
!-----------------------------------------------------------
! FIELD : QuantidadeAtual 
#define S_EstoqueAtual_QuantidadeAtual peel(pick(nPos, 27, 12), " ")
#define R_EstoqueAtual_QuantidadeAtual(A) put(nRec, 27, A :12.12)
!-----------------------------------------------------------
! FIELD : DepositoCliente 
#define S_EstoqueAtual_DepositoCliente peel(pick(nPos, 39, 4), " ")
#define R_EstoqueAtual_DepositoCliente(A) put(nRec, 39, A :4.4)
!-----------------------------------------------------------
! FIELD : LoteAtual 
#define S_EstoqueAtual_LoteAtual peel(pick(nPos, 43, 10), " ")
#define R_EstoqueAtual_LoteAtual(A) put(nRec, 43, A :10.10)
!-----------------------------------------------------------

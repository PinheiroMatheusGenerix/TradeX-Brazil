! File NFRemessa : 
!===========================================================
! Line : IDArquivo 
!===========================================================
! FIELD : IDArquivo 
#define S_FILEHEADER_IDArquivo peel(pick(nPos, 1, 1), " ")
#define R_FILEHEADER_IDArquivo(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : CNPJOrigem
#define S_FILEHEADER_CNPJOrigem peel(pick(nPos, 2, 15), " ")
#define R_FILEHEADER_CNPJOrigem(A) put(nRec, 2, A :15.15)
!-----------------------------------------------------------
! FIELD : SolicitanteCNPJ 
#define S_FILEHEADER_CNPJDESTINATARIO peel(pick(nPos, 17, 15), " ")
#define R_FILEHEADER_CNPJDESTINATARIO(A) put(nRec, 17, A :15.15)
!-----------------------------------------------------------
!===========================================================
! Line : CABECALHORemessa 
!===========================================================
! FIELD : IdCabecalho 
#define S_NFHEADER_IdCabecalho peel(pick(nPos, 1, 1), " ")
#define R_NFHEADER_IdCabecalho(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : SERIENF
#define S_NFHEADER_SERIENF peel(pick(nPos, 2, 3), " ")
#define R_NFHEADER_SERIENF(A) put(nRec, 2, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMERONF
#define S_NFHEADER_NUMERONF peel(pick(nPos, 5, 6), " ")
#define R_NFHEADER_NUMERONF(A) put(nRec, 5, A :6.6)
!-----------------------------------------------------------
! FIELD : DATAEMISSAO
#define S_NFHEADER_DATAEMISSAO peel(pick(nPos, 11, 8), " ")
#define R_NFHEADER_DATAEMISSAO(A) put(nRec, 11, A :8.8)
!-----------------------------------------------------------
! FIELD : NUMEROPEDIDO 
#define S_NFHEADER_INDCNPJTRANSP peel(pick(nPos, 19, 1), " ")
#define R_NFHEADER_INDCNPJTRANSP(A) put(nRec, 19, A :1.1)
!-----------------------------------------------------------
! FIELD : CNPJTRANSP 
#define S_NFHEADER_CNPJTRANSP peel(pick(nPos, 20, 15), " ")
#define R_NFHEADER_CNPJTRANSP(A) put(nRec, 20, A :15.15)
!-----------------------------------------------------------
! FIELD : OBJETIVO 
#define S_NFHEADER_OBJETIVO peel(pick(nPos, 35, 1), " ")
#define R_NFHEADER_OBJETIVO(A) put(nRec, 35, A :1.1)
!-----------------------------------------------------------
!-----------------------------------------------------------
!-----------------------------------------------------------
!===========================================================
! Line : DETALHERemessa 
!===========================================================
! FIELD : IdDetalhePedido 
#define S_DETALHERemessa_IdDetalhePedido peel(pick(nPos, 1, 1), " ")
#define R_DETALHERemessa_IdDetalhePedido(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : Produto 
#define S_DETALHERemessa_Produto peel(pick(nPos, 2, 25), " ")
#define R_DETALHERemessa_Produto(A) put(nRec, 2, A :25.25)
!-----------------------------------------------------------
! FIELD : UnidadedeMedida 
#define S_DETALHERemessa_UnidadedeMedida peel(pick(nPos, 27, 4), " ")
#define R_DETALHERemessa_UnidadedeMedida(A) put(nRec, 27, A :4.4)
!-----------------------------------------------------------
! FIELD : Quantidade 
#define S_DETALHERemessa_Quantidade peel(pick(nPos, 31, 12), " ")
#define R_DETALHERemessa_Quantidade(A) put(nRec, 31, A :12.12)
!-----------------------------------------------------------
! FIELD : ValorUnitario 
#define S_DETALHERemessa_ValorUnitario peel(pick(nPos, 43, 19), " ")
#define R_DETALHERemessa_ValorUnitario(A) put(nRec, 43, A :19.19)
!-----------------------------------------------------------
! FIELD : ValorTOTAL
#define S_DETALHERemessa_ValorTOTAL peel(pick(nPos, 62, 19), " ")
#define R_DETALHERemessa_ValorTOTAL(A) put(nRec, 62, A :19.19)
!-----------------------------------------------------------
! FIELD : DEPOSITO 
#define S_DETALHERemessa_DEPOSITO peel(pick(nPos, 70, 30), " ")
#define R_DETALHERemessa_DEPOSITO(A) put(nRec, 70, A :30.30)
!-----------------------------------------------------------
! FIELD : Lote 
#define S_DETALHERemessa_Lote peel(pick(nPos, 100, 20), " ")
#define R_DETALHERemessa_Lote(A) put(nRec, 100, A :20.20)
!-----------------------------------------------------------
! FIELD : DataValidade 
#define S_DETALHERemessa_DataValidade peel(pick(nPos, 120, 8), " ")
#define R_DETALHERemessa_DataValidade(A) put(nRec, 120, A :8.8)
!-----------------------------------------------------------
! FIELD : CFOP 
#define S_DETALHERemessa_CFOP peel(pick(nPos, 128, 12), " ")
#define R_DETALHERemessa_CFOP(A) put(nRec, 128, A :12.12)
!-----------------------------------------------------------
! FIELD : SEQUENCIAITEMNF 
#define S_DETALHERemessa_SEQUENCIAITEMNF peel(pick(nPos, 153, 6), " ")
#define R_DETALHERemessa_SEQUENCIAITEMNF(A) put(nRec, 153, A :6.6)
!-----------------------------------------------------------
! FIELD : DIFERIDO 
#define S_DETALHERemessa_DIFERIDO peel(pick(nPos, 146, 1), " ")
#define R_DETALHERemessa_DIFERIDO(A) put(nRec, 146, A :1.1)
!-----------------------------------------------------------
!-----------------------------------------------------------
!===========================================================
! Line : TRAILLER 
!===========================================================
! FIELD : IdDetalhePedido 
#define S_TRAILLER_IdDetalhePedido peel(pick(nPos, 1, 1), " ")
#define R_TRAILLER_IdDetalhePedido(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMEROITENSDOCUMENTO 
#define S_TRAILLER_NUMEROITENSDOCUMENTO peel(pick(nPos, 2, 3), " ")
#define R_TRAILLER_NUMEROITENSDOCUMENTO(A) put(nRec, 2, A :3.3)
!-----------------------------------------------------------
! FIELD : VALORTOTALDOCUMENTO 
#define S_TRAILLER_VALORTOTALDOCUMENTO peel(pick(nPos, 5, 19), " ")
#define R_TRAILLER_VALORTOTALDOCUMENTO(A) put(nRec, 5, A :19.19)
!-----------------------------------------------------------
! FIELD : Quantidade 
#define S_TRAILLER_VALORTOTALMERCADORIA peel(pick(nPos, 24, 19), " ")
#define R_TRAILLER_VALORTOTALMERCADORIA(A) put(nRec, 24, A :19.19)
!-----------------------------------------------------------
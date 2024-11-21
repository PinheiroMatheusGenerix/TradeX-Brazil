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
! FIELD : COMPLHEADER 
#define S_HeaderSIS_COMPLHEADER peel(pick(nPos, 32, 62), " ")
#define R_HeaderSIS_COMPLHEADER(A) put(nRec, 32, A :62.62)
!-----------------------------------------------------------
!===========================================================
! Line : HeaderOC 
!===========================================================
! FIELD : TIPODEREGISTRO 
#define S_HeaderOCSIS_TIPODEREGISTRO peel(pick(nPos, 1, 1), " ")
#define R_HeaderOCSIS_TIPODEREGISTRO(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : TIPOOPERACAO
#define S_HeaderOCSIS_TIPOOPERACAO peel(pick(nPos, 2, 2), " ")
#define R_HeaderOCSIS_TIPOOPERACAO(A) put(nRec, 2, A :2.2)
!-----------------------------------------------------------
! FIELD : DATASEPARACAO 
#define S_HeaderOCSIS_DATASEPARACAO peel(pick(nPos, 4, 8), " ")
#define R_HeaderOCSIS_DATASEPARACAO(A) put(nRec, 4, A :8.8)
!-----------------------------------------------------------
! FIELD : ORDEMCARGA
#define S_HeaderOCSIS_ORDEMCARGA peel(pick(nPos, 12, 20), " ")
#define R_HeaderOCSIS_ORDEMCARGA(A) put(nRec, 12, A :20.20)
!-----------------------------------------------------------
! FIELD : CNPJTRANSP
#define S_HeaderOCSIS_CNPJTRANSP peel(pick(nPos, 32, 15), " ")
#define R_HeaderOCSIS_CNPJTRANSP(A) put(nRec, 32, A :15.15)
!-----------------------------------------------------------
! FIELD : esp 
#define S_HeaderOCSIS_esp peel(pick(nPos, 47, 47), " ")
#define R_HeaderOCSIS_esp(A) put(nRec, 47, A :47.47)
!-----------------------------------------------------------
!===========================================================
! Line : Header PEDIDO
!===========================================================
! FIELD : Identificacaodoregistro 
#define S_HeaderPedSIS_Identificacaodoregistro peel(pick(nPos, 1, 1), " ")
#define R_HeaderPedSIS_Identificacaodoregistro(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
!-----------------------------------------------------------
! FIELD : NumerodoPedidodeCompra 
#define S_HeaderPedSIS_NumerodoPedidodeCompra peel(pick(nPos, 2, 20), " ")
#define R_HeaderPedSIS_NumerodoPedidodeCompra(A) put(nRec, 2, A :20.20)
!-----------------------------------------------------------
! FIELD : COMPLHEADER2 
#define S_HeaderPedSIS_comnf  peel(pick(nPos, 22, 72), " ")
#define R_HeaderPedSIS_comnf(A) put(nRec, 22, A :72.72)
!-----------------------------------------------------------
!===========================================================
! Line : Header VOLUME
!===========================================================
! FIELD : Identificacaodoregistro 
#define S_HeaderVolSIS_Identificacaodoregistro peel(pick(nPos, 1, 1), " ")
#define R_HeaderVolSIS_Identificacaodoregistro(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : Identificacao Volume
#define S_HeaderVolSIS_IdentVolume peel(pick(nPos, 2, 30), " ")
#define R_HeaderVolSIS_IdentVolume(A) put(nRec, 2, A :30.30)
!-----------------------------------------------------------
! FIELD : Codigo Embalagem
#define S_HeaderVolSIS_CodEmb peel(pick(nPos, 32, 30), " ")
#define R_HeaderVolSIS_CodEmb(A) put(nRec, 32, A :30.30)
!-----------------------------------------------------------
! FIELD : Peso Bruto Volume
#define S_HeaderVolSIS_PesoBrutoVol peel(pick(nPos, 62, 8), " ")
#define R_HeaderVolSIS_PesoBrutoVol(A) put(nRec, 62, A :8.8)
!-----------------------------------------------------------
! FIELD : Peso Liquido Volume
#define S_HeaderVolSIS_PesoLiqVol peel(pick(nPos, 70, 8), " ")
#define R_HeaderVolSIS_PesoLiqVol(A) put(nRec, 70, A :8.8)
!-----------------------------------------------------------
! FIELD : Tipo Volume
#define S_HeaderVolSIS_TipoVol peel(pick(nPos, 78, 4), " ")
#define R_HeaderVolSIS_TipoVol(A) put(nRec, 78, A :4.4)
!-----------------------------------------------------------
! FIELD : COMPLHEADER2 
#define S_HeaderVolSIS_comnf  peel(pick(nPos, 82, 12), " ")
#define R_HeaderVolSIS_comnf(A) put(nRec, 82, A :12.12)
!-----------------------------------------------------------
! FIELD : AlturaVolume
#define S_HeaderVolSIS_AlturaVolume  peel(pick(nPos, 94, 10), " ")
#define R_HeaderVolSIS_AlturaVolume(A) put(nRec, 94, A :10.10)
!-----------------------------------------------------------
! FIELD : LarguraVolume
#define S_HeaderVolSIS_LarguraVolume  peel(pick(nPos, 104, 10), " ")
#define R_HeaderVolSIS_LarguraVolume(A) put(nRec, 104, A :10.10)
!-----------------------------------------------------------
! FIELD : ProfundidadeVolume
#define S_HeaderVolSIS_ProfundidadeVolume  peel(pick(nPos, 114, 10), " ")
#define R_HeaderVolSIS_ProfundidadeVolume(A) put(nRec, 114, A :10.10)
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
! FIELD : QuantidadeSeparada
#define S_DetalheSIS_QuantidadeSeparada peel(pick(nPos, 33, 7), " ")
#define R_DetalheSIS_QuantidadeSeparada(A) put(nRec, 33, A :7.7)
!-----------------------------------------------------------
! FIELD : Deposito
#define S_DetalheSIS_Deposito peel(pick(nPos, 40, 30), " ")
#define R_DetalheSIS_Deposito(A) put(nRec, 40, A :30.30)
!-----------------------------------------------------------
! FIELD : Lote
#define S_DetalheSIS_Lote peel(pick(nPos, 70, 20), " ")
#define R_DetalheSIS_Lote(A) put(nRec, 70, A :20.20)
!-----------------------------------------------------------
! FIELD : UnidadedeMedidadoproduto 
#define S_DetalheSIS_UnidadedeMedidadoproduto peel(pick(nPos, 90, 4), " ")
#define R_DetalheSIS_UnidadedeMedidadoproduto(A) put(nRec, 90, A :4.4)
!-----------------------------------------------------------

! FIELD : UnidadedeMedidadoproduto 
#define S_DetalheSIS_INSTRUCAOEMBALAGEM peel(pick(nPos, 94, 4), " ")
#define R_DetalheSIS_INSTRUCAOEMBALAGEM(A) put(nRec, 94, A :4.4)
!-----------------------------------------------------------
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
! FIELD : TotalPesoBruto 
#define S_TraillerSIS_TotalPesoBruto peel(pick(nPos, 5, 9), " ")
#define R_TraillerSIS_TotalPesoBruto(A) put(nRec, 5, A :9.9)
!-----------------------------------------------------------
! FIELD : TotalPesoLiquido 
#define S_TraillerSIS_TotalPesoLiq peel(pick(nPos, 14, 9), " ")
#define R_TraillerSIS_TotalPesoLiq(A) put(nRec, 14, A :9.9)
!-----------------------------------------------------------
! FIELD : QtdVolumes
#define S_TraillerSIS_QtdVolumes peel(pick(nPos, 23, 9), " ")
#define R_TraillerSIS_QtdVolumes(A) put(nRec, 23, A :9.9)
!-----------------------------------------------------------
! FIELD : COMPLHEADER3 
#define S_TraillerSIS_COMPLHEADER3 peel(pick(nPos, 32, 62), " ")
#define R_TraillerSIS_COMPLHEADER3(A) put(nRec, 32, A :62.62)
!-----------------------------------------------------------

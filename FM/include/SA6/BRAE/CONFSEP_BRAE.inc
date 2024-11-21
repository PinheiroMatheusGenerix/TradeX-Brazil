! File CONFSEP_BRAE : 
!===========================================================
! Line : LINE0 
!===========================================================
! FIELD : TIPODEREGISTRO 
#define S_LINE0_TIPODEREGISTRO peel(pick(nPos, 1, 1), " ")
#define R_LINE0_TIPODEREGISTRO(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : CNPJORIGEM 
#define S_LINE0_CNPJORIGEM peel(pick(nPos, 2, 15), " ")
#define R_LINE0_CNPJORIGEM(A) put(nRec, 2, A :15.15)
!-----------------------------------------------------------
! FIELD : CNPJDESTINATARIO 
#define S_LINE0_CNPJDESTINATARIO peel(pick(nPos, 17, 15), " ")
#define R_LINE0_CNPJDESTINATARIO(A) put(nRec, 17, A :15.15)
!-----------------------------------------------------------
! FIELD : CLIPROP 
#define S_LINE0_CLIPROP peel(pick(nPos, 32, 15), " ")
#define R_LINE0_CLIPROP(A) put(nRec, 32, A :15.15)
!-----------------------------------------------------------
! FIELD : COMPHEADER 
#define S_LINE0_COMPHEADER peel(pick(nPos, 47, 62), " ")
#define R_LINE0_COMPHEADER(A) put(nRec, 47, A :62.62)
!-----------------------------------------------------------
!===========================================================
! Line : LINE1 
!===========================================================
! FIELD : TIPODEREGISTRO 
#define S_LINE1_TIPODEREGISTRO peel(pick(nPos, 1, 1), " ")
#define R_LINE1_TIPODEREGISTRO(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : TIPOOPERACAO
#define S_LINE1_TIPOOPERACAO peel(pick(nPos, 2, 2), " ")
#define R_LINE1_TIPOOPERACAO(A) put(nRec, 2, A :2.2)
!-----------------------------------------------------------
! FIELD : DATASEPARACAO 
#define S_LINE1_DATASEPARACAO peel(pick(nPos, 4, 8), " ")
#define R_LINE1_DATASEPARACAO(A) put(nRec, 4, A :8.8)
!-----------------------------------------------------------
! FIELD : ORDEMCARGA
#define S_LINE1_ORDEMCARGA peel(pick(nPos, 12, 20), " ")
#define R_LINE1_ORDEMCARGA(A) put(nRec, 12, A :20.20)
!-----------------------------------------------------------
! FIELD : CNPJTRANSP
#define S_LINE1_CNPJTRANSP peel(pick(nPos, 32, 15), " ")
#define R_LINE1_CNPJTRANSP(A) put(nRec, 32, A :15.15)
!-----------------------------------------------------------
! FIELD : esp 
#define S_LINE1_esp peel(pick(nPos, 47, 47), " ")
#define R_LINE1_esp(A) put(nRec, 47, A :47.47)
!-----------------------------------------------------------
!===========================================================
! Line : LINE2
!===========================================================
! FIELD : Identificacaodoregistro 
#define S_LINE2_Identificacaodoregistro peel(pick(nPos, 1, 1), " ")
#define R_LINE2_Identificacaodoregistro(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
!-----------------------------------------------------------
! FIELD : NumerodoPedidodeCompra 
#define S_LINE2_NumerodoPedidodeCompra peel(pick(nPos, 2, 20), " ")
#define R_LINE2_NumerodoPedidodeCompra(A) put(nRec, 2, A :20.20)
!-----------------------------------------------------------
! FIELD : COMPLHEADER2 
#define S_LINE2_comnf  peel(pick(nPos, 22, 72), " ")
#define R_LINE2_comnf(A) put(nRec, 22, A :72.72)
!-----------------------------------------------------------
!===========================================================
! Line : LINE3
!===========================================================
! FIELD : Identificacaodoregistro 
#define S_LINE3_Identificacaodoregistro peel(pick(nPos, 1, 1), " ")
#define R_LINE3_Identificacaodoregistro(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : Identificacao Volume
#define S_LINE3_IdentVolume peel(pick(nPos, 2, 30), " ")
#define R_LINE3_IdentVolume(A) put(nRec, 2, A :30.30)
!-----------------------------------------------------------
! FIELD : Codigo Embalagem
#define S_LINE3_CodEmb peel(pick(nPos, 32, 30), " ")
#define R_LINE3_CodEmb(A) put(nRec, 32, A :30.30)
!-----------------------------------------------------------
! FIELD : Peso Bruto Volume
#define S_LINE3_PesoBrutoVol peel(pick(nPos, 62, 8), " ")
#define R_LINE3_PesoBrutoVol(A) put(nRec, 62, A :8.8)
!-----------------------------------------------------------
! FIELD : Peso Liquido Volume
#define S_LINE3_PesoLiqVol peel(pick(nPos, 70, 8), " ")
#define R_LINE3_PesoLiqVol(A) put(nRec, 70, A :8.8)
!-----------------------------------------------------------
! FIELD : Tipo Volume
#define S_LINE3_TipoVol peel(pick(nPos, 78, 4), " ")
#define R_LINE3_TipoVol(A) put(nRec, 78, A :4.4)
!-----------------------------------------------------------
! FIELD : COMPLHEADER2 
#define S_LINE3_comnf  peel(pick(nPos, 82, 12), " ")
#define R_LINE3_comnf(A) put(nRec, 82, A :12.12)
!-----------------------------------------------------------
! FIELD : AlturaVolume
#define S_LINE3_AlturaVolume  peel(pick(nPos, 94, 10), " ")
#define R_LINE3_AlturaVolume(A) put(nRec, 94, A :10.10)
!-----------------------------------------------------------
! FIELD : LarguraVolume
#define S_LINE3_LarguraVolume  peel(pick(nPos, 104, 10), " ")
#define R_LINE3_LarguraVolume(A) put(nRec, 104, A :10.10)
!-----------------------------------------------------------
! FIELD : ProfundidadeVolume
#define S_LINE3_ProfundidadeVolume  peel(pick(nPos, 114, 10), " ")
#define R_LINE3_ProfundidadeVolume(A) put(nRec, 114, A :10.10)
!-----------------------------------------------------------
!===========================================================
! Line : LINE4 
!===========================================================
! FIELD : Identificacaodoregistro 
#define S_LINE4_Identificacaodoregistro peel(pick(nPos, 1, 1), " ")
#define R_LINE4_Identificacaodoregistro(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : SequenciadoprodutonaNotaFiscal 
#define S_LINE4_SequenciadoprodutonaNotaFiscal peel(pick(nPos, 2, 6), " ")
#define R_LINE4_SequenciadoprodutonaNotaFiscal(A) put(nRec, 2, A :6.6)
!-----------------------------------------------------------
! FIELD : CodigodoSKU 
#define S_LINE4_CodigodoSKU peel(pick(nPos, 8, 20), " ")
#define R_LINE4_CodigodoSKU(A) put(nRec, 8, A :20.20)
!-----------------------------------------------------------
! FIELD : QuantidadeSeparada
#define S_LINE4_QuantidadeSeparada peel(pick(nPos, 28, 12), " ")
#define R_LINE4_QuantidadeSeparada(A) put(nRec, 28, A :12.12)
!-----------------------------------------------------------
! FIELD : Deposito
#define S_LINE4_Deposito peel(pick(nPos, 40, 30), " ")
#define R_LINE4_Deposito(A) put(nRec, 40, A :30.30)
!-----------------------------------------------------------
! FIELD : Lote
#define S_LINE4_Lote peel(pick(nPos, 70, 20), " ")
#define R_LINE4_Lote(A) put(nRec, 70, A :20.20)
!-----------------------------------------------------------
! FIELD : UnidadedeMedidadoproduto 
#define S_LINE4_UnidadedeMedidadoproduto peel(pick(nPos, 90, 4), " ")
#define R_LINE4_UnidadedeMedidadoproduto(A) put(nRec, 90, A :4.4)
!-----------------------------------------------------------

! FIELD : UnidadedeMedidadoproduto 
#define S_LINE4_INSTRUCAOEMBALAGEM peel(pick(nPos, 94, 4), " ")
#define R_LINE4_INSTRUCAOEMBALAGEM(A) put(nRec, 94, A :4.4)
!-----------------------------------------------------------
!-----------------------------------------------------------
!===========================================================
! Line : LINE9 
!===========================================================
! FIELD : Identificacaodoregistro 
#define S_LINE9_Identificacaodoregistro peel(pick(nPos, 1, 1), " ")
#define R_LINE9_Identificacaodoregistro(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : Totaldelinhasdodetalhe 
#define S_LINE9_Totaldelinhasdodetalhe peel(pick(nPos, 2, 3), " ")
#define R_LINE9_Totaldelinhasdodetalhe(A) put(nRec, 2, A :3.3)
!-----------------------------------------------------------
! FIELD : TotalPesoBruto 
#define S_LINE9_TotalPesoBruto peel(pick(nPos, 5, 9), " ")
#define R_LINE9_TotalPesoBruto(A) put(nRec, 5, A :9.9)
!-----------------------------------------------------------
! FIELD : TotalPesoLiquido 
#define S_LINE9_TotalPesoLiq peel(pick(nPos, 14, 9), " ")
#define R_LINE9_TotalPesoLiq(A) put(nRec, 14, A :9.9)
!-----------------------------------------------------------
! FIELD : QtdVolumes
#define S_LINE9_QtdVolumes peel(pick(nPos, 23, 9), " ")
#define R_LINE9_QtdVolumes(A) put(nRec, 23, A :9.9)
!-----------------------------------------------------------
! FIELD : COMPLHEADER3 
#define S_LINE9_COMPLHEADER3 peel(pick(nPos, 32, 62), " ")
#define R_LINE9_COMPLHEADER3(A) put(nRec, 32, A :62.62)
!-----------------------------------------------------------

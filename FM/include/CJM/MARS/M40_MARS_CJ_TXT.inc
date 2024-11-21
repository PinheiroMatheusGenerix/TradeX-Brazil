! File M40_TXT_LASA : 
!===========================================================
! Line : E0 
!===========================================================
! FIELD : TIPO_REGISTRO 
#define S_E0_TIPO_REGISTRO peel(pick(nPos, 1, 2), " ")
#define R_E0_TIPO_REGISTRO(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : VERSAO 
#define S_E0_VERSAO peel(pick(nPos, 3, 8), " ")
#define R_E0_VERSAO(A) put(nRec, 3, A :8.8)
!-----------------------------------------------------------
!===========================================================
! Line : ER 
!===========================================================
! FIELD : TIPO_REGISTRO 
#define S_ER_TIPO_REGISTRO peel(pick(nPos, 1, 2), " ")
#define R_ER_TIPO_REGISTRO(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : RAZAO_NOME 
#define S_ER_RAZAO_NOME peel(pick(nPos, 3, 50), " ")
#define R_ER_RAZAO_NOME(A) put(nRec, 3, A :50.50)
!-----------------------------------------------------------
! FIELD : CNPJ_CPF 
#define S_ER_CNPJ_CPF peel(pick(nPos, 53, 20), " ")
#define R_ER_CNPJ_CPF(A) put(nRec, 53, A :20.20)
!-----------------------------------------------------------
! FIELD : IE_RG 
#define S_ER_IE_RG peel(pick(nPos, 73, 20), " ")
#define R_ER_IE_RG(A) put(nRec, 73, A :20.20)
!-----------------------------------------------------------
! FIELD : END 
#define S_ER_END peel(pick(nPos, 93, 30), " ")
#define R_ER_END(A) put(nRec, 93, A :30.30)
!-----------------------------------------------------------
! FIELD : CIDADE 
#define S_ER_CIDADE peel(pick(nPos, 123, 30), " ")
#define R_ER_CIDADE(A) put(nRec, 123, A :30.30)
!-----------------------------------------------------------
! FIELD : ESTADO 
#define S_ER_ESTADO peel(pick(nPos, 153, 2), " ")
#define R_ER_ESTADO(A) put(nRec, 153, A :2.2)
!-----------------------------------------------------------
! FIELD : CEP 
#define S_ER_CEP peel(pick(nPos, 155, 8), " ")
#define R_ER_CEP(A) put(nRec, 155, A :8.8)
!-----------------------------------------------------------
! FIELD : BAIRRO 
#define S_ER_BAIRRO peel(pick(nPos, 163, 30), " ")
#define R_ER_BAIRRO(A) put(nRec, 163, A :30.30)
!-----------------------------------------------------------
!===========================================================
! Line : E1 
!===========================================================
! FIELD : TIPO_REGISTRO 
#define S_E1_TIPO_REGISTRO peel(pick(nPos, 1, 2), " ")
#define R_E1_TIPO_REGISTRO(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : TIPO 
#define S_E1_TIPO peel(pick(nPos, 3, 1), " ")
#define R_E1_TIPO(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : CFOP 
#define S_E1_CFOP peel(pick(nPos, 4, 8), " ")
#define R_E1_CFOP(A) put(nRec, 4, A :8.8)
!-----------------------------------------------------------
! FIELD : NATUREZA 
#define S_E1_NATUREZA peel(pick(nPos, 12, 55), " ")
#define R_E1_NATUREZA(A) put(nRec, 12, A :55.55)
!-----------------------------------------------------------
! FIELD : NUMERO 
#define S_E1_NUMERO peel(pick(nPos, 67, 9), " ")
#define R_E1_NUMERO(A) put(nRec, 67, A :9.9)
!-----------------------------------------------------------
! FIELD : DATA_EMISSAO 
#define S_E1_DATA_EMISSAO peel(pick(nPos, 76, 8), " ")
#define R_E1_DATA_EMISSAO(A) put(nRec, 76, A :8.8)
!-----------------------------------------------------------
! FIELD : BC_ICMS 
#define S_E1_BC_ICMS peel(pick(nPos, 84, 12), " ")
#define R_E1_BC_ICMS(A) put(nRec, 84, A :12.12)
!-----------------------------------------------------------
! FIELD : VL_ICMS 
#define S_E1_VL_ICMS peel(pick(nPos, 96, 12), " ")
#define R_E1_VL_ICMS(A) put(nRec, 96, A :12.12)
!-----------------------------------------------------------
! FIELD : VL_IPI 
#define S_E1_VL_IPI peel(pick(nPos, 108, 12), " ")
#define R_E1_VL_IPI(A) put(nRec, 108, A :12.12)
!-----------------------------------------------------------
! FIELD : TOT_MERC 
#define S_E1_TOT_MERC peel(pick(nPos, 120, 12), " ")
#define R_E1_TOT_MERC(A) put(nRec, 120, A :12.12)
!-----------------------------------------------------------
! FIELD : TOT_NOTA 
#define S_E1_TOT_NOTA peel(pick(nPos, 132, 12), " ")
#define R_E1_TOT_NOTA(A) put(nRec, 132, A :12.12)
!-----------------------------------------------------------
! FIELD : TRANSP_RAZAO_NOME 
#define S_E1_TRANSP_RAZAO_NOME peel(pick(nPos, 144, 30), " ")
#define R_E1_TRANSP_RAZAO_NOME(A) put(nRec, 144, A :30.30)
!-----------------------------------------------------------
! FIELD : PLACA_VEIC 
#define S_E1_PLACA_VEIC peel(pick(nPos, 174, 8), " ")
#define R_E1_PLACA_VEIC(A) put(nRec, 174, A :8.8)
!-----------------------------------------------------------
! FIELD : UF_PLACA 
#define S_E1_UF_PLACA peel(pick(nPos, 182, 2), " ")
#define R_E1_UF_PLACA(A) put(nRec, 182, A :2.2)
!-----------------------------------------------------------
! FIELD : SUBST_TRIB 
#define S_E1_SUBST_TRIB peel(pick(nPos, 184, 20), " ")
#define R_E1_SUBST_TRIB(A) put(nRec, 184, A :20.20)
!-----------------------------------------------------------
! FIELD : NUMERO_PEDIDO 
#define S_E1_NUMERO_PEDIDO peel(pick(nPos, 204, 8), " ")
#define R_E1_NUMERO_PEDIDO(A) put(nRec, 204, A :8.8)
!-----------------------------------------------------------
! FIELD : NOTA_FORNECEDOR 
#define S_E1_NOTA_FORNECEDOR peel(pick(nPos, 212, 8), " ")
#define R_E1_NOTA_FORNECEDOR(A) put(nRec, 212, A :8.8)
!-----------------------------------------------------------
! FIELD : CNPJ_FORNECEDOR 
#define S_E1_CNPJ_FORNECEDOR peel(pick(nPos, 220, 20), " ")
#define R_E1_CNPJ_FORNECEDOR(A) put(nRec, 220, A :20.20)
!-----------------------------------------------------------
! FIELD : FORNECEDOR 
#define S_E1_FORNECEDOR peel(pick(nPos, 240, 50), " ")
#define R_E1_FORNECEDOR(A) put(nRec, 240, A :50.50)
!-----------------------------------------------------------
! FIELD : CANCELADA 
#define S_E1_CANCELADA peel(pick(nPos, 290, 10), " ")
#define R_E1_CANCELADA(A) put(nRec, 290, A :10.10)
!-----------------------------------------------------------
! FIELD : SERIE_NF 
#define S_E1_SERIE_NF peel(pick(nPos, 300, 3), " ")
#define R_E1_SERIE_NF(A) put(nRec, 300, A :3.3)
!-----------------------------------------------------------
! FIELD : PESO_BRUTO 
#define S_E1_PESO_BRUTO peel(pick(nPos, 303, 12), " ")
#define R_E1_PESO_BRUTO(A) put(nRec, 303, A :12.12)
!-----------------------------------------------------------
! FIELD : DOCNUM 
#define S_E1_DOCNUM peel(pick(nPos, 315, 10), " ")
#define R_E1_DOCNUM(A) put(nRec, 315, A :10.10)
!-----------------------------------------------------------
! FIELD : NFE_NUMBER 
#define S_E1_NFE_NUMBER peel(pick(nPos, 325, 44), " ")
#define R_E1_NFE_NUMBER(A) put(nRec, 325, A :44.44)
!-----------------------------------------------------------
!===========================================================
! Line : E2 
!===========================================================
! FIELD : TIPO_REGISTRO 
#define S_E2_TIPO_REGISTRO peel(pick(nPos, 1, 2), " ")
#define R_E2_TIPO_REGISTRO(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : NUMERO 
#define S_E2_NUMERO peel(pick(nPos, 3, 9), " ")
#define R_E2_NUMERO(A) put(nRec, 3, A :9.9)
!-----------------------------------------------------------
! FIELD : NUM_ITEM 
#define S_E2_NUM_ITEM peel(pick(nPos, 12, 3), " ")
#define R_E2_NUM_ITEM(A) put(nRec, 12, A :3.3)
!-----------------------------------------------------------
! FIELD : COD_ITEM_CLIENTE 
#define S_E2_COD_ITEM_CLIENTE peel(pick(nPos, 15, 15), " ")
#define R_E2_COD_ITEM_CLIENTE(A) put(nRec, 15, A :15.15)
!-----------------------------------------------------------
! FIELD : QUANTIDADE 
#define S_E2_QUANTIDADE peel(pick(nPos, 30, 9), " ")
#define R_E2_QUANTIDADE(A) put(nRec, 30, A :9.9)
!-----------------------------------------------------------
! FIELD : VALOR 
#define S_E2_VALOR peel(pick(nPos, 39, 12), " ")
#define R_E2_VALOR(A) put(nRec, 39, A :12.12)
!-----------------------------------------------------------
! FIELD : ALIQ_ICMS 
#define S_E2_ALIQ_ICMS peel(pick(nPos, 51, 4), " ")
#define R_E2_ALIQ_ICMS(A) put(nRec, 51, A :4.4)
!-----------------------------------------------------------
! FIELD : ALIQ_IPI 
#define S_E2_ALIQ_IPI peel(pick(nPos, 55, 4), " ")
#define R_E2_ALIQ_IPI(A) put(nRec, 55, A :4.4)
!-----------------------------------------------------------
! FIELD : UNIDADE_MEDIDA 
#define S_E2_UNIDADE_MEDIDA peel(pick(nPos, 59, 3), " ")
#define R_E2_UNIDADE_MEDIDA(A) put(nRec, 59, A :3.3)
!-----------------------------------------------------------
! FIELD : FISCAL 
#define S_E2_FISCAL peel(pick(nPos, 62, 10), " ")
#define R_E2_FISCAL(A) put(nRec, 62, A :10.10)
!-----------------------------------------------------------
! FIELD : CHARGE 
#define S_E2_CHARGE peel(pick(nPos, 72, 20), " ")
#define R_E2_CHARGE(A) put(nRec, 72, A :20.20)
!-----------------------------------------------------------
! FIELD : DATA_VALIDADE  
#define S_E2_DATA_VALIDADE  peel(pick(nPos, 92, 8), " ")
#define R_E2_DATA_VALIDADE (A) put(nRec, 92, A :8.8)
!-----------------------------------------------------------
! FIELD : PESO_BRUTO  
#define S_E2_PESO_BRUTO  peel(pick(nPos, 100, 12), " ")
#define R_E2_PESO_BRUTO (A) put(nRec, 100, A :12.12)
!-----------------------------------------------------------
! FIELD : LOTE_PRODUTO  
#define S_E2_LOTE_PRODUTO  peel(pick(nPos, 113, 10), " ")
#define R_E2_LOTE_PRODUTO (A) put(nRec, 113, A :10.10)
!-----------------------------------------------------------
! FIELD : STATUS_LOTE  
#define S_E2_STATUS_LOTE  peel(pick(nPos, 124, 1), " ")
#define R_E2_STATUS_LOTE (A) put(nRec, 124, A :1.1)
!-----------------------------------------------------------
! FIELD : DATA_VALIDADE2  
#define S_E2_DATA_VALIDADE2  peel(pick(nPos, 126, 8), " ")
#define R_E2_DATA_VALIDADE2 (A) put(nRec, 126, A :8.8)
!-----------------------------------------------------------
! FIELD : PLANTA  
#define S_E2_PLANTA  peel(pick(nPos, 135, 4), " ")
#define R_E2_PLANTA (A) put(nRec, 135, A :4.4)
!-----------------------------------------------------------
! FIELD : SPLIT_ITEM  
#define S_E2_SPLIT_ITEM  peel(pick(nPos, 140, 6), " ")
#define R_E2_SPLIT_ITEM (A) put(nRec, 140, A :6.6)
!-----------------------------------------------------------
! FIELD : ITEM_REF  
#define S_E2_ITEM_REF  peel(pick(nPos, 147, 5), " ")
#define R_E2_ITEM_REF (A) put(nRec, 147, A :5.5)
!-----------------------------------------------------------
! FIELD : DOC_REF  
#define S_E2_DOC_REF  peel(pick(nPos, 153, 10), " ")
#define R_E2_DOC_REF (A) put(nRec, 153, A :10.10)
!-----------------------------------------------------------
!===========================================================
! Line : E3 
!===========================================================
! FIELD : TIPO_REGISTRO 
#define S_E3_TIPO_REGISTRO peel(pick(nPos, 1, 2), " ")
#define R_E3_TIPO_REGISTRO(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : QTIDADE_ITENS 
#define S_E3_QTIDADE_ITENS peel(pick(nPos, 3, 3), " ")
#define R_E3_QTIDADE_ITENS(A) put(nRec, 3, A :3.3)
!-----------------------------------------------------------
! FIELD : NUM_PED 
#define S_E3_NUM_PED peel(pick(nPos, 6, 9), " ")
#define R_E3_NUM_PED(A) put(nRec, 6, A :9.9)
!-----------------------------------------------------------

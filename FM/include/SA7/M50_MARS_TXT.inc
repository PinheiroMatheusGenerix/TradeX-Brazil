! File M40_TXT_LASA : 
!===========================================================
! Line : S0 
!===========================================================
! FIELD : TIPO_REGISTRO 
#define S_S0_TIPO_REGISTRO peel(pick(nPos, 1, 2), " ")
#define R_S0_TIPO_REGISTRO(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : VERSAO 
#define S_S0_VERSAO peel(pick(nPos, 3, 8), " ")
#define R_S0_VERSAO(A) put(nRec, 3, A :8.8)
!-----------------------------------------------------------
!===========================================================
! Line : SR 
!===========================================================
! FIELD : TIPO_REGISTRO 
#define S_SR_TIPO_REGISTRO peel(pick(nPos, 1, 2), " ")
#define R_SR_TIPO_REGISTRO(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : RAZAO_NOME 
#define S_SR_RAZAO_NOME peel(pick(nPos, 3, 50), " ")
#define R_SR_RAZAO_NOME(A) put(nRec, 3, A :50.50)
!-----------------------------------------------------------
! FIELD : CNPJ_CPF 
#define S_SR_CNPJ_CPF peel(pick(nPos, 53, 20), " ")
#define R_SR_CNPJ_CPF(A) put(nRec, 53, A :20.20)
!-----------------------------------------------------------
! FIELD : IE_RG 
#define S_SR_IE_RG peel(pick(nPos, 73, 20), " ")
#define R_SR_IE_RG(A) put(nRec, 73, A :20.20)
!-----------------------------------------------------------
! FIELD : END 
#define S_SR_END peel(pick(nPos, 93, 30), " ")
#define R_SR_END(A) put(nRec, 93, A :30.30)
!-----------------------------------------------------------
! FIELD : CIDADE 
#define S_SR_CIDADE peel(pick(nPos, 123, 30), " ")
#define R_SR_CIDADE(A) put(nRec, 123, A :30.30)
!-----------------------------------------------------------
! FIELD : ESTADO 
#define S_SR_ESTADO peel(pick(nPos, 153, 2), " ")
#define R_SR_ESTADO(A) put(nRec, 153, A :2.2)
!-----------------------------------------------------------
! FIELD : CEP 
#define S_SR_CEP peel(pick(nPos, 155, 8), " ")
#define R_SR_CEP(A) put(nRec, 155, A :8.8)
!-----------------------------------------------------------
! FIELD : BAIRRO 
#define S_SR_BAIRRO peel(pick(nPos, 163, 30), " ")
#define R_SR_BAIRRO(A) put(nRec, 163, A :30.30)
!-----------------------------------------------------------
!===========================================================
! Line : S1 
!===========================================================
! FIELD : TIPO_REGISTRO 
#define S_S1_TIPO_REGISTRO peel(pick(nPos, 1, 2), " ")
#define R_S1_TIPO_REGISTRO(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : NUMERO 
#define S_S1_NUMERO peel(pick(nPos, 3, 8), " ")
#define R_S1_NUMERO(A) put(nRec, 3, A :8.8)
!-----------------------------------------------------------
! FIELD : SERIE_NF 
#define S_S1_SERIE_NF peel(pick(nPos, 11, 3), " ")
#define R_S1_SERIE_NF(A) put(nRec, 11, A :3.3)
!-----------------------------------------------------------
! FIELD : DATA_EMISSAO 
#define S_S1_DATA_EMISSAO peel(pick(nPos, 14, 8), " ")
#define R_S1_DATA_EMISSAO(A) put(nRec, 14, A :8.8)
!-----------------------------------------------------------
! FIELD : CFOP 
#define S_S1_CFOP peel(pick(nPos, 22, 8), " ")
#define R_S1_CFOP(A) put(nRec, 22, A :8.8)
!-----------------------------------------------------------
! FIELD : NATUREZA 
#define S_S1_NATUREZA peel(pick(nPos, 30, 55), " ")
#define R_S1_NATUREZA(A) put(nRec, 30, A :55.55)
!-----------------------------------------------------------
! FIELD : ROMANEIO 
#define S_S1_ROMANEIO peel(pick(nPos, 85, 6), " ")
#define R_S1_ROMANEIO(A) put(nRec, 85, A :6.6)
!-----------------------------------------------------------
! FIELD : BC_ICMS 
#define S_S1_BC_ICMS peel(pick(nPos, 91, 12), " ")
#define R_S1_BC_ICMS(A) put(nRec, 91, A :12.12)
!-----------------------------------------------------------
! FIELD : VL_ICMS 
#define S_S1_VL_ICMS peel(pick(nPos, 103, 12), " ")
#define R_S1_VL_ICMS(A) put(nRec, 103, A :12.12)
!-----------------------------------------------------------
! FIELD : VL_IPI 
#define S_S1_VL_IPI peel(pick(nPos, 115, 12), " ")
#define R_S1_VL_IPI(A) put(nRec, 115, A :12.12)
!-----------------------------------------------------------
! FIELD : TOT_MERC 
#define S_S1_TOT_MERC peel(pick(nPos, 127, 12), " ")
#define R_S1_TOT_MERC(A) put(nRec, 127, A :12.12)
!-----------------------------------------------------------
! FIELD : TOT_NOTA 
#define S_S1_TOT_NOTA peel(pick(nPos, 139, 12), " ")
#define R_S1_TOT_NOTA(A) put(nRec, 139, A :12.12)
!-----------------------------------------------------------
! FIELD : BC_ICMS_SUBST 
#define S_S1_BC_ICMS_SUBST peel(pick(nPos, 151, 12), " ")
#define R_S1_BC_ICMS_SUBST(A) put(nRec, 151, A :12.12)
!-----------------------------------------------------------
! FIELD : SUBST_TRIB 
#define S_S1_SUBST_TRIB peel(pick(nPos, 163, 20), " ")
#define R_S1_SUBST_TRIB(A) put(nRec, 163, A :20.20)
!-----------------------------------------------------------
! FIELD : VL_ICMS_SUBST 
#define S_S1_VL_ICMS_SUBST peel(pick(nPos, 183, 12), " ")
#define R_S1_VL_ICMS_SUBST(A) put(nRec, 183, A :12.12)
!-----------------------------------------------------------
! FIELD : NUMERO_DELIVERY 
#define S_S1_NUMERO_DELIVERY peel(pick(nPos, 195, 8), " ")
#define R_S1_NUMERO_DELIVERY(A) put(nRec, 195, A :8.8)
!-----------------------------------------------------------
! FIELD : STATUS 
#define S_S1_STATUS peel(pick(nPos, 203, 1), " ")
#define R_S1_STATUS(A) put(nRec, 203, A :1.1)
!-----------------------------------------------------------
! FIELD : CANCELADA 
#define S_S1_CANCELADA peel(pick(nPos, 204, 10), " ")
#define R_S1_CANCELADA(A) put(nRec, 204, A :10.10)
!-----------------------------------------------------------
! FIELD : VENDA_ESTOQUE 
#define S_S1_VENDA_ESTOQUE peel(pick(nPos, 214, 1), " ")
#define R_S1_VENDA_ESTOQUE(A) put(nRec, 214, A :1.1)
!-----------------------------------------------------------
! FIELD : PESO_LIQUIDO 
#define S_S1_PESO_LIQUIDO peel(pick(nPos, 215, 8), " ")
#define R_S1_PESO_LIQUIDO(A) put(nRec, 215, A :8.8)
!-----------------------------------------------------------
! FIELD : PESO_BRUTO 
#define S_S1_PESO_BRUTO peel(pick(nPos, 223, 8), " ")
#define R_S1_PESO_BRUTO(A) put(nRec, 223, A :8.8)
!-----------------------------------------------------------
! FIELD : PESO_CUBADO 
#define S_S1_PESO_CUBADO peel(pick(nPos, 231, 8), " ")
#define R_S1_PESO_CUBADO(A) put(nRec, 231, A :8.8)
!-----------------------------------------------------------
! FIELD : VOLUMES 
#define S_S1_VOLUMES peel(pick(nPos, 239, 6), " ")
#define R_S1_VOLUMES(A) put(nRec, 239, A :6.6)
!-----------------------------------------------------------
! FIELD : REF_CLIENTE 
#define S_S1_REF_CLIENTE peel(pick(nPos, 245, 10), " ")
#define R_S1_REF_CLIENTE(A) put(nRec, 245, A :10.10)
!-----------------------------------------------------------
!===========================================================
! Line : S2 
!===========================================================
! FIELD : TIPO_REGISTRO 
#define S_S2_TIPO_REGISTRO peel(pick(nPos, 1, 2), " ")
#define R_S2_TIPO_REGISTRO(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : DEST_PESSOA 
#define S_S2_DEST_PESSOA peel(pick(nPos, 3, 1), " ")
#define R_S2_DEST_PESSOA(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : DEST_RAZAO_NOME 
#define S_S2_DEST_RAZAO_NOME peel(pick(nPos, 4, 50), " ")
#define R_S2_DEST_RAZAO_NOME(A) put(nRec, 4, A :50.50)
!-----------------------------------------------------------
! FIELD : DEST_CNPJ_CPF 
#define S_S2_DEST_CNPJ_CPF peel(pick(nPos, 54, 20), " ")
#define R_S2_DEST_CNPJ_CPF(A) put(nRec, 54, A :20.20)
!-----------------------------------------------------------
! FIELD : DEST_IE_RG 
#define S_S2_DEST_IE_RG peel(pick(nPos, 74, 20), " ")
#define R_S2_DEST_IE_RG(A) put(nRec, 74, A :20.20)
!-----------------------------------------------------------
! FIELD : DEST_END 
#define S_S2_DEST_END peel(pick(nPos, 94, 30), " ")
#define R_S2_DEST_END(A) put(nRec, 94, A :30.30)
!-----------------------------------------------------------
! FIELD : DEST_CIDADE 
#define S_S2_DEST_CIDADE peel(pick(nPos, 124, 30), " ")
#define R_S2_DEST_CIDADE(A) put(nRec, 124, A :30.30)
!-----------------------------------------------------------
! FIELD : DEST_ESTADO 
#define S_S2_DEST_ESTADO peel(pick(nPos, 154, 2), " ")
#define R_S2_DEST_ESTADO(A) put(nRec, 154, A :2.2)
!-----------------------------------------------------------
! FIELD : DEST_CEP 
#define S_S2_DEST_CEP peel(pick(nPos, 156, 8), " ")
#define R_S2_DEST_CEP(A) put(nRec, 156, A :8.8)
!-----------------------------------------------------------
! FIELD : DEST_BAIRRO 
#define S_S2_DEST_BAIRRO peel(pick(nPos, 164, 30), " ")
#define R_S2_DEST_BAIRRO(A) put(nRec, 164, A :30.30)
!-----------------------------------------------------------
!===========================================================
! Line : S3 
!===========================================================
! FIELD : TIPO_REGISTRO 
#define S_S3_TIPO_REGISTRO peel(pick(nPos, 1, 2), " ")
#define R_S3_TIPO_REGISTRO(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : CNPJ_CPF_TRANSP 
#define S_S3_CNPJ_CPF_TRANSP peel(pick(nPos, 3, 30), " ")
#define R_S3_CNPJ_CPF_TRANSP(A) put(nRec, 3, A :30.30)
!-----------------------------------------------------------
! FIELD : IE_RG_TRANSP 
#define S_S3_IE_RG_TRANSP peel(pick(nPos, 33, 20), " ")
#define R_S3_IE_RG_TRANSP(A) put(nRec, 33, A :20.20)
!-----------------------------------------------------------
! FIELD : TRANSP_RAZAO_NOME 
#define S_S3_TRANSP_RAZAO_NOME peel(pick(nPos, 53, 30), " ")
#define R_S3_TRANSP_RAZAO_NOME(A) put(nRec, 53, A :30.30)
!-----------------------------------------------------------
! FIELD : END_TRANSP 
#define S_S3_END_TRANSP peel(pick(nPos, 83, 30), " ")
#define R_S3_END_TRANSP(A) put(nRec, 83, A :30.30)
!-----------------------------------------------------------
! FIELD : MUN_TRANSP 
#define S_S3_MUN_TRANSP peel(pick(nPos, 113, 20), " ")
#define R_S3_MUN_TRANSP(A) put(nRec, 113, A :20.20)
!-----------------------------------------------------------
! FIELD : ESTADO_TRANSP 
#define S_S3_ESTADO_TRANSP peel(pick(nPos, 133, 2), " ")
#define R_S3_ESTADO_TRANSP(A) put(nRec, 133, A :2.2)
!-----------------------------------------------------------
! FIELD : TRANSPORTE 
#define S_S3_TRANSPORTE peel(pick(nPos, 135, 10), " ")
#define R_S3_TRANSPORTE(A) put(nRec, 135, A :10.10)
!-----------------------------------------------------------
!===========================================================
! Line : S4 
!===========================================================
! FIELD : TIPO_REGISTRO 
#define S_S4_TIPO_REGISTRO peel(pick(nPos, 1, 2), " ")
#define R_S4_TIPO_REGISTRO(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : NUMERO 
#define S_S4_NUMERO peel(pick(nPos, 3, 8), " ")
#define R_S4_NUMERO(A) put(nRec, 3, A :8.8)
!-----------------------------------------------------------
! FIELD : NUM_ITEM 
#define S_S4_NUM_ITEM peel(pick(nPos, 11, 3), " ")
#define R_S4_NUM_ITEM(A) put(nRec, 11, A :3.3)
!-----------------------------------------------------------
! FIELD : COD_ITEM_CLIENTE 
#define S_S4_COD_ITEM_CLIENTE peel(pick(nPos, 14, 15), " ")
#define R_S4_COD_ITEM_CLIENTE(A) put(nRec, 14, A :15.15)
!-----------------------------------------------------------
! FIELD : QUANTIDADE 
#define S_S4_QUANTIDADE peel(pick(nPos, 29, 9), " ")
#define R_S4_QUANTIDADE(A) put(nRec, 29, A :9.9)
!-----------------------------------------------------------
! FIELD : UNIDADE_MEDIDA 
#define S_S4_UNIDADE_MEDIDA peel(pick(nPos, 38, 3), " ")
#define R_S4_UNIDADE_MEDIDA(A) put(nRec, 38, A :3.3)
!-----------------------------------------------------------
! FIELD : VALOR 
#define S_S4_VALOR peel(pick(nPos, 41, 12), " ")
#define R_S4_VALOR(A) put(nRec, 41, A :12.12)
!-----------------------------------------------------------
! FIELD : VALOR_TOTAL 
#define S_S4_VALOR_TOTAL peel(pick(nPos, 53, 12), " ")
#define R_S4_VALOR_TOTAL(A) put(nRec, 53, A :12.12)
!-----------------------------------------------------------
! FIELD : ALIQ_ICMS 
#define S_S4_ALIQ_ICMS peel(pick(nPos, 65, 4), " ")
#define R_S4_ALIQ_ICMS(A) put(nRec, 65, A :4.4)
!-----------------------------------------------------------
! FIELD : ALIQ_IPI 
#define S_S4_ALIQ_IPI peel(pick(nPos, 69, 4), " ")
#define R_S4_ALIQ_IPI(A) put(nRec, 69, A :4.4)
!-----------------------------------------------------------
! FIELD : CLASS_FISCAL 
#define S_S4_CLASS_FISCAL peel(pick(nPos, 73, 10), " ")
#define R_S4_CLASS_FISCAL(A) put(nRec, 73, A :10.10)
!-----------------------------------------------------------
! FIELD : LOTE_PRODUTO 
#define S_S4_LOTE_PRODUTO peel(pick(nPos, 83, 10), " ")
#define R_S4_LOTE_PRODUTO(A) put(nRec, 83, A :10.10)
!-----------------------------------------------------------
! FIELD : ITEM_PARTICAO  
#define S_S4_ITEM_PARTICAO  peel(pick(nPos, 96, 6), " ")
#define R_S4_ITEM_PARTICAO (A) put(nRec, 96, A :6.6)
!-----------------------------------------------------------
!===========================================================
! Line : S5 
!===========================================================
! FIELD : TIPO_REGISTRO 
#define S_S5_TIPO_REGISTRO peel(pick(nPos, 1, 2), " ")
#define R_S5_TIPO_REGISTRO(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : QTIDADE_ITENS 
#define S_S5_QTIDADE_ITENS peel(pick(nPos, 3, 3), " ")
#define R_S5_QTIDADE_ITENS(A) put(nRec, 3, A :3.3)
!-----------------------------------------------------------
! FIELD : NUM_PED 
#define S_S5_NUM_PED peel(pick(nPos, 6, 8), " ")
#define R_S5_NUM_PED(A) put(nRec, 6, A :8.8)
!-----------------------------------------------------------

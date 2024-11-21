! File NFOUT_SEMPARAR : 
!===========================================================
! Line : 0HEADER 
!===========================================================
! FIELD : TIPO_REGISTRO 
#define S_0HEADER_TIPO_REGISTRO peel(pick(nPos, 1, 2), " ")
#define R_0HEADER_TIPO_REGISTRO(A) put(nRec, 1, A :2.2))
!-----------------------------------------------------------
! FIELD : CNPJ_ORIGEM 
#define S_0HEADER_CNPJ_ORIGEM peel(pick(nPos, 2, 15), " ")
#define R_0HEADER_CNPJ_ORIGEM(A) put(nRec, 2, A :15.15)
!-----------------------------------------------------------
! FIELD : CNPJ_DEST 
#define S_0HEADER_CNPJ_DEST peel(pick(nPos, 17, 15), " ")
#define R_0HEADER_CNPJ_DEST(A) put(nRec, 17, A :15.15))
!-----------------------------------------------------------
! FIELD : CLIENTE_PROPRI 
#define S_0HEADER_CLIENTE_PROPRI peel(pick(nPos, 32, 15), " ")
#define R_0HEADER_CLIENTE_PROPRI(A) put(nRec, 32, A :15.15)
!-----------------------------------------------------------
!===========================================================
! Line : 1HEADERNF 
!===========================================================
! FIELD : TIPO_REGISTRO 
#define S_1HEADERNF_TIPO_REGISTRO peel(pick(nPos, 1, 1), " ")
#define R_1HEADERNF_TIPO_REGISTRO(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : TIPO_OPERACAO 
#define S_1HEADERNF_TIPO_OPERACAO peel(pick(nPos, 2, 2), " ")
#define R_1HEADERNF_TIPO_OPERACAO(A) put(nRec, 2, A :2.2)
!-----------------------------------------------------------
! FIELD : SERIE_NF 
#define S_1HEADERNF_SERIE_NF peel(pick(nPos, 4, 3), " ")
#define R_1HEADERNF_SERIE_NF(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMERO_NF 
#define S_1HEADERNF_NUMERO_NF peel(pick(nPos, 7, 9), " ")
#define R_1HEADERNF_NUMERO_NF(A) put(nRec, 7, A :9.9)
!-----------------------------------------------------------
! FIELD : DATA_EMISSAO 
#define S_1HEADERNF_DATA_EMISSAO peel(pick(nPos, 16, 8), " ")
#define R_1HEADERNF_DATA_EMISSAO(A) put(nRec, 16, A :8.8)
!-----------------------------------------------------------
! FIELD : CNPJ_TRANSP 
#define S_1HEADERNF_CNPJ_TRANSP peel(pick(nPos, 24, 15), " ")
#define R_1HEADERNF_CNPJ_TRANSP(A) put(nRec, 24, A :15.15)
!-----------------------------------------------------------
! FIELD : NOME_DEST 
#define S_1HEADERNF_NOME_DEST peel(pick(nPos, 39, 50), " ")
#define R_1HEADERNF_NOME_DEST(A) put(nRec, 39, A :50.50)
!-----------------------------------------------------------
! FIELD : CNPJ_CPFDEST 
#define S_1HEADERNF_CNPJ_CPFDEST peel(pick(nPos, 89, 15), " ")
#define R_1HEADERNF_CNPJ_CPFDEST(A) put(nRec, 89, A :15.15)
!-----------------------------------------------------------
! FIELD : IE_DEST 
#define S_1HEADERNF_IE_DEST peel(pick(nPos, 104, 20), " ")
#define R_1HEADERNF_IE_DEST(A) put(nRec, 104, A :20.20)
!-----------------------------------------------------------
! FIELD : ENDERECO_DEST 
#define S_1HEADERNF_ENDERECO_DEST peel(pick(nPos, 124, 50), " ")
#define R_1HEADERNF_ENDERECO_DEST(A) put(nRec, 124, A :50.50)
!-----------------------------------------------------------
! FIELD : BAIRRO_DEST 
#define S_1HEADERNF_BAIRRO_DEST peel(pick(nPos, 174, 50), " ")
#define R_1HEADERNF_BAIRRO_DEST(A) put(nRec, 174, A :50.50)
!-----------------------------------------------------------
! FIELD : MUNICIPIO_DEST 
#define S_1HEADERNF_MUNICIPIO_DEST peel(pick(nPos, 224, 50), " ")
#define R_1HEADERNF_MUNICIPIO_DEST(A) put(nRec, 224, A :50.50)
!-----------------------------------------------------------
! FIELD : UF_DEST 
#define S_1HEADERNF_UF_DEST peel(pick(nPos, 274, 2), " ")
#define R_1HEADERNF_UF_DEST(A) put(nRec, 274, A :2.2)
!-----------------------------------------------------------
! FIELD : CEP_DEST 
#define S_1HEADERNF_CEP_DEST peel(pick(nPos, 276, 8), " ")
#define R_1HEADERNF_CEP_DEST(A) put(nRec, 276, A :8.8)
!-----------------------------------------------------------
! FIELD : VALOR_TOT_NF 
#define S_1HEADERNF_VALOR_TOT_NF peel(pick(nPos, 284, 19), " ")
#define R_1HEADERNF_VALOR_TOT_NF(A) put(nRec, 284, A :19.19)
!-----------------------------------------------------------
! FIELD : IDENT_PRIORI 
#define S_1HEADERNF_IDENT_PRIORI peel(pick(nPos, 303, 1), " ")
#define R_1HEADERNF_IDENT_PRIORI(A) put(nRec, 303, A :1.1)
!-----------------------------------------------------------
! FIELD : CNPJ_REDESPACHANTE 
#define S_1HEADERNF_CNPJ_REDESPACHANTE peel(pick(nPos, 304, 15), " ")
#define R_1HEADERNF_CNPJ_REDESPACHANTE(A) put(nRec, 304, A :15.15)
!-----------------------------------------------------------
! FIELD : NOME_REDESPACHANTE 
#define S_1HEADERNF_NOME_REDESPACHANTE peel(pick(nPos, 319, 50), " ")
#define R_1HEADERNF_NOME_REDESPACHANTE(A) put(nRec, 319, A :50.50)
!-----------------------------------------------------------
! FIELD : ENDERECO_REDESPACHANTE 
#define S_1HEADERNF_ENDERECO_REDESPACHANTE peel(pick(nPos, 369, 50), " ")
#define R_1HEADERNF_ENDERECO_REDESPACHANTE(A) put(nRec, 369, A :50.50)
!-----------------------------------------------------------
! FIELD : MUNICIPIO_REDESPACHANTE 
#define S_1HEADERNF_MUNICIPIO_REDESPACHANTE peel(pick(nPos, 419, 50), " ")
#define R_1HEADERNF_MUNICIPIO_REDESPACHANTE(A) put(nRec, 419, A :50.50)
!-----------------------------------------------------------
! FIELD : UF_REDESPACHANTE 
#define S_1HEADERNF_UF_REDESPACHANTE peel(pick(nPos, 469, 2), " ")
#define R_1HEADERNF_UF_REDESPACHANTE(A) put(nRec, 469, A :2.2)
!-----------------------------------------------------------
! FIELD : CEP_REDESPACHANTE 
#define S_1HEADERNF_CEP_REDESPACHANTE peel(pick(nPos, 471, 8), " ")
#define R_1HEADERNF_CEP_REDESPACHANTE(A) put(nRec, 471, A :8.8)
!-----------------------------------------------------------
! FIELD : PEDIDO 
#define S_1HEADERNF_PEDIDO peel(pick(nPos, 479, 20), " ")
#define R_1HEADERNF_PEDIDO(A) put(nRec, 479, A :20.20)
!-----------------------------------------------------------
! FIELD : PESO_BRUTO 
#define S_1HEADERNF_PESO_BRUTO peel(pick(nPos, 499, 9), " ")
#define R_1HEADERNF_PESO_BRUTO(A) put(nRec, 499, A :9.9)
!-----------------------------------------------------------
! FIELD : PESO_LIQUIDO 
#define S_1HEADERNF_PESO_LIQUIDO peel(pick(nPos, 508, 9), " ")
#define R_1HEADERNF_PESO_LIQUIDO(A) put(nRec, 508, A :9.9)
!-----------------------------------------------------------
! FIELD : QUANT_VOLUME 
#define S_1HEADERNF_QUANT_VOLUME peel(pick(nPos, 517, 5), " ")
#define R_1HEADERNF_QUANT_VOLUME(A) put(nRec, 517, A :5.5)
!-----------------------------------------------------------
! FIELD : VALOR_ICMS 
#define S_1HEADERNF_VALOR_ICMS peel(pick(nPos, 522, 15), " ")
#define R_1HEADERNF_VALOR_ICMS(A) put(nRec, 522, A :15.15)
!-----------------------------------------------------------
! FIELD : VALOR_ICMS_ST 
#define S_1HEADERNF_VALOR_ICMS_ST peel(pick(nPos, 537, 15), " ")
#define R_1HEADERNF_VALOR_ICMS_ST(A) put(nRec, 537, A :15.15)
!-----------------------------------------------------------
! FIELD : COD_ORDEM_CARGA 
#define S_1HEADERNF_COD_ORDEM_CARGA peel(pick(nPos, 552, 20), " ")
#define R_1HEADERNF_COD_ORDEM_CARGA(A) put(nRec, 552, A :20.20)
!-----------------------------------------------------------
! FIELD : NOME_ENTREGA 
#define S_1HEADERNF_NOME_ENTREGA peel(pick(nPos, 572, 50), " ")
#define R_1HEADERNF_NOME_ENTREGA(A) put(nRec, 572, A :50.50)
!-----------------------------------------------------------
! FIELD : ENDERECO_ENTREGA 
#define S_1HEADERNF_ENDERECO_ENTREGA peel(pick(nPos, 622, 50), " ")
#define R_1HEADERNF_ENDERECO_ENTREGA(A) put(nRec, 622, A :50.50)
!-----------------------------------------------------------
! FIELD : BAIRRO_ENTREGA 
#define S_1HEADERNF_BAIRRO_ENTREGA peel(pick(nPos, 672, 50), " ")
#define R_1HEADERNF_BAIRRO_ENTREGA(A) put(nRec, 672, A :50.50)
!-----------------------------------------------------------
! FIELD : MUNICIPIO_ENTREGA 
#define S_1HEADERNF_MUNICIPIO_ENTREGA peel(pick(nPos, 722, 50), " ")
#define R_1HEADERNF_MUNICIPIO_ENTREGA(A) put(nRec, 722, A :50.50)
!-----------------------------------------------------------
! FIELD : UF_ENTREGA 
#define S_1HEADERNF_UF_ENTREGA peel(pick(nPos, 772, 2), " ")
#define R_1HEADERNF_UF_ENTREGA(A) put(nRec, 772, A :2.2)
!-----------------------------------------------------------
! FIELD : CNPJCPF_ENTREGA 
#define S_1HEADERNF_CNPJCPF_ENTREGA peel(pick(nPos, 774, 15), " ")
#define R_1HEADERNF_CNPJCPF_ENTREGA(A) put(nRec, 774, A :15.15)
!-----------------------------------------------------------
! FIELD : INSCRICAO_ESTADUAL_ENTREGA 
#define S_1HEADERNF_INSCRICAO_ESTADUAL_ENTREGA peel(pick(nPos, 789, 20), " ")
#define R_1HEADERNF_INSCRICAO_ESTADUAL_ENTREGA(A) put(nRec, 789, A :20.20)
!-----------------------------------------------------------
! FIELD : CHAVE_NFE 
#define S_1HEADERNF_CHAVE_NFE peel(pick(nPos, 809, 45), " ")
#define R_1HEADERNF_CHAVE_NFE(A) put(nRec, 809, A :45.45)
!-----------------------------------------------------------
! FIELD : TEL_DEST 
#define S_1HEADERNF_TEL_DEST peel(pick(nPos, 854, 10), " ")
#define R_1HEADERNF_TEL_DEST(A) put(nRec, 854, A :10.10)
!-----------------------------------------------------------
! FIELD : EMAIL_DEST 
#define S_1HEADERNF_EMAIL_DEST peel(pick(nPos, 864, 50), " ")
#define R_1HEADERNF_EMAIL_DEST(A) put(nRec, 864, A :50.50)
!-----------------------------------------------------------
! FIELD : INSCRICAO_SUFRAMA 
#define S_1HEADERNF_INSCRICAO_SUFRAMA peel(pick(nPos, 914, 10), " ")
#define R_1HEADERNF_INSCRICAO_SUFRAMA(A) put(nRec, 914, A :10.10)
!-----------------------------------------------------------
! FIELD : NUM_ENDERECO_DEST 
#define S_1HEADERNF_NUM_ENDERECO_DEST peel(pick(nPos, 924, 10), " ")
#define R_1HEADERNF_NUM_ENDERECO_DEST(A) put(nRec, 924, A :10.10)
!-----------------------------------------------------------
! FIELD : COMP_ENDERECO_DEST 
#define S_1HEADERNF_COMP_ENDERECO_DEST peel(pick(nPos, 933, 30), " ")
#define R_1HEADERNF_COMP_ENDERECO_DEST(A) put(nRec, 933, A :30.30)
!-----------------------------------------------------------
!===========================================================
! Line : 2DETALHE 
!===========================================================
! FIELD : TIPO_REGISTRO 
#define S_2DETALHE_TIPO_REGISTRO peel(pick(nPos, 1, 1), " ")
#define R_2DETALHE_TIPO_REGISTRO(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : COD_PROD 
#define S_2DETALHE_COD_PROD peel(pick(nPos, 2, 25), " ")
#define R_2DETALHE_COD_PROD(A) put(nRec, 2, A :25.25)
!-----------------------------------------------------------
! FIELD : QUANTIDADE 
#define S_2DETALHE_QUANTIDADE peel(pick(nPos, 27, 19), " ")
#define R_2DETALHE_QUANTIDADE(A) put(nRec, 27, A :19.19)
!-----------------------------------------------------------
! FIELD : UNIDADE 
#define S_2DETALHE_UNIDADE peel(pick(nPos, 46, 4), " ")
#define R_2DETALHE_UNIDADE(A) put(nRec, 46, A :4.4)
!-----------------------------------------------------------
! FIELD : PRECO_UNI 
#define S_2DETALHE_PRECO_UNI peel(pick(nPos, 50, 27), " ")
#define R_2DETALHE_PRECO_UNI(A) put(nRec, 50, A :27.27)
!-----------------------------------------------------------
! FIELD : LOTE 
#define S_2DETALHE_LOTE peel(pick(nPos, 77, 20), " ")
#define R_2DETALHE_LOTE(A) put(nRec, 77, A :20.20)
!-----------------------------------------------------------
! FIELD : CFOP 
#define S_2DETALHE_CFOP peel(pick(nPos, 97, 12), " ")
#define R_2DETALHE_CFOP(A) put(nRec, 97, A :12.12)
!-----------------------------------------------------------
! FIELD : DEPOSITO 
#define S_2DETALHE_DEPOSITO peel(pick(nPos, 109, 30), " ")
#define R_2DETALHE_DEPOSITO(A) put(nRec, 109, A :30.30)
!-----------------------------------------------------------
! FIELD : ITEM 
#define S_2DETALHE_ITEM peel(pick(nPos, 139, 6), " ")
#define R_2DETALHE_ITEM(A) put(nRec, 139, A :6.6)
!-----------------------------------------------------------
!===========================================================
! Line : 9TRAILER 
!===========================================================
! FIELD : TIPO_REGISTRO 
#define S_9TRAILER_TIPO_REGISTRO peel(pick(nPos, 1, 1), " ")
#define R_9TRAILER_TIPO_REGISTRO(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : NUM_ITENS_DOC 
#define S_9TRAILER_NUM_ITENS_DOC peel(pick(nPos, 2, 3), " ")
#define R_9TRAILER_NUM_ITENS_DOC(A) put(nRec, 2, A :3.3)
!-----------------------------------------------------------
! FIELD : VALOR_TOT_MERCADORIAS 
#define S_9TRAILER_VALOR_TOT_MERCADORIAS peel(pick(nPos, 5, 19), " ")
#define R_9TRAILER_VALOR_TOT_MERCADORIAS(A) put(nRec, 5, A :19.19)
!-----------------------------------------------------------
! FIELD : VALOR_TOTAL_NF 
#define S_9TRAILER_VALOR_TOTAL_NF peel(pick(nPos, 24, 19), " ")
#define R_9TRAILER_VALOR_TOTAL_NF(A) put(nRec, 24, A :19.19)
!-----------------------------------------------------------

! File M30CotyCSV : 
!===========================================================
! Line : HEADER 
#define S_HEADER split(pick(1,1,EOL), taHEADER, ";")
!===========================================================
! FIELD : CLIENTE_CODCLI_ 
#define S_HEADER_CLIENTE_CODCLI_ taHEADER[1]
#define R_HEADER_CLIENTE_CODCLI_(A) taHEADER[1] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : SKU_PRODUTO_CODPRO_ 
#define S_HEADER_SKU_PRODUTO_CODPRO_ taHEADER[2]
#define R_HEADER_SKU_PRODUTO_CODPRO_(A) taHEADER[2] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : DESCRICAO1_DS1PRO_ 
#define S_HEADER_DESCRICAO1_DS1PRO_ taHEADER[3]
#define R_HEADER_DESCRICAO1_DS1PRO_(A) taHEADER[3] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : DESCRICAO2ABREV_DS2PRO_ 
#define S_HEADER_DESCRICAO2ABREV_DS2PRO_ taHEADER[4]
#define R_HEADER_DESCRICAO2ABREV_DS2PRO_(A) taHEADER[4] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : UNIDADEMANEJO_UNIPRO_ 
#define S_HEADER_UNIDADEMANEJO_UNIPRO_ taHEADER[5]
#define R_HEADER_UNIDADEMANEJO_UNIPRO_(A) taHEADER[5] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : FAMILIA_FAMPRO_ 
#define S_HEADER_FAMILIA_FAMPRO_ taHEADER[6]
#define R_HEADER_FAMILIA_FAMPRO_(A) taHEADER[6] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : CATEGORIA_CURVAABC_ABCPRO_ABCSTS_ 
#define S_HEADER_CATEGORIA_CURVAABC_ABCPRO_ABCSTS_ taHEADER[7]
#define R_HEADER_CATEGORIA_CURVAABC_ABCPRO_ABCSTS_(A) taHEADER[7] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : DIVISAO_TIPODEPRODUTO 
#define S_HEADER_DIVISAO_TIPODEPRODUTO taHEADER[8]
#define R_HEADER_DIVISAO_TIPODEPRODUTO(A) taHEADER[8] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : AREA_SECAOUFRIA 
#define S_HEADER_AREA_SECAOUFRIA taHEADER[9]
#define R_HEADER_AREA_SECAOUFRIA(A) taHEADER[9] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : CONTRATOFORNECEDORESEMDIAS_NBJDLV_ 
#define S_HEADER_CONTRATOFORNECEDORESEMDIAS_NBJDLV_ taHEADER[10]
#define R_HEADER_CONTRATOFORNECEDORESEMDIAS_NBJDLV_(A) taHEADER[10] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : DIASDESEGURANCAPARAVENDA_SECDLV_ 
#define S_HEADER_DIASDESEGURANCAPARAVENDA_SECDLV_ taHEADER[11]
#define R_HEADER_DIASDESEGURANCAPARAVENDA_SECDLV_(A) taHEADER[11] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : SHELFLIFEEMDIAS_NBJFVI_ 
#define S_HEADER_SHELFLIFEEMDIAS_NBJFVI_ taHEADER[12]
#define R_HEADER_SHELFLIFEEMDIAS_NBJFVI_(A) taHEADER[12] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : CONTROLEDEQUALIDADE_S_N_ 
#define S_HEADER_CONTROLEDEQUALIDADE_S_N_ taHEADER[13]
#define R_HEADER_CONTROLEDEQUALIDADE_S_N_(A) taHEADER[13] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : CONTROLALOTE_S_N_ 
#define S_HEADER_CONTROLALOTE_S_N_ taHEADER[14]
#define R_HEADER_CONTROLALOTE_S_N_(A) taHEADER[14] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : CONTROLASERIE_S_N_ 
#define S_HEADER_CONTROLASERIE_S_N_ taHEADER[15]
#define R_HEADER_CONTROLASERIE_S_N_(A) taHEADER[15] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : PRODUTOPERIGOSO__S_N_ 
#define S_HEADER_PRODUTOPERIGOSO__S_N_ taHEADER[16]
#define R_HEADER_PRODUTOPERIGOSO__S_N_(A) taHEADER[16] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : CODIGOPRODUTOPERIGOSO_CODTMD_ 
#define S_HEADER_CODIGOPRODUTOPERIGOSO_CODTMD_ taHEADER[17]
#define R_HEADER_CODIGOPRODUTOPERIGOSO_CODTMD_(A) taHEADER[17] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : DESCRICAOCODIGOPRODPERIGOSO 
#define S_HEADER_DESCRICAOCODIGOPRODPERIGOSO taHEADER[18]
#define R_HEADER_DESCRICAOCODIGOPRODPERIGOSO(A) taHEADER[18] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : CLASSEDERISCO_PRODPERIGOSO_ 
#define S_HEADER_CLASSEDERISCO_PRODPERIGOSO_ taHEADER[19]
#define R_HEADER_CLASSEDERISCO_PRODPERIGOSO_(A) taHEADER[19] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : CODIGOONU_PRODPERIGOSO_ 
#define S_HEADER_CODIGOONU_PRODPERIGOSO_ taHEADER[20]
#define R_HEADER_CODIGOONU_PRODPERIGOSO_(A) taHEADER[20] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : NCM 
#define S_HEADER_NCM taHEADER[21]
#define R_HEADER_NCM(A) taHEADER[21] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : CEST 
#define S_HEADER_CEST taHEADER[22]
#define R_HEADER_CEST(A) taHEADER[22] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : QUANTIDADEDEUNIDADEMANEJO 
#define S_HEADER_QUANTIDADEDEUNIDADEMANEJO taHEADER[23]
#define R_HEADER_QUANTIDADEDEUNIDADEMANEJO(A) taHEADER[23] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : COMPRIMENTO_CM__LNGUVC2_ 
#define S_HEADER_COMPRIMENTO_CM__LNGUVC2_ taHEADER[24]
#define R_HEADER_COMPRIMENTO_CM__LNGUVC2_(A) taHEADER[24] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : LARGURA_CM__LRGUVC2_ 
#define S_HEADER_LARGURA_CM__LRGUVC2_ taHEADER[25]
#define R_HEADER_LARGURA_CM__LRGUVC2_(A) taHEADER[25] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : ALTURA_CM__HAUUVC2_ 
#define S_HEADER_ALTURA_CM__HAUUVC2_ taHEADER[26]
#define R_HEADER_ALTURA_CM__HAUUVC2_(A) taHEADER[26] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : PESO_GRM__PDBUVC_ 
#define S_HEADER_PESO_GRM__PDBUVC_ taHEADER[27]
#define R_HEADER_PESO_GRM__PDBUVC_(A) taHEADER[27] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : VENDA_S_N_ 
#define S_HEADER_VENDA_S_N_ taHEADER[28]
#define R_HEADER_VENDA_S_N_(A) taHEADER[28] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : EAN_EDIPRO_ 
#define S_HEADER_EAN_EDIPRO_ taHEADER[29]
#define R_HEADER_EAN_EDIPRO_(A) taHEADER[29] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : EANPRINCIPAL__S_N__EDIPRM_ 
#define S_HEADER_EANPRINCIPAL__S_N__EDIPRM_ taHEADER[30]
#define R_HEADER_EANPRINCIPAL__S_N__EDIPRM_(A) taHEADER[30] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : QUANTIDADEDEUNIDADEMANEJO_NAOGERENCIADOPELOWMS 
#define S_HEADER_QUANTIDADEDEUNIDADEMANEJO_NAOGERENCIADOPELOWMS taHEADER[31]
#define R_HEADER_QUANTIDADEDEUNIDADEMANEJO_NAOGERENCIADOPELOWMS(A) taHEADER[31] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : COMPRIMENTO_CM__NAOGERENCIADOPELOWMS 
#define S_HEADER_COMPRIMENTO_CM__NAOGERENCIADOPELOWMS taHEADER[32]
#define R_HEADER_COMPRIMENTO_CM__NAOGERENCIADOPELOWMS(A) taHEADER[32] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : LARGURA_CM__NAOGERENCIADOPELOWMS 
#define S_HEADER_LARGURA_CM__NAOGERENCIADOPELOWMS taHEADER[33]
#define R_HEADER_LARGURA_CM__NAOGERENCIADOPELOWMS(A) taHEADER[33] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : ALTURA_CM__NAOGERENCIADOPELOWMS 
#define S_HEADER_ALTURA_CM__NAOGERENCIADOPELOWMS taHEADER[34]
#define R_HEADER_ALTURA_CM__NAOGERENCIADOPELOWMS(A) taHEADER[34] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : PESO_GRM__NAOGERENCIADOPELOWMS 
#define S_HEADER_PESO_GRM__NAOGERENCIADOPELOWMS taHEADER[35]
#define R_HEADER_PESO_GRM__NAOGERENCIADOPELOWMS(A) taHEADER[35] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : VENDA_S_N__NAOGERENCIADOPELOWMS 
#define S_HEADER_VENDA_S_N__NAOGERENCIADOPELOWMS taHEADER[36]
#define R_HEADER_VENDA_S_N__NAOGERENCIADOPELOWMS(A) taHEADER[36] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : EAN_NAOGERENCIADOPELOWMS 
#define S_HEADER_EAN_NAOGERENCIADOPELOWMS taHEADER[37]
#define R_HEADER_EAN_NAOGERENCIADOPELOWMS(A) taHEADER[37] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : QUANTIDADEDEUNIDADEMANEJO__SPCPRO_ 
#define S_HEADER_QUANTIDADEDEUNIDADEMANEJO__SPCPRO_ taHEADER[38]
#define R_HEADER_QUANTIDADEDEUNIDADEMANEJO__SPCPRO_(A) taHEADER[38] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : COMPRIMENTO_CM___LNGSPC2_ 
#define S_HEADER_COMPRIMENTO_CM___LNGSPC2_ taHEADER[39]
#define R_HEADER_COMPRIMENTO_CM___LNGSPC2_(A) taHEADER[39] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : LARGURA_CM___LRGSPC2_ 
#define S_HEADER_LARGURA_CM___LRGSPC2_ taHEADER[40]
#define R_HEADER_LARGURA_CM___LRGSPC2_(A) taHEADER[40] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : ALTURA_CM___HAUSPC2_ 
#define S_HEADER_ALTURA_CM___HAUSPC2_ taHEADER[41]
#define R_HEADER_ALTURA_CM___HAUSPC2_(A) taHEADER[41] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : PESO_GRM___PDBSPC_ 
#define S_HEADER_PESO_GRM___PDBSPC_ taHEADER[42]
#define R_HEADER_PESO_GRM___PDBSPC_(A) taHEADER[42] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : VENDA_S_N_2 
#define S_HEADER_VENDA_S_N_2 taHEADER[43]
#define R_HEADER_VENDA_S_N_2(A) taHEADER[43] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : EAN__EDIPRO_ 
#define S_HEADER_EAN__EDIPRO_ taHEADER[44]
#define R_HEADER_EAN__EDIPRO_(A) taHEADER[44] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : EANPRINCIPAL__S_N__EDIPRM_2 
#define S_HEADER_EANPRINCIPAL__S_N__EDIPRM_2 taHEADER[45]
#define R_HEADER_EANPRINCIPAL__S_N__EDIPRM_2(A) taHEADER[45] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : QUANTIDADEDEUNIDADEMANEJO__PCBPRO_ 
#define S_HEADER_QUANTIDADEDEUNIDADEMANEJO__PCBPRO_ taHEADER[46]
#define R_HEADER_QUANTIDADEDEUNIDADEMANEJO__PCBPRO_(A) taHEADER[46] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : COMPRIMENTO_CM___LNGCOL2_ 
#define S_HEADER_COMPRIMENTO_CM___LNGCOL2_ taHEADER[47]
#define R_HEADER_COMPRIMENTO_CM___LNGCOL2_(A) taHEADER[47] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : LARGURA_CM___LRGCOL2_ 
#define S_HEADER_LARGURA_CM___LRGCOL2_ taHEADER[48]
#define R_HEADER_LARGURA_CM___LRGCOL2_(A) taHEADER[48] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : ALTURA_CM___HAUCOL2_HAUCOU_ 
#define S_HEADER_ALTURA_CM___HAUCOL2_HAUCOU_ taHEADER[49]
#define R_HEADER_ALTURA_CM___HAUCOL2_HAUCOU_(A) taHEADER[49] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : PESO_GRM___PDBCOL_ 
#define S_HEADER_PESO_GRM___PDBCOL_ taHEADER[50]
#define R_HEADER_PESO_GRM___PDBCOL_(A) taHEADER[50] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : VENDA_S_N_3 
#define S_HEADER_VENDA_S_N_3 taHEADER[51]
#define R_HEADER_VENDA_S_N_3(A) taHEADER[51] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : DUN__EDIPRO_ 
#define S_HEADER_DUN__EDIPRO_ taHEADER[52]
#define R_HEADER_DUN__EDIPRO_(A) taHEADER[52] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : EANPRINCIPAL__S_N__EDIPRM_3 
#define S_HEADER_EANPRINCIPAL__S_N__EDIPRM_3 taHEADER[53]
#define R_HEADER_EANPRINCIPAL__S_N__EDIPRM_3(A) taHEADER[53] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : QUANTIDADEDEUNIDADEMANEJO__CALCULADOPELOWMS_ 
#define S_HEADER_QUANTIDADEDEUNIDADEMANEJO__CALCULADOPELOWMS_ taHEADER[54]
#define R_HEADER_QUANTIDADEDEUNIDADEMANEJO__CALCULADOPELOWMS_(A) taHEADER[54] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : COMPRIMENTO_CM___CALCULADOPELOWMS_ 
#define S_HEADER_COMPRIMENTO_CM___CALCULADOPELOWMS_ taHEADER[55]
#define R_HEADER_COMPRIMENTO_CM___CALCULADOPELOWMS_(A) taHEADER[55] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : LARGURA_CM___CALCULADOPELOWMS_ 
#define S_HEADER_LARGURA_CM___CALCULADOPELOWMS_ taHEADER[56]
#define R_HEADER_LARGURA_CM___CALCULADOPELOWMS_(A) taHEADER[56] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : ALTURA_CM___CALCULADOPELOWMS_ 
#define S_HEADER_ALTURA_CM___CALCULADOPELOWMS_ taHEADER[57]
#define R_HEADER_ALTURA_CM___CALCULADOPELOWMS_(A) taHEADER[57] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : PESO_GRM___CALCULADOPELOWMS_ 
#define S_HEADER_PESO_GRM___CALCULADOPELOWMS_ taHEADER[58]
#define R_HEADER_PESO_GRM___CALCULADOPELOWMS_(A) taHEADER[58] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : CAMADASPORPALLET__COUPAL_ 
#define S_HEADER_CAMADASPORPALLET__COUPAL_ taHEADER[59]
#define R_HEADER_CAMADASPORPALLET__COUPAL_(A) taHEADER[59] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : CAIXASPORCAMADA__COLCOU_ 
#define S_HEADER_CAIXASPORCAMADA__COLCOU_ taHEADER[60]
#define R_HEADER_CAIXASPORCAMADA__COLCOU_(A) taHEADER[60] := build(A :0.70)
!-----------------------------------------------------------

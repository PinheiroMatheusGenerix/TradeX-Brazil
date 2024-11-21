! File ERPFMviaCSV : 
!===========================================================
! Line : HEADER 
#define S_HEADER split(pick(1,1,EOL), taHEADER, ";")
!===========================================================
! FIELD : TIPO_REGISTRO 
#define S_HEADER_TIPO_REGISTRO taHEADER[1]
#define R_HEADER_TIPO_REGISTRO(A) taHEADER[1] := build(A :0.1)
!-----------------------------------------------------------
! FIELD : ID 
#define S_HEADER_ID taHEADER[2]
#define R_HEADER_ID(A) taHEADER[2] := build(A :0.22)
!-----------------------------------------------------------
! FIELD : STATUS_INT 
#define S_HEADER_STATUS_INT taHEADER[3]
#define R_HEADER_STATUS_INT(A) taHEADER[3] := build(A :0.1)
!-----------------------------------------------------------
! FIELD : DATACRIACAO 
#define S_HEADER_DATACRIACAO taHEADER[4]
#define R_HEADER_DATACRIACAO(A) taHEADER[4] := build(A :0.10)
!-----------------------------------------------------------
! FIELD : DTHRABSORCAO 
#define S_HEADER_DTHRABSORCAO taHEADER[5]
#define R_HEADER_DTHRABSORCAO(A) taHEADER[5] := build(A :0.10)
!-----------------------------------------------------------
! FIELD : TIPODOCUMENTO 
#define S_HEADER_TIPODOCUMENTO taHEADER[6]
#define R_HEADER_TIPODOCUMENTO(A) taHEADER[6] := build(A :0.10)
!-----------------------------------------------------------
! FIELD : TIPO 
#define S_HEADER_TIPO taHEADER[7]
#define R_HEADER_TIPO(A) taHEADER[7] := build(A :0.1)
!-----------------------------------------------------------
! FIELD : NUMEROMOV 
#define S_HEADER_NUMEROMOV taHEADER[8]
#define R_HEADER_NUMEROMOV(A) taHEADER[8] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : CPFCNPJ 
#define S_HEADER_CPFCNPJ taHEADER[9]
#define R_HEADER_CPFCNPJ(A) taHEADER[9] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : NOME 
#define S_HEADER_NOME taHEADER[10]
#define R_HEADER_NOME(A) taHEADER[10] := build(A :0.60)
!-----------------------------------------------------------
! FIELD : RUA 
#define S_HEADER_RUA taHEADER[11]
#define R_HEADER_RUA(A) taHEADER[11] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : NUMERO 
#define S_HEADER_NUMERO taHEADER[12]
#define R_HEADER_NUMERO(A) taHEADER[12] := build(A :0.8)
!-----------------------------------------------------------
! FIELD : COMPLEMENTO 
#define S_HEADER_COMPLEMENTO taHEADER[13]
#define R_HEADER_COMPLEMENTO(A) taHEADER[13] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : BAIRRO 
#define S_HEADER_BAIRRO taHEADER[14]
#define R_HEADER_BAIRRO(A) taHEADER[14] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : CIDADE 
#define S_HEADER_CIDADE taHEADER[15]
#define R_HEADER_CIDADE(A) taHEADER[15] := build(A :0.32)
!-----------------------------------------------------------
! FIELD : CODETD 
#define S_HEADER_CODETD taHEADER[16]
#define R_HEADER_CODETD(A) taHEADER[16] := build(A :0.2)
!-----------------------------------------------------------
! FIELD : CEP 
#define S_HEADER_CEP taHEADER[17]
#define R_HEADER_CEP(A) taHEADER[17] := build(A :0.9)
!-----------------------------------------------------------
! FIELD : TELEFONE 
#define S_HEADER_TELEFONE taHEADER[18]
#define R_HEADER_TELEFONE(A) taHEADER[18] := build(A :0.15)
!-----------------------------------------------------------
! FIELD : EMAIL 
#define S_HEADER_EMAIL taHEADER[19]
#define R_HEADER_EMAIL(A) taHEADER[19] := build(A :0.60)
!-----------------------------------------------------------
! FIELD : CNPJFILIAL 
#define S_HEADER_CNPJFILIAL taHEADER[20]
#define R_HEADER_CNPJFILIAL(A) taHEADER[20] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : SERIE 
#define S_HEADER_SERIE taHEADER[21]
#define R_HEADER_SERIE(A) taHEADER[21] := build(A :0.8)
!-----------------------------------------------------------
! FIELD : DATAEMISSAO 
#define S_HEADER_DATAEMISSAO taHEADER[22]
#define R_HEADER_DATAEMISSAO(A) taHEADER[22] := build(A :0.10)
!-----------------------------------------------------------
! FIELD : DATASAIDA 
#define S_HEADER_DATASAIDA taHEADER[23]
#define R_HEADER_DATASAIDA(A) taHEADER[23] := build(A :0.10)
!-----------------------------------------------------------
! FIELD : DATAENTREGA 
#define S_HEADER_DATAENTREGA taHEADER[24]
#define R_HEADER_DATAENTREGA(A) taHEADER[24] := build(A :0.10)
!-----------------------------------------------------------
! FIELD : VALORBRUTO 
#define S_HEADER_VALORBRUTO taHEADER[25]
#define R_HEADER_VALORBRUTO(A) taHEADER[25] := build(A :0.15)
!-----------------------------------------------------------
! FIELD : VALORLIQUIDO 
#define S_HEADER_VALORLIQUIDO taHEADER[26]
#define R_HEADER_VALORLIQUIDO(A) taHEADER[26] := build(A :0.15)
!-----------------------------------------------------------
! FIELD : VALORFRETE 
#define S_HEADER_VALORFRETE taHEADER[27]
#define R_HEADER_VALORFRETE(A) taHEADER[27] := build(A :0.15)
!-----------------------------------------------------------
! FIELD : VALORDESPESAS 
#define S_HEADER_VALORDESPESAS taHEADER[28]
#define R_HEADER_VALORDESPESAS(A) taHEADER[28] := build(A :0.15)
!-----------------------------------------------------------
! FIELD : OBSERVACAO 
#define S_HEADER_OBSERVACAO taHEADER[29]
#define R_HEADER_OBSERVACAO(A) taHEADER[29] := build(A :0.60)
!-----------------------------------------------------------
! FIELD : CAMPOLIVRE1 
#define S_HEADER_CAMPOLIVRE1 taHEADER[30]
#define R_HEADER_CAMPOLIVRE1(A) taHEADER[30] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : CAMPOLIVRE2 
#define S_HEADER_CAMPOLIVRE2 taHEADER[31]
#define R_HEADER_CAMPOLIVRE2(A) taHEADER[31] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : ORIGEM 
#define S_HEADER_ORIGEM taHEADER[32]
#define R_HEADER_ORIGEM(A) taHEADER[32] := build(A :0.1)
!-----------------------------------------------------------
! FIELD : PESOLIQUIDO 
#define S_HEADER_PESOLIQUIDO taHEADER[33]
#define R_HEADER_PESOLIQUIDO(A) taHEADER[33] := build(A :0.15)
!-----------------------------------------------------------
! FIELD : PESOBRUTO 
#define S_HEADER_PESOBRUTO taHEADER[34]
#define R_HEADER_PESOBRUTO(A) taHEADER[34] := build(A :0.15)
!-----------------------------------------------------------
! FIELD : RECCREATEDBY 
#define S_HEADER_RECCREATEDBY taHEADER[35]
#define R_HEADER_RECCREATEDBY(A) taHEADER[35] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : RECCREATEDON 
#define S_HEADER_RECCREATEDON taHEADER[36]
#define R_HEADER_RECCREATEDON(A) taHEADER[36] := build(A :0.11)
!-----------------------------------------------------------
! FIELD : RECMODIFIEDBY 
#define S_HEADER_RECMODIFIEDBY taHEADER[37]
#define R_HEADER_RECMODIFIEDBY(A) taHEADER[37] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : RECMODIFIEDON 
#define S_HEADER_RECMODIFIEDON taHEADER[38]
#define R_HEADER_RECMODIFIEDON(A) taHEADER[38] := build(A :0.11)
!-----------------------------------------------------------
! FIELD : CAMPOLIVRE3 
#define S_HEADER_CAMPOLIVRE3 taHEADER[39]
#define R_HEADER_CAMPOLIVRE3(A) taHEADER[39] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : MOVGERADO 
#define S_HEADER_MOVGERADO taHEADER[40]
#define R_HEADER_MOVGERADO(A) taHEADER[40] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : DADOSADICIONAIS 
#define S_HEADER_DADOSADICIONAIS taHEADER[41]
#define R_HEADER_DADOSADICIONAIS(A) taHEADER[41] := build(A :0.250)
!-----------------------------------------------------------
! FIELD : CNPJTRANSPORTADORA 
#define S_HEADER_CNPJTRANSPORTADORA taHEADER[42]
#define R_HEADER_CNPJTRANSPORTADORA(A) taHEADER[42] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : IDNAT 
#define S_HEADER_IDNAT taHEADER[43]
#define R_HEADER_IDNAT(A) taHEADER[43] := build(A :0.22)
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_HEADER_CODTRA taHEADER[44]
#define R_HEADER_CODTRA(A) taHEADER[44] := build(A :0.5)
!-----------------------------------------------------------
! FIELD : PESSOAFISOUJUR 
#define S_HEADER_PESSOAFISOUJUR taHEADER[45]
#define R_HEADER_PESSOAFISOUJUR(A) taHEADER[45] := build(A :0.1)
!-----------------------------------------------------------
! FIELD : CONTRIBUINTE 
#define S_HEADER_CONTRIBUINTE taHEADER[46]
#define R_HEADER_CONTRIBUINTE(A) taHEADER[46] := build(A :0.22)
!-----------------------------------------------------------
! FIELD : REGIMEESPECIAL 
#define S_HEADER_REGIMEESPECIAL taHEADER[47]
#define R_HEADER_REGIMEESPECIAL(A) taHEADER[47] := build(A :0.22)
!-----------------------------------------------------------
! FIELD : INSCRESTADUAL 
#define S_HEADER_INSCRESTADUAL taHEADER[48]
#define R_HEADER_INSCRESTADUAL(A) taHEADER[48] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : FRETECIFOUFOB 
#define S_HEADER_FRETECIFOUFOB taHEADER[49]
#define R_HEADER_FRETECIFOUFOB(A) taHEADER[49] := build(A :0.22)
!-----------------------------------------------------------
! FIELD : ESPECIE 
#define S_HEADER_ESPECIE taHEADER[50]
#define R_HEADER_ESPECIE(A) taHEADER[50] := build(A :0.15)
!-----------------------------------------------------------
! FIELD : VOLUMES 
#define S_HEADER_VOLUMES taHEADER[51]
#define R_HEADER_VOLUMES(A) taHEADER[51] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : NUMERODELIVERY 
#define S_HEADER_NUMERODELIVERY taHEADER[52]
#define R_HEADER_NUMERODELIVERY(A) taHEADER[52] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : CONSUMIDORFINAL 
#define S_HEADER_CONSUMIDORFINAL taHEADER[53]
#define R_HEADER_CONSUMIDORFINAL(A) taHEADER[53] := build(A :0.1)
!-----------------------------------------------------------
! FIELD : VALORICMS 
#define S_HEADER_VALORICMS taHEADER[54]
#define R_HEADER_VALORICMS(A) taHEADER[54] := build(A :0.22)
!-----------------------------------------------------------
! FIELD : BASEICMS 
#define S_HEADER_BASEICMS taHEADER[55]
#define R_HEADER_BASEICMS(A) taHEADER[55] := build(A :0.22)
!-----------------------------------------------------------
! FIELD : BASEICMSST 
#define S_HEADER_BASEICMSST taHEADER[56]
#define R_HEADER_BASEICMSST(A) taHEADER[56] := build(A :0.22)
!-----------------------------------------------------------
! FIELD : VALORICMSST 
#define S_HEADER_VALORICMSST taHEADER[57]
#define R_HEADER_VALORICMSST(A) taHEADER[57] := build(A :0.22)
!-----------------------------------------------------------
! FIELD : DT_AGENDAMENTO 
#define S_HEADER_DT_AGENDAMENTO taHEADER[58]
#define R_HEADER_DT_AGENDAMENTO(A) taHEADER[58] := build(A :0.10)
!-----------------------------------------------------------
! FIELD : CFV_COD 
#define S_HEADER_CFV_COD taHEADER[59]
#define R_HEADER_CFV_COD(A) taHEADER[59] := build(A :0.11)
!-----------------------------------------------------------
! FIELD : IDESTRANGEIRO 
#define S_HEADER_IDESTRANGEIRO taHEADER[60]
#define R_HEADER_IDESTRANGEIRO(A) taHEADER[60] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : CODTDO 
#define S_HEADER_CODTDO taHEADER[61]
#define R_HEADER_CODTDO(A) taHEADER[61] := build(A :0.10)
!-----------------------------------------------------------
! FIELD : UFDESEMBARACO 
#define S_HEADER_UFDESEMBARACO taHEADER[62]
#define R_HEADER_UFDESEMBARACO(A) taHEADER[62] := build(A :0.2)
!-----------------------------------------------------------
! FIELD : LOCALDESEMBARACO 
#define S_HEADER_LOCALDESEMBARACO taHEADER[63]
#define R_HEADER_LOCALDESEMBARACO(A) taHEADER[63] := build(A :0.60)
!-----------------------------------------------------------
!===========================================================
! Line : DETAIL 
#define S_DETAIL split(pick(1,1,EOL), taDETAIL, ";")
!===========================================================
! FIELD : TIPO_REGISTRO 
#define S_DETAIL_TIPO_REGISTRO taDETAIL[1]
#define R_DETAIL_TIPO_REGISTRO(A) taDETAIL[1] := build(A :0.1)
!-----------------------------------------------------------
! FIELD : ID 
#define S_DETAIL_ID taDETAIL[2]
#define R_DETAIL_ID(A) taDETAIL[2] := build(A :0.22)
!-----------------------------------------------------------
! FIELD : NUMEROSEQUENCIAL 
#define S_DETAIL_NUMEROSEQUENCIAL taDETAIL[3]
#define R_DETAIL_NUMEROSEQUENCIAL(A) taDETAIL[3] := build(A :0.22)
!-----------------------------------------------------------
! FIELD : CODIGOPRD 
#define S_DETAIL_CODIGOPRD taDETAIL[4]
#define R_DETAIL_CODIGOPRD(A) taDETAIL[4] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : QUANTIDADE 
#define S_DETAIL_QUANTIDADE taDETAIL[5]
#define R_DETAIL_QUANTIDADE(A) taDETAIL[5] := build(A :0.15)
!-----------------------------------------------------------
! FIELD : PRECOUNITARIO 
#define S_DETAIL_PRECOUNITARIO taDETAIL[6]
#define R_DETAIL_PRECOUNITARIO(A) taDETAIL[6] := build(A :0.15)
!-----------------------------------------------------------
! FIELD : DESCRICAOPROD 
#define S_DETAIL_DESCRICAOPROD taDETAIL[7]
#define R_DETAIL_DESCRICAOPROD(A) taDETAIL[7] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : UND 
#define S_DETAIL_UND taDETAIL[8]
#define R_DETAIL_UND(A) taDETAIL[8] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : CODFABRICANTE 
#define S_DETAIL_CODFABRICANTE taDETAIL[9]
#define R_DETAIL_CODFABRICANTE(A) taDETAIL[9] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : IDLOTE 
#define S_DETAIL_IDLOTE taDETAIL[10]
#define R_DETAIL_IDLOTE(A) taDETAIL[10] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : RECCREATEDBY 
#define S_DETAIL_RECCREATEDBY taDETAIL[11]
#define R_DETAIL_RECCREATEDBY(A) taDETAIL[11] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : RECCREATEDON 
#define S_DETAIL_RECCREATEDON taDETAIL[12]
#define R_DETAIL_RECCREATEDON(A) taDETAIL[12] := build(A :0.11)
!-----------------------------------------------------------
! FIELD : RECMODIFIEDBY 
#define S_DETAIL_RECMODIFIEDBY taDETAIL[13]
#define R_DETAIL_RECMODIFIEDBY(A) taDETAIL[13] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : RECMODIFIEDON 
#define S_DETAIL_RECMODIFIEDON taDETAIL[14]
#define R_DETAIL_RECMODIFIEDON(A) taDETAIL[14] := build(A :0.11)
!-----------------------------------------------------------
! FIELD : CODIGOBARRAS 
#define S_DETAIL_CODIGOBARRAS taDETAIL[15]
#define R_DETAIL_CODIGOBARRAS(A) taDETAIL[15] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : CODIFFISCAL 
#define S_DETAIL_CODIFFISCAL taDETAIL[16]
#define R_DETAIL_CODIFFISCAL(A) taDETAIL[16] := build(A :0.10)
!-----------------------------------------------------------
! FIELD : PROCMERCADORIA 
#define S_DETAIL_PROCMERCADORIA taDETAIL[17]
#define R_DETAIL_PROCMERCADORIA(A) taDETAIL[17] := build(A :0.10)
!-----------------------------------------------------------
! FIELD : NRREFERENCIA 
#define S_DETAIL_NRREFERENCIA taDETAIL[18]
#define R_DETAIL_NRREFERENCIA(A) taDETAIL[18] := build(A :0.25)
!-----------------------------------------------------------
! FIELD : SERIE 
#define S_DETAIL_SERIE taDETAIL[19]
#define R_DETAIL_SERIE(A) taDETAIL[19] := build(A :0.8)
!-----------------------------------------------------------
! FIELD : IDNAT 
#define S_DETAIL_IDNAT taDETAIL[20]
#define R_DETAIL_IDNAT(A) taDETAIL[20] := build(A :0.22)
!-----------------------------------------------------------
! FIELD : CODCOLIGADA 
#define S_DETAIL_CODCOLIGADA taDETAIL[21]
#define R_DETAIL_CODCOLIGADA(A) taDETAIL[21] := build(A :0.22)
!-----------------------------------------------------------
! FIELD : QTDFALTA 
#define S_DETAIL_QTDFALTA taDETAIL[22]
#define R_DETAIL_QTDFALTA(A) taDETAIL[22] := build(A :0.15)
!-----------------------------------------------------------
! FIELD : TIPOPRD 
#define S_DETAIL_TIPOPRD taDETAIL[23]
#define R_DETAIL_TIPOPRD(A) taDETAIL[23] := build(A :0.10)
!-----------------------------------------------------------
! FIELD : USOECONSUMO 
#define S_DETAIL_USOECONSUMO taDETAIL[24]
#define R_DETAIL_USOECONSUMO(A) taDETAIL[24] := build(A :0.22)
!-----------------------------------------------------------
! FIELD : NUMEROCCF 
#define S_DETAIL_NUMEROCCF taDETAIL[25]
#define R_DETAIL_NUMEROCCF(A) taDETAIL[25] := build(A :0.14)
!-----------------------------------------------------------
! FIELD : ALIQICMS 
#define S_DETAIL_ALIQICMS taDETAIL[26]
#define R_DETAIL_ALIQICMS(A) taDETAIL[26] := build(A :0.22)
!-----------------------------------------------------------
! FIELD : VALORICMS 
#define S_DETAIL_VALORICMS taDETAIL[27]
#define R_DETAIL_VALORICMS(A) taDETAIL[27] := build(A :0.22)
!-----------------------------------------------------------
! FIELD : BASEICMS 
#define S_DETAIL_BASEICMS taDETAIL[28]
#define R_DETAIL_BASEICMS(A) taDETAIL[28] := build(A :0.22)
!-----------------------------------------------------------
! FIELD : ALIQICMSST 
#define S_DETAIL_ALIQICMSST taDETAIL[29]
#define R_DETAIL_ALIQICMSST(A) taDETAIL[29] := build(A :0.22)
!-----------------------------------------------------------
! FIELD : BASEICMSST 
#define S_DETAIL_BASEICMSST taDETAIL[30]
#define R_DETAIL_BASEICMSST(A) taDETAIL[30] := build(A :0.22)
!-----------------------------------------------------------
! FIELD : VALORICMSST 
#define S_DETAIL_VALORICMSST taDETAIL[31]
#define R_DETAIL_VALORICMSST(A) taDETAIL[31] := build(A :0.22)
!-----------------------------------------------------------
! FIELD : ALIQIVA 
#define S_DETAIL_ALIQIVA taDETAIL[32]
#define R_DETAIL_ALIQIVA(A) taDETAIL[32] := build(A :0.22)
!-----------------------------------------------------------
! FIELD : OBSERVACAO 
#define S_DETAIL_OBSERVACAO taDETAIL[33]
#define R_DETAIL_OBSERVACAO(A) taDETAIL[33] := build(A :0.120)
!-----------------------------------------------------------
! FIELD : CODIGOCEST 
#define S_DETAIL_CODIGOCEST taDETAIL[34]
#define R_DETAIL_CODIGOCEST(A) taDETAIL[34] := build(A :0.15)
!-----------------------------------------------------------

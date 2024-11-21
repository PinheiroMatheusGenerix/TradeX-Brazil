! File M50_HENKEL_CSV_IN : 
!===========================================================
! Line : Registo 
#define S_Registo split(pick(1,1,EOL), taRegisto, ";")
!===========================================================
! FIELD : TipoTratamento 
#define S_Registo_TipoTratamento taRegisto[1]
#define R_Registo_TipoTratamento(A) taRegisto[1] := build(A :0.150)
!-----------------------------------------------------------
! FIELD : Planta 
#define S_Registo_Planta taRegisto[2]
#define R_Registo_Planta(A) taRegisto[2] := build(A :0.150)
!-----------------------------------------------------------
! FIELD : TipoPedido 
#define S_Registo_TipoPedido taRegisto[3]
#define R_Registo_TipoPedido(A) taRegisto[3] := build(A :0.150)
!-----------------------------------------------------------
! FIELD : Prioridade 
#define S_Registo_Prioridade taRegisto[4]
#define R_Registo_Prioridade(A) taRegisto[4] := build(A :0.150)
!-----------------------------------------------------------
! FIELD : CNPJDestinatario 
#define S_Registo_CNPJDestinatario taRegisto[5]
#define R_Registo_CNPJDestinatario(A) taRegisto[5] := build(A :0.150)
!-----------------------------------------------------------
! FIELD : Agrupador1 
#define S_Registo_Agrupador1 taRegisto[6]
#define R_Registo_Agrupador1(A) taRegisto[6] := build(A :0.150)
!-----------------------------------------------------------
! FIELD : Agrupador2 
#define S_Registo_Agrupador2 taRegisto[7]
#define R_Registo_Agrupador2(A) taRegisto[7] := build(A :0.150)
!-----------------------------------------------------------
! FIELD : DataAgendament 
#define S_Registo_DataAgendamento taRegisto[8]
#define R_Registo_DataAgendamento(A) taRegisto[8] := build(A :0.150)
!-----------------------------------------------------------
! FIELD : HoraAgendamento 
#define S_Registo_HoraAgendamento taRegisto[9]
#define R_Registo_HoraAgendamento(A) taRegisto[9] := build(A :0.150)
!-----------------------------------------------------------
! FIELD : Pedido 
#define S_Registo_Pedido taRegisto[10]
#define R_Registo_Pedido(A) taRegisto[10] := build(A :0.150)
!-----------------------------------------------------------
! FIELD : Serie 
#define S_Registo_Serie taRegisto[11]
#define R_Registo_Serie(A) taRegisto[11] := build(A :0.150)
!-----------------------------------------------------------
! FIELD : CodigoTransportadora 
#define S_Registo_CodigoTransportadora taRegisto[12]
#define R_Registo_CodigoTransportadora(A) taRegisto[12] := build(A :0.150)
!-----------------------------------------------------------
! FIELD : CriterioExtracao 
#define S_Registo_CriterioExtracao taRegisto[13]
#define R_Registo_CriterioExtracao(A) taRegisto[13] := build(A :0.150)
!-----------------------------------------------------------
! FIELD : CodigoProduto 
#define S_Registo_CodigoProduto taRegisto[14]
#define R_Registo_CodigoProduto(A) taRegisto[14] := build(A :0.150)
!-----------------------------------------------------------
! FIELD : Quantidade 
#define S_Registo_Quantidade taRegisto[15]
#define R_Registo_Quantidade(A) taRegisto[15] := build(A :0.150)
!-----------------------------------------------------------
! FIELD : Unidade 
#define S_Registo_Unidade taRegisto[16]
#define R_Registo_Unidade(A) taRegisto[16] := build(A :0.150)
!-----------------------------------------------------------
! FIELD : Lote 
#define S_Registo_Lote taRegisto[17]
#define R_Registo_Lote(A) taRegisto[17] := build(A :0.150)
!-----------------------------------------------------------
! FIELD : Status 
#define S_Registo_Status taRegisto[18]
#define R_Registo_Status(A) taRegisto[18] := build(A :0.150)
!-----------------------------------------------------------
! FIELD : SSCC 
#define S_Registo_SSCC taRegisto[19]
#define R_Registo_SSCC(A) taRegisto[19] := build(A :0.150)
!-----------------------------------------------------------
! FIELD : RazaoSocial 
#define S_Registo_RazaoSocial taRegisto[20]
#define R_Registo_RazaoSocial(A) taRegisto[20] := build(A :0.150)
!-----------------------------------------------------------
! FIELD : Endereco 
#define S_Registo_Endereco taRegisto[21]
#define R_Registo_Endereco(A) taRegisto[21] := build(A :0.150)
!-----------------------------------------------------------
! FIELD : Municipio 
#define S_Registo_Municipio taRegisto[22]
#define R_Registo_Municipio(A) taRegisto[22] := build(A :0.150)
!-----------------------------------------------------------
! FIELD : UF 
#define S_Registo_UF taRegisto[23]
#define R_Registo_UF(A) taRegisto[23] := build(A :0.150)
!-----------------------------------------------------------
! FIELD : CEP 
#define S_Registo_CEP taRegisto[24]
#define R_Registo_CEP(A) taRegisto[24] := build(A :0.150)
!-----------------------------------------------------------
! FIELD : Pais 
#define S_Registo_Pais taRegisto[25]
#define R_Registo_Pais(A) taRegisto[25] := build(A :0.150)
!-----------------------------------------------------------
! FIELD : CodProprietario 
#define S_Registo_CodProprietario taRegisto[26]
#define R_Registo_CodProprietario(A) taRegisto[26] := build(A :0.150)
!-----------------------------------------------------------

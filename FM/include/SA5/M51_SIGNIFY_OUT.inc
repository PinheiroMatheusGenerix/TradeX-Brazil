! FIELD : TPREGISTRO
#define S_HEADER1_TPREGISTRO peel(pick(nPos, 1, 3), " ")
#define R_HEADER1_TPREGISTRO(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : NMINTERFACE 
#define S_HEADER1_NMINTERFACE peel(pick(nPos, 4, 10), " ")
#define R_HEADER1_NMINTERFACE(A) put(nRec, 4, A :10.10)
!-----------------------------------------------------------
! FIELD : VERSAO 
#define S_HEADER1_VERSAO peel(pick(nPos, 14, 6), " ")
#define R_HEADER1_VERSAO(A) put(nRec, 14, A :6.6)
!-----------------------------------------------------------
! FIELD : REMETENTE 
#define S_HEADER1_REMETENTE peel(pick(nPos, 20, 40), " ")
#define R_HEADER1_REMETENTE(A) put(nRec, 20, A :40.40)
!-----------------------------------------------------------
! FIELD : DESTINATARIO 
#define S_HEADER1_DESTINATARIO peel(pick(nPos, 60, 40), " ")
#define R_HEADER1_DESTINATARIO(A) put(nRec, 60, A :40.40)
!-----------------------------------------------------------





! FIELD : TPREGISTRO
#define S_HEADER2_TPREGISTRO peel(pick(nPos, 1, 3), " ")
#define R_HEADER2_TPREGISTRO(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : FLOPERACAO 
#define S_HEADER2_FLOPERACAO peel(pick(nPos, 4, 1), " ")
#define R_HEADER2_FLOPERACAO(A) put(nRec, 4, A :1.1)
!-----------------------------------------------------------
! FIELD : CDROMANEIO 
#define S_HEADER2_CDROMANEIO peel(pick(nPos, 5, 15), " ")
#define R_HEADER2_CDROMANEIO(A) put(nRec, 5, A :15.15)
!-----------------------------------------------------------
! FIELD : CHAVERESPFRETE 
#define S_HEADER2_CHAVERESPFRETE peel(pick(nPos, 20, 15), " ")
#define R_HEADER2_CHAVERESPFRETE(A) put(nRec, 20, A :15.15)
!-----------------------------------------------------------
! FIELD : DTEMBARQUE 
#define S_HEADER2_DTEMBARQUE peel(pick(nPos, 35, 10), " ")
#define R_HEADER2_DTEMBARQUE(A) put(nRec, 35, A :10.10)
!-----------------------------------------------------------
! FIELD : HREMBARQUE
#define S_HEADER2_HREMBARQUE peel(pick(nPos, 45, 4), " ")
#define R_HEADER2_HREMBARQUE(A) put(nRec, 45, A :4.4)
!-----------------------------------------------------------
! FIELD : CDTRANSPORTADORA 
#define S_HEADER2_CDTRANSPORTADORA peel(pick(nPos, 49, 15), " ")
#define R_HEADER2_CDTRANSPORTADORA(A) put(nRec, 49, A :15.15)
!-----------------------------------------------------------
! FIELD : CDREMESSA 
#define S_HEADER2_CDREMESSA peel(pick(nPos, 64, 12), " ")
#define R_HEADER2_CDREMESSA(A) put(nRec, 64, A :12.12)
!-----------------------------------------------------------
! FIELD : CDZONMAIORDISTANCIA 
#define S_HEADER2_CDZONMAIORDISTANCIA peel(pick(nPos, 76, 10), " ")
#define R_HEADER2_CDZONMAIORDISTANCIA(A) put(nRec, 76, A :10.10)
!-----------------------------------------------------------
! FIELD : NMCIDMAIORDISTANCIA 
#define S_HEADER2_NMCIDMAIORDISTANCIA peel(pick(nPos, 86, 30), " ")
#define R_HEADER2_NMCIDMAIORDISTANCIA(A) put(nRec, 86, A :30.30)
!-----------------------------------------------------------
! FIELD : CDUFMAIORDISTANCIA
#define S_HEADER2_CDUFMAIORDISTANCIA peel(pick(nPos, 116, 2), " ")
#define R_HEADER2_CDUFMAIORDISTANCIA(A) put(nRec, 116, A :2.2)
!-----------------------------------------------------------
! FIELD : VRTOTALPESO 
#define S_HEADER2_VRTOTALPESO peel(pick(nPos, 118, 15), " ")
#define R_HEADER2_VRTOTALPESO(A) put(nRec, 118, A :15.15)
!-----------------------------------------------------------
! FIELD : VRTOTALKM 
#define S_HEADER2_VRTOTALKM peel(pick(nPos, 133, 5), " ")
#define R_HEADER2_VRTOTALKM(A) put(nRec, 133, A :5.5)
!-----------------------------------------------------------
! FIELD : CDEQUIPAMENTO 
#define S_HEADER2_CDEQUIPAMENTO peel(pick(nPos, 138, 10), " ")
#define R_HEADER2_CDEQUIPAMENTO(A) put(nRec, 138, A :10.10)
!-----------------------------------------------------------
! FIELD : DSPLACAVEICULO 
#define S_HEADER2_DSPLACAVEICULO peel(pick(nPos, 148, 10), " ")
#define R_HEADER2_DSPLACAVEICULO(A) put(nRec, 148, A :10.10)
!-----------------------------------------------------------
! FIELD : NMMOTORISTA
#define S_HEADER2_NMMOTORISTA peel(pick(nPos, 158, 40), " ")
#define R_HEADER2_NMMOTORISTA(A) put(nRec, 158, A :40.40)
!-----------------------------------------------------------
! FIELD : TXOBSERVACAO 
#define S_HEADER2_TXOBSERVACAO peel(pick(nPos, 198, 80), " ")
#define R_HEADER2_TXOBSERVACAO(A) put(nRec, 198, A :80.80)
!-----------------------------------------------------------
! FIELD : TPVIAGEM 
#define S_HEADER2_TPVIAGEM peel(pick(nPos, 278, 1), " ")
#define R_HEADER2_TPVIAGEM(A) put(nRec, 278, A :1.1)
!-----------------------------------------------------------
! FIELD : STEXCLUIREFEXT 
#define S_HEADER2_STEXCLUIREFEXT peel(pick(nPos, 279, 1), " ")
#define R_HEADER2_STEXCLUIREFEXT(A) put(nRec, 279, A :1.1)
!-----------------------------------------------------------
! FIELD : QTEMBTRANSP 
#define S_HEADER2_QTEMBTRANSP peel(pick(nPos, 280, 4), " ")
#define R_HEADER2_QTEMBTRANSP(A) put(nRec, 280, A :4.4)
!-----------------------------------------------------------
















! FIELD : TPREGISTRO
#define S_DETAIL_TPREGISTRO peel(pick(nPos, 1, 3), " ")
#define R_DETAIL_TPREGISTRO(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : FLOPERACAO 
#define S_DETAIL_FLOPERACAO peel(pick(nPos, 4, 1), " ")
#define R_DETAIL_FLOPERACAO(A) put(nRec, 4, A :1.1)
!-----------------------------------------------------------
! FIELD : TPDOCUMENTO 
#define S_DETAIL_TPDOCUMENTO peel(pick(nPos, 5, 1), " ")
#define R_DETAIL_TPDOCUMENTO(A) put(nRec, 5, A :1.1)
!-----------------------------------------------------------
! FIELD : PARCEIROCOMERCIAL 
#define S_DETAIL_PARCEIROCOMERCIAL peel(pick(nPos, 6, 14), " ")
#define R_DETAIL_PARCEIROCOMERCIAL(A) put(nRec, 6, A :14.14)
!-----------------------------------------------------------
! FIELD : CDNOTA 
#define S_DETAIL_CDNOTA peel(pick(nPos, 20, 12), " ")
#define R_DETAIL_CDNOTA(A) put(nRec, 20, A :12.12)
!-----------------------------------------------------------
! FIELD : CDSERIE
#define S_DETAIL_CDSERIE peel(pick(nPos, 32, 3), " ")
#define R_DETAIL_CDSERIE(A) put(nRec, 32, A :3.3)
!-----------------------------------------------------------
! FIELD : DTEMISSAOX 
#define S_DETAIL_DTEMISSAOX peel(pick(nPos, 35, 10), " ")
#define R_DETAIL_DTEMISSAOX(A) put(nRec, 35, A :10.10)
!-----------------------------------------------------------
! FIELD : DTEMBARQUE 
#define S_DETAIL_DTEMBARQUE peel(pick(nPos, 45, 10), " ")
#define R_DETAIL_DTEMBARQUE(A) put(nRec, 45, A :10.10)
!-----------------------------------------------------------
! FIELD : TPENTRADASAIDAX 
#define S_DETAIL_TPENTRADASAIDAX peel(pick(nPos, 55, 1), " ")
#define R_DETAIL_TPENTRADASAIDAX(A) put(nRec, 55, A :1.1)
!-----------------------------------------------------------
! FIELD : PARDESTREMET 
#define S_DETAIL_PARDESTREMET peel(pick(nPos, 56, 14), " ")
#define R_DETAIL_PARDESTREMET(A) put(nRec, 56, A :14.14)
!-----------------------------------------------------------
! FIELD : CDMEIOTRANSPORTEX
#define S_DETAIL_CDMEIOTRANSPORTEX peel(pick(nPos, 70, 4), " ")
#define R_DETAIL_CDMEIOTRANSPORTEX(A) put(nRec, 70, A :4.4)
!-----------------------------------------------------------
! FIELD : CDROMANEIO 
#define S_DETAIL_CDROMANEIO peel(pick(nPos, 74, 15), " ")
#define R_DETAIL_CDROMANEIO(A) put(nRec, 74, A :15.15)
!-----------------------------------------------------------
! FIELD : CDTRANSPORTADORA 
#define S_DETAIL_CDTRANSPORTADORA peel(pick(nPos, 89, 14), " ")
#define R_DETAIL_CDTRANSPORTADORA(A) put(nRec, 89, A :14.14)
!-----------------------------------------------------------

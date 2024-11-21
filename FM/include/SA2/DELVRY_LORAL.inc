! File DELVRY01 : 
!===========================================================
! Line : EDI_DC40 

!===========================================================
! FIELD : EDI_DC40 
#define S_EDI_DC40_EDI_DC40 peel(pick(nPos, 1, 10), " ")
#define R_EDI_DC40_EDI_DC40(A) put(nRec, 1, A :10.10)
!-----------------------------------------------------------
! FIELD : EDI_DC40_MANDT 

#define S_EDI_DC40_EDI_DC40_MANDT peel(pick(nPos, 11, 3), " ")
#define R_EDI_DC40_EDI_DC40_MANDT(A) put(nRec, 11, A :3.3)
!-----------------------------------------------------------
! FIELD : EDI_DC40_DOCNUM 

#define S_EDI_DC40_EDI_DC40_DOCNUM peel(pick(nPos, 14, 16), " ")
#define R_EDI_DC40_EDI_DC40_DOCNUM(A) put(nRec, 14, A :16.16)
!-----------------------------------------------------------
! FIELD : EDI_DC40_DOCREL 

#define S_EDI_DC40_EDI_DC40_DOCREL peel(pick(nPos, 30, 4), " ")
#define R_EDI_DC40_EDI_DC40_DOCREL(A) put(nRec, 30, A :4.4)
!-----------------------------------------------------------
! FIELD : EDI_DC40_STATUS 

#define S_EDI_DC40_EDI_DC40_STATUS peel(pick(nPos, 34, 2), " ")
#define R_EDI_DC40_EDI_DC40_STATUS(A) put(nRec, 34, A :2.2)
!-----------------------------------------------------------
! FIELD : EDI_DC40_DIRECT 

#define S_EDI_DC40_EDI_DC40_DIRECT peel(pick(nPos, 36, 1), " ")
#define R_EDI_DC40_EDI_DC40_DIRECT(A) put(nRec, 36, A :1.1)
!-----------------------------------------------------------
! FIELD : EDI_DC40_OUTMOD 

#define S_EDI_DC40_EDI_DC40_OUTMOD peel(pick(nPos, 37, 1), " ")
#define R_EDI_DC40_EDI_DC40_OUTMOD(A) put(nRec, 37, A :1.1)
!-----------------------------------------------------------
! FIELD : EDI_DC40_EXPRSS 

#define S_EDI_DC40_EDI_DC40_EXPRSS peel(pick(nPos, 38, 1), " ")
#define R_EDI_DC40_EDI_DC40_EXPRSS(A) put(nRec, 38, A :1.1)
!-----------------------------------------------------------
! FIELD : EDI_DC40_TEST 

#define S_EDI_DC40_EDI_DC40_TEST peel(pick(nPos, 39, 1), " ")
#define R_EDI_DC40_EDI_DC40_TEST(A) put(nRec, 39, A :1.1)
!-----------------------------------------------------------
! FIELD : EDI_DC40_IDOCTYP 

#define S_EDI_DC40_EDI_DC40_IDOCTYP peel(pick(nPos, 40, 30), " ")
#define R_EDI_DC40_EDI_DC40_IDOCTYP(A) put(nRec, 40, A :30.30)
!-----------------------------------------------------------
! FIELD : EDI_DC40_CIMTYP 

#define S_EDI_DC40_EDI_DC40_CIMTYP peel(pick(nPos, 70, 30), " ")
#define R_EDI_DC40_EDI_DC40_CIMTYP(A) put(nRec, 70, A :30.30)
!-----------------------------------------------------------
! FIELD : EDI_DC40_MESTYP 

#define S_EDI_DC40_EDI_DC40_MESTYP peel(pick(nPos, 100, 30), " ")
#define R_EDI_DC40_EDI_DC40_MESTYP(A) put(nRec, 100, A :30.30)
!-----------------------------------------------------------
! FIELD : EDI_DC40_MESCOD 

#define S_EDI_DC40_EDI_DC40_MESCOD peel(pick(nPos, 130, 3), " ")
#define R_EDI_DC40_EDI_DC40_MESCOD(A) put(nRec, 130, A :3.3)
!-----------------------------------------------------------
! FIELD : EDI_DC40_MESFCT 
#define S_EDI_DC40_EDI_DC40_MESFCT peel(pick(nPos, 133, 3), " ")
#define R_EDI_DC40_EDI_DC40_MESFCT(A) put(nRec, 133, A :3.3)
!-----------------------------------------------------------
! FIELD : EDI_DC40_STD 
#define S_EDI_DC40_EDI_DC40_STD peel(pick(nPos, 136, 1), " ")
#define R_EDI_DC40_EDI_DC40_STD(A) put(nRec, 136, A :1.1)
!-----------------------------------------------------------
! FIELD : EDI_DC40_STDVRS 
#define S_EDI_DC40_EDI_DC40_STDVRS peel(pick(nPos, 137, 6), " ")
#define R_EDI_DC40_EDI_DC40_STDVRS(A) put(nRec, 137, A :6.6)
!-----------------------------------------------------------
! FIELD : EDI_DC40_STDMES 
#define S_EDI_DC40_EDI_DC40_STDMES peel(pick(nPos, 143, 6), " ")
#define R_EDI_DC40_EDI_DC40_STDMES(A) put(nRec, 143, A :6.6)
!-----------------------------------------------------------
! FIELD : EDI_DC40_SNDPOR 

#define S_EDI_DC40_EDI_DC40_SNDPOR peel(pick(nPos, 149, 10), " ")
#define R_EDI_DC40_EDI_DC40_SNDPOR(A) put(nRec, 149, A :10.10)
!-----------------------------------------------------------
! FIELD : EDI_DC40_SNDPRT 

#define S_EDI_DC40_EDI_DC40_SNDPRT peel(pick(nPos, 159, 2), " ")
#define R_EDI_DC40_EDI_DC40_SNDPRT(A) put(nRec, 159, A :2.2)
!-----------------------------------------------------------
! FIELD : EDI_DC40_SNDPFC 

#define S_EDI_DC40_EDI_DC40_SNDPFC peel(pick(nPos, 161, 2), " ")
#define R_EDI_DC40_EDI_DC40_SNDPFC(A) put(nRec, 161, A :2.2)
!-----------------------------------------------------------
! FIELD : EDI_DC40_SNDPRN 
#define S_EDI_DC40_EDI_DC40_SNDPRN peel(pick(nPos, 163, 10), " ")
#define R_EDI_DC40_EDI_DC40_SNDPRN(A) put(nRec, 163, A :10.10)
!-----------------------------------------------------------
! FIELD : EDI_DC40_SNDSAD 
#define S_EDI_DC40_EDI_DC40_SNDSAD peel(pick(nPos, 173, 21), " ")
#define R_EDI_DC40_EDI_DC40_SNDSAD(A) put(nRec, 173, A :21.21)
!-----------------------------------------------------------
! FIELD : EDI_DC40_SNDLAD 
#define S_EDI_DC40_EDI_DC40_SNDLAD peel(pick(nPos, 194, 70), " ")
#define R_EDI_DC40_EDI_DC40_SNDLAD(A) put(nRec, 194, A :70.70)
!-----------------------------------------------------------
! FIELD : EDI_DC40_RCVPOR 




#define S_EDI_DC40_EDI_DC40_RCVPOR peel(pick(nPos, 264, 10), " ")
#define R_EDI_DC40_EDI_DC40_RCVPOR(A) put(nRec, 264, A :10.10)
!-----------------------------------------------------------
! FIELD : EDI_DC40_RCVPRT 

#define S_EDI_DC40_EDI_DC40_RCVPRT peel(pick(nPos, 274, 2), " ")
#define R_EDI_DC40_EDI_DC40_RCVPRT(A) put(nRec, 274, A :2.2)
!-----------------------------------------------------------
! FIELD : EDI_DC40_RCVPFC 

#define S_EDI_DC40_EDI_DC40_RCVPFC peel(pick(nPos, 276, 2), " ")
#define R_EDI_DC40_EDI_DC40_RCVPFC(A) put(nRec, 276, A :2.2)
!-----------------------------------------------------------
! FIELD : EDI_DC40_RCVPRN 

#define S_EDI_DC40_EDI_DC40_RCVPRN peel(pick(nPos, 278, 10), " ")
#define R_EDI_DC40_EDI_DC40_RCVPRN(A) put(nRec, 278, A :10.10)
!-----------------------------------------------------------
! FIELD : EDI_DC40_RCVSAD 

#define S_EDI_DC40_EDI_DC40_RCVSAD peel(pick(nPos, 288, 21), " ")
#define R_EDI_DC40_EDI_DC40_RCVSAD(A) put(nRec, 288, A :21.21)
!-----------------------------------------------------------
! FIELD : EDI_DC40_RCVLAD 

#define S_EDI_DC40_EDI_DC40_RCVLAD peel(pick(nPos, 309, 70), " ")
#define R_EDI_DC40_EDI_DC40_RCVLAD(A) put(nRec, 309, A :70.70)
!-----------------------------------------------------------
! FIELD : EDI_DC40_CREDAT 

#define S_EDI_DC40_EDI_DC40_CREDAT peel(pick(nPos, 379, 8), " ")
#define R_EDI_DC40_EDI_DC40_CREDAT(A) put(nRec, 379, A :8.8)
!-----------------------------------------------------------
! FIELD : EDI_DC40_CRETIM 

#define S_EDI_DC40_EDI_DC40_CRETIM peel(pick(nPos, 387, 6), " ")
#define R_EDI_DC40_EDI_DC40_CRETIM(A) put(nRec, 387, A :6.6)
!-----------------------------------------------------------
! FIELD : EDI_DC40_REFINT 

#define S_EDI_DC40_EDI_DC40_REFINT peel(pick(nPos, 393, 14), " ")
#define R_EDI_DC40_EDI_DC40_REFINT(A) put(nRec, 393, A :14.14)
!-----------------------------------------------------------
! FIELD : EDI_DC40_REFGRP 




#define S_EDI_DC40_EDI_DC40_REFGRP peel(pick(nPos, 407, 14), " ")
#define R_EDI_DC40_EDI_DC40_REFGRP(A) put(nRec, 407, A :14.14)
!-----------------------------------------------------------
! FIELD : EDI_DC40_REFMES 

#define S_EDI_DC40_EDI_DC40_REFMES peel(pick(nPos, 421, 14), " ")
#define R_EDI_DC40_EDI_DC40_REFMES(A) put(nRec, 421, A :14.14)
!-----------------------------------------------------------
! FIELD : EDI_DC40_ARCKEY 

#define S_EDI_DC40_EDI_DC40_ARCKEY peel(pick(nPos, 435, 70), " ")
#define R_EDI_DC40_EDI_DC40_ARCKEY(A) put(nRec, 435, A :70.70)
!-----------------------------------------------------------
! FIELD : EDI_DC40_SERIAL 

#define S_EDI_DC40_EDI_DC40_SERIAL peel(pick(nPos, 505, 20), " ")
#define R_EDI_DC40_EDI_DC40_SERIAL(A) put(nRec, 505, A :20.20)
!-----------------------------------------------------------
!===========================================================

! Line : E2EDL20003 
!===========================================================
! FIELD : VBELN Nº documento de vendas e distribuição
#define S_E2EDL20003_VBELN peel(pick(nPos, 64, 10), " ")
#define R_E2EDL20003_VBELN(A) put(nRec, 64, A :10.10)
!-----------------------------------------------------------
! FIELD : VSTEL Local de expedição/local de recebimento de mercadoria
#define S_E2EDL20003_VSTEL peel(pick(nPos, 74, 4), " ")
#define R_E2EDL20003_VSTEL(A) put(nRec, 74, A :4.4)
!-----------------------------------------------------------
! FIELD : VKORG Organização de vendas
#define S_E2EDL20003_VKORG peel(pick(nPos, 78, 4), " ")
#define R_E2EDL20003_VKORG(A) put(nRec, 78, A :4.4)
!-----------------------------------------------------------
! FIELD : LSTEL Ponto de carregamento
#define S_E2EDL20003_LSTEL peel(pick(nPos, 82, 2), " ")
#define R_E2EDL20003_LSTEL(A) put(nRec, 82, A :2.2)
!-----------------------------------------------------------
! FIELD : VKBUR Escritório de vendas
#define S_E2EDL20003_VKBUR peel(pick(nPos, 84, 4), " ")
#define R_E2EDL20003_VKBUR(A) put(nRec, 84, A :4.4)
!-----------------------------------------------------------
! FIELD : LGNUM Nºdepósito/complexo de depósito
#define S_E2EDL20003_LGNUM peel(pick(nPos, 88, 3), " ")
#define R_E2EDL20003_LGNUM(A) put(nRec, 88, A :3.3)
!-----------------------------------------------------------
! FIELD : ABLAD Ponto de descarga
#define S_E2EDL20003_ABLAD peel(pick(nPos, 91, 25), " ")
#define R_E2EDL20003_ABLAD(A) put(nRec, 91, A :25.25)
!-----------------------------------------------------------
! FIELD : INCO1 Incoterms parte 1
#define S_E2EDL20003_INCO1 peel(pick(nPos, 116, 3), " ")
#define R_E2EDL20003_INCO1(A) put(nRec, 116, A :3.3)
!-----------------------------------------------------------
! FIELD : INCO2 Incoterms parte 2
#define S_E2EDL20003_INCO2 peel(pick(nPos, 119, 28), " ")
#define R_E2EDL20003_INCO2(A) put(nRec, 119, A :28.28)
!-----------------------------------------------------------
! FIELD : ROUTE Itinerário
#define S_E2EDL20003_ROUTE peel(pick(nPos, 147, 6), " ")
#define R_E2EDL20003_ROUTE(A) put(nRec, 147, A :6.6)
!-----------------------------------------------------------
! FIELD : VSBED Condição de expedição
#define S_E2EDL20003_VSBED peel(pick(nPos, 153, 2), " ")
#define R_E2EDL20003_VSBED(A) put(nRec, 153, A :2.2)
!-----------------------------------------------------------
! FIELD : BTGEW Peso total
#define S_E2EDL20003_BTGEW peel(pick(nPos, 155, 17), " ")
#define R_E2EDL20003_BTGEW(A) put(nRec, 155, A :17.17)
!-----------------------------------------------------------
! FIELD : NTGEW Peso líquido
#define S_E2EDL20003_NTGEW peel(pick(nPos, 172, 15), " ")
#define R_E2EDL20003_NTGEW(A) put(nRec, 172, A :15.15)
!-----------------------------------------------------------
! FIELD : GEWEI Unidade de peso
#define S_E2EDL20003_GEWEI peel(pick(nPos, 187, 3), " ")
#define R_E2EDL20003_GEWEI(A) put(nRec, 187, A :3.3)
!-----------------------------------------------------------
! FIELD : VOLUM Volume
#define S_E2EDL20003_VOLUM peel(pick(nPos, 190, 15), " ")
#define R_E2EDL20003_VOLUM(A) put(nRec, 190, A :15.15)
!-----------------------------------------------------------
! FIELD : VOLEH Unidade de volume
#define S_E2EDL20003_VOLEH peel(pick(nPos, 205, 3), " ")
#define R_E2EDL20003_VOLEH(A) put(nRec, 205, A :3.3)
!-----------------------------------------------------------
! FIELD : ANZPK Número total dos volumes da remessa
#define S_E2EDL20003_ANZPK peel(pick(nPos, 208, 5), " ")
#define R_E2EDL20003_ANZPK(A) put(nRec, 208, A :5.5)
!-----------------------------------------------------------
! FIELD : BOLNR Conhecimento de transporte
#define S_E2EDL20003_BOLNR peel(pick(nPos, 213, 35), " ")
#define R_E2EDL20003_BOLNR(A) put(nRec, 213, A :35.35)
!-----------------------------------------------------------
! FIELD : TRATY Tipo de veículo de transporte
#define S_E2EDL20003_TRATY peel(pick(nPos, 248, 4), " ")
#define R_E2EDL20003_TRATY(A) put(nRec, 248, A :4.4)
!-----------------------------------------------------------
! FIELD : TRAID Identificação do transporte
#define S_E2EDL20003_TRAID peel(pick(nPos, 252, 20), " ")
#define R_E2EDL20003_TRAID(A) put(nRec, 252, A :20.20)
!-----------------------------------------------------------
! FIELD : XABLN Nº nota acompanhamento mercadoria
#define S_E2EDL20003_XABLN peel(pick(nPos, 272, 10), " ")
#define R_E2EDL20003_XABLN(A) put(nRec, 272, A :10.10)
!-----------------------------------------------------------
! FIELD : LIFEX Identificação externa da nota de remessa
#define S_E2EDL20003_LIFEX peel(pick(nPos, 282, 35), " ")
#define R_E2EDL20003_LIFEX(A) put(nRec, 282, A :35.35)
!-----------------------------------------------------------
! FIELD : PARID Nº parceiro externo
#define S_E2EDL20003_PARID peel(pick(nPos, 317, 35), " ")
#define R_E2EDL20003_PARID(A) put(nRec, 317, A :35.35)
!-----------------------------------------------------------
! FIELD : PODAT Data CRR
#define S_E2EDL20003_PODAT peel(pick(nPos, 352, 8), " ")
#define R_E2EDL20003_PODAT(A) put(nRec, 352, A :8.8)
!-----------------------------------------------------------
! FIELD : POTIM Hora CRR
#define S_E2EDL20003_POTIM peel(pick(nPos, 360, 6), " ")
#define R_E2EDL20003_POTIM(A) put(nRec, 360, A :6.6)
!-----------------------------------------------------------
! FIELD : LOC_SEQ Seqüência das UCs intermédias no processo de devoluções
#define S_E2EDL20003_LOC_SEQ peel(pick(nPos, 366, 3), " ")
#define R_E2EDL20003_LOC_SEQ(A) put(nRec, 366, A :3.3)
!-----------------------------------------------------------
! FIELD : HOLD Cabeçalho do recebimento ainda não concluído (memorizado)
#define S_E2EDL20003_HOLD peel(pick(nPos, 369, 1), " ")
#define R_E2EDL20003_HOLD(A) put(nRec, 369, A :1.1)
!-----------------------------------------------------------
! FIELD : MAX_ERR_TYPE Ocorreu tipo de erro máximo
#define S_E2EDL20003_MAX_ERR_TYPE peel(pick(nPos, 370, 1), " ")
#define R_E2EDL20003_MAX_ERR_TYPE(A) put(nRec, 370, A :1.1)
!-----------------------------------------------------------
! FIELD : LE_SCENARIO Cenário Logistics Execution
#define S_E2EDL20003_LE_SCENARIO peel(pick(nPos, 371, 1), " ")
#define R_E2EDL20003_LE_SCENARIO(A) put(nRec, 371, A :1.1)
!-----------------------------------------------------------
! FIELD : RECIPIENT_CREATE Criado por recebedor
#define S_E2EDL20003_RECIPIENT_CREATE peel(pick(nPos, 372, 1), " ")
#define R_E2EDL20003_RECIPIENT_CREATE(A) put(nRec, 372, A :1.1)
!-----------------------------------------------------------
!===========================================================
! Line : E2EDL22 
!===========================================================
! FIELD : VSTEL_BEZ Denominação do local de expedição
#define S_E2EDL22_VSTEL_BEZ peel(pick(nPos, 64, 30), " ")
#define R_E2EDL22_VSTEL_BEZ(A) put(nRec, 64, A :30.30)
!-----------------------------------------------------------
! FIELD : VKORG_BEZ Denominação organização de vendas
#define S_E2EDL22_VKORG_BEZ peel(pick(nPos, 94, 20), " ")
#define R_E2EDL22_VKORG_BEZ(A) put(nRec, 94, A :20.20)
!-----------------------------------------------------------
! FIELD : LSTEL_BEZ Denominação do ponto de carregamento
#define S_E2EDL22_LSTEL_BEZ peel(pick(nPos, 114, 20), " ")
#define R_E2EDL22_LSTEL_BEZ(A) put(nRec, 114, A :20.20)
!-----------------------------------------------------------
! FIELD : VKBUR_BEZ Denominação escritório de vendas
#define S_E2EDL22_VKBUR_BEZ peel(pick(nPos, 134, 20), " ")
#define R_E2EDL22_VKBUR_BEZ(A) put(nRec, 134, A :20.20)
!-----------------------------------------------------------
! FIELD : LGNUM_BEZ Denominação do nº do depósito
#define S_E2EDL22_LGNUM_BEZ peel(pick(nPos, 154, 25), " ")
#define R_E2EDL22_LGNUM_BEZ(A) put(nRec, 154, A :25.25)
!-----------------------------------------------------------
! FIELD : INCO1_BEZ Denominação dos Incoterms
#define S_E2EDL22_INCO1_BEZ peel(pick(nPos, 179, 30), " ")
#define R_E2EDL22_INCO1_BEZ(A) put(nRec, 179, A :30.30)
!-----------------------------------------------------------
! FIELD : ROUTE_BEZ Denominação do itinerário
#define S_E2EDL22_ROUTE_BEZ peel(pick(nPos, 209, 40), " ")
#define R_E2EDL22_ROUTE_BEZ(A) put(nRec, 209, A :40.40)
!-----------------------------------------------------------
! FIELD : VSBED_BEZ Denominação da condição de expedição
#define S_E2EDL22_VSBED_BEZ peel(pick(nPos, 249, 20), " ")
#define R_E2EDL22_VSBED_BEZ(A) put(nRec, 249, A :20.20)
!-----------------------------------------------------------
! FIELD : TRATY_BEZ Denominação tipo de meio auxiliar de expedição
#define S_E2EDL22_TRATY_BEZ peel(pick(nPos, 269, 20), " ")
#define R_E2EDL22_TRATY_BEZ(A) put(nRec, 269, A :20.20)
!-----------------------------------------------------------
!===========================================================
! Line : E2EDL21 
!===========================================================
! FIELD : LFART Tipo de remessa
#define S_E2EDL21_LFART peel(pick(nPos, 64, 4), " ")
#define R_E2EDL21_LFART(A) put(nRec, 64, A :4.4)
!-----------------------------------------------------------
! FIELD : BZIRK Região de vendas
#define S_E2EDL21_BZIRK peel(pick(nPos, 68, 6), " ")
#define R_E2EDL21_BZIRK(A) put(nRec, 68, A :6.6)
!-----------------------------------------------------------
! FIELD : AUTLF Fornecimento completo por ordem: obrigatório ?
#define S_E2EDL21_AUTLF peel(pick(nPos, 74, 1), " ")
#define R_E2EDL21_AUTLF(A) put(nRec, 74, A :1.1)
!-----------------------------------------------------------
! FIELD : EXPKZ Código de exportação
#define S_E2EDL21_EXPKZ peel(pick(nPos, 75, 1), " ")
#define R_E2EDL21_EXPKZ(A) put(nRec, 75, A :1.1)
!-----------------------------------------------------------
! FIELD : LIFSK Bloqueio de nota de remessa (cabeçalho do documento)
#define S_E2EDL21_LIFSK peel(pick(nPos, 76, 2), " ")
#define R_E2EDL21_LIFSK(A) put(nRec, 76, A :2.2)
!-----------------------------------------------------------
! FIELD : LPRIO Prioridade de remessa
#define S_E2EDL21_LPRIO peel(pick(nPos, 78, 2), " ")
#define R_E2EDL21_LPRIO(A) put(nRec, 78, A :2.2)
!-----------------------------------------------------------
! FIELD : KDGRP Grupo de clientes
#define S_E2EDL21_KDGRP peel(pick(nPos, 80, 2), " ")
#define R_E2EDL21_KDGRP(A) put(nRec, 80, A :2.2)
!-----------------------------------------------------------
! FIELD : BEROT Local de disponibilização
#define S_E2EDL21_BEROT peel(pick(nPos, 82, 20), " ")
#define R_E2EDL21_BEROT(A) put(nRec, 82, A :20.20)
!-----------------------------------------------------------
! FIELD : TRAGR Grupo de transporte
#define S_E2EDL21_TRAGR peel(pick(nPos, 102, 4), " ")
#define R_E2EDL21_TRAGR(A) put(nRec, 102, A :4.4)
!-----------------------------------------------------------
! FIELD : TRSPG Motivo de bloqueio transporte
#define S_E2EDL21_TRSPG peel(pick(nPos, 106, 2), " ")
#define R_E2EDL21_TRSPG(A) put(nRec, 106, A :2.2)
!-----------------------------------------------------------
! FIELD : AULWE Planejamento de itinerários
#define S_E2EDL21_AULWE peel(pick(nPos, 108, 10), " ")
#define R_E2EDL21_AULWE(A) put(nRec, 108, A :10.10)
!-----------------------------------------------------------
!===========================================================
! Line : E2EDL23 
!===========================================================
! FIELD : LFART_BEZ Denominação tipo de remessa
#define S_E2EDL23_LFART_BEZ peel(pick(nPos, 64, 20), " ")
#define R_E2EDL23_LFART_BEZ(A) put(nRec, 64, A :20.20)
!-----------------------------------------------------------
! FIELD : LPRIO_BEZ Denominação prioridades de remessa
#define S_E2EDL23_LPRIO_BEZ peel(pick(nPos, 84, 20), " ")
#define R_E2EDL23_LPRIO_BEZ(A) put(nRec, 84, A :20.20)
!-----------------------------------------------------------
! FIELD : BZIRK_BEZ Denominação da zona de distribuição
#define S_E2EDL23_BZIRK_BEZ peel(pick(nPos, 104, 20), " ")
#define R_E2EDL23_BZIRK_BEZ(A) put(nRec, 104, A :20.20)
!-----------------------------------------------------------
! FIELD : LIFSK_BEZ Denominação motivo do bloqueio de fornecimento
#define S_E2EDL23_LIFSK_BEZ peel(pick(nPos, 124, 20), " ")
#define R_E2EDL23_LIFSK_BEZ(A) put(nRec, 124, A :20.20)
!-----------------------------------------------------------
! FIELD : KDGRP_BEZ Denominação do grupo de clientes
#define S_E2EDL23_KDGRP_BEZ peel(pick(nPos, 144, 20), " ")
#define R_E2EDL23_KDGRP_BEZ(A) put(nRec, 144, A :20.20)
!-----------------------------------------------------------
! FIELD : TRAGR_BEZ Denominação grupo de transporte
#define S_E2EDL23_TRAGR_BEZ peel(pick(nPos, 164, 20), " ")
#define R_E2EDL23_TRAGR_BEZ(A) put(nRec, 164, A :20.20)
!-----------------------------------------------------------
! FIELD : TRSPG_BEZ Denominação do motivo do bloqueio transporte
#define S_E2EDL23_TRSPG_BEZ peel(pick(nPos, 184, 20), " ")
#define R_E2EDL23_TRSPG_BEZ(A) put(nRec, 184, A :20.20)
!-----------------------------------------------------------
! FIELD : AULWE_BEZ Denominação plano de itinerários
#define S_E2EDL23_AULWE_BEZ peel(pick(nPos, 204, 40), " ")
#define R_E2EDL23_AULWE_BEZ(A) put(nRec, 204, A :40.40)
!-----------------------------------------------------------
!===========================================================
! Line : E2EDL18 
!===========================================================
! FIELD : QUALF Qualificador IDOC: controle (fornecimento)
#define S_E2EDL18_QUALF peel(pick(nPos, 64, 3), " ")
#define R_E2EDL18_QUALF(A) put(nRec, 64, A :3.3)
!-----------------------------------------------------------
! FIELD : PARAM IDOC: parâmetros de controle
#define S_E2EDL18_PARAM peel(pick(nPos, 67, 20), " ")
#define R_E2EDL18_PARAM(A) put(nRec, 67, A :20.20)
!-----------------------------------------------------------
!===========================================================
! Line : E2ADRM1001 
!===========================================================
! FIELD : PARTNER_Q Qualificador para função do parceiro
#define S_E2ADRM1001_PARTNER_Q peel(pick(nPos, 64, 3), " ")
#define R_E2ADRM1001_PARTNER_Q(A) put(nRec, 64, A :3.3)
!-----------------------------------------------------------
! FIELD : ADDRESS_T Categoria do endereço
#define S_E2ADRM1001_ADDRESS_T peel(pick(nPos, 67, 1), " ")
#define R_E2ADRM1001_ADDRESS_T(A) put(nRec, 67, A :1.1)
!-----------------------------------------------------------
! FIELD : PARTNER_ID Nº parceiro (SAP)
#define S_E2ADRM1001_PARTNER_ID peel(pick(nPos, 68, 17), " ")
#define R_E2ADRM1001_PARTNER_ID(A) put(nRec, 68, A :17.17)
!-----------------------------------------------------------
! FIELD : JURISDIC Localização para cálculo de impostos - Tax Jurisdiction Code
#define S_E2ADRM1001_JURISDIC peel(pick(nPos, 85, 17), " ")
#define R_E2ADRM1001_JURISDIC(A) put(nRec, 85, A :17.17)
!-----------------------------------------------------------
! FIELD : LANGUAGE Código de idioma
#define S_E2ADRM1001_LANGUAGE peel(pick(nPos, 102, 2), " ")
#define R_E2ADRM1001_LANGUAGE(A) put(nRec, 102, A :2.2)
!-----------------------------------------------------------
! FIELD : FORMOFADDR Forma de tratamento no endereço
#define S_E2ADRM1001_FORMOFADDR peel(pick(nPos, 104, 15), " ")
#define R_E2ADRM1001_FORMOFADDR(A) put(nRec, 104, A :15.15)
!-----------------------------------------------------------
! FIELD : NAME1 Nome ou linha de endereço
#define S_E2ADRM1001_NAME1 peel(pick(nPos, 119, 40), " ")
#define R_E2ADRM1001_NAME1(A) put(nRec, 119, A :40.40)
!-----------------------------------------------------------
! FIELD : NAME2 Nome ou linha de endereço
#define S_E2ADRM1001_NAME2 peel(pick(nPos, 159, 40), " ")
#define R_E2ADRM1001_NAME2(A) put(nRec, 159, A :40.40)
!-----------------------------------------------------------
! FIELD : NAME3 Nome ou linha de endereço
#define S_E2ADRM1001_NAME3 peel(pick(nPos, 199, 40), " ")
#define R_E2ADRM1001_NAME3(A) put(nRec, 199, A :40.40)
!-----------------------------------------------------------
! FIELD : NAME4 Nome ou linha de endereço
#define S_E2ADRM1001_NAME4 peel(pick(nPos, 239, 40), " ")
#define R_E2ADRM1001_NAME4(A) put(nRec, 239, A :40.40)
!-----------------------------------------------------------
! FIELD : NAME_TEXT Linha de endereço ou nome (editada)
#define S_E2ADRM1001_NAME_TEXT peel(pick(nPos, 279, 50), " ")
#define R_E2ADRM1001_NAME_TEXT(A) put(nRec, 279, A :50.50)
!-----------------------------------------------------------
! FIELD : NAME_CO Linha seguinte para nome ou endereço (c/o)
#define S_E2ADRM1001_NAME_CO peel(pick(nPos, 329, 40), " ")
#define R_E2ADRM1001_NAME_CO(A) put(nRec, 329, A :40.40)
!-----------------------------------------------------------
! FIELD : LOCATION Descrição da localidade
#define S_E2ADRM1001_LOCATION peel(pick(nPos, 369, 40), " ")
#define R_E2ADRM1001_LOCATION(A) put(nRec, 369, A :40.40)
!-----------------------------------------------------------
! FIELD : BUILDING Localização: edifício
#define S_E2ADRM1001_BUILDING peel(pick(nPos, 409, 10), " ")
#define R_E2ADRM1001_BUILDING(A) put(nRec, 409, A :10.10)
!-----------------------------------------------------------
! FIELD : FLOOR Localização: andar
#define S_E2ADRM1001_FLOOR peel(pick(nPos, 419, 10), " ")
#define R_E2ADRM1001_FLOOR(A) put(nRec, 419, A :10.10)
!-----------------------------------------------------------
! FIELD : ROOM Descrição da localização: quarto
#define S_E2ADRM1001_ROOM peel(pick(nPos, 429, 10), " ")
#define R_E2ADRM1001_ROOM(A) put(nRec, 429, A :10.10)
!-----------------------------------------------------------
! FIELD : STREET1 Rua e nº
#define S_E2ADRM1001_STREET1 peel(pick(nPos, 439, 40), " ")
#define R_E2ADRM1001_STREET1(A) put(nRec, 439, A :40.40)
!-----------------------------------------------------------
! FIELD : STREET2 Rua e nº
#define S_E2ADRM1001_STREET2 peel(pick(nPos, 479, 40), " ")
#define R_E2ADRM1001_STREET2(A) put(nRec, 479, A :40.40)
!-----------------------------------------------------------
! FIELD : STREET3 Rua e nº
#define S_E2ADRM1001_STREET3 peel(pick(nPos, 519, 40), " ")
#define R_E2ADRM1001_STREET3(A) put(nRec, 519, A :40.40)
!-----------------------------------------------------------
! FIELD : HOUSE_SUPL Nº
#define S_E2ADRM1001_HOUSE_SUPL peel(pick(nPos, 559, 4), " ")
#define R_E2ADRM1001_HOUSE_SUPL(A) put(nRec, 559, A :4.4)
!-----------------------------------------------------------
! FIELD : HOUSE_RANG Nº porta (intervalo)
#define S_E2ADRM1001_HOUSE_RANG peel(pick(nPos, 563, 10), " ")
#define R_E2ADRM1001_HOUSE_RANG(A) put(nRec, 563, A :10.10)
!-----------------------------------------------------------
! FIELD : POSTL_COD1 Código postal
#define S_E2ADRM1001_POSTL_COD1 peel(pick(nPos, 573, 10), " ")
#define R_E2ADRM1001_POSTL_COD1(A) put(nRec, 573, A :10.10)
!-----------------------------------------------------------
! FIELD : POSTL_COD3 Código postal
#define S_E2ADRM1001_POSTL_COD3 peel(pick(nPos, 583, 10), " ")
#define R_E2ADRM1001_POSTL_COD3(A) put(nRec, 583, A :10.10)
!-----------------------------------------------------------
! FIELD : POSTL_AREA Zona distribuição postal
#define S_E2ADRM1001_POSTL_AREA peel(pick(nPos, 593, 15), " ")
#define R_E2ADRM1001_POSTL_AREA(A) put(nRec, 593, A :15.15)
!-----------------------------------------------------------
! FIELD : CITY1 Localidade ou cidade
#define S_E2ADRM1001_CITY1 peel(pick(nPos, 608, 40), " ")
#define R_E2ADRM1001_CITY1(A) put(nRec, 608, A :40.40)
!-----------------------------------------------------------
! FIELD : CITY2 Localidade ou cidade
#define S_E2ADRM1001_CITY2 peel(pick(nPos, 648, 40), " ")
#define R_E2ADRM1001_CITY2(A) put(nRec, 648, A :40.40)
!-----------------------------------------------------------
! FIELD : POSTL_PBOX Caixa postal
#define S_E2ADRM1001_POSTL_PBOX peel(pick(nPos, 688, 10), " ")
#define R_E2ADRM1001_POSTL_PBOX(A) put(nRec, 688, A :10.10)
!-----------------------------------------------------------
! FIELD : POSTL_COD2 Código postal
#define S_E2ADRM1001_POSTL_COD2 peel(pick(nPos, 698, 10), " ")
#define R_E2ADRM1001_POSTL_COD2(A) put(nRec, 698, A :10.10)
!-----------------------------------------------------------
! FIELD : POSTL_CITY Localidade ou cidade
#define S_E2ADRM1001_POSTL_CITY peel(pick(nPos, 708, 40), " ")
#define R_E2ADRM1001_POSTL_CITY(A) put(nRec, 708, A :40.40)
!-----------------------------------------------------------
! FIELD : TELEPHONE1 Nº telefone
#define S_E2ADRM1001_TELEPHONE1 peel(pick(nPos, 748, 30), " ")
#define R_E2ADRM1001_TELEPHONE1(A) put(nRec, 748, A :30.30)
!-----------------------------------------------------------
! FIELD : TELEPHONE2 Nº telefone
#define S_E2ADRM1001_TELEPHONE2 peel(pick(nPos, 778, 30), " ")
#define R_E2ADRM1001_TELEPHONE2(A) put(nRec, 778, A :30.30)
!-----------------------------------------------------------
! FIELD : TELEFAX Nº telefax
#define S_E2ADRM1001_TELEFAX peel(pick(nPos, 808, 30), " ")
#define R_E2ADRM1001_TELEFAX(A) put(nRec, 808, A :30.30)
!-----------------------------------------------------------
! FIELD : TELEX Nº telex
#define S_E2ADRM1001_TELEX peel(pick(nPos, 838, 30), " ")
#define R_E2ADRM1001_TELEX(A) put(nRec, 838, A :30.30)
!-----------------------------------------------------------
! FIELD : E_MAIL Endereço E-mail
#define S_E2ADRM1001_E_MAIL peel(pick(nPos, 868, 70), " ")
#define R_E2ADRM1001_E_MAIL(A) put(nRec, 868, A :70.70)
!-----------------------------------------------------------
! FIELD : COUNTRY1 Código de país (ISO alfanumérico)
#define S_E2ADRM1001_COUNTRY1 peel(pick(nPos, 938, 3), " ")
#define R_E2ADRM1001_COUNTRY1(A) put(nRec, 938, A :3.3)
!-----------------------------------------------------------
! FIELD : COUNTRY2 Código de país (ISO numérico)
#define S_E2ADRM1001_COUNTRY2 peel(pick(nPos, 941, 3), " ")
#define R_E2ADRM1001_COUNTRY2(A) put(nRec, 941, A :3.3)
!-----------------------------------------------------------
! FIELD : REGION Região, estado
#define S_E2ADRM1001_REGION peel(pick(nPos, 944, 3), " ")
#define R_E2ADRM1001_REGION(A) put(nRec, 944, A :3.3)
!-----------------------------------------------------------
! FIELD : COUNTY_COD Código de distrito (por exemplo, nos EUA)
#define S_E2ADRM1001_COUNTY_COD peel(pick(nPos, 947, 3), " ")
#define R_E2ADRM1001_COUNTY_COD(A) put(nRec, 947, A :3.3)
!-----------------------------------------------------------
! FIELD : COUNTY_TXT Nome county (por ex.nos EUA)
#define S_E2ADRM1001_COUNTY_TXT peel(pick(nPos, 950, 25), " ")
#define R_E2ADRM1001_COUNTY_TXT(A) put(nRec, 950, A :25.25)
!-----------------------------------------------------------
! FIELD : TZCODE Localização para fuso horário (código SAP)
#define S_E2ADRM1001_TZCODE peel(pick(nPos, 975, 6), " ")
#define R_E2ADRM1001_TZCODE(A) put(nRec, 975, A :6.6)
!-----------------------------------------------------------
! FIELD : TZDESC Localização para fuso horário (código externo)
#define S_E2ADRM1001_TZDESC peel(pick(nPos, 981, 35), " ")
#define R_E2ADRM1001_TZDESC(A) put(nRec, 981, A :35.35)
!-----------------------------------------------------------
!===========================================================
! Line : E2ADRE1000 
!===========================================================
! FIELD : EXTEND_Q Qualificador p/dados adicionais, ex.Nº D&B ou ILN
#define S_E2ADRE1000_EXTEND_Q peel(pick(nPos, 64, 3), " ")
#define R_E2ADRE1000_EXTEND_Q(A) put(nRec, 64, A :3.3)
!-----------------------------------------------------------
! FIELD : EXTEND_D Dados adicionais, por ex.nº D&B ou ILN
#define S_E2ADRE1000_EXTEND_D peel(pick(nPos, 67, 70), " ")
#define R_E2ADRE1000_EXTEND_D(A) put(nRec, 67, A :70.70)
!-----------------------------------------------------------
!===========================================================
! Line : E2EDT13001 
!===========================================================
! FIELD : QUALF Qualificador IDOC: data (fornecimento)
#define S_E2EDT13001_QUALF peel(pick(nPos, 64, 3), " ")
#define R_E2EDT13001_QUALF(A) put(nRec, 64, A :3.3)
!-----------------------------------------------------------
! FIELD : VSTZW Função de data
#define S_E2EDT13001_VSTZW peel(pick(nPos, 67, 4), " ")
#define R_E2EDT13001_VSTZW(A) put(nRec, 67, A :4.4)
!-----------------------------------------------------------
! FIELD : VSTZW_BEZ Denominação
#define S_E2EDT13001_VSTZW_BEZ peel(pick(nPos, 71, 20), " ")
#define R_E2EDT13001_VSTZW_BEZ(A) put(nRec, 71, A :20.20)
!-----------------------------------------------------------
! FIELD : NTANF Restrição início (base) p/ operação
#define S_E2EDT13001_NTANF peel(pick(nPos, 91, 8), " ")
#define R_E2EDT13001_NTANF(A) put(nRec, 91, A :8.8)
!-----------------------------------------------------------
! FIELD : NTANZ Restrição hora início (base) p/ operação
#define S_E2EDT13001_NTANZ peel(pick(nPos, 99, 6), " ")
#define R_E2EDT13001_NTANZ(A) put(nRec, 99, A :6.6)
!-----------------------------------------------------------
! FIELD : NTEND Restrição fim (base) p/ operação
#define S_E2EDT13001_NTEND peel(pick(nPos, 105, 8), " ")
#define R_E2EDT13001_NTEND(A) put(nRec, 105, A :8.8)
!-----------------------------------------------------------
! FIELD : NTENZ Hora fim base da operação
#define S_E2EDT13001_NTENZ peel(pick(nPos, 113, 6), " ")
#define R_E2EDT13001_NTENZ(A) put(nRec, 113, A :6.6)
!-----------------------------------------------------------
! FIELD : TZONE_BEG Fuso horário
#define S_E2EDT13001_TZONE_BEG peel(pick(nPos, 119, 6), " ")
#define R_E2EDT13001_TZONE_BEG(A) put(nRec, 119, A :6.6)
!-----------------------------------------------------------
! FIELD : ISDD Início real: execução (data)
#define S_E2EDT13001_ISDD peel(pick(nPos, 125, 8), " ")
#define R_E2EDT13001_ISDD(A) put(nRec, 125, A :8.8)
!-----------------------------------------------------------
! FIELD : ISDZ Início real: executar/preparar (hora)
#define S_E2EDT13001_ISDZ peel(pick(nPos, 133, 6), " ")
#define R_E2EDT13001_ISDZ(A) put(nRec, 133, A :6.6)
!-----------------------------------------------------------
! FIELD : IEDD Fim real: executar (data)
#define S_E2EDT13001_IEDD peel(pick(nPos, 139, 8), " ")
#define R_E2EDT13001_IEDD(A) put(nRec, 139, A :8.8)
!-----------------------------------------------------------
! FIELD : IEDZ Fim real: execução (hora)
#define S_E2EDT13001_IEDZ peel(pick(nPos, 147, 6), " ")
#define R_E2EDT13001_IEDZ(A) put(nRec, 147, A :6.6)
!-----------------------------------------------------------
! FIELD : TZONE_END Fuso horário
#define S_E2EDT13001_TZONE_END peel(pick(nPos, 153, 6), " ")
#define R_E2EDT13001_TZONE_END(A) put(nRec, 153, A :6.6)
!-----------------------------------------------------------
! FIELD : VORNR Nº operação
#define S_E2EDT13001_VORNR peel(pick(nPos, 159, 4), " ")
#define R_E2EDT13001_VORNR(A) put(nRec, 159, A :4.4)
!-----------------------------------------------------------
! FIELD : VSTGA Motivo do desvio da data
#define S_E2EDT13001_VSTGA peel(pick(nPos, 163, 4), " ")
#define R_E2EDT13001_VSTGA(A) put(nRec, 163, A :4.4)
!-----------------------------------------------------------
! FIELD : VSTGA_BEZ Denominação
#define S_E2EDT13001_VSTGA_BEZ peel(pick(nPos, 167, 20), " ")
#define R_E2EDT13001_VSTGA_BEZ(A) put(nRec, 167, A :20.20)
!-----------------------------------------------------------
! FIELD : EVENT Tipo de operação
#define S_E2EDT13001_EVENT peel(pick(nPos, 187, 10), " ")
#define R_E2EDT13001_EVENT(A) put(nRec, 187, A :10.10)
!-----------------------------------------------------------
! FIELD : EVENT_ALI Alias para a operação (independente do idioma)
#define S_E2EDT13001_EVENT_ALI peel(pick(nPos, 197, 20), " ")
#define R_E2EDT13001_EVENT_ALI(A) put(nRec, 197, A :20.20)
!-----------------------------------------------------------
!===========================================================
! Line : E2EDL40000 
!===========================================================
! FIELD : KNOTE Entroncamento
#define S_E2EDL40000_KNOTE peel(pick(nPos, 64, 10), " ")
#define R_E2EDL40000_KNOTE(A) put(nRec, 64, A :10.10)
!-----------------------------------------------------------
! FIELD : KNOTE_BEZ Denominação do nó
#define S_E2EDL40000_KNOTE_BEZ peel(pick(nPos, 74, 30), " ")
#define R_E2EDL40000_KNOTE_BEZ(A) put(nRec, 74, A :30.30)
!-----------------------------------------------------------
!===========================================================
! Line : E2ADRM2001 
!===========================================================
! FIELD : PARTNER_Q Qualificador para função do parceiro
#define S_E2ADRM2001_PARTNER_Q peel(pick(nPos, 64, 3), " ")
#define R_E2ADRM2001_PARTNER_Q(A) put(nRec, 64, A :3.3)
!-----------------------------------------------------------
! FIELD : ADDRESS_T Categoria do endereço
#define S_E2ADRM2001_ADDRESS_T peel(pick(nPos, 67, 1), " ")
#define R_E2ADRM2001_ADDRESS_T(A) put(nRec, 67, A :1.1)
!-----------------------------------------------------------
! FIELD : PARTNER_ID Nº parceiro (SAP)
#define S_E2ADRM2001_PARTNER_ID peel(pick(nPos, 68, 17), " ")
#define R_E2ADRM2001_PARTNER_ID(A) put(nRec, 68, A :17.17)
!-----------------------------------------------------------
! FIELD : JURISDIC Localização para cálculo de impostos - Tax Jurisdiction Code
#define S_E2ADRM2001_JURISDIC peel(pick(nPos, 85, 17), " ")
#define R_E2ADRM2001_JURISDIC(A) put(nRec, 85, A :17.17)
!-----------------------------------------------------------
! FIELD : LANGUAGE Código de idioma
#define S_E2ADRM2001_LANGUAGE peel(pick(nPos, 102, 2), " ")
#define R_E2ADRM2001_LANGUAGE(A) put(nRec, 102, A :2.2)
!-----------------------------------------------------------
! FIELD : FORMOFADDR Forma de tratamento no endereço
#define S_E2ADRM2001_FORMOFADDR peel(pick(nPos, 104, 15), " ")
#define R_E2ADRM2001_FORMOFADDR(A) put(nRec, 104, A :15.15)
!-----------------------------------------------------------
! FIELD : NAME1 Nome ou linha de endereço
#define S_E2ADRM2001_NAME1 peel(pick(nPos, 119, 40), " ")
#define R_E2ADRM2001_NAME1(A) put(nRec, 119, A :40.40)
!-----------------------------------------------------------
! FIELD : NAME2 Nome ou linha de endereço
#define S_E2ADRM2001_NAME2 peel(pick(nPos, 159, 40), " ")
#define R_E2ADRM2001_NAME2(A) put(nRec, 159, A :40.40)
!-----------------------------------------------------------
! FIELD : NAME3 Nome ou linha de endereço
#define S_E2ADRM2001_NAME3 peel(pick(nPos, 199, 40), " ")
#define R_E2ADRM2001_NAME3(A) put(nRec, 199, A :40.40)
!-----------------------------------------------------------
! FIELD : NAME4 Nome ou linha de endereço
#define S_E2ADRM2001_NAME4 peel(pick(nPos, 239, 40), " ")
#define R_E2ADRM2001_NAME4(A) put(nRec, 239, A :40.40)
!-----------------------------------------------------------
! FIELD : NAME_TEXT Linha de endereço ou nome (editada)
#define S_E2ADRM2001_NAME_TEXT peel(pick(nPos, 279, 50), " ")
#define R_E2ADRM2001_NAME_TEXT(A) put(nRec, 279, A :50.50)
!-----------------------------------------------------------
! FIELD : NAME_CO Linha seguinte para nome ou endereço (c/o)
#define S_E2ADRM2001_NAME_CO peel(pick(nPos, 329, 40), " ")
#define R_E2ADRM2001_NAME_CO(A) put(nRec, 329, A :40.40)
!-----------------------------------------------------------
! FIELD : LOCATION Descrição da localidade
#define S_E2ADRM2001_LOCATION peel(pick(nPos, 369, 40), " ")
#define R_E2ADRM2001_LOCATION(A) put(nRec, 369, A :40.40)
!-----------------------------------------------------------
! FIELD : BUILDING Localização: edifício
#define S_E2ADRM2001_BUILDING peel(pick(nPos, 409, 10), " ")
#define R_E2ADRM2001_BUILDING(A) put(nRec, 409, A :10.10)
!-----------------------------------------------------------
! FIELD : FLOOR Localização: andar
#define S_E2ADRM2001_FLOOR peel(pick(nPos, 419, 10), " ")
#define R_E2ADRM2001_FLOOR(A) put(nRec, 419, A :10.10)
!-----------------------------------------------------------
! FIELD : ROOM Descrição da localização: quarto
#define S_E2ADRM2001_ROOM peel(pick(nPos, 429, 10), " ")
#define R_E2ADRM2001_ROOM(A) put(nRec, 429, A :10.10)
!-----------------------------------------------------------
! FIELD : STREET1 Rua e nº
#define S_E2ADRM2001_STREET1 peel(pick(nPos, 439, 40), " ")
#define R_E2ADRM2001_STREET1(A) put(nRec, 439, A :40.40)
!-----------------------------------------------------------
! FIELD : STREET2 Rua e nº
#define S_E2ADRM2001_STREET2 peel(pick(nPos, 479, 40), " ")
#define R_E2ADRM2001_STREET2(A) put(nRec, 479, A :40.40)
!-----------------------------------------------------------
! FIELD : STREET3 Rua e nº
#define S_E2ADRM2001_STREET3 peel(pick(nPos, 519, 40), " ")
#define R_E2ADRM2001_STREET3(A) put(nRec, 519, A :40.40)
!-----------------------------------------------------------
! FIELD : HOUSE_SUPL Nº
#define S_E2ADRM2001_HOUSE_SUPL peel(pick(nPos, 559, 4), " ")
#define R_E2ADRM2001_HOUSE_SUPL(A) put(nRec, 559, A :4.4)
!-----------------------------------------------------------
! FIELD : HOUSE_RANG Nº porta (intervalo)
#define S_E2ADRM2001_HOUSE_RANG peel(pick(nPos, 563, 10), " ")
#define R_E2ADRM2001_HOUSE_RANG(A) put(nRec, 563, A :10.10)
!-----------------------------------------------------------
! FIELD : POSTL_COD1 Código postal
#define S_E2ADRM2001_POSTL_COD1 peel(pick(nPos, 573, 10), " ")
#define R_E2ADRM2001_POSTL_COD1(A) put(nRec, 573, A :10.10)
!-----------------------------------------------------------
! FIELD : POSTL_COD3 Código postal
#define S_E2ADRM2001_POSTL_COD3 peel(pick(nPos, 583, 10), " ")
#define R_E2ADRM2001_POSTL_COD3(A) put(nRec, 583, A :10.10)
!-----------------------------------------------------------
! FIELD : POSTL_AREA Zona distribuição postal
#define S_E2ADRM2001_POSTL_AREA peel(pick(nPos, 593, 15), " ")
#define R_E2ADRM2001_POSTL_AREA(A) put(nRec, 593, A :15.15)
!-----------------------------------------------------------
! FIELD : CITY1 Localidade ou cidade
#define S_E2ADRM2001_CITY1 peel(pick(nPos, 608, 40), " ")
#define R_E2ADRM2001_CITY1(A) put(nRec, 608, A :40.40)
!-----------------------------------------------------------
! FIELD : CITY2 Localidade ou cidade
#define S_E2ADRM2001_CITY2 peel(pick(nPos, 648, 40), " ")
#define R_E2ADRM2001_CITY2(A) put(nRec, 648, A :40.40)
!-----------------------------------------------------------
! FIELD : POSTL_PBOX Caixa postal
#define S_E2ADRM2001_POSTL_PBOX peel(pick(nPos, 688, 10), " ")
#define R_E2ADRM2001_POSTL_PBOX(A) put(nRec, 688, A :10.10)
!-----------------------------------------------------------
! FIELD : POSTL_COD2 Código postal
#define S_E2ADRM2001_POSTL_COD2 peel(pick(nPos, 698, 10), " ")
#define R_E2ADRM2001_POSTL_COD2(A) put(nRec, 698, A :10.10)
!-----------------------------------------------------------
! FIELD : POSTL_CITY Localidade ou cidade
#define S_E2ADRM2001_POSTL_CITY peel(pick(nPos, 708, 40), " ")
#define R_E2ADRM2001_POSTL_CITY(A) put(nRec, 708, A :40.40)
!-----------------------------------------------------------
! FIELD : TELEPHONE1 Nº telefone
#define S_E2ADRM2001_TELEPHONE1 peel(pick(nPos, 748, 30), " ")
#define R_E2ADRM2001_TELEPHONE1(A) put(nRec, 748, A :30.30)
!-----------------------------------------------------------
! FIELD : TELEPHONE2 Nº telefone
#define S_E2ADRM2001_TELEPHONE2 peel(pick(nPos, 778, 30), " ")
#define R_E2ADRM2001_TELEPHONE2(A) put(nRec, 778, A :30.30)
!-----------------------------------------------------------
! FIELD : TELFAX Nº telefax
#define S_E2ADRM2001_TELFAX peel(pick(nPos, 808, 30), " ")
#define R_E2ADRM2001_TELFAX(A) put(nRec, 808, A :30.30)
!-----------------------------------------------------------
! FIELD : TELEX Nº telex
#define S_E2ADRM2001_TELEX peel(pick(nPos, 838, 30), " ")
#define R_E2ADRM2001_TELEX(A) put(nRec, 838, A :30.30)
!-----------------------------------------------------------
! FIELD : E_MAIL Endereço E-mail
#define S_E2ADRM2001_E_MAIL peel(pick(nPos, 868, 70), " ")
#define R_E2ADRM2001_E_MAIL(A) put(nRec, 868, A :70.70)
!-----------------------------------------------------------
! FIELD : COUNTRY1 Código de país (ISO alfanumérico)
#define S_E2ADRM2001_COUNTRY1 peel(pick(nPos, 938, 3), " ")
#define R_E2ADRM2001_COUNTRY1(A) put(nRec, 938, A :3.3)
!-----------------------------------------------------------
! FIELD : COUNTRY2 Código de país (ISO numérico)
#define S_E2ADRM2001_COUNTRY2 peel(pick(nPos, 941, 3), " ")
#define R_E2ADRM2001_COUNTRY2(A) put(nRec, 941, A :3.3)
!-----------------------------------------------------------
! FIELD : REGION Região, estado
#define S_E2ADRM2001_REGION peel(pick(nPos, 944, 3), " ")
#define R_E2ADRM2001_REGION(A) put(nRec, 944, A :3.3)
!-----------------------------------------------------------
! FIELD : COUNTY_COD Código de distrito (por exemplo, nos EUA)
#define S_E2ADRM2001_COUNTY_COD peel(pick(nPos, 947, 3), " ")
#define R_E2ADRM2001_COUNTY_COD(A) put(nRec, 947, A :3.3)
!-----------------------------------------------------------
! FIELD : COUNTY_TXT Nome county (por ex.nos EUA)
#define S_E2ADRM2001_COUNTY_TXT peel(pick(nPos, 950, 25), " ")
#define R_E2ADRM2001_COUNTY_TXT(A) put(nRec, 950, A :25.25)
!-----------------------------------------------------------
! FIELD : TZCODE Localização para fuso horário (código SAP)
#define S_E2ADRM2001_TZCODE peel(pick(nPos, 975, 6), " ")
#define R_E2ADRM2001_TZCODE(A) put(nRec, 975, A :6.6)
!-----------------------------------------------------------
! FIELD : TZDESC Localização para fuso horário (código externo)
#define S_E2ADRM2001_TZDESC peel(pick(nPos, 981, 35), " ")
#define R_E2ADRM2001_TZDESC(A) put(nRec, 981, A :35.35)
!-----------------------------------------------------------
!===========================================================
! Line : E2TXTH0001 
!===========================================================
! FIELD : FUNCTION Função (para texto transferido)
#define S_E2TXTH0001_FUNCTION peel(pick(nPos, 64, 3), " ")
#define R_E2TXTH0001_FUNCTION(A) put(nRec, 64, A :3.3)
!-----------------------------------------------------------
! FIELD : TDOBJECT Textos: objeto de aplicação
#define S_E2TXTH0001_TDOBJECT peel(pick(nPos, 67, 10), " ")
#define R_E2TXTH0001_TDOBJECT(A) put(nRec, 67, A :10.10)
!-----------------------------------------------------------
! FIELD : TDOBNAME Nome
#define S_E2TXTH0001_TDOBNAME peel(pick(nPos, 77, 70), " ")
#define R_E2TXTH0001_TDOBNAME(A) put(nRec, 77, A :70.70)
!-----------------------------------------------------------
! FIELD : TDID ID de texto
#define S_E2TXTH0001_TDID peel(pick(nPos, 147, 4), " ")
#define R_E2TXTH0001_TDID(A) put(nRec, 147, A :4.4)
!-----------------------------------------------------------
! FIELD : TDSPRAS Idioma
#define S_E2TXTH0001_TDSPRAS peel(pick(nPos, 151, 1), " ")
#define R_E2TXTH0001_TDSPRAS(A) put(nRec, 151, A :1.1)
!-----------------------------------------------------------
! FIELD : TDTEXTTYPE SAPscript: formato de um texto
#define S_E2TXTH0001_TDTEXTTYPE peel(pick(nPos, 152, 6), " ")
#define R_E2TXTH0001_TDTEXTTYPE(A) put(nRec, 152, A :6.6)
!-----------------------------------------------------------
! FIELD : LANGUA_ISO Código de idioma
#define S_E2TXTH0001_LANGUA_ISO peel(pick(nPos, 158, 2), " ")
#define R_E2TXTH0001_LANGUA_ISO(A) put(nRec, 158, A :2.2)
!-----------------------------------------------------------
!===========================================================
! Line : E2TXTP0 
!===========================================================
! FIELD : TDFORMAT Coluna de formato
#define S_E2TXTP0_TDFORMAT peel(pick(nPos, 64, 2), " ")
#define R_E2TXTP0_TDFORMAT(A) put(nRec, 64, A :2.2)
!-----------------------------------------------------------
! FIELD : TDLINE Linha de texto
#define S_E2TXTP0_TDLINE peel(pick(nPos, 66, 132), " ")
#define R_E2TXTP0_TDLINE(A) put(nRec, 66, A :132.132)
!-----------------------------------------------------------
!===========================================================
! Line : E2TXTH8001 
!===========================================================
! FIELD : FUNCTION Função (para texto transferido)
#define S_E2TXTH8001_FUNCTION peel(pick(nPos, 64, 3), " ")
#define R_E2TXTH8001_FUNCTION(A) put(nRec, 64, A :3.3)
!-----------------------------------------------------------
! FIELD : TDOBJECT Textos: objeto de aplicação
#define S_E2TXTH8001_TDOBJECT peel(pick(nPos, 67, 10), " ")
#define R_E2TXTH8001_TDOBJECT(A) put(nRec, 67, A :10.10)
!-----------------------------------------------------------
! FIELD : TDOBNAME Nome
#define S_E2TXTH8001_TDOBNAME peel(pick(nPos, 77, 70), " ")
#define R_E2TXTH8001_TDOBNAME(A) put(nRec, 77, A :70.70)
!-----------------------------------------------------------
! FIELD : TDID ID de texto
#define S_E2TXTH8001_TDID peel(pick(nPos, 147, 4), " ")
#define R_E2TXTH8001_TDID(A) put(nRec, 147, A :4.4)
!-----------------------------------------------------------
! FIELD : TDSPRAS Idioma
#define S_E2TXTH8001_TDSPRAS peel(pick(nPos, 151, 1), " ")
#define R_E2TXTH8001_TDSPRAS(A) put(nRec, 151, A :1.1)
!-----------------------------------------------------------
! FIELD : TDTEXTTYPE SAPscript: formato de um texto
#define S_E2TXTH8001_TDTEXTTYPE peel(pick(nPos, 152, 6), " ")
#define R_E2TXTH8001_TDTEXTTYPE(A) put(nRec, 152, A :6.6)
!-----------------------------------------------------------
! FIELD : LANGUA_ISO Código de idioma
#define S_E2TXTH8001_LANGUA_ISO peel(pick(nPos, 158, 2), " ")
#define R_E2TXTH8001_LANGUA_ISO(A) put(nRec, 158, A :2.2)
!-----------------------------------------------------------
!===========================================================
! Line : E2TXTP8 
!===========================================================
! FIELD : TDFORMAT Coluna de formato
#define S_E2TXTP8_TDFORMAT peel(pick(nPos, 64, 2), " ")
#define R_E2TXTP8_TDFORMAT(A) put(nRec, 64, A :2.2)
!-----------------------------------------------------------
! FIELD : TDLINE Linha de texto
#define S_E2TXTP8_TDLINE peel(pick(nPos, 66, 132), " ")
#define R_E2TXTP8_TDLINE(A) put(nRec, 66, A :132.132)
!-----------------------------------------------------------
!===========================================================
! Line : E2EDL33001 
!===========================================================
! FIELD : ALAND País destinatário
#define S_E2EDL33001_ALAND peel(pick(nPos, 64, 3), " ")
#define R_E2EDL33001_ALAND(A) put(nRec, 64, A :3.3)
!-----------------------------------------------------------
! FIELD : EXPVZ Modo de transporte para comércio exterior
#define S_E2EDL33001_EXPVZ peel(pick(nPos, 67, 1), " ")
#define R_E2EDL33001_EXPVZ(A) put(nRec, 67, A :1.1)
!-----------------------------------------------------------
! FIELD : ZOLLA Pst.alfândeg.: pst.alfând.saída/entrd. p/comércio exterior
#define S_E2EDL33001_ZOLLA peel(pick(nPos, 68, 6), " ")
#define R_E2EDL33001_ZOLLA(A) put(nRec, 68, A :6.6)
!-----------------------------------------------------------
! FIELD : ZOLLB Psto.alfândega: pst.alfândega do país destino p/com.exterior
#define S_E2EDL33001_ZOLLB peel(pick(nPos, 74, 6), " ")
#define R_E2EDL33001_ZOLLB(A) put(nRec, 74, A :6.6)
!-----------------------------------------------------------
! FIELD : ZOLL1 Posto da alfândega: posto da alfândega 1 p/comércio exterior
#define S_E2EDL33001_ZOLL1 peel(pick(nPos, 80, 6), " ")
#define R_E2EDL33001_ZOLL1(A) put(nRec, 80, A :6.6)
!-----------------------------------------------------------
! FIELD : ZOLL2 Posto da alfândega: posto da alfândega 2 p/comércio exterior
#define S_E2EDL33001_ZOLL2 peel(pick(nPos, 86, 6), " ")
#define R_E2EDL33001_ZOLL2(A) put(nRec, 86, A :6.6)
!-----------------------------------------------------------
! FIELD : ZOLL3 Posto da alfândega: posto da alfândega 3 p/comércio exterior
#define S_E2EDL33001_ZOLL3 peel(pick(nPos, 92, 6), " ")
#define R_E2EDL33001_ZOLL3(A) put(nRec, 92, A :6.6)
!-----------------------------------------------------------
! FIELD : ZOLL4 Posto da alfândega: posto da alfândega 4 p/comércio exterior
#define S_E2EDL33001_ZOLL4 peel(pick(nPos, 98, 6), " ")
#define R_E2EDL33001_ZOLL4(A) put(nRec, 98, A :6.6)
!-----------------------------------------------------------
! FIELD : ZOLL5 Posto da alfândega: posto da alfândega 5 p/comércio exterior
#define S_E2EDL33001_ZOLL5 peel(pick(nPos, 104, 6), " ")
#define R_E2EDL33001_ZOLL5(A) put(nRec, 104, A :6.6)
!-----------------------------------------------------------
! FIELD : ZOLL6 Posto da alfândega: posto da alfândega 6 p/comércio exterior
#define S_E2EDL33001_ZOLL6 peel(pick(nPos, 110, 6), " ")
#define R_E2EDL33001_ZOLL6(A) put(nRec, 110, A :6.6)
!-----------------------------------------------------------
! FIELD : KZGBE Código do meio de transporte na passagem da fronteira
#define S_E2EDL33001_KZGBE peel(pick(nPos, 116, 30), " ")
#define R_E2EDL33001_KZGBE(A) put(nRec, 116, A :30.30)
!-----------------------------------------------------------
! FIELD : KZABE Código do meio de transporte na saída da mercadoria
#define S_E2EDL33001_KZABE peel(pick(nPos, 146, 30), " ")
#define R_E2EDL33001_KZABE(A) put(nRec, 146, A :30.30)
!-----------------------------------------------------------
! FIELD : STGBE Origem do meio de transporte na passagem da fronteira
#define S_E2EDL33001_STGBE peel(pick(nPos, 176, 3), " ")
#define R_E2EDL33001_STGBE(A) put(nRec, 176, A :3.3)
!-----------------------------------------------------------
! FIELD : STABE País de origem do meio de transporte na saída da mercadoria
#define S_E2EDL33001_STABE peel(pick(nPos, 179, 3), " ")
#define R_E2EDL33001_STABE(A) put(nRec, 179, A :3.3)
!-----------------------------------------------------------
! FIELD : CONTA Código: mercadoria passa a fronteira em container
#define S_E2EDL33001_CONTA peel(pick(nPos, 182, 1), " ")
#define R_E2EDL33001_CONTA(A) put(nRec, 182, A :1.1)
!-----------------------------------------------------------
! FIELD : GRWCU Moeda dos valores na passagem fronteira p/comércio exterior
#define S_E2EDL33001_GRWCU peel(pick(nPos, 183, 5), " ")
#define R_E2EDL33001_GRWCU(A) put(nRec, 183, A :5.5)
!-----------------------------------------------------------
! FIELD : IEVER Modo de transporte interno para comério exterior
#define S_E2EDL33001_IEVER peel(pick(nPos, 188, 1), " ")
#define R_E2EDL33001_IEVER(A) put(nRec, 188, A :1.1)
!-----------------------------------------------------------
! FIELD : PREV_DOC_NO Nº doc.precedente
#define S_E2EDL33001_PREV_DOC_NO peel(pick(nPos, 189, 25), " ")
#define R_E2EDL33001_PREV_DOC_NO(A) put(nRec, 189, A :25.25)
!-----------------------------------------------------------
! FIELD : PREV_DOC_TYPE Tipo de documento precedente
#define S_E2EDL33001_PREV_DOC_TYPE peel(pick(nPos, 214, 10), " ")
#define R_E2EDL33001_PREV_DOC_TYPE(A) put(nRec, 214, A :10.10)
!-----------------------------------------------------------
!===========================================================
! Line : E2EDL34 
!===========================================================
! FIELD : EXPVZ_BEZ Denominação modo de transporte
#define S_E2EDL34_EXPVZ_BEZ peel(pick(nPos, 64, 20), " ")
#define R_E2EDL34_EXPVZ_BEZ(A) put(nRec, 64, A :20.20)
!-----------------------------------------------------------
! FIELD : ZOLLA_BEZ Denominação posto da alfândega
#define S_E2EDL34_ZOLLA_BEZ peel(pick(nPos, 84, 30), " ")
#define R_E2EDL34_ZOLLA_BEZ(A) put(nRec, 84, A :30.30)
!-----------------------------------------------------------
! FIELD : ZOLLB_BEZ Denominação posto de alfândega de destino
#define S_E2EDL34_ZOLLB_BEZ peel(pick(nPos, 114, 30), " ")
#define R_E2EDL34_ZOLLB_BEZ(A) put(nRec, 114, A :30.30)
!-----------------------------------------------------------
! FIELD : ZOLL1_BEZ Denominação posto da alfândega 1
#define S_E2EDL34_ZOLL1_BEZ peel(pick(nPos, 144, 30), " ")
#define R_E2EDL34_ZOLL1_BEZ(A) put(nRec, 144, A :30.30)
!-----------------------------------------------------------
! FIELD : ZOLL2_BEZ Denominação posto da alfândega 2
#define S_E2EDL34_ZOLL2_BEZ peel(pick(nPos, 174, 30), " ")
#define R_E2EDL34_ZOLL2_BEZ(A) put(nRec, 174, A :30.30)
!-----------------------------------------------------------
! FIELD : ZOLL3_BEZ Denominação posto da alfândega 3
#define S_E2EDL34_ZOLL3_BEZ peel(pick(nPos, 204, 30), " ")
#define R_E2EDL34_ZOLL3_BEZ(A) put(nRec, 204, A :30.30)
!-----------------------------------------------------------
! FIELD : ZOLL4_BEZ Denominação posto da alfândega 4
#define S_E2EDL34_ZOLL4_BEZ peel(pick(nPos, 234, 30), " ")
#define R_E2EDL34_ZOLL4_BEZ(A) put(nRec, 234, A :30.30)
!-----------------------------------------------------------
! FIELD : ZOLL5_BEZ Denominação posto da alfândega 5
#define S_E2EDL34_ZOLL5_BEZ peel(pick(nPos, 264, 30), " ")
#define R_E2EDL34_ZOLL5_BEZ(A) put(nRec, 264, A :30.30)
!-----------------------------------------------------------
! FIELD : ZOLL6_BEZ Denominação posto da alfândega 6
#define S_E2EDL34_ZOLL6_BEZ peel(pick(nPos, 294, 30), " ")
#define R_E2EDL34_ZOLL6_BEZ(A) put(nRec, 294, A :30.30)
!-----------------------------------------------------------
! FIELD : IEVER_BEZ Denominação modo de transporte nacional
#define S_E2EDL34_IEVER_BEZ peel(pick(nPos, 324, 20), " ")
#define R_E2EDL34_IEVER_BEZ(A) put(nRec, 324, A :20.20)
!-----------------------------------------------------------
! FIELD : STGBE_BEZ Denominação nacionalidade do meio de transporte
#define S_E2EDL34_STGBE_BEZ peel(pick(nPos, 344, 15), " ")
#define R_E2EDL34_STGBE_BEZ(A) put(nRec, 344, A :15.15)
!-----------------------------------------------------------
! FIELD : STABE_BEZ Denominação nacionalidade qtd.transporte na saída mercad.
#define S_E2EDL34_STABE_BEZ peel(pick(nPos, 359, 15), " ")
#define R_E2EDL34_STABE_BEZ(A) put(nRec, 359, A :15.15)
!-----------------------------------------------------------
!===========================================================
! Line : E2EDL28 
!===========================================================
! FIELD : ROUTE Itinerário
#define S_E2EDL28_ROUTE peel(pick(nPos, 64, 6), " ")
#define R_E2EDL28_ROUTE(A) put(nRec, 64, A :6.6)
!-----------------------------------------------------------
! FIELD : VSART Tipo de expedição
#define S_E2EDL28_VSART peel(pick(nPos, 70, 2), " ")
#define R_E2EDL28_VSART(A) put(nRec, 70, A :2.2)
!-----------------------------------------------------------
! FIELD : VSAVL Tipo de expedição do percurso preliminar
#define S_E2EDL28_VSAVL peel(pick(nPos, 72, 2), " ")
#define R_E2EDL28_VSAVL(A) put(nRec, 72, A :2.2)
!-----------------------------------------------------------
! FIELD : VSANL Tipo de expedição do percurso subsequente
#define S_E2EDL28_VSANL peel(pick(nPos, 74, 2), " ")
#define R_E2EDL28_VSANL(A) put(nRec, 74, A :2.2)
!-----------------------------------------------------------
! FIELD : ROUID ID itinerário
#define S_E2EDL28_ROUID peel(pick(nPos, 76, 100), " ")
#define R_E2EDL28_ROUID(A) put(nRec, 76, A :100.100)
!-----------------------------------------------------------
! FIELD : DISTZ Distância
#define S_E2EDL28_DISTZ peel(pick(nPos, 176, 15), " ")
#define R_E2EDL28_DISTZ(A) put(nRec, 176, A :15.15)
!-----------------------------------------------------------
! FIELD : MEDST Unidade de medida de uma distância
#define S_E2EDL28_MEDST peel(pick(nPos, 191, 3), " ")
#define R_E2EDL28_MEDST(A) put(nRec, 191, A :3.3)
!-----------------------------------------------------------
!===========================================================
! Line : E2EDL29 
!===========================================================
! FIELD : ROUTE_BEZ Denominação do itinerário
#define S_E2EDL29_ROUTE_BEZ peel(pick(nPos, 64, 40), " ")
#define R_E2EDL29_ROUTE_BEZ(A) put(nRec, 64, A :40.40)
!-----------------------------------------------------------
! FIELD : VSART_BEZ Denominação do tipo de expedição
#define S_E2EDL29_VSART_BEZ peel(pick(nPos, 104, 20), " ")
#define R_E2EDL29_VSART_BEZ(A) put(nRec, 104, A :20.20)
!-----------------------------------------------------------
! FIELD : VSAVL_BEZ Denominação tipo de expedição do percurso preliminar
#define S_E2EDL29_VSAVL_BEZ peel(pick(nPos, 124, 20), " ")
#define R_E2EDL29_VSAVL_BEZ(A) put(nRec, 124, A :20.20)
!-----------------------------------------------------------
! FIELD : VSANL_BEZ Denominação tipo de expedição do percurso subsequente
#define S_E2EDL29_VSANL_BEZ peel(pick(nPos, 144, 20), " ")
#define R_E2EDL29_VSANL_BEZ(A) put(nRec, 144, A :20.20)
!-----------------------------------------------------------
!===========================================================
! Line : E2EDL30 
!===========================================================
! FIELD : ABNUM Nº etapa
#define S_E2EDL30_ABNUM peel(pick(nPos, 64, 4), " ")
#define R_E2EDL30_ABNUM(A) put(nRec, 64, A :4.4)
!-----------------------------------------------------------
! FIELD : ANFRF Itinerário regular (sequência de entregas)
#define S_E2EDL30_ANFRF peel(pick(nPos, 68, 3), " ")
#define R_E2EDL30_ANFRF(A) put(nRec, 68, A :3.3)
!-----------------------------------------------------------
! FIELD : VSART Tipo de expedição
#define S_E2EDL30_VSART peel(pick(nPos, 71, 2), " ")
#define R_E2EDL30_VSART(A) put(nRec, 71, A :2.2)
!-----------------------------------------------------------
! FIELD : DISTZ Distância
#define S_E2EDL30_DISTZ peel(pick(nPos, 73, 15), " ")
#define R_E2EDL30_DISTZ(A) put(nRec, 73, A :15.15)
!-----------------------------------------------------------
! FIELD : MEDST Unidade de medida de uma distância
#define S_E2EDL30_MEDST peel(pick(nPos, 88, 3), " ")
#define R_E2EDL30_MEDST(A) put(nRec, 88, A :3.3)
!-----------------------------------------------------------
! FIELD : TSTYP Categoria da etapa
#define S_E2EDL30_TSTYP peel(pick(nPos, 91, 1), " ")
#define R_E2EDL30_TSTYP(A) put(nRec, 91, A :1.1)
!-----------------------------------------------------------
!===========================================================
! Line : E2EDL31 
!===========================================================
! FIELD : VSART_BEZ Denominação do tipo de expedição
#define S_E2EDL31_VSART_BEZ peel(pick(nPos, 64, 20), " ")
#define R_E2EDL31_VSART_BEZ(A) put(nRec, 64, A :20.20)
!-----------------------------------------------------------
!===========================================================
! Line : E2EDL32 
!===========================================================
! FIELD : QUALI Qualificador para entroncamento de etapa
#define S_E2EDL32_QUALI peel(pick(nPos, 64, 3), " ")
#define R_E2EDL32_QUALI(A) put(nRec, 64, A :3.3)
!-----------------------------------------------------------
! FIELD : KNOTE Entroncamento
#define S_E2EDL32_KNOTE peel(pick(nPos, 67, 10), " ")
#define R_E2EDL32_KNOTE(A) put(nRec, 67, A :10.10)
!-----------------------------------------------------------
! FIELD : ADRNR Endereço
#define S_E2EDL32_ADRNR peel(pick(nPos, 77, 10), " ")
#define R_E2EDL32_ADRNR(A) put(nRec, 77, A :10.10)
!-----------------------------------------------------------
! FIELD : VSTEL Local de expedição/local de recebimento de mercadoria
#define S_E2EDL32_VSTEL peel(pick(nPos, 87, 4), " ")
#define R_E2EDL32_VSTEL(A) put(nRec, 87, A :4.4)
!-----------------------------------------------------------
! FIELD : LSTEL Ponto de carregamento
#define S_E2EDL32_LSTEL peel(pick(nPos, 91, 2), " ")
#define R_E2EDL32_LSTEL(A) put(nRec, 91, A :2.2)
!-----------------------------------------------------------
! FIELD : WERKS Nº centro EDI da unidade do volume
#define S_E2EDL32_WERKS peel(pick(nPos, 93, 4), " ")
#define R_E2EDL32_WERKS(A) put(nRec, 93, A :4.4)
!-----------------------------------------------------------
! FIELD : LGORT Depósito
#define S_E2EDL32_LGORT peel(pick(nPos, 97, 4), " ")
#define R_E2EDL32_LGORT(A) put(nRec, 97, A :4.4)
!-----------------------------------------------------------
! FIELD : KUNNR Nº cliente 1
#define S_E2EDL32_KUNNR peel(pick(nPos, 101, 10), " ")
#define R_E2EDL32_KUNNR(A) put(nRec, 101, A :10.10)
!-----------------------------------------------------------
! FIELD : LIFNR Local de chegada: fornecedor
#define S_E2EDL32_LIFNR peel(pick(nPos, 111, 10), " ")
#define R_E2EDL32_LIFNR(A) put(nRec, 111, A :10.10)
!-----------------------------------------------------------
! FIELD : ABLAD Ponto de descarga
#define S_E2EDL32_ABLAD peel(pick(nPos, 121, 25), " ")
#define R_E2EDL32_ABLAD(A) put(nRec, 121, A :25.25)
!-----------------------------------------------------------
! FIELD : LGNUM Nºdepósito/complexo de depósito
#define S_E2EDL32_LGNUM peel(pick(nPos, 146, 3), " ")
#define R_E2EDL32_LGNUM(A) put(nRec, 146, A :3.3)
!-----------------------------------------------------------
! FIELD : LGTOR Portão para o nº do depósito
#define S_E2EDL32_LGTOR peel(pick(nPos, 149, 3), " ")
#define R_E2EDL32_LGTOR(A) put(nRec, 149, A :3.3)
!-----------------------------------------------------------
!===========================================================
! Line : E2EDL45000 
!===========================================================
! FIELD : KNOTE_BEZ Denominação do nó
#define S_E2EDL45000_KNOTE_BEZ peel(pick(nPos, 64, 30), " ")
#define R_E2EDL45000_KNOTE_BEZ(A) put(nRec, 64, A :30.30)
!-----------------------------------------------------------
! FIELD : VSTEL_BEZ Denominação do local de expedição
#define S_E2EDL45000_VSTEL_BEZ peel(pick(nPos, 94, 30), " ")
#define R_E2EDL45000_VSTEL_BEZ(A) put(nRec, 94, A :30.30)
!-----------------------------------------------------------
! FIELD : LSTEL_BEZ Denominação do ponto de carregamento
#define S_E2EDL45000_LSTEL_BEZ peel(pick(nPos, 124, 20), " ")
#define R_E2EDL45000_LSTEL_BEZ(A) put(nRec, 124, A :20.20)
!-----------------------------------------------------------
! FIELD : WERKS_BEZ Denominação do centro
#define S_E2EDL45000_WERKS_BEZ peel(pick(nPos, 144, 30), " ")
#define R_E2EDL45000_WERKS_BEZ(A) put(nRec, 144, A :30.30)
!-----------------------------------------------------------
! FIELD : LGORT_BEZ Denominação do depósito
#define S_E2EDL45000_LGORT_BEZ peel(pick(nPos, 174, 16), " ")
#define R_E2EDL45000_LGORT_BEZ(A) put(nRec, 174, A :16.16)
!-----------------------------------------------------------
! FIELD : LGNUM_BEZ Denominação do nº do depósito
#define S_E2EDL45000_LGNUM_BEZ peel(pick(nPos, 190, 25), " ")
#define R_E2EDL45000_LGNUM_BEZ(A) put(nRec, 190, A :25.25)
!-----------------------------------------------------------
! FIELD : LGTOR_BEZ Denominação do portão
#define S_E2EDL45000_LGTOR_BEZ peel(pick(nPos, 215, 25), " ")
#define R_E2EDL45000_LGTOR_BEZ(A) put(nRec, 215, A :25.25)
!-----------------------------------------------------------
!===========================================================
! Line : E2ADRM3001 
!===========================================================
! FIELD : PARTNER_Q Qualificador para função do parceiro
#define S_E2ADRM3001_PARTNER_Q peel(pick(nPos, 64, 3), " ")
#define R_E2ADRM3001_PARTNER_Q(A) put(nRec, 64, A :3.3)
!-----------------------------------------------------------
! FIELD : ADDRES_T Categoria do endereço
#define S_E2ADRM3001_ADDRES_T peel(pick(nPos, 67, 1), " ")
#define R_E2ADRM3001_ADDRES_T(A) put(nRec, 67, A :1.1)
!-----------------------------------------------------------
! FIELD : PARTNER_ID Nº parceiro (SAP)
#define S_E2ADRM3001_PARTNER_ID peel(pick(nPos, 68, 17), " ")
#define R_E2ADRM3001_PARTNER_ID(A) put(nRec, 68, A :17.17)
!-----------------------------------------------------------
! FIELD : JURISDIC Localização para cálculo de impostos - Tax Jurisdiction Code
#define S_E2ADRM3001_JURISDIC peel(pick(nPos, 85, 17), " ")
#define R_E2ADRM3001_JURISDIC(A) put(nRec, 85, A :17.17)
!-----------------------------------------------------------
! FIELD : LANGUAGE Código de idioma
#define S_E2ADRM3001_LANGUAGE peel(pick(nPos, 102, 2), " ")
#define R_E2ADRM3001_LANGUAGE(A) put(nRec, 102, A :2.2)
!-----------------------------------------------------------
! FIELD : FORMOFADDR Forma de tratamento no endereço
#define S_E2ADRM3001_FORMOFADDR peel(pick(nPos, 104, 15), " ")
#define R_E2ADRM3001_FORMOFADDR(A) put(nRec, 104, A :15.15)
!-----------------------------------------------------------
! FIELD : NAME1 Nome ou linha de endereço
#define S_E2ADRM3001_NAME1 peel(pick(nPos, 119, 40), " ")
#define R_E2ADRM3001_NAME1(A) put(nRec, 119, A :40.40)
!-----------------------------------------------------------
! FIELD : NAME2 Nome ou linha de endereço
#define S_E2ADRM3001_NAME2 peel(pick(nPos, 159, 40), " ")
#define R_E2ADRM3001_NAME2(A) put(nRec, 159, A :40.40)
!-----------------------------------------------------------
! FIELD : NAME3 Nome ou linha de endereço
#define S_E2ADRM3001_NAME3 peel(pick(nPos, 199, 40), " ")
#define R_E2ADRM3001_NAME3(A) put(nRec, 199, A :40.40)
!-----------------------------------------------------------
! FIELD : NAME4 Nome ou linha de endereço
#define S_E2ADRM3001_NAME4 peel(pick(nPos, 239, 40), " ")
#define R_E2ADRM3001_NAME4(A) put(nRec, 239, A :40.40)
!-----------------------------------------------------------
! FIELD : NAME_TEXT Linha de endereço ou nome (editada)
#define S_E2ADRM3001_NAME_TEXT peel(pick(nPos, 279, 50), " ")
#define R_E2ADRM3001_NAME_TEXT(A) put(nRec, 279, A :50.50)
!-----------------------------------------------------------
! FIELD : NAME_CO Linha seguinte para nome ou endereço (c/o)
#define S_E2ADRM3001_NAME_CO peel(pick(nPos, 329, 40), " ")
#define R_E2ADRM3001_NAME_CO(A) put(nRec, 329, A :40.40)
!-----------------------------------------------------------
! FIELD : LOCATION Descrição da localidade
#define S_E2ADRM3001_LOCATION peel(pick(nPos, 369, 40), " ")
#define R_E2ADRM3001_LOCATION(A) put(nRec, 369, A :40.40)
!-----------------------------------------------------------
! FIELD : BUILDING Localização: edifício
#define S_E2ADRM3001_BUILDING peel(pick(nPos, 409, 10), " ")
#define R_E2ADRM3001_BUILDING(A) put(nRec, 409, A :10.10)
!-----------------------------------------------------------
! FIELD : FLOOR Localização: andar
#define S_E2ADRM3001_FLOOR peel(pick(nPos, 419, 10), " ")
#define R_E2ADRM3001_FLOOR(A) put(nRec, 419, A :10.10)
!-----------------------------------------------------------
! FIELD : ROOM Descrição da localização: quarto
#define S_E2ADRM3001_ROOM peel(pick(nPos, 429, 10), " ")
#define R_E2ADRM3001_ROOM(A) put(nRec, 429, A :10.10)
!-----------------------------------------------------------
! FIELD : STREET1 Rua e nº
#define S_E2ADRM3001_STREET1 peel(pick(nPos, 439, 40), " ")
#define R_E2ADRM3001_STREET1(A) put(nRec, 439, A :40.40)
!-----------------------------------------------------------
! FIELD : STREET2 Rua e nº
#define S_E2ADRM3001_STREET2 peel(pick(nPos, 479, 40), " ")
#define R_E2ADRM3001_STREET2(A) put(nRec, 479, A :40.40)
!-----------------------------------------------------------
! FIELD : STREET3 Rua e nº
#define S_E2ADRM3001_STREET3 peel(pick(nPos, 519, 40), " ")
#define R_E2ADRM3001_STREET3(A) put(nRec, 519, A :40.40)
!-----------------------------------------------------------
! FIELD : HOUSE_SUPL Nº
#define S_E2ADRM3001_HOUSE_SUPL peel(pick(nPos, 559, 4), " ")
#define R_E2ADRM3001_HOUSE_SUPL(A) put(nRec, 559, A :4.4)
!-----------------------------------------------------------
! FIELD : HOUSE_RANG Nº porta (intervalo)
#define S_E2ADRM3001_HOUSE_RANG peel(pick(nPos, 563, 10), " ")
#define R_E2ADRM3001_HOUSE_RANG(A) put(nRec, 563, A :10.10)
!-----------------------------------------------------------
! FIELD : POSTL_COD1 Código postal
#define S_E2ADRM3001_POSTL_COD1 peel(pick(nPos, 573, 10), " ")
#define R_E2ADRM3001_POSTL_COD1(A) put(nRec, 573, A :10.10)
!-----------------------------------------------------------
! FIELD : POSTL_COD3 Código postal
#define S_E2ADRM3001_POSTL_COD3 peel(pick(nPos, 583, 10), " ")
#define R_E2ADRM3001_POSTL_COD3(A) put(nRec, 583, A :10.10)
!-----------------------------------------------------------
! FIELD : POSTL_AREA Zona distribuição postal
#define S_E2ADRM3001_POSTL_AREA peel(pick(nPos, 593, 15), " ")
#define R_E2ADRM3001_POSTL_AREA(A) put(nRec, 593, A :15.15)
!-----------------------------------------------------------
! FIELD : CITY1 Localidade ou cidade
#define S_E2ADRM3001_CITY1 peel(pick(nPos, 608, 40), " ")
#define R_E2ADRM3001_CITY1(A) put(nRec, 608, A :40.40)
!-----------------------------------------------------------
! FIELD : CITY2 Localidade ou cidade
#define S_E2ADRM3001_CITY2 peel(pick(nPos, 648, 40), " ")
#define R_E2ADRM3001_CITY2(A) put(nRec, 648, A :40.40)
!-----------------------------------------------------------
! FIELD : POSTL_PBOX Caixa postal
#define S_E2ADRM3001_POSTL_PBOX peel(pick(nPos, 688, 10), " ")
#define R_E2ADRM3001_POSTL_PBOX(A) put(nRec, 688, A :10.10)
!-----------------------------------------------------------
! FIELD : POSTL_COD2 Código postal
#define S_E2ADRM3001_POSTL_COD2 peel(pick(nPos, 698, 10), " ")
#define R_E2ADRM3001_POSTL_COD2(A) put(nRec, 698, A :10.10)
!-----------------------------------------------------------
! FIELD : POSTL_CITY Localidade ou cidade
#define S_E2ADRM3001_POSTL_CITY peel(pick(nPos, 708, 40), " ")
#define R_E2ADRM3001_POSTL_CITY(A) put(nRec, 708, A :40.40)
!-----------------------------------------------------------
! FIELD : TELEPHONE1 Nº telefone
#define S_E2ADRM3001_TELEPHONE1 peel(pick(nPos, 748, 30), " ")
#define R_E2ADRM3001_TELEPHONE1(A) put(nRec, 748, A :30.30)
!-----------------------------------------------------------
! FIELD : TELEPHONE2 Nº telefone
#define S_E2ADRM3001_TELEPHONE2 peel(pick(nPos, 778, 30), " ")
#define R_E2ADRM3001_TELEPHONE2(A) put(nRec, 778, A :30.30)
!-----------------------------------------------------------
! FIELD : TELEFAX Nº telefax
#define S_E2ADRM3001_TELEFAX peel(pick(nPos, 808, 30), " ")
#define R_E2ADRM3001_TELEFAX(A) put(nRec, 808, A :30.30)
!-----------------------------------------------------------
! FIELD : TELEX Nº telex
#define S_E2ADRM3001_TELEX peel(pick(nPos, 838, 30), " ")
#define R_E2ADRM3001_TELEX(A) put(nRec, 838, A :30.30)
!-----------------------------------------------------------
! FIELD : E_MAIL Endereço E-mail
#define S_E2ADRM3001_E_MAIL peel(pick(nPos, 868, 70), " ")
#define R_E2ADRM3001_E_MAIL(A) put(nRec, 868, A :70.70)
!-----------------------------------------------------------
! FIELD : COUNTRY1 Código de país (ISO alfanumérico)
#define S_E2ADRM3001_COUNTRY1 peel(pick(nPos, 938, 3), " ")
#define R_E2ADRM3001_COUNTRY1(A) put(nRec, 938, A :3.3)
!-----------------------------------------------------------
! FIELD : COUNTRY2 Código de país (ISO numérico)
#define S_E2ADRM3001_COUNTRY2 peel(pick(nPos, 941, 3), " ")
#define R_E2ADRM3001_COUNTRY2(A) put(nRec, 941, A :3.3)
!-----------------------------------------------------------
! FIELD : REGION Região, estado
#define S_E2ADRM3001_REGION peel(pick(nPos, 944, 3), " ")
#define R_E2ADRM3001_REGION(A) put(nRec, 944, A :3.3)
!-----------------------------------------------------------
! FIELD : COUNTY_COD Código de distrito (por exemplo, nos EUA)
#define S_E2ADRM3001_COUNTY_COD peel(pick(nPos, 947, 3), " ")
#define R_E2ADRM3001_COUNTY_COD(A) put(nRec, 947, A :3.3)
!-----------------------------------------------------------
! FIELD : COUNTY_TXT Nome county (por ex.nos EUA)
#define S_E2ADRM3001_COUNTY_TXT peel(pick(nPos, 950, 25), " ")
#define R_E2ADRM3001_COUNTY_TXT(A) put(nRec, 950, A :25.25)
!-----------------------------------------------------------
! FIELD : TZCODE Localização para fuso horário (código SAP)
#define S_E2ADRM3001_TZCODE peel(pick(nPos, 975, 6), " ")
#define R_E2ADRM3001_TZCODE(A) put(nRec, 975, A :6.6)
!-----------------------------------------------------------
! FIELD : TZDESC Localização para fuso horário (código externo)
#define S_E2ADRM3001_TZDESC peel(pick(nPos, 981, 35), " ")
#define R_E2ADRM3001_TZDESC(A) put(nRec, 981, A :35.35)
!-----------------------------------------------------------
!===========================================================
! Line : E2EDL24007 
!===========================================================
! FIELD : POSNR Nº item do documento de vendas e distribuição
#define S_E2EDL24007_POSNR peel(pick(nPos, 64, 6), " ")
#define R_E2EDL24007_POSNR(A) put(nRec, 64, A :6.6)
!-----------------------------------------------------------
! FIELD : MATNR Nº do material
#define S_E2EDL24007_MATNR peel(pick(nPos, 70, 18), " ")
#define R_E2EDL24007_MATNR(A) put(nRec, 70, A :18.18)
!-----------------------------------------------------------
! FIELD : MATWA Material entrado
#define S_E2EDL24007_MATWA peel(pick(nPos, 88, 18), " ")
#define R_E2EDL24007_MATWA(A) put(nRec, 88, A :18.18)
!-----------------------------------------------------------
! FIELD : ARKTX Texto breve do item da ordem do cliente
#define S_E2EDL24007_ARKTX peel(pick(nPos, 106, 40), " ")
#define R_E2EDL24007_ARKTX(A) put(nRec, 106, A :40.40)
!-----------------------------------------------------------
! FIELD : ORKTX Texto breve de artigo para o material entrado
#define S_E2EDL24007_ORKTX peel(pick(nPos, 146, 40), " ")
#define R_E2EDL24007_ORKTX(A) put(nRec, 146, A :40.40)
!-----------------------------------------------------------
! FIELD : SUGRD Motivo da substituição de material
#define S_E2EDL24007_SUGRD peel(pick(nPos, 186, 4), " ")
#define R_E2EDL24007_SUGRD(A) put(nRec, 186, A :4.4)
!-----------------------------------------------------------
! FIELD : SUDRU Entrada original será impressa
#define S_E2EDL24007_SUDRU peel(pick(nPos, 190, 1), " ")
#define R_E2EDL24007_SUDRU(A) put(nRec, 190, A :1.1)
!-----------------------------------------------------------
! FIELD : MATKL Grupo de mercadorias
#define S_E2EDL24007_MATKL peel(pick(nPos, 191, 9), " ")
#define R_E2EDL24007_MATKL(A) put(nRec, 191, A :9.9)
!-----------------------------------------------------------
! FIELD : WERKS Centro
#define S_E2EDL24007_WERKS peel(pick(nPos, 200, 4), " ")
#define R_E2EDL24007_WERKS(A) put(nRec, 200, A :4.4)
!-----------------------------------------------------------
! FIELD : LGORT Depósito
#define S_E2EDL24007_LGORT peel(pick(nPos, 204, 4), " ")
#define R_E2EDL24007_LGORT(A) put(nRec, 204, A :4.4)
!-----------------------------------------------------------
! FIELD : CHARG Número do lote
#define S_E2EDL24007_CHARG peel(pick(nPos, 208, 10), " ")
#define R_E2EDL24007_CHARG(A) put(nRec, 208, A :10.10)
!-----------------------------------------------------------
! FIELD : KDMAT Material do cliente
#define S_E2EDL24007_KDMAT peel(pick(nPos, 218, 22), " ")
#define R_E2EDL24007_KDMAT(A) put(nRec, 218, A :22.22)
!-----------------------------------------------------------
! FIELD : LFIMG Quantidade fornecida de fato, em UMV
#define S_E2EDL24007_LFIMG peel(pick(nPos, 240, 15), " ")
#define R_E2EDL24007_LFIMG(A) put(nRec, 240, A :15.15)
!-----------------------------------------------------------
! FIELD : VRKME Unidade de venda
#define S_E2EDL24007_VRKME peel(pick(nPos, 255, 3), " ")
#define R_E2EDL24007_VRKME(A) put(nRec, 255, A :3.3)
!-----------------------------------------------------------
! FIELD : LGMNG Quantidade fornecida real em unidades de gestão de estoque
#define S_E2EDL24007_LGMNG peel(pick(nPos, 258, 15), " ")
#define R_E2EDL24007_LGMNG(A) put(nRec, 258, A :15.15)
!-----------------------------------------------------------
! FIELD : MEINS Unidade de medida básica
#define S_E2EDL24007_MEINS peel(pick(nPos, 273, 3), " ")
#define R_E2EDL24007_MEINS(A) put(nRec, 273, A :3.3)
!-----------------------------------------------------------
! FIELD : NTGEW Peso líquido
#define S_E2EDL24007_NTGEW peel(pick(nPos, 276, 15), " ")
#define R_E2EDL24007_NTGEW(A) put(nRec, 276, A :15.15)
!-----------------------------------------------------------
! FIELD : BRGEW Peso bruto
#define S_E2EDL24007_BRGEW peel(pick(nPos, 291, 15), " ")
#define R_E2EDL24007_BRGEW(A) put(nRec, 291, A :15.15)
!-----------------------------------------------------------
! FIELD : GEWEI Unidade de peso
#define S_E2EDL24007_GEWEI peel(pick(nPos, 306, 3), " ")
#define R_E2EDL24007_GEWEI(A) put(nRec, 306, A :3.3)
!-----------------------------------------------------------
! FIELD : VOLUM Volume
#define S_E2EDL24007_VOLUM peel(pick(nPos, 309, 15), " ")
#define R_E2EDL24007_VOLUM(A) put(nRec, 309, A :15.15)
!-----------------------------------------------------------
! FIELD : VOLEH Unidade de volume
#define S_E2EDL24007_VOLEH peel(pick(nPos, 324, 3), " ")
#define R_E2EDL24007_VOLEH(A) put(nRec, 324, A :3.3)
!-----------------------------------------------------------
! FIELD : LGPBE Posição no depósito
#define S_E2EDL24007_LGPBE peel(pick(nPos, 327, 10), " ")
#define R_E2EDL24007_LGPBE(A) put(nRec, 327, A :10.10)
!-----------------------------------------------------------
! FIELD : HIPOS Item superior em uma hierarquia de itens
#define S_E2EDL24007_HIPOS peel(pick(nPos, 337, 6), " ")
#define R_E2EDL24007_HIPOS(A) put(nRec, 337, A :6.6)
!-----------------------------------------------------------
! FIELD : HIEVW Utilização do item hierárquico
#define S_E2EDL24007_HIEVW peel(pick(nPos, 343, 1), " ")
#define R_E2EDL24007_HIEVW(A) put(nRec, 343, A :1.1)
!-----------------------------------------------------------
! FIELD : LADGR Grupo de carregamento
#define S_E2EDL24007_LADGR peel(pick(nPos, 344, 4), " ")
#define R_E2EDL24007_LADGR(A) put(nRec, 344, A :4.4)
!-----------------------------------------------------------
! FIELD : TRAGR Grupo de transporte
#define S_E2EDL24007_TRAGR peel(pick(nPos, 348, 4), " ")
#define R_E2EDL24007_TRAGR(A) put(nRec, 348, A :4.4)
!-----------------------------------------------------------
! FIELD : VKBUR Escritório de vendas
#define S_E2EDL24007_VKBUR peel(pick(nPos, 352, 4), " ")
#define R_E2EDL24007_VKBUR(A) put(nRec, 352, A :4.4)
!-----------------------------------------------------------
! FIELD : VKGRP Equipe de vendas
#define S_E2EDL24007_VKGRP peel(pick(nPos, 356, 3), " ")
#define R_E2EDL24007_VKGRP(A) put(nRec, 356, A :3.3)
!-----------------------------------------------------------
! FIELD : VTWEG Canal de distribuição
#define S_E2EDL24007_VTWEG peel(pick(nPos, 359, 2), " ")
#define R_E2EDL24007_VTWEG(A) put(nRec, 359, A :2.2)
!-----------------------------------------------------------
! FIELD : SPART Setor de atividade
#define S_E2EDL24007_SPART peel(pick(nPos, 361, 2), " ")
#define R_E2EDL24007_SPART(A) put(nRec, 361, A :2.2)
!-----------------------------------------------------------
! FIELD : GRKOR Grupo remessa (ou seja, itens são entregues conjuntamente)
#define S_E2EDL24007_GRKOR peel(pick(nPos, 363, 3), " ")
#define R_E2EDL24007_GRKOR(A) put(nRec, 363, A :3.3)
!-----------------------------------------------------------
! FIELD : EAN11 Nº europeu do artigo (EAN)
#define S_E2EDL24007_EAN11 peel(pick(nPos, 366, 18), " ")
#define R_E2EDL24007_EAN11(A) put(nRec, 366, A :18.18)
!-----------------------------------------------------------
! FIELD : SERNR Código da série
#define S_E2EDL24007_SERNR peel(pick(nPos, 384, 8), " ")
#define R_E2EDL24007_SERNR(A) put(nRec, 384, A :8.8)
!-----------------------------------------------------------
! FIELD : AESKD Status de modificação no cliente
#define S_E2EDL24007_AESKD peel(pick(nPos, 392, 17), " ")
#define R_E2EDL24007_AESKD(A) put(nRec, 392, A :17.17)
!-----------------------------------------------------------
! FIELD : EMPST Ponto de recebimento
#define S_E2EDL24007_EMPST peel(pick(nPos, 409, 25), " ")
#define R_E2EDL24007_EMPST(A) put(nRec, 409, A :25.25)
!-----------------------------------------------------------
! FIELD : MFRGR Grupo de frete material
#define S_E2EDL24007_MFRGR peel(pick(nPos, 434, 8), " ")
#define R_E2EDL24007_MFRGR(A) put(nRec, 434, A :8.8)
!-----------------------------------------------------------
! FIELD : VBRST Local de consumo do cliente
#define S_E2EDL24007_VBRST peel(pick(nPos, 442, 14), " ")
#define R_E2EDL24007_VBRST(A) put(nRec, 442, A :14.14)
!-----------------------------------------------------------
! FIELD : LABNK Nº solicitação de remessa/solic.rem.just in time do cliente
#define S_E2EDL24007_LABNK peel(pick(nPos, 456, 17), " ")
#define R_E2EDL24007_LABNK(A) put(nRec, 456, A :17.17)
!-----------------------------------------------------------
! FIELD : ABRDT Data da solicitação de remessa
#define S_E2EDL24007_ABRDT peel(pick(nPos, 473, 8), " ")
#define R_E2EDL24007_ABRDT(A) put(nRec, 473, A :8.8)
!-----------------------------------------------------------
! FIELD : MFRPN Nº peça de fabricante
#define S_E2EDL24007_MFRPN peel(pick(nPos, 481, 40), " ")
#define R_E2EDL24007_MFRPN(A) put(nRec, 481, A :40.40)
!-----------------------------------------------------------
! FIELD : MFRNR Nº de um fabricante
#define S_E2EDL24007_MFRNR peel(pick(nPos, 521, 10), " ")
#define R_E2EDL24007_MFRNR(A) put(nRec, 521, A :10.10)
!-----------------------------------------------------------
! FIELD : ABRVW Código de utilização
#define S_E2EDL24007_ABRVW peel(pick(nPos, 531, 3), " ")
#define R_E2EDL24007_ABRVW(A) put(nRec, 531, A :3.3)
!-----------------------------------------------------------
! FIELD : KDMAT35 Material do cliente
#define S_E2EDL24007_KDMAT35 peel(pick(nPos, 534, 35), " ")
#define R_E2EDL24007_KDMAT35(A) put(nRec, 534, A :35.35)
!-----------------------------------------------------------
! FIELD : KANNR Nº KANBAN/seqüencial
#define S_E2EDL24007_KANNR peel(pick(nPos, 569, 35), " ")
#define R_E2EDL24007_KANNR(A) put(nRec, 569, A :35.35)
!-----------------------------------------------------------
! FIELD : POSEX Nº item externo
#define S_E2EDL24007_POSEX peel(pick(nPos, 604, 6), " ")
#define R_E2EDL24007_POSEX(A) put(nRec, 604, A :6.6)
!-----------------------------------------------------------
! FIELD : LIEFFZ Qtd.acumulada fornecida/MAIS em unidade de medida base
#define S_E2EDL24007_LIEFFZ peel(pick(nPos, 610, 17), " ")
#define R_E2EDL24007_LIEFFZ(A) put(nRec, 610, A :17.17)
!-----------------------------------------------------------
! FIELD : USR01 Reserva cliente: campo dados adicional 1 para solicits.rem.
#define S_E2EDL24007_USR01 peel(pick(nPos, 627, 35), " ")
#define R_E2EDL24007_USR01(A) put(nRec, 627, A :35.35)
!-----------------------------------------------------------
! FIELD : USR02 Reserva cliente: campo dados adicional 2 para solicits.rem.
#define S_E2EDL24007_USR02 peel(pick(nPos, 662, 35), " ")
#define R_E2EDL24007_USR02(A) put(nRec, 662, A :35.35)
!-----------------------------------------------------------
! FIELD : USR03 Reserva cliente: campo dados adicional 3 para solicits.rem.
#define S_E2EDL24007_USR03 peel(pick(nPos, 697, 35), " ")
#define R_E2EDL24007_USR03(A) put(nRec, 697, A :35.35)
!-----------------------------------------------------------
! FIELD : USR04 Reserva cliente: campo dados adicional 4 para solicits.rem.
#define S_E2EDL24007_USR04 peel(pick(nPos, 732, 10), " ")
#define R_E2EDL24007_USR04(A) put(nRec, 732, A :10.10)
!-----------------------------------------------------------
! FIELD : USR05 Reserva cliente: campo dados acidional 5 para solicits.rem.
#define S_E2EDL24007_USR05 peel(pick(nPos, 742, 10), " ")
#define R_E2EDL24007_USR05(A) put(nRec, 742, A :10.10)
!-----------------------------------------------------------
! FIELD : MATNR_EXTERNAL Nº do material
#define S_E2EDL24007_MATNR_EXTERNAL peel(pick(nPos, 752, 40), " ")
#define R_E2EDL24007_MATNR_EXTERNAL(A) put(nRec, 752, A :40.40)
!-----------------------------------------------------------
! FIELD : MATNR_VERSION Nº de versão para campo MATNR
#define S_E2EDL24007_MATNR_VERSION peel(pick(nPos, 792, 10), " ")
#define R_E2EDL24007_MATNR_VERSION(A) put(nRec, 792, A :10.10)
!-----------------------------------------------------------
! FIELD : MATNR_GUID GUID externo para campo MATNR
#define S_E2EDL24007_MATNR_GUID peel(pick(nPos, 802, 32), " ")
#define R_E2EDL24007_MATNR_GUID(A) put(nRec, 802, A :32.32)
!-----------------------------------------------------------
! FIELD : MATWA_EXTERNAL Material entrado
#define S_E2EDL24007_MATWA_EXTERNAL peel(pick(nPos, 834, 40), " ")
#define R_E2EDL24007_MATWA_EXTERNAL(A) put(nRec, 834, A :40.40)
!-----------------------------------------------------------
! FIELD : MATWA_VERSION Nº de versão para campo MATWA
#define S_E2EDL24007_MATWA_VERSION peel(pick(nPos, 874, 10), " ")
#define R_E2EDL24007_MATWA_VERSION(A) put(nRec, 874, A :10.10)
!-----------------------------------------------------------
! FIELD : MATWA_GUID GUID externo para campo MATWA
#define S_E2EDL24007_MATWA_GUID peel(pick(nPos, 884, 32), " ")
#define R_E2EDL24007_MATWA_GUID(A) put(nRec, 884, A :32.32)
!-----------------------------------------------------------
! FIELD : ZUDAT Dados adicionais
#define S_E2EDL24007_ZUDAT peel(pick(nPos, 916, 20), " ")
#define R_E2EDL24007_ZUDAT(A) put(nRec, 916, A :20.20)
!-----------------------------------------------------------
! FIELD : VFDAT Data do vencimento
#define S_E2EDL24007_VFDAT peel(pick(nPos, 936, 8), " ")
#define R_E2EDL24007_VFDAT(A) put(nRec, 936, A :8.8)
!-----------------------------------------------------------
! FIELD : RMA_NUMBER Nº RMA
#define S_E2EDL24007_RMA_NUMBER peel(pick(nPos, 944, 20), " ")
#define R_E2EDL24007_RMA_NUMBER(A) put(nRec, 944, A :20.20)
!-----------------------------------------------------------
! FIELD : RMA_COMPLETE Código de encerramento RMA
#define S_E2EDL24007_RMA_COMPLETE peel(pick(nPos, 964, 1), " ")
#define R_E2EDL24007_RMA_COMPLETE(A) put(nRec, 964, A :1.1)
!-----------------------------------------------------------
! FIELD : EXPIRY_DATE_EXT Fim da validade (data) do recebimento de devoluções
#define S_E2EDL24007_EXPIRY_DATE_EXT peel(pick(nPos, 965, 16), " ")
#define R_E2EDL24007_EXPIRY_DATE_EXT(A) put(nRec, 965, A :16.16)
!-----------------------------------------------------------
! FIELD : VGBEL Nº documento do documento de referência
#define S_E2EDL24007_VGBEL peel(pick(nPos, 981, 10), " ")
#define R_E2EDL24007_VGBEL(A) put(nRec, 981, A :10.10)
!-----------------------------------------------------------
! FIELD : VGPOS Nº item do item comercial modelo
#define S_E2EDL24007_VGPOS peel(pick(nPos, 991, 6), " ")
#define R_E2EDL24007_VGPOS(A) put(nRec, 991, A :6.6)
!-----------------------------------------------------------
! FIELD : FOLLOW_UP_CODE Código proposto da atividade subseqüente
#define S_E2EDL24007_FOLLOW_UP_CODE peel(pick(nPos, 997, 4), " ")
#define R_E2EDL24007_FOLLOW_UP_CODE(A) put(nRec, 997, A :4.4)
!-----------------------------------------------------------
! FIELD : ORMNG Quantidade original do item de remessa
#define S_E2EDL24007_ORMNG peel(pick(nPos, 1001, 15), " ")
#define R_E2EDL24007_ORMNG(A) put(nRec, 1001, A :15.15)
!-----------------------------------------------------------
! FIELD : COMPL Código de conclusão
#define S_E2EDL24007_COMPL peel(pick(nPos, 1016, 1), " ")
#define R_E2EDL24007_COMPL(A) put(nRec, 1016, A :1.1)
!-----------------------------------------------------------
! FIELD : HOLD Item de remessa ainda não concluído (memorizado)
#define S_E2EDL24007_HOLD peel(pick(nPos, 1017, 1), " ")
#define R_E2EDL24007_HOLD(A) put(nRec, 1017, A :1.1)
!-----------------------------------------------------------
! FIELD : MAX_ERR_TYPE Ocorreu tipo de erro máximo
#define S_E2EDL24007_MAX_ERR_TYPE peel(pick(nPos, 1018, 1), " ")
#define R_E2EDL24007_MAX_ERR_TYPE(A) put(nRec, 1018, A :1.1)
!-----------------------------------------------------------
! FIELD : LICHN Nº lote do fornecedor
#define S_E2EDL24007_LICHN peel(pick(nPos, 1019, 15), " ")
#define R_E2EDL24007_LICHN(A) put(nRec, 1019, A :15.15)
!-----------------------------------------------------------
! FIELD : RECIPIENT_CREATE Criado por recebedor
#define S_E2EDL24007_RECIPIENT_CREATE peel(pick(nPos, 1034, 1), " ")
#define R_E2EDL24007_RECIPIENT_CREATE(A) put(nRec, 1034, A :1.1)
!-----------------------------------------------------------
! FIELD : EXPIRY_DATE_EXT_B Início da validade (data) do recebimento de devoluções
#define S_E2EDL24007_EXPIRY_DATE_EXT_B peel(pick(nPos, 1035, 16), " ")
#define R_E2EDL24007_EXPIRY_DATE_EXT_B(A) put(nRec, 1035, A :16.16)
!-----------------------------------------------------------
!===========================================================
! Line : E2EDL25 
!===========================================================
! FIELD : LGORT_BEZ Denominação do depósito
#define S_E2EDL25_LGORT_BEZ peel(pick(nPos, 64, 16), " ")
#define R_E2EDL25_LGORT_BEZ(A) put(nRec, 64, A :16.16)
!-----------------------------------------------------------
! FIELD : LADGR_BEZ Denominação grupo de carga
#define S_E2EDL25_LADGR_BEZ peel(pick(nPos, 80, 20), " ")
#define R_E2EDL25_LADGR_BEZ(A) put(nRec, 80, A :20.20)
!-----------------------------------------------------------
! FIELD : TRAGR_BEZ Denominação grupo de transporte
#define S_E2EDL25_TRAGR_BEZ peel(pick(nPos, 100, 20), " ")
#define R_E2EDL25_TRAGR_BEZ(A) put(nRec, 100, A :20.20)
!-----------------------------------------------------------
! FIELD : VKBUR_BEZ Denominação escritório de vendas
#define S_E2EDL25_VKBUR_BEZ peel(pick(nPos, 120, 20), " ")
#define R_E2EDL25_VKBUR_BEZ(A) put(nRec, 120, A :20.20)
!-----------------------------------------------------------
! FIELD : VKGRP_BEZ Denominação da equipe de vendas
#define S_E2EDL25_VKGRP_BEZ peel(pick(nPos, 140, 20), " ")
#define R_E2EDL25_VKGRP_BEZ(A) put(nRec, 140, A :20.20)
!-----------------------------------------------------------
! FIELD : VTWEG_BEZ Denominação canal de distribuição
#define S_E2EDL25_VTWEG_BEZ peel(pick(nPos, 160, 20), " ")
#define R_E2EDL25_VTWEG_BEZ(A) put(nRec, 160, A :20.20)
!-----------------------------------------------------------
! FIELD : SPART_BEZ Denominação do setor de atividade
#define S_E2EDL25_SPART_BEZ peel(pick(nPos, 180, 20), " ")
#define R_E2EDL25_SPART_BEZ(A) put(nRec, 180, A :20.20)
!-----------------------------------------------------------
! FIELD : MFRGR_BEZ Denominação grupo de frete material
#define S_E2EDL25_MFRGR_BEZ peel(pick(nPos, 200, 20), " ")
#define R_E2EDL25_MFRGR_BEZ(A) put(nRec, 200, A :20.20)
!-----------------------------------------------------------
!===========================================================
! Line : E2EDL26002 
!===========================================================
! FIELD : PSTYV Categoria do item do documento de vendas e distribuição
#define S_E2EDL26002_PSTYV peel(pick(nPos, 64, 4), " ")
#define R_E2EDL26002_PSTYV(A) put(nRec, 64, A :4.4)
!-----------------------------------------------------------
! FIELD : MATKL Grupo de mercadorias
#define S_E2EDL26002_MATKL peel(pick(nPos, 68, 9), " ")
#define R_E2EDL26002_MATKL(A) put(nRec, 68, A :9.9)
!-----------------------------------------------------------
! FIELD : PRODH Hierarquia de produtos
#define S_E2EDL26002_PRODH peel(pick(nPos, 77, 18), " ")
#define R_E2EDL26002_PRODH(A) put(nRec, 77, A :18.18)
!-----------------------------------------------------------
! FIELD : UMVKZ Numerador (fator) para conversão da quantidade venda em UGE
#define S_E2EDL26002_UMVKZ peel(pick(nPos, 95, 6), " ")
#define R_E2EDL26002_UMVKZ(A) put(nRec, 95, A :6.6)
!-----------------------------------------------------------
! FIELD : UMVKN Denominador (divisor) para conversão de qtd.venda em UGE
#define S_E2EDL26002_UMVKN peel(pick(nPos, 101, 6), " ")
#define R_E2EDL26002_UMVKN(A) put(nRec, 101, A :6.6)
!-----------------------------------------------------------
! FIELD : KZTLF Remessa parcial a nível de item
#define S_E2EDL26002_KZTLF peel(pick(nPos, 107, 1), " ")
#define R_E2EDL26002_KZTLF(A) put(nRec, 107, A :1.1)
!-----------------------------------------------------------
! FIELD : UEBTK Código: fornecimento excessivo permitido sem limites
#define S_E2EDL26002_UEBTK peel(pick(nPos, 108, 1), " ")
#define R_E2EDL26002_UEBTK(A) put(nRec, 108, A :1.1)
!-----------------------------------------------------------
! FIELD : UEBTO Limite de tolerância para fornecimento excessivo
#define S_E2EDL26002_UEBTO peel(pick(nPos, 109, 5), " ")
#define R_E2EDL26002_UEBTO(A) put(nRec, 109, A :5.5)
!-----------------------------------------------------------
! FIELD : UNTTO Limite de tolerância para fornecimento incompleto
#define S_E2EDL26002_UNTTO peel(pick(nPos, 114, 5), " ")
#define R_E2EDL26002_UNTTO(A) put(nRec, 114, A :5.5)
!-----------------------------------------------------------
! FIELD : CHSPL Partição do lote de produção permitida
#define S_E2EDL26002_CHSPL peel(pick(nPos, 119, 1), " ")
#define R_E2EDL26002_CHSPL(A) put(nRec, 119, A :1.1)
!-----------------------------------------------------------
! FIELD : XCHBW Código para lotes/tipos de avaliação
#define S_E2EDL26002_XCHBW peel(pick(nPos, 120, 1), " ")
#define R_E2EDL26002_XCHBW(A) put(nRec, 120, A :1.1)
!-----------------------------------------------------------
! FIELD : POSAR Tipo de item
#define S_E2EDL26002_POSAR peel(pick(nPos, 121, 1), " ")
#define R_E2EDL26002_POSAR(A) put(nRec, 121, A :1.1)
!-----------------------------------------------------------
! FIELD : SOBKZ Código de estoque especial
#define S_E2EDL26002_SOBKZ peel(pick(nPos, 122, 1), " ")
#define R_E2EDL26002_SOBKZ(A) put(nRec, 122, A :1.1)
!-----------------------------------------------------------
! FIELD : PCKPF Controle embalagem
#define S_E2EDL26002_PCKPF peel(pick(nPos, 123, 1), " ")
#define R_E2EDL26002_PCKPF(A) put(nRec, 123, A :1.1)
!-----------------------------------------------------------
! FIELD : MAGRV Grupo de materiais material de embalagem
#define S_E2EDL26002_MAGRV peel(pick(nPos, 124, 4), " ")
#define R_E2EDL26002_MAGRV(A) put(nRec, 124, A :4.4)
!-----------------------------------------------------------
! FIELD : SHKZG Código débito/crédito
#define S_E2EDL26002_SHKZG peel(pick(nPos, 128, 1), " ")
#define R_E2EDL26002_SHKZG(A) put(nRec, 128, A :1.1)
!-----------------------------------------------------------
! FIELD : KOQUI Picking está sujeito a confirmação
#define S_E2EDL26002_KOQUI peel(pick(nPos, 129, 1), " ")
#define R_E2EDL26002_KOQUI(A) put(nRec, 129, A :1.1)
!-----------------------------------------------------------
! FIELD : AKTNR Ação
#define S_E2EDL26002_AKTNR peel(pick(nPos, 130, 10), " ")
#define R_E2EDL26002_AKTNR(A) put(nRec, 130, A :10.10)
!-----------------------------------------------------------
! FIELD : KZUMW Código: relevância para o meio ambiente
#define S_E2EDL26002_KZUMW peel(pick(nPos, 140, 1), " ")
#define R_E2EDL26002_KZUMW(A) put(nRec, 140, A :1.1)
!-----------------------------------------------------------
! FIELD : KVGR1 Grupo de clientes 1
#define S_E2EDL26002_KVGR1 peel(pick(nPos, 141, 3), " ")
#define R_E2EDL26002_KVGR1(A) put(nRec, 141, A :3.3)
!-----------------------------------------------------------
! FIELD : KVGR2 Grupo de clientes 2
#define S_E2EDL26002_KVGR2 peel(pick(nPos, 144, 3), " ")
#define R_E2EDL26002_KVGR2(A) put(nRec, 144, A :3.3)
!-----------------------------------------------------------
! FIELD : KVGR3 Grupo de clientes 3
#define S_E2EDL26002_KVGR3 peel(pick(nPos, 147, 3), " ")
#define R_E2EDL26002_KVGR3(A) put(nRec, 147, A :3.3)
!-----------------------------------------------------------
! FIELD : KVGR4 Grupo de clientes 4
#define S_E2EDL26002_KVGR4 peel(pick(nPos, 150, 3), " ")
#define R_E2EDL26002_KVGR4(A) put(nRec, 150, A :3.3)
!-----------------------------------------------------------
! FIELD : KVGR5 Grupo de clientes 5
#define S_E2EDL26002_KVGR5 peel(pick(nPos, 153, 3), " ")
#define R_E2EDL26002_KVGR5(A) put(nRec, 153, A :3.3)
!-----------------------------------------------------------
! FIELD : MVGR1 Grupo de material 1
#define S_E2EDL26002_MVGR1 peel(pick(nPos, 156, 3), " ")
#define R_E2EDL26002_MVGR1(A) put(nRec, 156, A :3.3)
!-----------------------------------------------------------
! FIELD : MVGR2 Grupo de material 2
#define S_E2EDL26002_MVGR2 peel(pick(nPos, 159, 3), " ")
#define R_E2EDL26002_MVGR2(A) put(nRec, 159, A :3.3)
!-----------------------------------------------------------
! FIELD : MVGR3 Grupo de materiais 3
#define S_E2EDL26002_MVGR3 peel(pick(nPos, 162, 3), " ")
#define R_E2EDL26002_MVGR3(A) put(nRec, 162, A :3.3)
!-----------------------------------------------------------
! FIELD : MVGR4 Grupo de material 4
#define S_E2EDL26002_MVGR4 peel(pick(nPos, 165, 3), " ")
#define R_E2EDL26002_MVGR4(A) put(nRec, 165, A :3.3)
!-----------------------------------------------------------
! FIELD : MVGR5 Grupo de material 5
#define S_E2EDL26002_MVGR5 peel(pick(nPos, 168, 3), " ")
#define R_E2EDL26002_MVGR5(A) put(nRec, 168, A :3.3)
!-----------------------------------------------------------
! FIELD : LIFEXPOS2 ID externo do produto
#define S_E2EDL26002_LIFEXPOS2 peel(pick(nPos, 171, 35), " ")
#define R_E2EDL26002_LIFEXPOS2(A) put(nRec, 171, A :35.35)
!-----------------------------------------------------------
! FIELD : CQU_SA Quantidade acumulada de entrada para programa de remessas
#define S_E2EDL26002_CQU_SA peel(pick(nPos, 206, 17), " ")
#define R_E2EDL26002_CQU_SA(A) put(nRec, 206, A :17.17)
!-----------------------------------------------------------
! FIELD : CQU_SA_UNIT Quantidade acumulada de entrada - unidade de medida
#define S_E2EDL26002_CQU_SA_UNIT peel(pick(nPos, 223, 3), " ")
#define R_E2EDL26002_CQU_SA_UNIT(A) put(nRec, 223, A :3.3)
!-----------------------------------------------------------
! FIELD : CQU_ITQS Diferença de quantidade acumulada p/programa remessas
#define S_E2EDL26002_CQU_ITQS peel(pick(nPos, 226, 17), " ")
#define R_E2EDL26002_CQU_ITQS(A) put(nRec, 226, A :17.17)
!-----------------------------------------------------------
! FIELD : CQU_ITQS_UNIT Quantidade acumulada de entrada - unidade de medida
#define S_E2EDL26002_CQU_ITQS_UNIT peel(pick(nPos, 243, 3), " ")
#define R_E2EDL26002_CQU_ITQS_UNIT(A) put(nRec, 243, A :3.3)
!-----------------------------------------------------------
! FIELD : VBUMG_BME Qtd.EM atualizada em unidade de medida básica
#define S_E2EDL26002_VBUMG_BME peel(pick(nPos, 246, 15), " ")
#define R_E2EDL26002_VBUMG_BME(A) put(nRec, 246, A :15.15)
!-----------------------------------------------------------
!===========================================================
! Line : E2EDL27001 
!===========================================================
! FIELD : PSTYV_BEZ Texto da categoria do item
#define S_E2EDL27001_PSTYV_BEZ peel(pick(nPos, 64, 20), " ")
#define R_E2EDL27001_PSTYV_BEZ(A) put(nRec, 64, A :20.20)
!-----------------------------------------------------------
! FIELD : MATKL_BEZ Denominação do grupo de mercadorias
#define S_E2EDL27001_MATKL_BEZ peel(pick(nPos, 84, 20), " ")
#define R_E2EDL27001_MATKL_BEZ(A) put(nRec, 84, A :20.20)
!-----------------------------------------------------------
! FIELD : PRODH_BEZ Texto para hierarquia de produtos
#define S_E2EDL27001_PRODH_BEZ peel(pick(nPos, 104, 20), " ")
#define R_E2EDL27001_PRODH_BEZ(A) put(nRec, 104, A :20.20)
!-----------------------------------------------------------
! FIELD : WERKS_BEZ Denominação do centro
#define S_E2EDL27001_WERKS_BEZ peel(pick(nPos, 124, 30), " ")
#define R_E2EDL27001_WERKS_BEZ(A) put(nRec, 124, A :30.30)
!-----------------------------------------------------------
! FIELD : KVGR1_BEZ Denominação grupo de clientes 1
#define S_E2EDL27001_KVGR1_BEZ peel(pick(nPos, 154, 20), " ")
#define R_E2EDL27001_KVGR1_BEZ(A) put(nRec, 154, A :20.20)
!-----------------------------------------------------------
! FIELD : KVGR2_BEZ Denominação grupo de clientes 2
#define S_E2EDL27001_KVGR2_BEZ peel(pick(nPos, 174, 20), " ")
#define R_E2EDL27001_KVGR2_BEZ(A) put(nRec, 174, A :20.20)
!-----------------------------------------------------------
! FIELD : KVGR3_BEZ Denominação grupo de clientes 3
#define S_E2EDL27001_KVGR3_BEZ peel(pick(nPos, 194, 20), " ")
#define R_E2EDL27001_KVGR3_BEZ(A) put(nRec, 194, A :20.20)
!-----------------------------------------------------------
! FIELD : KVGR4_BEZ Denominação grupo de clientes 4
#define S_E2EDL27001_KVGR4_BEZ peel(pick(nPos, 214, 20), " ")
#define R_E2EDL27001_KVGR4_BEZ(A) put(nRec, 214, A :20.20)
!-----------------------------------------------------------
! FIELD : KVGR5_BEZ Denominação grupo de clientes 5
#define S_E2EDL27001_KVGR5_BEZ peel(pick(nPos, 234, 20), " ")
#define R_E2EDL27001_KVGR5_BEZ(A) put(nRec, 234, A :20.20)
!-----------------------------------------------------------
! FIELD : MVGR1_BEZ Denominação grupo de materiais 1
#define S_E2EDL27001_MVGR1_BEZ peel(pick(nPos, 254, 40), " ")
#define R_E2EDL27001_MVGR1_BEZ(A) put(nRec, 254, A :40.40)
!-----------------------------------------------------------
! FIELD : MVGR2_BEZ Denominação grupo de materiais 2
#define S_E2EDL27001_MVGR2_BEZ peel(pick(nPos, 294, 40), " ")
#define R_E2EDL27001_MVGR2_BEZ(A) put(nRec, 294, A :40.40)
!-----------------------------------------------------------
! FIELD : MVGR3_BEZ Denominação grupo de materiais 3
#define S_E2EDL27001_MVGR3_BEZ peel(pick(nPos, 334, 40), " ")
#define R_E2EDL27001_MVGR3_BEZ(A) put(nRec, 334, A :40.40)
!-----------------------------------------------------------
! FIELD : MVGR4_BEZ Denominação grupo de materiais 4
#define S_E2EDL27001_MVGR4_BEZ peel(pick(nPos, 374, 40), " ")
#define R_E2EDL27001_MVGR4_BEZ(A) put(nRec, 374, A :40.40)
!-----------------------------------------------------------
! FIELD : MVGR5_BEZ Denominação grupo de materiais 5
#define S_E2EDL27001_MVGR5_BEZ peel(pick(nPos, 414, 40), " ")
#define R_E2EDL27001_MVGR5_BEZ(A) put(nRec, 414, A :40.40)
!-----------------------------------------------------------
!===========================================================
! Line : E2EDL19 
!===========================================================
! FIELD : QUALF Qualificador IDOC: controle (item de remessa)
#define S_E2EDL19_QUALF peel(pick(nPos, 64, 3), " ")
#define R_E2EDL19_QUALF(A) put(nRec, 64, A :3.3)
!-----------------------------------------------------------
! FIELD : PARAM IDOC: parâmetros de controle
#define S_E2EDL19_PARAM peel(pick(nPos, 67, 20), " ")
#define R_E2EDL19_PARAM(A) put(nRec, 67, A :20.20)
!-----------------------------------------------------------
!===========================================================
! Line : E2EDL11 
!===========================================================
! FIELD : SERNR Nº de série
#define S_E2EDL11_SERNR peel(pick(nPos, 64, 18), " ")
#define R_E2EDL11_SERNR(A) put(nRec, 64, A :18.18)
!-----------------------------------------------------------
!===========================================================
! Line : E2EDL15 
!===========================================================
! FIELD : ATINN Característica interna
#define S_E2EDL15_ATINN peel(pick(nPos, 64, 10), " ")
#define R_E2EDL15_ATINN(A) put(nRec, 64, A :10.10)
!-----------------------------------------------------------
! FIELD : ATNAM Nome da característica
#define S_E2EDL15_ATNAM peel(pick(nPos, 74, 30), " ")
#define R_E2EDL15_ATNAM(A) put(nRec, 74, A :30.30)
!-----------------------------------------------------------
! FIELD : ATBEZ Denominação caract.
#define S_E2EDL15_ATBEZ peel(pick(nPos, 104, 30), " ")
#define R_E2EDL15_ATBEZ(A) put(nRec, 104, A :30.30)
!-----------------------------------------------------------
! FIELD : ATWRT Valor da característica
#define S_E2EDL15_ATWRT peel(pick(nPos, 134, 30), " ")
#define R_E2EDL15_ATWRT(A) put(nRec, 134, A :30.30)
!-----------------------------------------------------------
! FIELD : ATWTB Denominação do valor da característica
#define S_E2EDL15_ATWTB peel(pick(nPos, 164, 30), " ")
#define R_E2EDL15_ATWTB(A) put(nRec, 164, A :30.30)
!-----------------------------------------------------------
! FIELD : EWAHR Tolerância de
#define S_E2EDL15_EWAHR peel(pick(nPos, 194, 24), " ")
#define R_E2EDL15_EWAHR(A) put(nRec, 194, A :24.24)
!-----------------------------------------------------------
!===========================================================
! Line : E2EDL35 
!===========================================================
! FIELD : STAWN Código das mercadorias / nº code import.p/comércio exterior
#define S_E2EDL35_STAWN peel(pick(nPos, 64, 17), " ")
#define R_E2EDL35_STAWN(A) put(nRec, 64, A :17.17)
!-----------------------------------------------------------
! FIELD : EXPRF Procedimento de export./import.p/com.exterior (5 caracteres)
#define S_E2EDL35_EXPRF peel(pick(nPos, 81, 5), " ")
#define R_E2EDL35_EXPRF(A) put(nRec, 81, A :5.5)
!-----------------------------------------------------------
! FIELD : EXART Tipo de transação para comércio exterior
#define S_E2EDL35_EXART peel(pick(nPos, 86, 2), " ")
#define R_E2EDL35_EXART(A) put(nRec, 86, A :2.2)
!-----------------------------------------------------------
! FIELD : HERKL País de origem do material (origem CCI)
#define S_E2EDL35_HERKL peel(pick(nPos, 88, 3), " ")
#define R_E2EDL35_HERKL(A) put(nRec, 88, A :3.3)
!-----------------------------------------------------------
! FIELD : HERKR Região de origem do material (origem Câm.Ind.e Comércio)
#define S_E2EDL35_HERKR peel(pick(nPos, 91, 3), " ")
#define R_E2EDL35_HERKR(A) put(nRec, 91, A :3.3)
!-----------------------------------------------------------
! FIELD : GRWRT Valor na passagem da fronteira p/comércio exterior
#define S_E2EDL35_GRWRT peel(pick(nPos, 94, 15), " ")
#define R_E2EDL35_GRWRT(A) put(nRec, 94, A :15.15)
!-----------------------------------------------------------
! FIELD : PREFE Indicador de preferência na exportação/importação
#define S_E2EDL35_PREFE peel(pick(nPos, 109, 1), " ")
#define R_E2EDL35_PREFE(A) put(nRec, 109, A :1.1)
!-----------------------------------------------------------
!===========================================================
! Line : E2EDL36 
!===========================================================
! FIELD : STXT1 Denominação do código das mercadorias - primeira linha
#define S_E2EDL36_STXT1 peel(pick(nPos, 64, 40), " ")
#define R_E2EDL36_STXT1(A) put(nRec, 64, A :40.40)
!-----------------------------------------------------------
! FIELD : STXT2 Denominação do código das mercadorias - segunda linha
#define S_E2EDL36_STXT2 peel(pick(nPos, 104, 40), " ")
#define R_E2EDL36_STXT2(A) put(nRec, 104, A :40.40)
!-----------------------------------------------------------
! FIELD : STXT3 Denominação do código das mercadorias - terceira linha
#define S_E2EDL36_STXT3 peel(pick(nPos, 144, 40), " ")
#define R_E2EDL36_STXT3(A) put(nRec, 144, A :40.40)
!-----------------------------------------------------------
! FIELD : STXT4 Denominação do código das mercadorias - quarta linha
#define S_E2EDL36_STXT4 peel(pick(nPos, 184, 40), " ")
#define R_E2EDL36_STXT4(A) put(nRec, 184, A :40.40)
!-----------------------------------------------------------
! FIELD : STXT5 Denominação do código das mercadorias - quinta linha
#define S_E2EDL36_STXT5 peel(pick(nPos, 224, 40), " ")
#define R_E2EDL36_STXT5(A) put(nRec, 224, A :40.40)
!-----------------------------------------------------------
! FIELD : STXT6 Denominação do código das mercadorias - sexta linha
#define S_E2EDL36_STXT6 peel(pick(nPos, 264, 40), " ")
#define R_E2EDL36_STXT6(A) put(nRec, 264, A :40.40)
!-----------------------------------------------------------
! FIELD : STXT7 Denominação do código das mercadorias - sétima linha
#define S_E2EDL36_STXT7 peel(pick(nPos, 304, 40), " ")
#define R_E2EDL36_STXT7(A) put(nRec, 304, A :40.40)
!-----------------------------------------------------------
! FIELD : EXPRF_BEZ Denominação procedimento de exportação/importação
#define S_E2EDL36_EXPRF_BEZ peel(pick(nPos, 344, 30), " ")
#define R_E2EDL36_EXPRF_BEZ(A) put(nRec, 344, A :30.30)
!-----------------------------------------------------------
! FIELD : EXART_BEZ Denominação tipo de transação
#define S_E2EDL36_EXART_BEZ peel(pick(nPos, 374, 30), " ")
#define R_E2EDL36_EXART_BEZ(A) put(nRec, 374, A :30.30)
!-----------------------------------------------------------
! FIELD : HERKL_BEZ Denominação país de origem
#define S_E2EDL36_HERKL_BEZ peel(pick(nPos, 404, 15), " ")
#define R_E2EDL36_HERKL_BEZ(A) put(nRec, 404, A :15.15)
!-----------------------------------------------------------
! FIELD : HERKR_BEZ Denominação região de origem
#define S_E2EDL36_HERKR_BEZ peel(pick(nPos, 419, 20), " ")
#define R_E2EDL36_HERKR_BEZ(A) put(nRec, 419, A :20.20)
!-----------------------------------------------------------
!===========================================================
! Line : E2EDL43000 
!===========================================================
! FIELD : QUALF Ctg.documento de vendas e distribuição
#define S_E2EDL43000_QUALF peel(pick(nPos, 64, 1), " ")
#define R_E2EDL43000_QUALF(A) put(nRec, 64, A :1.1)
!-----------------------------------------------------------
! FIELD : BELNR IDOC nº documento
#define S_E2EDL43000_BELNR peel(pick(nPos, 65, 35), " ")
#define R_E2EDL43000_BELNR(A) put(nRec, 65, A :35.35)
!-----------------------------------------------------------
! FIELD : POSNR Nº do item
#define S_E2EDL43000_POSNR peel(pick(nPos, 100, 6), " ")
#define R_E2EDL43000_POSNR(A) put(nRec, 100, A :6.6)
!-----------------------------------------------------------
! FIELD : DATUM IDOC: Data
#define S_E2EDL43000_DATUM peel(pick(nPos, 106, 8), " ")
#define R_E2EDL43000_DATUM(A) put(nRec, 106, A :8.8)
!-----------------------------------------------------------
!===========================================================
! Line : E2EDL41000 
!===========================================================
! FIELD : QUALI Qualificador para dados de referência do emissor do pedido
#define S_E2EDL41000_QUALI peel(pick(nPos, 64, 3), " ")
#define R_E2EDL41000_QUALI(A) put(nRec, 64, A :3.3)
!-----------------------------------------------------------
! FIELD : BSTNR Nº pedido do cliente
#define S_E2EDL41000_BSTNR peel(pick(nPos, 67, 35), " ")
#define R_E2EDL41000_BSTNR(A) put(nRec, 67, A :35.35)
!-----------------------------------------------------------
! FIELD : BSTDT Data do pedido do cliente
#define S_E2EDL41000_BSTDT peel(pick(nPos, 102, 8), " ")
#define R_E2EDL41000_BSTDT(A) put(nRec, 102, A :8.8)
!-----------------------------------------------------------
! FIELD : BSARK Tipo de pedido do cliente (pedido feito por telefone,fax..)
#define S_E2EDL41000_BSARK peel(pick(nPos, 110, 4), " ")
#define R_E2EDL41000_BSARK(A) put(nRec, 110, A :4.4)
!-----------------------------------------------------------
! FIELD : IHREZ Sua referência
#define S_E2EDL41000_IHREZ peel(pick(nPos, 114, 12), " ")
#define R_E2EDL41000_IHREZ(A) put(nRec, 114, A :12.12)
!-----------------------------------------------------------
! FIELD : POSEX Nº item do pedido de referência
#define S_E2EDL41000_POSEX peel(pick(nPos, 126, 6), " ")
#define R_E2EDL41000_POSEX(A) put(nRec, 126, A :6.6)
!-----------------------------------------------------------
!===========================================================
! Line : E2EDL42000 
!===========================================================
! FIELD : BSARK_BEZ Denominação do tipo de pedido
#define S_E2EDL42000_BSARK_BEZ peel(pick(nPos, 64, 20), " ")
#define R_E2EDL42000_BSARK_BEZ(A) put(nRec, 64, A :20.20)
!-----------------------------------------------------------
!===========================================================
! Line : E2TXTH9001 
!===========================================================
! FIELD : FUNCTION Função (para texto transferido)
#define S_E2TXTH9001_FUNCTION peel(pick(nPos, 64, 3), " ")
#define R_E2TXTH9001_FUNCTION(A) put(nRec, 64, A :3.3)
!-----------------------------------------------------------
! FIELD : TDOBJECT Textos: objeto de aplicação
#define S_E2TXTH9001_TDOBJECT peel(pick(nPos, 67, 10), " ")
#define R_E2TXTH9001_TDOBJECT(A) put(nRec, 67, A :10.10)
!-----------------------------------------------------------
! FIELD : TDOBNAME Nome
#define S_E2TXTH9001_TDOBNAME peel(pick(nPos, 77, 70), " ")
#define R_E2TXTH9001_TDOBNAME(A) put(nRec, 77, A :70.70)
!-----------------------------------------------------------
! FIELD : TDID ID de texto
#define S_E2TXTH9001_TDID peel(pick(nPos, 147, 4), " ")
#define R_E2TXTH9001_TDID(A) put(nRec, 147, A :4.4)
!-----------------------------------------------------------
! FIELD : TDSPRAS Idioma
#define S_E2TXTH9001_TDSPRAS peel(pick(nPos, 151, 1), " ")
#define R_E2TXTH9001_TDSPRAS(A) put(nRec, 151, A :1.1)
!-----------------------------------------------------------
! FIELD : TDTEXTTYPE SAPscript: formato de um texto
#define S_E2TXTH9001_TDTEXTTYPE peel(pick(nPos, 152, 6), " ")
#define R_E2TXTH9001_TDTEXTTYPE(A) put(nRec, 152, A :6.6)
!-----------------------------------------------------------
! FIELD : LANGUA_ISO Código de idioma
#define S_E2TXTH9001_LANGUA_ISO peel(pick(nPos, 158, 2), " ")
#define R_E2TXTH9001_LANGUA_ISO(A) put(nRec, 158, A :2.2)
!-----------------------------------------------------------
!===========================================================
! Line : E2TXTP9 
!===========================================================
! FIELD : TDFORMAT Coluna de formato
#define S_E2TXTP9_TDFORMAT peel(pick(nPos, 64, 2), " ")
#define R_E2TXTP9_TDFORMAT(A) put(nRec, 64, A :2.2)
!-----------------------------------------------------------
! FIELD : TDLINE Linha de texto
#define S_E2TXTP9_TDLINE peel(pick(nPos, 66, 132), " ")
#define R_E2TXTP9_TDLINE(A) put(nRec, 66, A :132.132)
!-----------------------------------------------------------
!===========================================================
! Line : E2EDL12 
!===========================================================
! FIELD : ATINN Característica interna
#define S_E2EDL12_ATINN peel(pick(nPos, 64, 10), " ")
#define R_E2EDL12_ATINN(A) put(nRec, 64, A :10.10)
!-----------------------------------------------------------
! FIELD : ATNAM Nome da característica
#define S_E2EDL12_ATNAM peel(pick(nPos, 74, 30), " ")
#define R_E2EDL12_ATNAM(A) put(nRec, 74, A :30.30)
!-----------------------------------------------------------
! FIELD : ATBEZ Denominação caract.
#define S_E2EDL12_ATBEZ peel(pick(nPos, 104, 30), " ")
#define R_E2EDL12_ATBEZ(A) put(nRec, 104, A :30.30)
!-----------------------------------------------------------
! FIELD : ATWRT Valor da característica
#define S_E2EDL12_ATWRT peel(pick(nPos, 134, 30), " ")
#define R_E2EDL12_ATWRT(A) put(nRec, 134, A :30.30)
!-----------------------------------------------------------
! FIELD : ATWTB Denominação do valor da característica
#define S_E2EDL12_ATWTB peel(pick(nPos, 164, 30), " ")
#define R_E2EDL12_ATWTB(A) put(nRec, 164, A :30.30)
!-----------------------------------------------------------
! FIELD : EWAHR Tolerância de
#define S_E2EDL12_EWAHR peel(pick(nPos, 194, 24), " ")
#define R_E2EDL12_EWAHR(A) put(nRec, 194, A :24.24)
!-----------------------------------------------------------
!===========================================================
! Line : E2EDL37005 
!===========================================================
! FIELD : EXIDV Identificador externo da unidade comercial
#define S_E2EDL37005_EXIDV peel(pick(nPos, 64, 20), " ")
#define R_E2EDL37005_EXIDV(A) put(nRec, 64, A :20.20)
!-----------------------------------------------------------
! FIELD : TARAG Massa líquida da unidade comercial
#define S_E2EDL37005_TARAG peel(pick(nPos, 84, 17), " ")
#define R_E2EDL37005_TARAG(A) put(nRec, 84, A :17.17)
!-----------------------------------------------------------
! FIELD : GWEIT Unidade de peso tara
#define S_E2EDL37005_GWEIT peel(pick(nPos, 101, 3), " ")
#define R_E2EDL37005_GWEIT(A) put(nRec, 101, A :3.3)
!-----------------------------------------------------------
! FIELD : BRGEW Peso total da unidade comercial
#define S_E2EDL37005_BRGEW peel(pick(nPos, 104, 17), " ")
#define R_E2EDL37005_BRGEW(A) put(nRec, 104, A :17.17)
!-----------------------------------------------------------
! FIELD : NTGEW Peso de carga da unidade comercial
#define S_E2EDL37005_NTGEW peel(pick(nPos, 121, 17), " ")
#define R_E2EDL37005_NTGEW(A) put(nRec, 121, A :17.17)
!-----------------------------------------------------------
! FIELD : MAGEW Peso de carga máximo permitido da unidade comercial
#define S_E2EDL37005_MAGEW peel(pick(nPos, 138, 17), " ")
#define R_E2EDL37005_MAGEW(A) put(nRec, 138, A :17.17)
!-----------------------------------------------------------
! FIELD : GWEIM Unidade de peso
#define S_E2EDL37005_GWEIM peel(pick(nPos, 155, 3), " ")
#define R_E2EDL37005_GWEIM(A) put(nRec, 155, A :3.3)
!-----------------------------------------------------------
! FIELD : BTVOL Volume total da unidade comercial
#define S_E2EDL37005_BTVOL peel(pick(nPos, 158, 17), " ")
#define R_E2EDL37005_BTVOL(A) put(nRec, 158, A :17.17)
!-----------------------------------------------------------
! FIELD : NTVOL Volume de carga da unidade comercial
#define S_E2EDL37005_NTVOL peel(pick(nPos, 175, 17), " ")
#define R_E2EDL37005_NTVOL(A) put(nRec, 175, A :17.17)
!-----------------------------------------------------------
! FIELD : MAVOL Volume de carga admissível da unidade comercial
#define S_E2EDL37005_MAVOL peel(pick(nPos, 192, 17), " ")
#define R_E2EDL37005_MAVOL(A) put(nRec, 192, A :17.17)
!-----------------------------------------------------------
! FIELD : VOLEM Unidade de volume
#define S_E2EDL37005_VOLEM peel(pick(nPos, 209, 3), " ")
#define R_E2EDL37005_VOLEM(A) put(nRec, 209, A :3.3)
!-----------------------------------------------------------
! FIELD : TAVOL Volume líquido da unidade comercial
#define S_E2EDL37005_TAVOL peel(pick(nPos, 212, 17), " ")
#define R_E2EDL37005_TAVOL(A) put(nRec, 212, A :17.17)
!-----------------------------------------------------------
! FIELD : VOLET Unidade de volume tara
#define S_E2EDL37005_VOLET peel(pick(nPos, 229, 3), " ")
#define R_E2EDL37005_VOLET(A) put(nRec, 229, A :3.3)
!-----------------------------------------------------------
! FIELD : VEGR2 Grupo unidades comerciais 2   (pode ser definido livremente)
#define S_E2EDL37005_VEGR2 peel(pick(nPos, 232, 5), " ")
#define R_E2EDL37005_VEGR2(A) put(nRec, 232, A :5.5)
!-----------------------------------------------------------
! FIELD : VEGR1 Grupo unidades comerciais 1   (pode ser definido livremente)
#define S_E2EDL37005_VEGR1 peel(pick(nPos, 237, 5), " ")
#define R_E2EDL37005_VEGR1(A) put(nRec, 237, A :5.5)
!-----------------------------------------------------------
! FIELD : VEGR3 Grupo unidades comerciais 3   (pode ser definido livremente)
#define S_E2EDL37005_VEGR3 peel(pick(nPos, 242, 5), " ")
#define R_E2EDL37005_VEGR3(A) put(nRec, 242, A :5.5)
!-----------------------------------------------------------
! FIELD : VHILM Material de embalagem
#define S_E2EDL37005_VHILM peel(pick(nPos, 247, 18), " ")
#define R_E2EDL37005_VHILM(A) put(nRec, 247, A :18.18)
!-----------------------------------------------------------
! FIELD : VEGR4 Grupo unidades comerciais 4   (pode ser definido livremente)
#define S_E2EDL37005_VEGR4 peel(pick(nPos, 265, 5), " ")
#define R_E2EDL37005_VEGR4(A) put(nRec, 265, A :5.5)
!-----------------------------------------------------------
! FIELD : LAENG Cmpr.
#define S_E2EDL37005_LAENG peel(pick(nPos, 270, 15), " ")
#define R_E2EDL37005_LAENG(A) put(nRec, 270, A :15.15)
!-----------------------------------------------------------
! FIELD : VEGR5 Grupo unidades comerciais 5   (pode ser definido livremente)
#define S_E2EDL37005_VEGR5 peel(pick(nPos, 285, 5), " ")
#define R_E2EDL37005_VEGR5(A) put(nRec, 285, A :5.5)
!-----------------------------------------------------------
! FIELD : BREIT Largura
#define S_E2EDL37005_BREIT peel(pick(nPos, 290, 15), " ")
#define R_E2EDL37005_BREIT(A) put(nRec, 290, A :15.15)
!-----------------------------------------------------------
! FIELD : HOEHE Altura
#define S_E2EDL37005_HOEHE peel(pick(nPos, 305, 15), " ")
#define R_E2EDL37005_HOEHE(A) put(nRec, 305, A :15.15)
!-----------------------------------------------------------
! FIELD : MEABM Unidade para comprimento/largura/altura
#define S_E2EDL37005_MEABM peel(pick(nPos, 320, 3), " ")
#define R_E2EDL37005_MEABM(A) put(nRec, 320, A :3.3)
!-----------------------------------------------------------
! FIELD : INHALT Descrição do conteúdo da unidade comercial
#define S_E2EDL37005_INHALT peel(pick(nPos, 323, 40), " ")
#define R_E2EDL37005_INHALT(A) put(nRec, 323, A :40.40)
!-----------------------------------------------------------
! FIELD : VHART Tipo de material de embalagem
#define S_E2EDL37005_VHART peel(pick(nPos, 363, 4), " ")
#define R_E2EDL37005_VHART(A) put(nRec, 363, A :4.4)
!-----------------------------------------------------------
! FIELD : MAGRV Grupo de materiais material de embalagem
#define S_E2EDL37005_MAGRV peel(pick(nPos, 367, 4), " ")
#define R_E2EDL37005_MAGRV(A) put(nRec, 367, A :4.4)
!-----------------------------------------------------------
! FIELD : LADLG Compr.plataforma carregamento em unid.compr.plat.carrgmto.
#define S_E2EDL37005_LADLG peel(pick(nPos, 371, 8), " ")
#define R_E2EDL37005_LADLG(A) put(nRec, 371, A :8.8)
!-----------------------------------------------------------
! FIELD : LADEH Unidade de comprimento da plataforma de carga
#define S_E2EDL37005_LADEH peel(pick(nPos, 379, 3), " ")
#define R_E2EDL37005_LADEH(A) put(nRec, 379, A :3.3)
!-----------------------------------------------------------
! FIELD : FARZT Duração do transporte
#define S_E2EDL37005_FARZT peel(pick(nPos, 382, 4), " ")
#define R_E2EDL37005_FARZT(A) put(nRec, 382, A :4.4)
!-----------------------------------------------------------
! FIELD : FAREH Unidade de tempo de transporte
#define S_E2EDL37005_FAREH peel(pick(nPos, 386, 3), " ")
#define R_E2EDL37005_FAREH(A) put(nRec, 386, A :3.3)
!-----------------------------------------------------------
! FIELD : ENTFE Distância percorrida
#define S_E2EDL37005_ENTFE peel(pick(nPos, 389, 8), " ")
#define R_E2EDL37005_ENTFE(A) put(nRec, 389, A :8.8)
!-----------------------------------------------------------
! FIELD : EHENT Unidade de distância
#define S_E2EDL37005_EHENT peel(pick(nPos, 397, 3), " ")
#define R_E2EDL37005_EHENT(A) put(nRec, 397, A :3.3)
!-----------------------------------------------------------
! FIELD : VELTP Categoria do material de embalagem
#define S_E2EDL37005_VELTP peel(pick(nPos, 400, 1), " ")
#define R_E2EDL37005_VELTP(A) put(nRec, 400, A :1.1)
!-----------------------------------------------------------
! FIELD : EXIDV2 2. identificador externo da unidade comercial
#define S_E2EDL37005_EXIDV2 peel(pick(nPos, 401, 20), " ")
#define R_E2EDL37005_EXIDV2(A) put(nRec, 401, A :20.20)
!-----------------------------------------------------------
! FIELD : LANDT País do meio de transporte
#define S_E2EDL37005_LANDT peel(pick(nPos, 421, 3), " ")
#define R_E2EDL37005_LANDT(A) put(nRec, 421, A :3.3)
!-----------------------------------------------------------
! FIELD : LANDF Nacionalidade do motorista
#define S_E2EDL37005_LANDF peel(pick(nPos, 424, 3), " ")
#define R_E2EDL37005_LANDF(A) put(nRec, 424, A :3.3)
!-----------------------------------------------------------
! FIELD : NAMEF Nome do motorista
#define S_E2EDL37005_NAMEF peel(pick(nPos, 427, 35), " ")
#define R_E2EDL37005_NAMEF(A) put(nRec, 427, A :35.35)
!-----------------------------------------------------------
! FIELD : NAMBE Nome do acompanhante
#define S_E2EDL37005_NAMBE peel(pick(nPos, 462, 35), " ")
#define R_E2EDL37005_NAMBE(A) put(nRec, 462, A :35.35)
!-----------------------------------------------------------
! FIELD : VHILM_KU Material do cliente
#define S_E2EDL37005_VHILM_KU peel(pick(nPos, 497, 22), " ")
#define R_E2EDL37005_VHILM_KU(A) put(nRec, 497, A :22.22)
!-----------------------------------------------------------
! FIELD : VEBEZ Denominação do material de embalagem
#define S_E2EDL37005_VEBEZ peel(pick(nPos, 519, 40), " ")
#define R_E2EDL37005_VEBEZ(A) put(nRec, 519, A :40.40)
!-----------------------------------------------------------
! FIELD : SMGKN Identificação SMG para etiquetas de mercadorias
#define S_E2EDL37005_SMGKN peel(pick(nPos, 559, 1), " ")
#define R_E2EDL37005_SMGKN(A) put(nRec, 559, A :1.1)
!-----------------------------------------------------------
! FIELD : KDMAT35 Material de embalagem do parceiro (cliente / fornecedor)
#define S_E2EDL37005_KDMAT35 peel(pick(nPos, 560, 35), " ")
#define R_E2EDL37005_KDMAT35(A) put(nRec, 560, A :35.35)
!-----------------------------------------------------------
! FIELD : SORTL Campo de seleção
#define S_E2EDL37005_SORTL peel(pick(nPos, 595, 10), " ")
#define R_E2EDL37005_SORTL(A) put(nRec, 595, A :10.10)
!-----------------------------------------------------------
! FIELD : ERNAM Nome do responsável que adicionou o objeto
#define S_E2EDL37005_ERNAM peel(pick(nPos, 605, 12), " ")
#define R_E2EDL37005_ERNAM(A) put(nRec, 605, A :12.12)
!-----------------------------------------------------------
! FIELD : GEWFX Pesos e volumes fixos
#define S_E2EDL37005_GEWFX peel(pick(nPos, 617, 1), " ")
#define R_E2EDL37005_GEWFX(A) put(nRec, 617, A :1.1)
!-----------------------------------------------------------
! FIELD : ERLKZ Status (neste momento sem funcionalidade)
#define S_E2EDL37005_ERLKZ peel(pick(nPos, 618, 1), " ")
#define R_E2EDL37005_ERLKZ(A) put(nRec, 618, A :1.1)
!-----------------------------------------------------------
! FIELD : EXIDA Tipo do identificador externo da unidade comercial
#define S_E2EDL37005_EXIDA peel(pick(nPos, 619, 1), " ")
#define R_E2EDL37005_EXIDA(A) put(nRec, 619, A :1.1)
!-----------------------------------------------------------
! FIELD : MOVE_STATUS Status da unidade comercial
#define S_E2EDL37005_MOVE_STATUS peel(pick(nPos, 620, 4), " ")
#define R_E2EDL37005_MOVE_STATUS(A) put(nRec, 620, A :4.4)
!-----------------------------------------------------------
! FIELD : PACKVORSCHR Cadeia de texto - 22 caracteres
#define S_E2EDL37005_PACKVORSCHR peel(pick(nPos, 624, 22), " ")
#define R_E2EDL37005_PACKVORSCHR(A) put(nRec, 624, A :22.22)
!-----------------------------------------------------------
! FIELD : PACKVORSCHR_ST Código de uma posição
#define S_E2EDL37005_PACKVORSCHR_ST peel(pick(nPos, 646, 1), " ")
#define R_E2EDL37005_PACKVORSCHR_ST(A) put(nRec, 646, A :1.1)
!-----------------------------------------------------------
! FIELD : LABELTYP Código: não imprimir rótulo expedição externo
#define S_E2EDL37005_LABELTYP peel(pick(nPos, 647, 1), " ")
#define R_E2EDL37005_LABELTYP(A) put(nRec, 647, A :1.1)
!-----------------------------------------------------------
! FIELD : ZUL_AUFL Campo de comprimento 17
#define S_E2EDL37005_ZUL_AUFL peel(pick(nPos, 648, 17), " ")
#define R_E2EDL37005_ZUL_AUFL(A) put(nRec, 648, A :17.17)
!-----------------------------------------------------------
! FIELD : VHILM_EXTERNAL Meio auxiliar de expedição
#define S_E2EDL37005_VHILM_EXTERNAL peel(pick(nPos, 665, 40), " ")
#define R_E2EDL37005_VHILM_EXTERNAL(A) put(nRec, 665, A :40.40)
!-----------------------------------------------------------
! FIELD : VHILM_VERSION Nº de versão para campo VHILM
#define S_E2EDL37005_VHILM_VERSION peel(pick(nPos, 705, 10), " ")
#define R_E2EDL37005_VHILM_VERSION(A) put(nRec, 705, A :10.10)
!-----------------------------------------------------------
! FIELD : VHILM_GUID GUID externo para campo VHILM
#define S_E2EDL37005_VHILM_GUID peel(pick(nPos, 715, 32), " ")
#define R_E2EDL37005_VHILM_GUID(A) put(nRec, 715, A :32.32)
!-----------------------------------------------------------
! FIELD : KDMAT35_EXTERNAL Nº extenso material (desenvolvimento futuro) p/campo KDMAT
#define S_E2EDL37005_KDMAT35_EXTERNAL peel(pick(nPos, 747, 40), " ")
#define R_E2EDL37005_KDMAT35_EXTERNAL(A) put(nRec, 747, A :40.40)
!-----------------------------------------------------------
! FIELD : KDMAT35_VERSION Nº da versão (desenvolvimento futuro) para o campo KDMAT35
#define S_E2EDL37005_KDMAT35_VERSION peel(pick(nPos, 787, 10), " ")
#define R_E2EDL37005_KDMAT35_VERSION(A) put(nRec, 787, A :10.10)
!-----------------------------------------------------------
! FIELD : KDMAT35_GUID GUID externo (desenvolvimento futuro) para o campo KDMAT35
#define S_E2EDL37005_KDMAT35_GUID peel(pick(nPos, 797, 32), " ")
#define R_E2EDL37005_KDMAT35_GUID(A) put(nRec, 797, A :32.32)
!-----------------------------------------------------------
! FIELD : VHILM_KU_EXTERNAL Nº material longo (desenvolvimento futuro) para campo VHILM
#define S_E2EDL37005_VHILM_KU_EXTERNAL peel(pick(nPos, 829, 40), " ")
#define R_E2EDL37005_VHILM_KU_EXTERNAL(A) put(nRec, 829, A :40.40)
!-----------------------------------------------------------
! FIELD : VHILM_KU_VERSION Nº da versão (desenvolvimento futuro) do campo VHILM_KU
#define S_E2EDL37005_VHILM_KU_VERSION peel(pick(nPos, 869, 10), " ")
#define R_E2EDL37005_VHILM_KU_VERSION(A) put(nRec, 869, A :10.10)
!-----------------------------------------------------------
! FIELD : VHILM_KU_GUID GUID externo (desenvolvimento futuro) do campo VHILM_KU
#define S_E2EDL37005_VHILM_KU_GUID peel(pick(nPos, 879, 32), " ")
#define R_E2EDL37005_VHILM_KU_GUID(A) put(nRec, 879, A :32.32)
!-----------------------------------------------------------
!===========================================================
! Line : E2EDL39000 
!===========================================================
! FIELD : QUALF Qualificador: controle (elemento de expedição)
#define S_E2EDL39000_QUALF peel(pick(nPos, 64, 3), " ")
#define R_E2EDL39000_QUALF(A) put(nRec, 64, A :3.3)
!-----------------------------------------------------------
! FIELD : PARAM IDOC: parâmetros de controle
#define S_E2EDL39000_PARAM peel(pick(nPos, 67, 20), " ")
#define R_E2EDL39000_PARAM(A) put(nRec, 67, A :20.20)
!-----------------------------------------------------------
!===========================================================
! Line : E2EDL38 
!===========================================================
! FIELD : VEGR1_BEZ Denominação grupo de elementos de expedição 1
#define S_E2EDL38_VEGR1_BEZ peel(pick(nPos, 64, 20), " ")
#define R_E2EDL38_VEGR1_BEZ(A) put(nRec, 64, A :20.20)
!-----------------------------------------------------------
! FIELD : VEGR2_BEZ Denominação grupo de elementos de expedição 2
#define S_E2EDL38_VEGR2_BEZ peel(pick(nPos, 84, 20), " ")
#define R_E2EDL38_VEGR2_BEZ(A) put(nRec, 84, A :20.20)
!-----------------------------------------------------------
! FIELD : VEGR3_BEZ Denominação grupo de elementos de expedição 3
#define S_E2EDL38_VEGR3_BEZ peel(pick(nPos, 104, 20), " ")
#define R_E2EDL38_VEGR3_BEZ(A) put(nRec, 104, A :20.20)
!-----------------------------------------------------------
! FIELD : VEGR4_BEZ Denominação grupo de elementos de expedição 4
#define S_E2EDL38_VEGR4_BEZ peel(pick(nPos, 124, 20), " ")
#define R_E2EDL38_VEGR4_BEZ(A) put(nRec, 124, A :20.20)
!-----------------------------------------------------------
! FIELD : VEGR5_BEZ Denominação grupo de elementos de expedição 5
#define S_E2EDL38_VEGR5_BEZ peel(pick(nPos, 144, 20), " ")
#define R_E2EDL38_VEGR5_BEZ(A) put(nRec, 144, A :20.20)
!-----------------------------------------------------------
! FIELD : VHART_BEZ Denominação tipo de meio auxiliar de expedição
#define S_E2EDL38_VHART_BEZ peel(pick(nPos, 164, 20), " ")
#define R_E2EDL38_VHART_BEZ(A) put(nRec, 164, A :20.20)
!-----------------------------------------------------------
! FIELD : MAGRV_BEZ Denominação grupo de materiais meios aux.expedição
#define S_E2EDL38_MAGRV_BEZ peel(pick(nPos, 184, 20), " ")
#define R_E2EDL38_MAGRV_BEZ(A) put(nRec, 184, A :20.20)
!-----------------------------------------------------------
! FIELD : VEBEZ Denominação do material de embalagem
#define S_E2EDL38_VEBEZ peel(pick(nPos, 204, 40), " ")
#define R_E2EDL38_VEBEZ(A) put(nRec, 204, A :40.40)
!-----------------------------------------------------------
!===========================================================
! Line : E2EDL44004 
!===========================================================
! FIELD : VELIN Tipo do conteúdo do item da unidade comercial
#define S_E2EDL44004_VELIN peel(pick(nPos, 64, 1), " ")
#define R_E2EDL44004_VELIN(A) put(nRec, 64, A :1.1)
!-----------------------------------------------------------
! FIELD : VBELN Nº documento de vendas e distribuição
#define S_E2EDL44004_VBELN peel(pick(nPos, 65, 10), " ")
#define R_E2EDL44004_VBELN(A) put(nRec, 65, A :10.10)
!-----------------------------------------------------------
! FIELD : POSNR Nº item do documento de vendas e distribuição
#define S_E2EDL44004_POSNR peel(pick(nPos, 75, 6), " ")
#define R_E2EDL44004_POSNR(A) put(nRec, 75, A :6.6)
!-----------------------------------------------------------
! FIELD : EXIDV Identificador externo da unidade comercial
#define S_E2EDL44004_EXIDV peel(pick(nPos, 81, 20), " ")
#define R_E2EDL44004_EXIDV(A) put(nRec, 81, A :20.20)
!-----------------------------------------------------------
! FIELD : VEMNG Qtd.básica embalada no item de unidade comercial
#define S_E2EDL44004_VEMNG peel(pick(nPos, 101, 17), " ")
#define R_E2EDL44004_VEMNG(A) put(nRec, 101, A :17.17)
!-----------------------------------------------------------
! FIELD : VEMEH UM básica da quantidade embalada (VEMNG)
#define S_E2EDL44004_VEMEH peel(pick(nPos, 118, 3), " ")
#define R_E2EDL44004_VEMEH(A) put(nRec, 118, A :3.3)
!-----------------------------------------------------------
! FIELD : MATNR Nº do material
#define S_E2EDL44004_MATNR peel(pick(nPos, 121, 18), " ")
#define R_E2EDL44004_MATNR(A) put(nRec, 121, A :18.18)
!-----------------------------------------------------------
! FIELD : KDMAT Material do cliente
#define S_E2EDL44004_KDMAT peel(pick(nPos, 139, 35), " ")
#define R_E2EDL44004_KDMAT(A) put(nRec, 139, A :35.35)
!-----------------------------------------------------------
! FIELD : CHARG Número do lote
#define S_E2EDL44004_CHARG peel(pick(nPos, 174, 10), " ")
#define R_E2EDL44004_CHARG(A) put(nRec, 174, A :10.10)
!-----------------------------------------------------------
! FIELD : WERKS Centro
#define S_E2EDL44004_WERKS peel(pick(nPos, 184, 4), " ")
#define R_E2EDL44004_WERKS(A) put(nRec, 184, A :4.4)
!-----------------------------------------------------------
! FIELD : LGORT Depósito
#define S_E2EDL44004_LGORT peel(pick(nPos, 188, 4), " ")
#define R_E2EDL44004_LGORT(A) put(nRec, 188, A :4.4)
!-----------------------------------------------------------
! FIELD : CUOBJ Configuração (nº interno de objeto)
#define S_E2EDL44004_CUOBJ peel(pick(nPos, 192, 18), " ")
#define R_E2EDL44004_CUOBJ(A) put(nRec, 192, A :18.18)
!-----------------------------------------------------------
! FIELD : BESTQ Tipo de estoque no sistema de administração de depósito
#define S_E2EDL44004_BESTQ peel(pick(nPos, 210, 1), " ")
#define R_E2EDL44004_BESTQ(A) put(nRec, 210, A :1.1)
!-----------------------------------------------------------
! FIELD : SOBKZ Código de estoque especial
#define S_E2EDL44004_SOBKZ peel(pick(nPos, 211, 1), " ")
#define R_E2EDL44004_SOBKZ(A) put(nRec, 211, A :1.1)
!-----------------------------------------------------------
! FIELD : SONUM Nº estoque especial
#define S_E2EDL44004_SONUM peel(pick(nPos, 212, 16), " ")
#define R_E2EDL44004_SONUM(A) put(nRec, 212, A :16.16)
!-----------------------------------------------------------
! FIELD : ANZSN Quantidade de nºs de série
#define S_E2EDL44004_ANZSN peel(pick(nPos, 228, 11), " ")
#define R_E2EDL44004_ANZSN(A) put(nRec, 228, A :11.11)
!-----------------------------------------------------------
! FIELD : WDATU Data da entrada de mercadorias
#define S_E2EDL44004_WDATU peel(pick(nPos, 239, 8), " ")
#define R_E2EDL44004_WDATU(A) put(nRec, 239, A :8.8)
!-----------------------------------------------------------
! FIELD : PARID Nº parceiro externo
#define S_E2EDL44004_PARID peel(pick(nPos, 247, 35), " ")
#define R_E2EDL44004_PARID(A) put(nRec, 247, A :35.35)
!-----------------------------------------------------------
! FIELD : MATNR_EXTERNAL Nº do material
#define S_E2EDL44004_MATNR_EXTERNAL peel(pick(nPos, 282, 40), " ")
#define R_E2EDL44004_MATNR_EXTERNAL(A) put(nRec, 282, A :40.40)
!-----------------------------------------------------------
! FIELD : MATNR_VERSION Nº de versão para campo MATNR
#define S_E2EDL44004_MATNR_VERSION peel(pick(nPos, 322, 10), " ")
#define R_E2EDL44004_MATNR_VERSION(A) put(nRec, 322, A :10.10)
!-----------------------------------------------------------
! FIELD : MATNR_GUID GUID externo para campo MATNR
#define S_E2EDL44004_MATNR_GUID peel(pick(nPos, 332, 32), " ")
#define R_E2EDL44004_MATNR_GUID(A) put(nRec, 332, A :32.32)
!-----------------------------------------------------------
! FIELD : KDMAT_EXTERNAL Material do cliente
#define S_E2EDL44004_KDMAT_EXTERNAL peel(pick(nPos, 364, 40), " ")
#define R_E2EDL44004_KDMAT_EXTERNAL(A) put(nRec, 364, A :40.40)
!-----------------------------------------------------------
! FIELD : KDMAT_VERSION Material do cliente
#define S_E2EDL44004_KDMAT_VERSION peel(pick(nPos, 404, 10), " ")
#define R_E2EDL44004_KDMAT_VERSION(A) put(nRec, 404, A :10.10)
!-----------------------------------------------------------
! FIELD : KDMAT_GUID Material do cliente
#define S_E2EDL44004_KDMAT_GUID peel(pick(nPos, 414, 32), " ")
#define R_E2EDL44004_KDMAT_GUID(A) put(nRec, 414, A :32.32)
!-----------------------------------------------------------

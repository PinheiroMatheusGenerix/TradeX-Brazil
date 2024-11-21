! File COPACK_LOREAL_CSV_IN : 
!===========================================================
! Line : REGISTO 
#define S_REGISTO split(pick(1,1,EOL), taREGISTO, ";")
!===========================================================
! FIELD : Ticket 
#define S_REGISTO_Ticket taREGISTO[1]
#define R_REGISTO_Ticket(A) taREGISTO[1] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : Tipo 
#define S_REGISTO_Tipo taREGISTO[2]
#define R_REGISTO_Tipo(A) taREGISTO[2] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Filial 
#define S_REGISTO_Filial taREGISTO[3]
#define R_REGISTO_Filial(A) taREGISTO[3] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : LocalEntrega 
#define S_REGISTO_LocalEntrega taREGISTO[4]
#define R_REGISTO_LocalEntrega(A) taREGISTO[4] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : SetorEntrega 
#define S_REGISTO_SetorEntrega taREGISTO[5]
#define R_REGISTO_SetorEntrega(A) taREGISTO[5] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Data 
#define S_REGISTO_Data taREGISTO[6]
#define R_REGISTO_Data(A) taREGISTO[6] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Hora 
#define S_REGISTO_Hora taREGISTO[7]
#define R_REGISTO_Hora(A) taREGISTO[7] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Status 
#define S_REGISTO_Status taREGISTO[8]
#define R_REGISTO_Status(A) taREGISTO[8] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : DataEntrega 
#define S_REGISTO_DataEntrega taREGISTO[9]
#define R_REGISTO_DataEntrega(A) taREGISTO[9] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : ValorTotalAgendamento 
#define S_REGISTO_ValorTotalAgendamento taREGISTO[10]
#define R_REGISTO_ValorTotalAgendamento(A) taREGISTO[10] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Inspecionar 
#define S_REGISTO_Inspecionar taREGISTO[11]
#define R_REGISTO_Inspecionar(A) taREGISTO[11] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Observacao 
#define S_REGISTO_Observacao taREGISTO[12]
#define R_REGISTO_Observacao(A) taREGISTO[12] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : NumeroDocumento 
#define S_REGISTO_NumeroDocumento taREGISTO[13]
#define R_REGISTO_NumeroDocumento(A) taREGISTO[13] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : SetorPedido 
#define S_REGISTO_SetorPedido taREGISTO[14]
#define R_REGISTO_SetorPedido(A) taREGISTO[14] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Fornecedor 
#define S_REGISTO_Fornecedor taREGISTO[15]
#define R_REGISTO_Fornecedor(A) taREGISTO[15] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : CNPJFornecedor 
#define S_REGISTO_CNPJFornecedor taREGISTO[16]
#define R_REGISTO_CNPJFornecedor(A) taREGISTO[16] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : DataOriginal 
#define S_REGISTO_DataOriginal taREGISTO[17]
#define R_REGISTO_DataOriginal(A) taREGISTO[17] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : StatusDocumento 
#define S_REGISTO_StatusDocumento taREGISTO[18]
#define R_REGISTO_StatusDocumento(A) taREGISTO[18] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : ValorTotal 
#define S_REGISTO_ValorTotal taREGISTO[19]
#define R_REGISTO_ValorTotal(A) taREGISTO[19] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Saldo 
#define S_REGISTO_Saldo taREGISTO[20]
#define R_REGISTO_Saldo(A) taREGISTO[20] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : ValorAgendadoDocumento 
#define S_REGISTO_ValorAgendadoDocumento taREGISTO[21]
#define R_REGISTO_ValorAgendadoDocumento(A) taREGISTO[21] := build(A :0.35)
!-----------------------------------------------------------

! FIELD : ValorEntregue 
#define S_REGISTO_ValorEntregue taREGISTO[22]
#define R_REGISTO_ValorEntregue(A) taREGISTO[22] := build(A :0.20)
!-----------------------------------------------------------

! FIELD : Transportador 
#define S_REGISTO_Transportador taREGISTO[23]
#define R_REGISTO_Transportador(A) taREGISTO[23] := build(A :0.20)
!-----------------------------------------------------------

! FIELD : AgendadoPor 
#define S_REGISTO_AgendadoPor taREGISTO[24]
#define R_REGISTO_AgendadoPor(A) taREGISTO[24] := build(A :0.20)
!-----------------------------------------------------------

! FIELD : PlacaCarreta 
#define S_REGISTO_PlacaCarreta taREGISTO[25]
#define R_REGISTO_PlacaCarreta(A) taREGISTO[25] := build(A :0.20)
!-----------------------------------------------------------

! FIELD : Estorno 
#define S_REGISTO_Estorno taREGISTO[26]
#define R_REGISTO_Estorno(A) taREGISTO[26] := build(A :0.20)
!-----------------------------------------------------------

! FIELD : Volume 
#define S_REGISTO_Volume taREGISTO[27]
#define R_REGISTO_Volume(A) taREGISTO[27] := build(A :0.20)
!-----------------------------------------------------------



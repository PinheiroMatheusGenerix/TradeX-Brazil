! File CSVHASBRO405062 : 
!===========================================================
! Line : Agendamento 
#define S_Agendamento split(pick(1,1,EOL), taAgendamento, ";")
!===========================================================
! FIELD : TipoInterface 
#define S_Agendamento_TipoInterface taAgendamento[1]
#define R_Agendamento_TipoInterface(A) taAgendamento[1] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : Planta 
#define S_Agendamento_Planta taAgendamento[2]
#define R_Agendamento_Planta(A) taAgendamento[2] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : ROTA 
#define S_Agendamento_ROTA taAgendamento[3]
#define R_Agendamento_ROTA(A) taAgendamento[3] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : DATAAGENDAMENTO 
#define S_Agendamento_DATAAGENDAMENTO taAgendamento[4]
#define R_Agendamento_DATAAGENDAMENTO(A) taAgendamento[4] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : HORAAGENDAMENTO 
#define S_Agendamento_HORAAGENDAMENTO taAgendamento[5]
#define R_Agendamento_HORAAGENDAMENTO(A) taAgendamento[5] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : CrachaVeiculo 
#define S_Agendamento_CrachaVeiculo taAgendamento[6]
#define R_Agendamento_CrachaVeiculo(A) taAgendamento[6] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : Pedido 
#define S_Agendamento_Pedido taAgendamento[7]
#define R_Agendamento_Pedido(A) taAgendamento[7] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : OrdemDeCarga 
#define S_Agendamento_OrdemDeCarga taAgendamento[8]
#define R_Agendamento_OrdemDeCarga(A) taAgendamento[8] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : Desdobro 
#define S_Agendamento_Desdobro taAgendamento[9]
#define R_Agendamento_Desdobro(A) taAgendamento[9] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : CodigoTransportadora 
#define S_Agendamento_CodigoTransportadora taAgendamento[10]
#define R_Agendamento_CodigoTransportadora(A) taAgendamento[10] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : Doca 
#define S_Agendamento_Doca taAgendamento[11]
#define R_Agendamento_Doca(A) taAgendamento[11] := build(A :0.50)
!-----------------------------------------------------------





!===========================================================
! Line : AlteraTransp 
#define S_AlteraTransp split(pick(1,1,EOL), taAlteraTransp, ";")
!===========================================================
! FIELD : TipoInterface 
#define S_AlteraTransp_TipoInterface taAlteraTransp[1]
#define R_AlteraTransp_TipoInterface(A) taAlteraTransp[1] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : Planta 
#define S_AlteraTransp_Planta taAlteraTransp[2]
#define R_AlteraTransp_Planta(A) taAlteraTransp[2] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : ROTA 
#define S_AlteraTransp_ROTA taAlteraTransp[3]
#define R_AlteraTransp_ROTA(A) taAlteraTransp[3] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : DATAAlteraTransp 
#define S_AlteraTransp_DATAAlteraTransp taAlteraTransp[4]
#define R_AlteraTransp_DATAAlteraTransp(A) taAlteraTransp[4] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : HORAAlteraTransp 
#define S_AlteraTransp_HORAAlteraTransp taAlteraTransp[5]
#define R_AlteraTransp_HORAAlteraTransp(A) taAlteraTransp[5] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : CrachaVeiculo 
#define S_AlteraTransp_CrachaVeiculo taAlteraTransp[6]
#define R_AlteraTransp_CrachaVeiculo(A) taAlteraTransp[6] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : Pedido 
#define S_AlteraTransp_Pedido taAlteraTransp[7]
#define R_AlteraTransp_Pedido(A) taAlteraTransp[7] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : OrdemDeCarga 
#define S_AlteraTransp_OrdemDeCarga taAlteraTransp[8]
#define R_AlteraTransp_OrdemDeCarga(A) taAlteraTransp[8] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : Desdobro 
#define S_AlteraTransp_Desdobro taAlteraTransp[9]
#define R_AlteraTransp_Desdobro(A) taAlteraTransp[9] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : CodigoTransportadora 
#define S_AlteraTransp_CodigoTransportadora taAlteraTransp[10]
#define R_AlteraTransp_CodigoTransportadora(A) taAlteraTransp[10] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : Doca 
#define S_AlteraTransp_Doca taAgendamento[11]
#define R_AlteraTransp_Doca(A) taAgendamento[11] := build(A :0.50)
!-----------------------------------------------------------


!===========================================================
! Line : Desdobro 
#define S_Desdobro split(pick(1,1,EOL), taDesdobro, ";")
!===========================================================
! FIELD : TipoInterface 
#define S_Desdobro_TipoInterface taDesdobro[1]
#define R_Desdobro_TipoInterface(A) taDesdobro[1] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : Planta 
#define S_Desdobro_Planta taDesdobro[2]
#define R_Desdobro_Planta(A) taDesdobro[2] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : ROTA 
#define S_Desdobro_ROTA taDesdobro[3]
#define R_Desdobro_ROTA(A) taDesdobro[3] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : DATADesdobro 
#define S_Desdobro_DATADesdobro taDesdobro[4]
#define R_Desdobro_DATADesdobro(A) taDesdobro[4] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : HORADesdobro 
#define S_Desdobro_HORADesdobro taDesdobro[5]
#define R_Desdobro_HORADesdobro(A) taDesdobro[5] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : CrachaVeiculo 
#define S_Desdobro_CrachaVeiculo taDesdobro[6]
#define R_Desdobro_CrachaVeiculo(A) taDesdobro[6] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : Pedido 
#define S_Desdobro_Pedido taDesdobro[7]
#define R_Desdobro_Pedido(A) taDesdobro[7] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : OrdemDeCarga 
#define S_Desdobro_OrdemDeCarga taDesdobro[8]
#define R_Desdobro_OrdemDeCarga(A) taDesdobro[8] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : Desdobro 
#define S_Desdobro_Desdobro taDesdobro[9]
#define R_Desdobro_Desdobro(A) taDesdobro[9] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : CodigoTransportadora 
#define S_Desdobro_CodigoTransportadora taDesdobro[10]
#define R_Desdobro_CodigoTransportadora(A) taDesdobro[10] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : Doca 
#define S_Desdobro_Doca taAgendamento[11]
#define R_Desdobro_Doca(A) taAgendamento[11] := build(A :0.50)
!-----------------------------------------------------------

! File COPACK_LOREAL_CSV_IN : 
!===========================================================
! Line : REGISTO 
#define S_REGISTO split(pick(1,1,EOL), taREGISTO, ";")
!===========================================================
! FIELD : RotaA 
#define S_REGISTO_RotaA taREGISTO[1]
#define R_REGISTO_RotaA(A) taREGISTO[1] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : Loja 
#define S_REGISTO_Loja taREGISTO[2]
#define R_REGISTO_Loja(A) taREGISTO[2] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : RotaC 
#define S_REGISTO_RotaC taREGISTO[3]
#define R_REGISTO_RotaC(A) taREGISTO[3] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Rota2 
#define S_REGISTO_Rota2 taREGISTO[4]
#define R_REGISTO_Rota2(A) taREGISTO[4] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Loja2 
#define S_REGISTO_Loja2 taREGISTO[5]
#define R_REGISTO_Loja2(A) taREGISTO[5] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Chave 
#define S_REGISTO_Chave taREGISTO[6]
#define R_REGISTO_Chave(A) taREGISTO[6] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Turno 
#define S_REGISTO_Turno taREGISTO[7]
#define R_REGISTO_Turno(A) taREGISTO[7] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : TipoVeiculo 
#define S_REGISTO_TipoVeiculo taREGISTO[8]
#define R_REGISTO_TipoVeiculo(A) taREGISTO[8] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Dedicacao 
#define S_REGISTO_Dedicacao taREGISTO[9]
#define R_REGISTO_Dedicacao(A) taREGISTO[9] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : JanelaLoja 
#define S_REGISTO_JanelaLoja taREGISTO[10]
#define R_REGISTO_JanelaLoja(A) taREGISTO[10] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : DataCarregamento 
#define S_REGISTO_DataCarregamento taREGISTO[11]
#define R_REGISTO_DataCarregamento(A) taREGISTO[11] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : JanelaCarregamento 
#define S_REGISTO_JanelaCarregamento taREGISTO[12]
#define R_REGISTO_JanelaCarregamento(A) taREGISTO[12] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : DataPrep 
#define S_REGISTO_DataPrep taREGISTO[13]
#define R_REGISTO_DataPrep(A) taREGISTO[13] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Preparacao 
#define S_REGISTO_Preparacao taREGISTO[14]
#define R_REGISTO_Preparacao(A) taREGISTO[14] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : DataDoca 
#define S_REGISTO_DataDoca taREGISTO[15]
#define R_REGISTO_DataDoca(A) taREGISTO[15] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Doca 
#define S_REGISTO_Doca taREGISTO[16]
#define R_REGISTO_Doca(A) taREGISTO[16] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : DataCarr 
#define S_REGISTO_DataCarr taREGISTO[17]
#define R_REGISTO_DataCarr(A) taREGISTO[17] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Carregamento 
#define S_REGISTO_Carregamento taREGISTO[18]
#define R_REGISTO_Carregamento(A) taREGISTO[18] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : DataExpedicao 
#define S_REGISTO_DataExpedicao taREGISTO[19]
#define R_REGISTO_DataExpedicao(A) taREGISTO[19] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Expedicao 
#define S_REGISTO_Expedicao taREGISTO[20]
#define R_REGISTO_Expedicao(A) taREGISTO[20] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Seq 
#define S_REGISTO_Seq taREGISTO[21]
#define R_REGISTO_Seq(A) taREGISTO[21] := build(A :0.35)
!-----------------------------------------------------------



! File COPACK_LOREAL_CSV_IN : 
!===========================================================
! Line : REGISTO 
#define S_REGISTO split(pick(1,1,EOL), taREGISTO, ";")
!===========================================================
! FIELD : Protocolo 
#define S_REGISTO_Protocolo taREGISTO[1]
#define R_REGISTO_Protocolo(A) taREGISTO[1] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : Data 
#define S_REGISTO_Data taREGISTO[2]
#define R_REGISTO_Data(A) taREGISTO[2] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Sigla_Unl 
#define S_REGISTO_Sigla_Unl taREGISTO[3]
#define R_REGISTO_Sigla_Unl(A) taREGISTO[3] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Sigla_Loja 
#define S_REGISTO_Sigla_Loja taREGISTO[4]
#define R_REGISTO_Sigla_Loja(A) taREGISTO[4] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Setor 
#define S_REGISTO_Setor taREGISTO[5]
#define R_REGISTO_Setor(A) taREGISTO[5] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Departamento 
#define S_REGISTO_Departamento taREGISTO[6]
#define R_REGISTO_Departamento(A) taREGISTO[6] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Rms_Produto 
#define S_REGISTO_Rms_Produto taREGISTO[7]
#define R_REGISTO_Rms_Produto(A) taREGISTO[7] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Descr_Produto 
#define S_REGISTO_Descr_Produto taREGISTO[8]
#define R_REGISTO_Descr_Produto(A) taREGISTO[8] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Qt_Caixas_Litigio 
#define S_REGISTO_Qt_Caixas_Litigio taREGISTO[9]
#define R_REGISTO_Qt_Caixas_Litigio(A) taREGISTO[9] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Valor_Aberto 
#define S_REGISTO_Valor_Aberto taREGISTO[10]
#define R_REGISTO_Valor_Aberto(A) taREGISTO[10] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Tipo_Litigio 
#define S_REGISTO_Tipo_Litigio taREGISTO[11]
#define R_REGISTO_Tipo_Litigio(A) taREGISTO[11] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Status_Litigio 
#define S_REGISTO_Status_Litigio taREGISTO[12]
#define R_REGISTO_Status_Litigio(A) taREGISTO[12] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Motivo_Litigio_Format 
#define S_REGISTO_Motivo_Litigio_Format taREGISTO[13]
#define R_REGISTO_Motivo_Litigio_Format(A) taREGISTO[13] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Regiao 
#define S_REGISTO_Regiao taREGISTO[14]
#define R_REGISTO_Regiao(A) taREGISTO[14] := build(A :0.35)
!-----------------------------------------------------------
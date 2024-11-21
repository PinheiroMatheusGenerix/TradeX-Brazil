! File COPACK_LOREAL_CSV_IN : 
!===========================================================
! Line : REGISTO 
#define S_REGISTO split(pick(1,1,EOL), taREGISTO, ";")
!===========================================================
! FIELD : DATA 
#define S_REGISTO_DATA taREGISTO[1]
#define R_REGISTO_DATA(A) taREGISTO[1] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : SIGLA_UNL 
#define S_REGISTO_SIGLA_UNL taREGISTO[2]
#define R_REGISTO_SIGLA_UNL(A) taREGISTO[2] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : DEPARTAMENTO 
#define S_REGISTO_DEPARTAMENTO taREGISTO[3]
#define R_REGISTO_DEPARTAMENTO(A) taREGISTO[3] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : SETOR 
#define S_REGISTO_SETOR taREGISTO[4]
#define R_REGISTO_SETOR(A) taREGISTO[4] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : RMS_PRODUTO 
#define S_REGISTO_RMS_PRODUTO taREGISTO[5]
#define R_REGISTO_RMS_PRODUTO(A) taREGISTO[5] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : DESCR_PRODUTO 
#define S_REGISTO_DESCR_PRODUTO taREGISTO[6]
#define R_REGISTO_DESCR_PRODUTO(A) taREGISTO[6] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : VAL_TOT_INV_OFIC 
#define S_REGISTO_VAL_TOT_INV_OFIC taREGISTO[7]
#define R_REGISTO_VAL_TOT_INV_OFIC(A) taREGISTO[7] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : VAL_TOT_INV_ROTA 
#define S_REGISTO_VAL_TOT_INV_ROTA taREGISTO[8]
#define R_REGISTO_VAL_TOT_INV_ROTA(A) taREGISTO[8] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : VAL_TOT_VIRT 
#define S_REGISTO_VAL_TOT_VIRT taREGISTO[9]
#define R_REGISTO_VAL_TOT_VIRT(A) taREGISTO[9] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : VAL_TOT_CAMGER 
#define S_REGISTO_VAL_TOT_CAMGER taREGISTO[10]
#define R_REGISTO_VAL_TOT_CAMGER(A) taREGISTO[10] := build(A :0.35)
!-----------------------------------------------------------
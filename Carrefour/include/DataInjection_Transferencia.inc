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
! FIELD : SIGLA_LOJA 
#define S_REGISTO_SIGLA_LOJA taREGISTO[3]
#define R_REGISTO_SIGLA_LOJA(A) taREGISTO[3] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : DEPARTAMENTO 
#define S_REGISTO_DEPARTAMENTO taREGISTO[4]
#define R_REGISTO_DEPARTAMENTO(A) taREGISTO[4] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : SETOR 
#define S_REGISTO_SETOR taREGISTO[5]
#define R_REGISTO_SETOR(A) taREGISTO[5] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : RMS_PRODUTO 
#define S_REGISTO_RMS_PRODUTO taREGISTO[6]
#define R_REGISTO_RMS_PRODUTO(A) taREGISTO[6] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : DESCR_PRODUTO 
#define S_REGISTO_DESCR_PRODUTO taREGISTO[7]
#define R_REGISTO_DESCR_PRODUTO(A) taREGISTO[7] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : EMB 
#define S_REGISTO_EMB taREGISTO[8]
#define R_REGISTO_EMB(A) taREGISTO[8] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : QT_CAIXAS 
#define S_REGISTO_QT_CAIXAS taREGISTO[9]
#define R_REGISTO_QT_CAIXAS(A) taREGISTO[9] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : QDE_UNI 
#define S_REGISTO_QDE_UNI taREGISTO[10]
#define R_REGISTO_QDE_UNI(A) taREGISTO[10] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : PRECO_UNI 
#define S_REGISTO_PRECO_UNI taREGISTO[11]
#define R_REGISTO_PRECO_UNI(A) taREGISTO[11] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : VALOR_TRANSFERENCIA 
#define S_REGISTO_VALOR_TRANSFERENCIA taREGISTO[12]
#define R_REGISTO_VALOR_TRANSFERENCIA(A) taREGISTO[12] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : MES 
#define S_REGISTO_MES taREGISTO[13]
#define R_REGISTO_MES(A) taREGISTO[13] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : ESTADO 
#define S_REGISTO_ESTADO taREGISTO[14]
#define R_REGISTO_ESTADO(A) taREGISTO[14] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : REGIAO 
#define S_REGISTO_REGIAO taREGISTO[14]
#define R_REGISTO_REGIAO(A) taREGISTO[14] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : ANO 
#define S_REGISTO_ANO taREGISTO[14]
#define R_REGISTO_ANO(A) taREGISTO[14] := build(A :0.35)
!-----------------------------------------------------------
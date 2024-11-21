! File CSVHASBRO405062 : 
!===========================================================
! Line : CSV 
#define S_CSV split(pick(1,1,EOL), taCSV, ";")
!===========================================================
! FIELD : TipoInterface 
#define S_CSV_CNPJTRANS taCSV[1]
#define R_CSV_CNPJTRANS(A) taCSV[1] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : Planta 
#define S_CSV_CIDADE taCSV[2]
#define R_CSV_CIDADE(A) taCSV[2] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : ROTA 
#define S_CSV_UF taCSV[3]
#define R_CSV_UF(A) taCSV[3] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : DATACSV 
#define S_CSV_SIGLA taCSV[4]
#define R_CSV_SIGLA(A) taCSV[4] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : HORACSV 
#define S_CSV_ROTA taCSV[5]
#define R_CSV_ROTA(A) taCSV[5] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : CrachaVeiculo 
#define S_CSV_CEPINI taCSV[6]
#define R_CSV_CEPINI(A) taCSV[6] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : Pedido 
#define S_CSV_CEPFIN taCSV[7]
#define R_CSV_CEPFIN(A) taCSV[7] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : OrdemDeCarga 
#define S_CSV_POLOREGIAO taCSV[8]
#define R_CSV_POLOREGIAO(A) taCSV[8] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : Desdobro 
#define S_CSV_TIPODACIDADE taCSV[9]
#define R_CSV_TIPODACIDADE(A) taCSV[9] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : CodigoTransportadora 
#define S_CSV_FILIAL taCSV[10]
#define R_CSV_FILIAL(A) taCSV[10] := build(A :0.50)
!-----------------------------------------------------------



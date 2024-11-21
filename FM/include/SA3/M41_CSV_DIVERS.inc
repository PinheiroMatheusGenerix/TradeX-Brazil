! File M41_CSV_DIVERS : 
!===========================================================
! Line : M41CsvDiversReg 
#define S_M41CsvDiversReg split(pick(1,1,EOL), taM41CsvDiversReg, ";")
!===========================================================
! FIELD : NF 
#define S_M41CsvDiversReg_NF taM41CsvDiversReg[1]
#define R_M41CsvDiversReg_NF(A) taM41CsvDiversReg[1] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Doca 
#define S_M41CsvDiversReg_Doca taM41CsvDiversReg[2]
#define R_M41CsvDiversReg_Doca(A) taM41CsvDiversReg[2] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Transportadora 
#define S_M41CsvDiversReg_Transportadora taM41CsvDiversReg[3]
#define R_M41CsvDiversReg_Transportadora(A) taM41CsvDiversReg[3] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Placa 
#define S_M41CsvDiversReg_Placa taM41CsvDiversReg[4]
#define R_M41CsvDiversReg_Placa(A) taM41CsvDiversReg[4] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Motorista 
#define S_M41CsvDiversReg_Motorista taM41CsvDiversReg[5]
#define R_M41CsvDiversReg_Motorista(A) taM41CsvDiversReg[5] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : BL 
#define S_M41CsvDiversReg_BL taM41CsvDiversReg[6]
#define R_M41CsvDiversReg_BL(A) taM41CsvDiversReg[6] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Carga 
#define S_M41CsvDiversReg_Carga taM41CsvDiversReg[7]
#define R_M41CsvDiversReg_Carga(A) taM41CsvDiversReg[7] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Operacao 
#define S_M41CsvDiversReg_Operacao taM41CsvDiversReg[8]
#define R_M41CsvDiversReg_Operacao(A) taM41CsvDiversReg[8] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Data 
#define S_M41CsvDiversReg_Data taM41CsvDiversReg[9]
#define R_M41CsvDiversReg_Data(A) taM41CsvDiversReg[9] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Cliente 
#define S_M41CsvDiversReg_Cliente taM41CsvDiversReg[10]
#define R_M41CsvDiversReg_Cliente(A) taM41CsvDiversReg[10] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Sequencia 
#define S_M41CsvDiversReg_Sequencia taM41CsvDiversReg[11]
#define R_M41CsvDiversReg_Sequencia(A) taM41CsvDiversReg[11] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : SKU 
#define S_M41CsvDiversReg_SKU taM41CsvDiversReg[12]
#define R_M41CsvDiversReg_SKU(A) taM41CsvDiversReg[12] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Descricao 
#define S_M41CsvDiversReg_Descricao taM41CsvDiversReg[13]
#define R_M41CsvDiversReg_Descricao(A) taM41CsvDiversReg[13] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Lote 
#define S_M41CsvDiversReg_Lote taM41CsvDiversReg[14]
#define R_M41CsvDiversReg_Lote(A) taM41CsvDiversReg[14] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : LP 
#define S_M41CsvDiversReg_LP taM41CsvDiversReg[15]
#define R_M41CsvDiversReg_LP(A) taM41CsvDiversReg[15] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Status_IMO 
#define S_M41CsvDiversReg_Status_IMO taM41CsvDiversReg[16]
#define R_M41CsvDiversReg_Status_IMO(A) taM41CsvDiversReg[16] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Unidade 
#define S_M41CsvDiversReg_Unidade taM41CsvDiversReg[17]
#define R_M41CsvDiversReg_Unidade(A) taM41CsvDiversReg[17] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : QtdFiscal 
#define S_M41CsvDiversReg_QtdFiscal taM41CsvDiversReg[18]
#define R_M41CsvDiversReg_QtdFiscal(A) taM41CsvDiversReg[18] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : QtdRecebida 
#define S_M41CsvDiversReg_QtdRecebida taM41CsvDiversReg[19]
#define R_M41CsvDiversReg_QtdRecebida(A) taM41CsvDiversReg[19] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Quantidade_IMO_Avaria 
#define S_M41CsvDiversReg_Quantidade_IMO_Avaria taM41CsvDiversReg[20]
#define R_M41CsvDiversReg_Quantidade_IMO_Avaria(A) taM41CsvDiversReg[20] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Qtd_IMO_Qualidade 
#define S_M41CsvDiversReg_Qtd_IMO_Qualidade taM41CsvDiversReg[21]
#define R_M41CsvDiversReg_Qtd_IMO_Qualidade(A) taM41CsvDiversReg[21] := build(A :0.100)
!-----------------------------------------------------------

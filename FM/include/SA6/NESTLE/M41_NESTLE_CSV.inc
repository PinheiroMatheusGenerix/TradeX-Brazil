! File M41_NESTLE_CSV : 
!===========================================================
! Line : REGISTO 
#define S_REGISTO split(pick(1,1,EOL), taREGISTO, ";")
!===========================================================
!-----------------------------------------------------------
! FIELD : NF 
#define S_REGISTO_NF taREGISTO[1]
#define R_REGISTO_NF(A) taREGISTO[1] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Doca 
#define S_REGISTO_Doca taREGISTO[2]
#define R_REGISTO_Doca(A) taREGISTO[2] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Transportadora 
#define S_REGISTO_Transportadora taREGISTO[3]
#define R_REGISTO_Transportadora(A) taREGISTO[3] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Placa 
#define S_REGISTO_Placa taREGISTO[4]
#define R_REGISTO_Placa(A) taREGISTO[4] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Motorista 
#define S_REGISTO_Motorista taREGISTO[5]
#define R_REGISTO_Motorista(A) taREGISTO[5] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : BL 
#define S_REGISTO_BL taREGISTO[6]
#define R_REGISTO_BL(A) taREGISTO[6] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Carga 
#define S_REGISTO_Carga taREGISTO[7]
#define R_REGISTO_Carga(A) taREGISTO[7] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Operacao 
#define S_REGISTO_Operacao taREGISTO[8]
#define R_REGISTO_Operacao(A) taREGISTO[8] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Data 
#define S_REGISTO_Data taREGISTO[9]
#define R_REGISTO_Data(A) taREGISTO[9] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Cliente 
#define S_REGISTO_Cliente taREGISTO[10]
#define R_REGISTO_Cliente(A) taREGISTO[10] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Sequencia 
#define S_REGISTO_Sequencia taREGISTO[11]
#define R_REGISTO_Sequencia(A) taREGISTO[11] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : SKU 
#define S_REGISTO_SKU taREGISTO[12]
#define R_REGISTO_SKU(A) taREGISTO[12] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Descricao 
#define S_REGISTO_Descricao taREGISTO[13]
#define R_REGISTO_Descricao(A) taREGISTO[13] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Lote 
#define S_REGISTO_Lote taREGISTO[14]
#define R_REGISTO_Lote(A) taREGISTO[14] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Palete 
#define S_REGISTO_Palete taREGISTO[15]
#define R_REGISTO_Palete(A) taREGISTO[15] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : STATUSIMO 
#define S_REGISTO_STATUSIMO taREGISTO[16]
#define R_REGISTO_STATUSIMO(A) taREGISTO[16] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Unidade 
#define S_REGISTO_Unidade taREGISTO[17]
#define R_REGISTO_Unidade(A) taREGISTO[17] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : QtdFiscal 
#define S_REGISTO_QtdFiscal taREGISTO[18]
#define R_REGISTO_QtdFiscal(A) taREGISTO[18] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : QtdRecebida 
#define S_REGISTO_QtdRecebida taREGISTO[19]
#define R_REGISTO_QtdRecebida(A) taREGISTO[19] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Quantidade_IMO_Avaria 
#define S_REGISTO_Quantidade_IMO_Avaria taREGISTO[20]
#define R_REGISTO_Quantidade_IMO_Avaria(A) taREGISTO[20] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Qtd_IMO_Qualidade 
#define S_REGISTO_Qtd_IMO_Qualidade taREGISTO[21]
#define R_REGISTO_Qtd_IMO_Qualidade(A) taREGISTO[21] := build(A :0.100)
!-----------------------------------------------------------

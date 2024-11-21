! File M40CotyCSV : 
!===========================================================
! Line : HEADER 
#define S_HEADER split(pick(1,1,EOL), taHEADER, ";")
!===========================================================
! FIELD : Type 
#define S_HEADER_Type taHEADER[1]
#define R_HEADER_Type(A) taHEADER[1] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : PostingDate 
#define S_HEADER_PostingDate taHEADER[2]
#define R_HEADER_PostingDate(A) taHEADER[2] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : Item 
#define S_HEADER_Item taHEADER[3]
#define R_HEADER_Item(A) taHEADER[3] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : Remessa
#define S_HEADER_Remessa taHEADER[3]
#define R_HEADER_Remessa(A) taHEADER[3] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : Material 
#define S_HEADER_Material taHEADER[5]
#define R_HEADER_Material(A) taHEADER[5] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : Materialdescription 
#define S_HEADER_Materialdescription taHEADER[6]
#define R_HEADER_Materialdescription(A) taHEADER[6] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : Quantity 
#define S_HEADER_Quantity taHEADER[7]
#define R_HEADER_Quantity(A) taHEADER[7] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : BaseUnitofMeasure 
#define S_HEADER_BaseUnitofMeasure taHEADER[8]
#define R_HEADER_BaseUnitofMeasure(A) taHEADER[8] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : DANFE_DELIVERY 
#define S_HEADER_DANFE_DELIVERY taHEADER[9]
#define R_HEADER_DANFE_DELIVERY(A) taHEADER[9] := build(A :0.70)

!-----------------------------------------------------------
! FIELD : Storagelocation_Status 
#define S_HEADER_Storagelocation_Status taHEADER[10]
#define R_HEADER_Storagelocation_Status(A) taHEADER[10] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : Lote 
#define S_HEADER_Lote taHEADER[11]
#define R_HEADER_Lote(A) taHEADER[11] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : Supplier_CustomerID_CPF_CNPJ 
#define S_HEADER_Supplier_CustomerID_CPF_CNPJ taHEADER[12]
#define R_HEADER_Supplier_CustomerID_CPF_CNPJ(A) taHEADER[12] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : Supplier_CustomerName 
#define S_HEADER_Supplier_CustomerName taHEADER[13]
#define R_HEADER_Supplier_CustomerName(A) taHEADER[13] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : Adress 
#define S_HEADER_Adress taHEADER[14]
#define R_HEADER_Adress(A) taHEADER[14] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : City 
#define S_HEADER_City taHEADER[15]
#define R_HEADER_City(A) taHEADER[15] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : ZipCode 
#define S_HEADER_ZipCode taHEADER[16]
#define R_HEADER_ZipCode(A) taHEADER[16] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : UF 
#define S_HEADER_UF taHEADER[17]
#define R_HEADER_UF(A) taHEADER[17] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : ZSEP_AgrupadorDANFE_DELIVERY 
#define S_HEADER_ZSEP_AgrupadorDANFE_DELIVERY taHEADER[18]
#define R_HEADER_ZSEP_AgrupadorDANFE_DELIVERY(A) taHEADER[18] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : Z100_Identificacaoveiculo 
#define S_HEADER_Z100_Identificacaoveiculo taHEADER[19]
#define R_HEADER_Z100_Identificacaoveiculo(A) taHEADER[19] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : Volumeaserimpressonaetiquetadabomba 
#define S_HEADER_Volumeaserimpressonaetiquetadabomba taHEADER[20]
#define R_HEADER_Volumeaserimpressonaetiquetadabomba(A) taHEADER[20] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : Transportadora 
#define S_HEADER_Transportadora taHEADER[22]
#define R_HEADER_Transportadora(A) taHEADER[22] := build(A :0.70)
!-----------------------------------------------------------

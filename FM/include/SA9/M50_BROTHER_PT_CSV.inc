! File M50_BROTHER_CSV : 
!===========================================================
! Line : REGISTRO 
#define S_REGISTRO split(pick(1,1,EOL), taREGISTRO, ";")
!===========================================================
! FIELD : CODCLI - DESTINATION CODE (CNPJ or CPF )
#define S_REGISTRO_CODCLI taREGISTRO[1]
#define R_REGISTRO_CODCLI(A) taREGISTRO[1] := build(A :0.300)
!-----------------------------------------------------------
! FIELD : CODPRO - PRODUCT CODE
#define S_REGISTRO_CODPRO taREGISTRO[2]
#define R_REGISTRO_CODPRO(A) taREGISTRO[2] := build(A :0.300)
!-----------------------------------------------------------
! FIELD : UVCCDE - PRODUCT QUANTITY
#define S_REGISTRO_UVCCDE taREGISTRO[3]
#define R_REGISTRO_UVCCDE(A) taREGISTRO[3] := build(A :0.300)
!----------------------------------------------------------- 
! FIELD : CUSTOMER_WITHDRAWAL 
#define S_REGISTRO_CUSTOMER_WITHDRAWAL taREGISTRO[4]
#define R_REGISTRO_CUSTOMER_WITHDRAWAL(A) taREGISTRO[4] := build(A :0.300)
!-----------------------------------------------------------
! FIELD : DTILIV - DOCUMENT ISSUE DATE (FORMAT MMDDYYYY)
#define S_REGISTRO_DTILIV taREGISTRO[5]
#define R_REGISTRO_DTILIV(A) taREGISTRO[5] := build(A :0.300)
!-----------------------------------------------------------
! FIELD : SCHEDULING_DATE (FORMAT MMDDYYYY)
#define S_REGISTRO_SCHEDULING_DATE taREGISTRO[6]
#define R_REGISTRO_SCHEDULING_DATE(A) taREGISTRO[6] := build(A :0.300)
!-----------------------------------------------------------
! FIELD : END_DATE (FORMAT MMDDYYYY)
#define S_REGISTRO_END_DATE taREGISTRO[7]
#define R_REGISTRO_END_DATE(A) taREGISTRO[7] := build(A :0.300)
!-----------------------------------------------------------
! FIELD : ADRCLI1 - RECIPIENT'S ADDRESS
#define S_REGISTRO_ADRCLI1 taREGISTRO[8]
#define R_REGISTRO_ADRCLI1(A) taREGISTRO[8] := build(A :0.300)
!-----------------------------------------------------------
! FIELD : VILCLI1 - DESTINATION MUNICIPALITY
#define S_REGISTRO_VILCLI1 taREGISTRO[9]
#define R_REGISTRO_VILCLI1(A) taREGISTRO[9] := build(A :0.300)
!-----------------------------------------------------------
! FIELD : REFCLI - DOCUMENT NUMBER
#define S_REGISTRO_REFCLI taREGISTRO[10]
#define R_REGISTRO_REFCLI(A) taREGISTRO[10] := build(A :0.300)
!-----------------------------------------------------------
! FIELD : REFLIV1 - ORDER NUMBER
#define S_REGISTRO_REFLIV1 taREGISTRO[11]
#define R_REGISTRO_REFLIV1(A) taREGISTRO[11] := build(A :0.300)
!-----------------------------------------------------------
! FIELD : UNICDE - UNIT OF MEASURE PRODUCT
#define S_REGISTRO_UNICDE taREGISTRO[12]
#define R_REGISTRO_UNICDE(A) taREGISTRO[12] := build(A :0.300)
!-----------------------------------------------------------
! FIELD : REFLIV2 - DOCUMENT SERIES 
#define S_REGISTRO_REFLIV2 taREGISTRO[13]
#define R_REGISTRO_REFLIV2(A) taREGISTRO[13] := build(A :0.300)
!-----------------------------------------------------------
! FIELD : TRIP_NUMBER 
#define S_REGISTRO_TRIP_NUMBER taREGISTRO[14]
#define R_REGISTRO_TRIP_NUMBER(A) taREGISTRO[14] := build(A :0.300)
!-----------------------------------------------------------
! FIELD : FAXCLI - REGISTRATION STATUS RECIPIENT
#define S_REGISTRO_FAXCLI taREGISTRO[15]
#define R_REGISTRO_FAXCLI(A) taREGISTRO[15] := build(A :0.300)
!-----------------------------------------------------------
! FIELD : DESTINATION_DISTRICT
#define S_REGISTRO_DESTINATION_DISTRICT taREGISTRO[16]
#define R_REGISTRO_DESTINATION_DISTRICT(A) taREGISTRO[16] := build(A :0.300)
!-----------------------------------------------------------
! FIELD : CPICLI - DESTINATION ZIP CODE
#define S_REGISTRO_CPICLI taREGISTRO[17]
#define R_REGISTRO_CPICLI(A) taREGISTRO[17] := build(A :0.300)
!-----------------------------------------------------------
! FIELD : ADRCLI2 - RECIPIENT ADDRESS NUMBER
#define S_REGISTRO_ADRCLI2 taREGISTRO[18]
#define R_REGISTRO_ADRCLI2(A) taREGISTRO[18] := build(A :0.300)
!-----------------------------------------------------------
! FIELD : NOMCLI - RECIPIENT NAME
#define S_REGISTRO_NOMCLI taREGISTRO[19]
#define R_REGISTRO_NOMCLI(A) taREGISTRO[19] := build(A :0.300)
!-----------------------------------------------------------
! FIELD : SHIPPING_SEQUENCE 
#define S_REGISTRO_SHIPPING_SEQUENCE taREGISTRO[20]
#define R_REGISTRO_SHIPPING_SEQUENCE(A) taREGISTRO[20] := build(A :0.300)
!-----------------------------------------------------------
! FIELD : ADRCLI4 ADDRESS COMPLEMENT
#define S_REGISTRO_ADRCLI4 taREGISTRO[21]
#define R_REGISTRO_ADRCLI4(A) taREGISTRO[21] := build(A :0.300)
!-----------------------------------------------------------
! FIELD : NLILIV - PRODUCT SEQUENCE
#define S_REGISTRO_NLILIV taREGISTRO[22]
#define R_REGISTRO_NLILIV(A) taREGISTRO[22] := build(A :0.300)
!-----------------------------------------------------------
! FIELD : ADRCLI5 - DESTINATION STREET TYPE
#define S_REGISTRO_ADRCLI5 taREGISTRO[23]
#define R_REGISTRO_ADRCLI5(A) taREGISTRO[23] := build(A :0.300)
!-----------------------------------------------------------
! FIELD : DIPLIV - NF-E ACCESS KEY
#define S_REGISTRO_DIPLIV taREGISTRO[24]
#define R_REGISTRO_DIPLIV(A) taREGISTRO[24] := build(A :0.300)
!-----------------------------------------------------------
! FIELD : VILCLI2 - DESTINATION FEDERATION UNIT
#define S_REGISTRO_VILCLI2 taREGISTRO[25]
#define R_REGISTRO_VILCLI2(A) taREGISTRO[25] := build(A :0.300)
!-----------------------------------------------------------
! FIELD : MOTIMM - PRODUCT STOCK TYPE
#define S_REGISTRO_MOTIMM taREGISTRO[26]
#define R_REGISTRO_MOTIMM(A) taREGISTRO[26] := build(A :0.300)
!-----------------------------------------------------------
! FIELD : INITIAL_PRODUCT_SERIAL_NUMBER 
#define S_REGISTRO_INITIAL_PRODUCT_SERIAL_NUMBER taREGISTRO[27]
#define R_REGISTRO_INITIAL_PRODUCT_SERIAL_NUMBER(A) taREGISTRO[27] := build(A :0.300)
!-----------------------------------------------------------
! FIELD : FINAL_PRODUCT_SERIAL_NUMBER 
#define S_REGISTRO_FINAL_PRODUCT_SERIAL_NUMBER taREGISTRO[28]
#define R_REGISTRO_FINAL_PRODUCT_SERIAL_NUMBER(A) taREGISTRO[28] := build(A :0.300)
!-----------------------------------------------------------

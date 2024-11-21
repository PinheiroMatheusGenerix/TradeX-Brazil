! File HASBRO_CRSHP : 
!===========================================================
! Line : CR 
!===========================================================
! FIELD : recordtype 
#define S_CR_recordtype peel(pick(nPos, 1, 2), " ")
#define R_CR_recordtype(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : filetype 
#define S_CR_filetype peel(pick(nPos, 3, 3), " ")
#define R_CR_filetype(A) put(nRec, 3, A :3.3)
!-----------------------------------------------------------
! FIELD : plant 
#define S_CR_plant peel(pick(nPos, 6, 4), " ")
#define R_CR_plant(A) put(nRec, 6, A :4.4)
!-----------------------------------------------------------
! FIELD : filesequence 
#define S_CR_filesequence peel(pick(nPos, 10, 6), " ")
#define R_CR_filesequence(A) put(nRec, 10, A :6.6)
!-----------------------------------------------------------
! FIELD : filecreatedate 
#define S_CR_filecreatedate peel(pick(nPos, 16, 8), " ")
#define R_CR_filecreatedate(A) put(nRec, 16, A :8.8)
!-----------------------------------------------------------
! FIELD : endoflinemarker 
#define S_CR_endoflinemarker peel(pick(nPos, 24, 1), " ")
#define R_CR_endoflinemarker(A) put(nRec, 24, A :1.1)
!-----------------------------------------------------------
!===========================================================
! Line : SHPHeader 
!===========================================================
! FIELD : recordtype 
#define S_SHPHeader_recordtype peel(pick(nPos, 1, 2), " ")
#define R_SHPHeader_recordtype(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : shpnumber 
#define S_SHPHeader_shpnumber peel(pick(nPos, 3, 10), " ")
#define R_SHPHeader_shpnumber(A) put(nRec,3, A :10.10)
!-----------------------------------------------------------
! FIELD : shpcondition 
#define S_SHPHeader_shpcondition peel(pick(nPos, 13, 2), " ")
#define R_SHPHeader_shpcondition(A) put(nRec, 13, A :2.2)
!-----------------------------------------------------------
! FIELD : carriervendornumber 
#define S_SHPHeader_carriervendornumber peel(pick(nPos, 15, 10), " ")
#define R_SHPHeader_carriervendornumber(A) put(nRec, 15, A :10.10)
!-----------------------------------------------------------
! FIELD : pooldistcarriervendornumber 
#define S_SHPHeader_pooldistcarriervendornumber peel(pick(nPos, 25, 10), " ")
#define R_SHPHeader_pooldistcarriervendornumber(A) put(nRec, 25, A :10.10)
!-----------------------------------------------------------
! FIELD : shipmenttype 
#define S_SHPHeader_shipmenttype peel(pick(nPos, 35, 4), " ")
#define R_SHPHeader_shipmenttype(A) put(nRec, 35, A :4.4)
!-----------------------------------------------------------
! FIELD : shippingtype 
#define S_SHPHeader_shippingtype peel(pick(nPos, 39, 2), " ")
#define R_SHPHeader_shippingtype(A) put(nRec, 39, A :2.2)
!-----------------------------------------------------------
!===========================================================
! Line : DeliveryHeader 
!===========================================================
! FIELD : recordtype 
#define S_DeliveryHeader_recordtype peel(pick(nPos, 1, 2), " ")
#define R_DeliveryHeader_recordtype(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : sequencenumber 
#define S_DeliveryHeader_sequencenumber peel(pick(nPos, 3, 3), " ")
#define R_DeliveryHeader_sequencenumber(A) put(nRec,3, A :3.3)
!-----------------------------------------------------------
! FIELD : shpnumber 
#define S_DeliveryHeader_shpnumber peel(pick(nPos, 6, 10), " ")
#define R_DeliveryHeader_shpnumber(A) put(nRec,6, A :10.10)
!-----------------------------------------------------------
! FIELD : deliverynumber 
#define S_DeliveryHeader_deliverynumber peel(pick(nPos, 16, 10), " ")
#define R_DeliveryHeader_deliverynumber(A) put(nRec,16, A :10.10)
!-----------------------------------------------------------
! FIELD : shiptoname 
#define S_DeliveryHeader_shiptoname peel(pick(nPos, 44, 35), " ")
#define R_DeliveryHeader_shiptoname(A) put(nRec,44, A :35.35)
!-----------------------------------------------------------
! FIELD : shiptostreetaddress 
#define S_DeliveryHeader_shiptostreetaddress peel(pick(nPos, 184, 35), " ")
#define R_DeliveryHeader_shiptostreetaddress(A) put(nRec,184, A :35.35)
!-----------------------------------------------------------
! FIELD : shiptocityname 
#define S_DeliveryHeader_shiptocityname peel(pick(nPos, 219, 35), " ")
#define R_DeliveryHeader_shiptocityname(A) put(nRec,219, A :35.35)
!-----------------------------------------------------------
! FIELD : shiptostatecode 
#define S_DeliveryHeader_shiptostatecode peel(pick(nPos, 254, 3), " ")
#define R_DeliveryHeader_shiptostatecode(A) put(nRec,254, A :3.3)
!-----------------------------------------------------------
! FIELD : shiptopostalcode 
#define S_DeliveryHeader_shiptopostalcode peel(pick(nPos, 257, 10), " ")
#define R_DeliveryHeader_shiptopostalcode(A) put(nRec,257, A :10.10)
!-----------------------------------------------------------
! FIELD : shiptocountrycode 
#define S_DeliveryHeader_shiptocountrycode peel(pick(nPos, 267, 3), " ")
#define R_DeliveryHeader_shiptocountrycode(A) put(nRec,267, A :3.3)
!-----------------------------------------------------------
! FIELD : VICSBillofLadingnumber 
#define S_DeliveryHeader_VICSBillofLadingnumber peel(pick(nPos, 753, 25), " ")
#define R_DeliveryHeader_VICSBillofLadingnumber(A) put(nRec,753, A :25.25)
!-----------------------------------------------------------

!===========================================================
! Line : DeliveryLine 
!===========================================================
! FIELD : recordtype 
#define S_DeliveryLine_recordtype peel(pick(nPos, 1, 2), " ")
#define R_DeliveryLine_recordtype(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : shpnumber 
#define S_DeliveryLine_shpnumber peel(pick(nPos, 3, 10), " ")
#define R_DeliveryLine_shpnumber(A) put(nRec,3, A :10.10)
!-----------------------------------------------------------
! FIELD : deliverynumber 
#define S_DeliveryLine_deliverynumber peel(pick(nPos, 13, 10), " ")
#define R_DeliveryLine_deliverynumber(A) put(nRec,13, A :10.10)
!-----------------------------------------------------------
! FIELD : deliverylinenumber 
#define S_DeliveryLine_deliverylinenumber peel(pick(nPos, 26, 6), " ")
#define R_DeliveryLine_deliverylinenumber(A) put(nRec,26, A :6.6)
!-----------------------------------------------------------
! FIELD : materialnumber 
#define S_DeliveryLine_materialnumber peel(pick(nPos, 32, 18), " ")
#define R_DeliveryLine_materialnumber(A) put(nRec,32, A :18.18)
!-----------------------------------------------------------
! FIELD : deliverylinequantity 
#define S_DeliveryLine_deliverylinequantity peel(pick(nPos, 50, 6), " ")
#define R_DeliveryLine_deliverylinequantity(A) put(nRec,50, A :6.6)
!-----------------------------------------------------------
! FIELD : cartonvalue 
#define S_DeliveryLine_cartonvalue peel(pick(nPos, 174, 13), " ")
#define R_DeliveryLine_cartonvalue(A) put(nRec,174, A :13.13)
!-----------------------------------------------------------
! FIELD : departmentnumber 
#define S_DeliveryLine_departmentnumber peel(pick(nPos, 187, 10), " ")
#define R_DeliveryLine_departmentnumber(A) put(nRec,187, A :10.10)
!-----------------------------------------------------------
! FIELD : UOM 
#define S_DeliveryLine_UOM peel(pick(nPos, 205, 3), " ")
#define R_DeliveryLine_UOM(A) put(nRec,205, A :3.3)
!-----------------------------------------------------------
!===========================================================
! Line : TR 
!===========================================================
! FIELD : recordTypeTR 
#define S_TR_recordTypeTR peel(pick(nPos, 1, 2), " ")
#define R_TR_recordTypeTR(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : PLANT 
#define S_TR_PLANT peel(pick(nPos, 3, 4), " ")
#define R_TR_PLANT(A) put(nRec, 3, A :4.4)
!-----------------------------------------------------------
! FIELD : TOTALMATERIALCOUNT 
#define S_TR_TOTALMATERIALCOUNT peel(pick(nPos, 7, 7), " ")
#define R_TR_TOTALMATERIALCOUNT(A) put(nRec, 7, A :7.7)
!-----------------------------------------------------------
! FIELD : ENDOFLINEMARKER 
#define S_TR_ENDOFLINEMARKER peel(pick(nPos, 14, 1), " ")
#define R_TR_ENDOFLINEMARKER(A) put(nRec, 14, A :1.1)
!-----------------------------------------------------------

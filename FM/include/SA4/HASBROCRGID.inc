! File HASBRO_GID : 
!===========================================================
! Line : CR 
!===========================================================
! FIELD : recordtype 
#define S_CR_recordtype peel(pick(nPos, 1, 2), " ")
#define R_CR_recordtype(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : plant 
#define S_CR_plant peel(pick(nPos, 3, 4), " ")
#define R_CR_plant(A) put(nRec, 3, A :4.4)
!-----------------------------------------------------------
! FIELD : filesequence 
#define S_CR_filesequence peel(pick(nPos, 7, 6), " ")
#define R_CR_filesequence(A) put(nRec, 7, A :6.6)
!-----------------------------------------------------------
! FIELD : filecreatedate 
#define S_CR_filecreatedate peel(pick(nPos, 13, 8), " ")
#define R_CR_filecreatedate(A) put(nRec, 13, A :8.8)
!-----------------------------------------------------------
! FIELD : endoflinemarker 
#define S_CR_endoflinemarker peel(pick(nPos, 21, 1), " ")
#define R_CR_endoflinemarker(A) put(nRec, 21, A :1.1)
!-----------------------------------------------------------
!===========================================================
! Line : SHIPMENTHEADER 
!===========================================================
! FIELD : recordtype 
#define S_SHIPMENTHEADER_recordtype peel(pick(nPos, 1, 2), " ")
#define R_SHIPMENTHEADER_recordtype(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : shipmentnumber 
#define S_SHIPMENTHEADER_shipmentnumber peel(pick(nPos, 3, 10), " ")
#define R_SHIPMENTHEADER_shipmentnumber(A) put(nRec, 3, A :10.10)
!-----------------------------------------------------------
! FIELD : shippingcondition 
#define S_SHIPMENTHEADER_shippingcondition peel(pick(nPos, 13, 2), " ")
#define R_SHIPMENTHEADER_shippingcondition(A) put(nRec, 13, A :2.2)
!-----------------------------------------------------------
! FIELD : carriervendornumber 
#define S_SHIPMENTHEADER_carriervendornumber peel(pick(nPos, 15, 10), " ")
#define R_SHIPMENTHEADER_carriervendornumber(A) put(nRec, 15, A :10.10)
!-----------------------------------------------------------
! FIELD : shipmenttype 
#define S_SHIPMENTHEADER_shipmenttype peel(pick(nPos, 35, 4), " ")
#define R_SHIPMENTHEADER_shipmenttype(A) put(nRec, 35, A :4.4)
!-----------------------------------------------------------
! FIELD : shippingtype 
#define S_SHIPMENTHEADER_shippingtype peel(pick(nPos, 39, 2), " ")
#define R_SHIPMENTHEADER_shippingtype(A) put(nRec, 39, A :2.2)
!-----------------------------------------------------------
! FIELD : endoflinemarker 
#define S_SHIPMENTHEADER_endoflinemarker peel(pick(nPos, 81, 1), " ")
#define R_SHIPMENTHEADER_endoflinemarker(A) put(nRec, 81, A :1.1)
!-----------------------------------------------------------


!===========================================================
! Line : DELIVERYHEADER 
!===========================================================
! FIELD : recordtype 
#define S_DELIVERYHEADER_recordtype peel(pick(nPos, 1, 2), " ")
#define R_DELIVERYHEADER_recordtype(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : shipmentnumber 
#define S_DELIVERYHEADER_shipmentnumber peel(pick(nPos, 3, 10), " ")
#define R_DELIVERYHEADER_shipmentnumber(A) put(nRec, 3, A :10.10)
!-----------------------------------------------------------
! FIELD : deliverynumber 
#define S_DELIVERYHEADER_deliverynumber peel(pick(nPos, 13, 10), " ")
#define R_DELIVERYHEADER_deliverynumber(A) put(nRec, 13, A :10.10)
!-----------------------------------------------------------
! FIELD : ASN 
#define S_DELIVERYHEADER_ASN peel(pick(nPos, 23, 1), " ")
#define R_DELIVERYHEADER_ASN(A) put(nRec, 23, A :1.1)
!-----------------------------------------------------------
! FIELD : updateflag 
#define S_DELIVERYHEADER_updateflag peel(pick(nPos, 24, 1), " ")
#define R_DELIVERYHEADER_updateflag(A) put(nRec, 24, A :1.1)
!-----------------------------------------------------------
! FIELD : shippingtype 
#define S_DELIVERYHEADER_shipdate peel(pick(nPos, 25, 6), " ")
#define R_DELIVERYHEADER_shipdate(A) put(nRec, 25, A :6.6)
!-----------------------------------------------------------
! FIELD : endoflinemarker 
#define S_DELIVERYHEADER_endoflinemarker peel(pick(nPos, 142, 1), " ")
#define R_DELIVERYHEADER_endoflinemarker(A) put(nRec, 142, A :1.1)
!-----------------------------------------------------------
!===========================================================







!===========================================================
! Line : DELIVERYDETAIL 
!===========================================================
! FIELD : recordtype 
#define S_DELIVERYDETAIL_recordtype peel(pick(nPos, 1, 2), " ")
#define R_DELIVERYDETAIL_recordtype(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : shipmentnumber 
#define S_DELIVERYDETAIL_shipmentnumber peel(pick(nPos, 3, 10), " ")
#define R_DELIVERYDETAIL_shipmentnumber(A) put(nRec, 3, A :10.10)
!-----------------------------------------------------------
! FIELD : deliverynumber 
#define S_DELIVERYDETAIL_deliverynumber peel(pick(nPos, 13, 10), " ")
#define R_DELIVERYDETAIL_deliverynumber(A) put(nRec, 13, A :10.10)
!-----------------------------------------------------------
! FIELD : deliverylinenumber 
#define S_DELIVERYDETAIL_deliverylinenumber peel(pick(nPos, 23, 6), " ")
#define R_DELIVERYDETAIL_deliverylinenumber(A) put(nRec, 23, A :6.6)
!-----------------------------------------------------------
! FIELD : materialnumber 
#define S_DELIVERYDETAIL_materialnumber peel(pick(nPos, 29, 18), " ")
#define R_DELIVERYDETAIL_materialnumber(A) put(nRec, 29, A :18.18)
!-----------------------------------------------------------
! FIELD : quantity 
#define S_DELIVERYDETAIL_quantity peel(pick(nPos, 47, 6), " ")
#define R_DELIVERYDETAIL_quantity(A) put(nRec, 47, A :6.6)
!-----------------------------------------------------------
! FIELD : endoflinemarker 
#define S_DELIVERYDETAIL_endoflinemarker peel(pick(nPos, 73, 1), " ")
#define R_DELIVERYDETAIL_endoflinemarker(A) put(nRec, 73, A :1.1)
!-----------------------------------------------------------
!===========================================================





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
#define S_TR_TOTALDELIVERIES peel(pick(nPos, 7, 7), " ")
#define R_TR_TOTALDELIVERIES(A) put(nRec, 7, A :7.7)
!-----------------------------------------------------------
! FIELD : TOTALQUANTITY 
#define S_TR_TOTALQUANTITY peel(pick(nPos, 14, 7), " ")
#define R_TR_TOTALQUANTITY(A) put(nRec, 14, A :7.7)
!-----------------------------------------------------------
! FIELD : TOTALDETAILLINES 
#define S_TR_TOTALDETAILLINES peel(pick(nPos, 21, 7), " ")
#define R_TR_TOTALDETAILLINES(A) put(nRec, 21, A :7.7)
!-----------------------------------------------------------
! FIELD : ENDOFLINEMARKER 
#define S_TR_ENDOFLINEMARKER peel(pick(nPos, 28, 1), " ")
#define R_TR_ENDOFLINEMARKER(A) put(nRec, 28, A :1.1)
!-----------------------------------------------------------

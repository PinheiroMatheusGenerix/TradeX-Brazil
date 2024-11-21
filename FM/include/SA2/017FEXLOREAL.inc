! File 017FEXLOREAL : 
!===========================================================
! Line : 017HEADER 
!===========================================================
! FIELD : DeliveryNumber 
#define S_017HEADER_DeliveryNumber peel(pick(nPos, 1, 8), " ")
#define R_017HEADER_DeliveryNumber(A) put(nRec, 1, A :8.8)
!-----------------------------------------------------------
! FIELD : Customercode 
#define S_017HEADER_Customercode peel(pick(nPos, 9, 6), " ")
#define R_017HEADER_Customercode(A) put(nRec, 9, A :6.6)
!-----------------------------------------------------------
! FIELD : Filler_Field3_ 
#define S_017HEADER_Filler_Field3_ peel(pick(nPos, 15, 4), " ")
#define R_017HEADER_Filler_Field3_(A) put(nRec, 15, A :4.4)
!-----------------------------------------------------------
! FIELD : LineNumber_Itemnumber_ 
#define S_017HEADER_LineNumber_Itemnumber_ peel(pick(nPos, 19, 3), " ")
#define R_017HEADER_LineNumber_Itemnumber_(A) put(nRec, 19, A :3.3)
!-----------------------------------------------------------
! FIELD : Productcodereplacement_PFCCode_ 
#define S_017HEADER_Productcodereplacement_PFCCode_ peel(pick(nPos, 22, 20), " ")
#define R_017HEADER_Productcodereplacement_PFCCode_(A) put(nRec, 22, A :20.20)
!-----------------------------------------------------------
! FIELD : Logisticunit 
#define S_017HEADER_Logisticunit peel(pick(nPos, 42, 14), " ")
#define R_017HEADER_Logisticunit(A) put(nRec, 42, A :14.14)
!-----------------------------------------------------------
! FIELD : Deliverydate 
#define S_017HEADER_Deliverydate peel(pick(nPos, 56, 6), " ")
#define R_017HEADER_Deliverydate(A) put(nRec, 56, A :6.6)
!-----------------------------------------------------------
! FIELD : PFName 
#define S_017HEADER_PFName peel(pick(nPos, 62, 30), " ")
#define R_017HEADER_PFName(A) put(nRec, 62, A :30.30)
!-----------------------------------------------------------
! FIELD : Ordertype 
#define S_017HEADER_Ordertype peel(pick(nPos, 92, 1), " ")
#define R_017HEADER_Ordertype(A) put(nRec, 92, A :1.1)
!-----------------------------------------------------------
! FIELD : callofunit 
#define S_017HEADER_callofunit peel(pick(nPos, 93, 2), " ")
#define R_017HEADER_callofunit(A) put(nRec, 93, A :2.2)
!-----------------------------------------------------------
! FIELD : HUidentification 
#define S_017HEADER_HUidentification peel(pick(nPos, 95, 18), " ")
#define R_017HEADER_HUidentification(A) put(nRec, 95, A :18.18)
!-----------------------------------------------------------
! FIELD : Ordernumberofproduction 
#define S_017HEADER_Ordernumberofproduction peel(pick(nPos, 113, 6), " ")
#define R_017HEADER_Ordernumberofproduction(A) put(nRec, 113, A :6.6)
!-----------------------------------------------------------
! FIELD : Grossweight 
#define S_017HEADER_Grossweight peel(pick(nPos, 119, 4), " ")
#define R_017HEADER_Grossweight(A) put(nRec, 119, A :4.4)
!-----------------------------------------------------------
! FIELD : Sequencepalletnumber 
#define S_017HEADER_Sequencepalletnumber peel(pick(nPos, 123, 12), " ")
#define R_017HEADER_Sequencepalletnumber(A) put(nRec, 123, A :12.12)
!-----------------------------------------------------------
! FIELD : Numberofbox 
#define S_017HEADER_Numberofbox peel(pick(nPos, 135, 4), " ")
#define R_017HEADER_Numberofbox(A) put(nRec, 135, A :4.4)
!-----------------------------------------------------------
! FIELD : Numberofmaterialperbox 
#define S_017HEADER_Numberofmaterialperbox peel(pick(nPos, 139, 4), " ")
#define R_017HEADER_Numberofmaterialperbox(A) put(nRec, 139, A :4.4)
!-----------------------------------------------------------
! FIELD : Ordercomplete 
#define S_017HEADER_Ordercomplete peel(pick(nPos, 143, 1), " ")
#define R_017HEADER_Ordercomplete(A) put(nRec, 143, A :1.1)
!-----------------------------------------------------------
! FIELD : Batchnumberofproduction 
#define S_017HEADER_Batchnumberofproduction peel(pick(nPos, 144, 6), " ")
#define R_017HEADER_Batchnumberofproduction(A) put(nRec, 144, A :6.6)
!-----------------------------------------------------------
! FIELD : Filler_field19_ 
#define S_017HEADER_Filler_field19_ peel(pick(nPos, 150, 6), " ")
#define R_017HEADER_Filler_field19_(A) put(nRec, 150, A :6.6)
!-----------------------------------------------------------
! FIELD : Lapsingdate 
#define S_017HEADER_Lapsingdate peel(pick(nPos, 156, 8), " ")
#define R_017HEADER_Lapsingdate(A) put(nRec, 156, A :8.8)
!-----------------------------------------------------------
! FIELD : Quantity 
#define S_017HEADER_Quantity peel(pick(nPos, 164, 7), " ")
#define R_017HEADER_Quantity(A) put(nRec, 164, A :7.7)
!-----------------------------------------------------------
! FIELD : ADRclass 
#define S_017HEADER_ADRclass peel(pick(nPos, 171, 4), " ")
#define R_017HEADER_ADRclass(A) put(nRec, 171, A :4.4)
!-----------------------------------------------------------
! FIELD : Filler_field23_ 
#define S_017HEADER_Filler_field23_ peel(pick(nPos, 175, 6), " ")
#define R_017HEADER_Filler_field23_(A) put(nRec, 175, A :6.6)
!-----------------------------------------------------------
! FIELD : Invoicenumber 
#define S_017HEADER_Invoicenumber peel(pick(nPos, 181, 10), " ")
#define R_017HEADER_Invoicenumber(A) put(nRec, 181, A :10.10)
!-----------------------------------------------------------
! FIELD : Productcodeorderedbythecustomer 
#define S_017HEADER_Productcodeorderedbythecustomer peel(pick(nPos, 191, 20), " ")
#define R_017HEADER_Productcodeorderedbythecustomer(A) put(nRec, 191, A :20.20)
!-----------------------------------------------------------
! FIELD : Flagofsubstitution 
#define S_017HEADER_Flagofsubstitution peel(pick(nPos, 211, 1), " ")
#define R_017HEADER_Flagofsubstitution(A) put(nRec, 211, A :1.1)
!-----------------------------------------------------------
! FIELD : Purchaseordernumber 
#define S_017HEADER_Purchaseordernumber peel(pick(nPos, 212, 10), " ")
#define R_017HEADER_Purchaseordernumber(A) put(nRec, 212, A :10.10)
!-----------------------------------------------------------
!===========================================================
! Line : 017TRAILLER 
!===========================================================
! FIELD : ShipmentNumber 
#define S_017TRAILLER_ShipmentNumber peel(pick(nPos, 1, 8), " ")
#define R_017TRAILLER_ShipmentNumber(A) put(nRec, 1, A :8.8)
!-----------------------------------------------------------
! FIELD : Customercode 
#define S_017TRAILLER_Customercode peel(pick(nPos, 9, 6), " ")
#define R_017TRAILLER_Customercode(A) put(nRec, 9, A :6.6)
!-----------------------------------------------------------
! FIELD : FillerField3 
#define S_017TRAILLER_FillerField3 peel(pick(nPos, 15, 4), " ")
#define R_017TRAILLER_FillerField3(A) put(nRec, 15, A :4.4)
!-----------------------------------------------------------
! FIELD : LineNumber_Itemnumber_ 
#define S_017TRAILLER_LineNumber_Itemnumber_ peel(pick(nPos, 19, 3), " ")
#define R_017TRAILLER_LineNumber_Itemnumber_(A) put(nRec, 19, A :3.3)
!-----------------------------------------------------------
! FIELD : Emptyzone_filledwithblanks_ 
#define S_017TRAILLER_Emptyzone_filledwithblanks_ peel(pick(nPos, 22, 40), " ")
#define R_017TRAILLER_Emptyzone_filledwithblanks_(A) put(nRec, 22, A :40.40)
!-----------------------------------------------------------
! FIELD : Constant1 
#define S_017TRAILLER_Constant1 peel(pick(nPos, 62, 2), " ")
#define R_017TRAILLER_Constant1(A) put(nRec, 62, A :2.2)
!-----------------------------------------------------------
! FIELD : Constant2 
#define S_017TRAILLER_Constant2 peel(pick(nPos, 64, 3), " ")
#define R_017TRAILLER_Constant2(A) put(nRec, 64, A :3.3)
!-----------------------------------------------------------
! FIELD : Constant3 
#define S_017TRAILLER_Constant3 peel(pick(nPos, 67, 2), " ")
#define R_017TRAILLER_Constant3(A) put(nRec, 67, A :2.2)
!-----------------------------------------------------------
! FIELD : Totalnumberofproductlines 
#define S_017TRAILLER_Totalnumberofproductlines peel(pick(nPos, 69, 3), " ")
#define R_017TRAILLER_Totalnumberofproductlines(A) put(nRec, 69, A :3.3)
!-----------------------------------------------------------
! FIELD : Filler_2 
#define S_017TRAILLER_Filler_2 peel(pick(nPos, 72, 1), " ")
#define R_017TRAILLER_Filler_2(A) put(nRec, 72, A :1.1)
!-----------------------------------------------------------
! FIELD : Constant4 
#define S_017TRAILLER_Constant4 peel(pick(nPos, 73, 19), " ")
#define R_017TRAILLER_Constant4(A) put(nRec, 73, A :19.19)
!-----------------------------------------------------------
! FIELD : Goodissuedate 
#define S_017TRAILLER_Goodissuedate peel(pick(nPos, 92, 15), " ")
#define R_017TRAILLER_Goodissuedate(A) put(nRec, 92, A :15.15)
!-----------------------------------------------------------
! FIELD : Filler_3 
#define S_017TRAILLER_Filler_3 peel(pick(nPos, 107, 27), " ")
#define R_017TRAILLER_Filler_3(A) put(nRec, 107, A :27.27)
!-----------------------------------------------------------
! FIELD : Totalquantity 
#define S_017TRAILLER_Totalquantity peel(pick(nPos, 134, 7), " ")
#define R_017TRAILLER_Totalquantity(A) put(nRec, 134, A :7.7)
!-----------------------------------------------------------
! FIELD : Filler_4 
#define S_017TRAILLER_Filler_4 peel(pick(nPos, 141, 27), " ")
#define R_017TRAILLER_Filler_4(A) put(nRec, 141, A :27.27)
!-----------------------------------------------------------

! File HASBRO_HeaderRecord2SHP : 
!===========================================================
! Line : HeaderRecord2 
!===========================================================
! FIELD : recordtype 
#define S_HeaderRecord2_recordtype peel(pick(nPos, 1, 1), " ")
#define R_HeaderRecord2_recordtype(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : filetype 
#define S_HeaderRecord2_DocumentSeries peel(pick(nPos, 3, 3), " ")
#define R_HeaderRecord2_DocumentSeries(A) put(nRec, 3, A :3.3)
!-----------------------------------------------------------
! FIELD : plant 
#define S_HeaderRecord2_DocumentoNumberNF peel(pick(nPos, 6, 6), " ")
#define R_HeaderRecord2_DocumentoNumberNF(A) put(nRec, 6, A :6.6)
!-----------------------------------------------------------
! FIELD : SalesOrderNumber 
#define S_HeaderRecord2_SalesOrderNumber peel(pick(nPos, 441, 20), " ")
#define R_HeaderRecord2_SalesOrderNumber(A) put(nRec, 441, A :20.20)
!-----------------------------------------------------------
! FIELD : filesequence 
#define S_HeaderRecord2_GrossWeight peel(pick(nPos, 486, 9), " ")
#define R_HeaderRecord2_GrossWeight(A) put(nRec, 486, A :9.9)
!-----------------------------------------------------------
! FIELD : filesequence 
#define S_HeaderRecord2_NetWeight peel(pick(nPos, 495, 9), " ")
#define R_HeaderRecord2_NetWeight(A) put(nRec, 495, A :9.9)
!-----------------------------------------------------------
! FIELD : filesequence 
#define S_HeaderRecord2_NumberOfVolumes peel(pick(nPos, 504, 5), " ")
#define R_HeaderRecord2_NumberOfVolumes(A) put(nRec, 504, A :5.5)
!===========================================================
! Line : DetailItem 
!===========================================================
! FIELD : recordtype 
#define S_DetailItem_recordtype peel(pick(nPos, 1, 1), " ")
#define R_DetailItem_recordtype(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : shpnumber 
#define S_DetailItem_ProductCode peel(pick(nPos, 2, 25), " ")
#define R_DetailItem_ProductCode(A) put(nRec,2, A :25.25)
!-----------------------------------------------------------
! FIELD : shpcondition 
#define S_DetailItem_QTY peel(pick(nPos, 27, 19), " ")
#define R_DetailItem_QTY(A) put(nRec, 27, A :19.19)
!-----------------------------------------------------------
! FIELD : carriervendornumber 
#define S_DetailItem_Sequencing peel(pick(nPos, 219, 6), " ")
#define R_DetailItem_Sequencing(A) put(nRec, 219, A :6.6)
!-----------------------------------------------------------

!===========================================================
! Line : Footer
!===========================================================
! FIELD : recordtype 
#define S_Footer_recordtype peel(pick(nPos, 1, 1), " ")
#define R_Footer_recordtype(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : shpnumber 
#define S_Footer_NumOfItems peel(pick(nPos, 2, 2), " ")
#define R_Footer_NumOfItems(A) put(nRec,2, A :2.2)
!-----------------------------------------------------------
! FIELD : TotalValueofNF 
#define S_Footer_TotalValueofNF peel(pick(nPos, 4, 19), " ")
#define R_Footer_TotalValueofNF(A) put(nRec, 4, A :19.19)
!-----------------------------------------------------------

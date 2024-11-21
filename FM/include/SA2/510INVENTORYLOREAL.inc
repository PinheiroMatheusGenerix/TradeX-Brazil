! File 510INVENTORYLOREAL : 
!===========================================================
! Line : RECORD 
!===========================================================
! FIELD : PLANT 
#define S_RECORD_PLANT peel(pick(nPos, 1, 4), " ")
#define R_RECORD_PLANT(A) put(nRec, 1, A :4.4)
!-----------------------------------------------------------
! FIELD : STORAGELOCATION 
#define S_RECORD_STORAGELOCATION peel(pick(nPos, 5, 4), " ")
#define R_RECORD_STORAGELOCATION(A) put(nRec, 5, A :4.4)
!-----------------------------------------------------------
! FIELD : MATERIAL 
#define S_RECORD_MATERIAL peel(pick(nPos, 9, 20), " ")
#define R_RECORD_MATERIAL(A) put(nRec, 9, A :20.20)
!-----------------------------------------------------------
! FIELD : UOM 
#define S_RECORD_UOM peel(pick(nPos, 29, 3), " ")
#define R_RECORD_UOM(A) put(nRec, 29, A :3.3)
!-----------------------------------------------------------
! FIELD : BATCHNUMBER 
#define S_RECORD_BATCHNUMBER peel(pick(nPos, 32, 10), " ")
#define R_RECORD_BATCHNUMBER(A) put(nRec, 32, A :10.10)
!-----------------------------------------------------------
! FIELD : TYPEOFSTOCK 
#define S_RECORD_TYPEOFSTOCK peel(pick(nPos, 42, 1), " ")
#define R_RECORD_TYPEOFSTOCK(A) put(nRec, 42, A :1.1)
!-----------------------------------------------------------
! FIELD : RESTRICTEDSTOCKQTY 
#define S_RECORD_RESTRICTEDSTOCKQTY peel(pick(nPos, 43, 1), " ")
#define R_RECORD_RESTRICTEDSTOCKQTY(A) put(nRec, 43, A :1.1)
!-----------------------------------------------------------
! FIELD : AVAILABLESTOCKQTY 
#define S_RECORD_AVAILABLESTOCKQTY peel(pick(nPos, 44, 15), " ")
#define R_RECORD_AVAILABLESTOCKQTY(A) put(nRec, 44, A :15.15)
!-----------------------------------------------------------

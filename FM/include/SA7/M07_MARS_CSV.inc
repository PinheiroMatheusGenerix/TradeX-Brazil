! File M30_Loreal_CSV : 
!===========================================================
! Line : DETALHE 
#define S_DETALHE split(pick(1,1,EOL), taDETALHE, ";")
!===========================================================
! FIELD : MATERIAL 
#define S_DETALHE_MATERIAL taDETALHE[1]
#define R_DETALHE_MATERIAL(A) taDETALHE[1] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : BATCH 
#define S_DETALHE_BATCH taDETALHE[2]
#define R_DETALHE_BATCH(A) taDETALHE[2] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : SSCC_LPN 
#define S_DETALHE_SSCC_LPN taDETALHE[3]
#define R_DETALHE_SSCC_LPN(A) taDETALHE[3] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : QUANTITY 
#define S_DETALHE_QUANTITY taDETALHE[4]
#define R_DETALHE_QUANTITY(A) taDETALHE[4] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : PLANT 
#define S_DETALHE_PLANT taDETALHE[5]
#define R_DETALHE_PLANT(A) taDETALHE[5] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : STORAGE_LOC 
#define S_DETALHE_STORAGE_LOC taDETALHE[6]
#define R_DETALHE_STORAGE_LOC(A) taDETALHE[6] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : WMS_STATUS 
#define S_DETALHE_WMS_STATUS taDETALHE[7]
#define R_DETALHE_WMS_STATUS(A) taDETALHE[7] := build(A :0.100)
!-----------------------------------------------------------

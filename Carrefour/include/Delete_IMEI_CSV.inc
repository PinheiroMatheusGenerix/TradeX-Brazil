! File Delete_IMEI_CSV : 
!===========================================================
! Line : REFLIV 
#define S_Detail split(pick(1,1,EOL), taDetail, ";")
!===========================================================
! FIELD : REFLIV 
#define S_Detail_REFLIV taDetail[1]
#define R_Detail_REFLIV(A) taDetail[1] := build(A :0.30)
!-----------------------------------------------------------

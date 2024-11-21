! File COPACK_LOREAL_CSV_IN : 
!===========================================================
! Line : REGISTO 
#define S_REGISTO split(pick(1,1,EOL), taREGISTO, ",")
!===========================================================
! FIELD : Comando 
#define S_REGISTO_Comando taREGISTO[1]
#define R_REGISTO_Comando(A) taREGISTO[1] := build(A :0.100)
!-----------------------------------------------------------

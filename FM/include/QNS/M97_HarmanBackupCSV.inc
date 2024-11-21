! File M97_HarmanBackupCSV : 
!===========================================================
! Line : REGISTO 
#define S_REGISTO split(pick(1,1,EOL), taREGISTO, ";")
!===========================================================
! FIELD : NUMLIV 
#define S_REGISTO_NUMLIV taREGISTO[1]
#define R_REGISTO_NUMLIV(A) taREGISTO[1] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : REFLIV 
#define S_REGISTO_REFLIV taREGISTO[2]
#define R_REGISTO_REFLIV(A) taREGISTO[2] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : NUMVAG 
#define S_REGISTO_NUMVAG taREGISTO[3]
#define R_REGISTO_NUMVAG(A) taREGISTO[3] := build(A :0.35)
!-----------------------------------------------------------

! File M40_CSV_CONS_HASBRO : 
!===========================================================
! Line : Linha 
#define S_Linha split(pick(1,1,EOL), taLinha, ";")
!===========================================================
! FIELD : CODACT 
#define S_Linha_CODACT taLinha[1]
#define R_Linha_CODACT(A) taLinha[1] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : CODTRE 
#define S_Linha_CODTRE taLinha[2]
#define R_Linha_CODTRE(A) taLinha[2] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : DTIREC 
#define S_Linha_DTIREC taLinha[3]
#define R_Linha_DTIREC(A) taLinha[3] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : HEIREC 
#define S_Linha_HEIREC taLinha[4]
#define R_Linha_HEIREC(A) taLinha[4] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_Linha_REFREC taLinha[5]
#define R_Linha_REFREC(A) taLinha[5] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_Linha_CODTRA taLinha[6]
#define R_Linha_CODTRA(A) taLinha[6] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : REFRECxmlsIntegrados 
#define S_Linha_REFRECxmlsIntegrados taLinha[7]
#define R_Linha_REFRECxmlsIntegrados(A) taLinha[7] := build(A :0.20)
!-----------------------------------------------------------

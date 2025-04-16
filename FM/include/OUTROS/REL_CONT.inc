! File REL_CONT : 
!===========================================================
! Line : HEADER 
#define S_HEADER split(pick(1,1,EOL), taHEADER, ";")
!-----------------------------------------------------------
!===========================================================
! FIELD : CPTBIB
#define S_HEADER_CPTBIB taHEADER[0]
#define R_HEADER_CPTBIB(A) taHEADER[0] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : CPTCOD 
#define S_HEADER_CPTCOD taHEADER[1]
#define R_HEADER_CPTCOD(A) taHEADER[1] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : DESCRI 
#define S_HEADER_DESCRI taHEADER[2]
#define R_HEADER_DESCRI(A) taHEADER[2] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : CPTFMT 
#define S_HEADER_CPTFMT taHEADER[3]
#define R_HEADER_CPTFMT(A) taHEADER[3] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : CPTLNG 
#define S_HEADER_CPTLNG taHEADER[4]
#define R_HEADER_CPTLNG(A) taHEADER[4] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : CPTLOO 
#define S_HEADER_CPTLOO taHEADER[5]
#define R_HEADER_CPTLOO(A) taHEADER[5] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : CPTEPU 
#define S_HEADER_CPTEPU taHEADER[6]
#define R_HEADER_CPTEPU(A) taHEADER[6] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : CPTMIN 
#define S_HEADER_CPTMIN taHEADER[7]
#define R_HEADER_CPTMIN(A) taHEADER[7] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : CPTMAX 
#define S_HEADER_CPTMAX taHEADER[8]
#define R_HEADER_CPTMAX(A) taHEADER[8] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : CPTREST 
#define S_HEADER_CPTRES taHEADER[9]
#define R_HEADER_CPTRES(A) taHEADER[9] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : CPTVAL 
#define S_HEADER_CPTVAL taHEADER[10]
#define R_HEADER_CPTVAL(A) taHEADER[10] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : CPTPOR 
#define S_HEADER_CPTPOR taHEADER[11]
#define R_HEADER_CPTPOR(A) taHEADER[11] := build(A :0.30)
!-----------------------------------------------------------
!===========================================================
!===========================================================

! Line : DETAIL 
#define S_DETAIL split(pick(1,1,EOL), taDETAIL, ";")
!-----------------------------------------------------------
!===========================================================
! FIELD : CPTBIB 
#define S_DETAIL_CPTBIB taDETAIL[0]
#define R_DETAIL_CPTBIB(A) taDETAIL[0] := build(A :0.3)
!-----------------------------------------------------------
! FIELD : CPTCOD 
#define S_DETAIL_CPTCOD taDETAIL[1]
#define R_DETAIL_CPTCOD(A) taDETAIL[1] := build(A :0.3)
!-----------------------------------------------------------
! FIELD : DESCRI 
#define S_DETAIL_DESCRI taDETAIL[2]
#define R_DETAIL_DESCRI(A) taDETAIL[2] := build(A :0.50)
!-----------------------------------------------------------
! FIELD : CPTFMT 
#define S_DETAIL_CPTFMT taDETAIL[3]
#define R_DETAIL_CPTFMT(A) taDETAIL[3] := build(A :0.1)
!-----------------------------------------------------------
! FIELD : CPTLNG 
#define S_DETAIL_CPTLNG taDETAIL[4]
#define R_DETAIL_CPTLNG(A) taDETAIL[4] := build(A :0.2)
!-----------------------------------------------------------
! FIELD : CPTLOO 
#define S_DETAIL_CPTLOO taDETAIL[5]
#define R_DETAIL_CPTLOO(A) taDETAIL[5] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : CPTEPU 
#define S_DETAIL_CPTEPU taDETAIL[6]
#define R_DETAIL_CPTEPU(A) taDETAIL[6] := build(A :0.1)
!-----------------------------------------------------------
! FIELD : CPTMIN 
#define S_DETAIL_CPTMIN taDETAIL[7]
#define R_DETAIL_CPTMIN(A) taDETAIL[7] := build(A :0.9)
!-----------------------------------------------------------
! FIELD : CPTMAX 
#define S_DETAIL_CPTMAX taDETAIL[8]
#define R_DETAIL_CPTMAX(A) taDETAIL[8] := build(A :0.9)
!-----------------------------------------------------------
! FIELD : CPTREST 
#define S_DETAIL_CPTRES taDETAIL[9]
#define R_DETAIL_CPTRES(A) taDETAIL[9] := build(A :0.9)
!-----------------------------------------------------------
! FIELD : CPTVAL 
#define S_DETAIL_CPTVAL taDETAIL[10]
#define R_DETAIL_CPTVAL(A) taDETAIL[10] := build(A :0.9)
!-----------------------------------------------------------
! FIELD : CPTPOR 
#define S_DETAIL_CPTPOR taDETAIL[11]
#define R_DETAIL_CPTPOR(A) taDETAIL[11] := build(A :0.9)
!-----------------------------------------------------------

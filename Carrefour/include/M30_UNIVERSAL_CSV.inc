! File M30CotyCSV : 
!===========================================================
! Line : HEADER 
#define S_HEADER split(pick(1,1,EOL), taHEADER, ";")
!===========================================================
! FIELD : CODACT
#define S_HEADER_CODACT taHEADER[1]
#define R_HEADER_CODACT(A) taHEADER[1] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_HEADER_CODPRO taHEADER[2]
#define R_HEADER_CODPRO(A) taHEADER[2] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : DS1PRO 
#define S_HEADER_DS1PRO taHEADER[3]
#define R_HEADER_DS1PRO(A) taHEADER[3] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : DS2PRO 
#define S_HEADER_DS2PRO taHEADER[4]
#define R_HEADER_DS2PRO(A) taHEADER[4] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : UNIPRO 
#define S_HEADER_UNIPRO taHEADER[5]
#define R_HEADER_UNIPRO(A) taHEADER[5] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : FAMPRO 
#define S_HEADER_FAMPRO taHEADER[6]
#define R_HEADER_FAMPRO(A) taHEADER[6] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : ABCSTS 
#define S_HEADER_ABCSTS taHEADER[7]
#define R_HEADER_ABCSTS(A) taHEADER[7] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : NBJFVI 
#define S_HEADER_NBJFVI taHEADER[8]
#define R_HEADER_NBJFVI(A) taHEADER[8] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : LNGUVC2 
#define S_HEADER_LNGUVC2 taHEADER[9]
#define R_HEADER_LNGUVC2(A) taHEADER[9] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : LRGUVC2 
#define S_HEADER_LRGUVC2 taHEADER[10]
#define R_HEADER_LRGUVC2(A) taHEADER[10] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : HAUUVC2 
#define S_HEADER_HAUUVC2 taHEADER[11]
#define R_HEADER_HAUUVC2(A) taHEADER[11] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : PDBUVC 
#define S_HEADER_PDBUVC taHEADER[12]
#define R_HEADER_PDBUVC(A) taHEADER[12] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : EDIPRO_UN 
#define S_HEADER_EDIPRO_UN taHEADER[13]
#define R_HEADER_EDIPRO_UN(A) taHEADER[13] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : EDIPRM_UN 
#define S_HEADER_EDIPRM_UN taHEADER[14]
#define R_HEADER_EDIPRM_UN(A) taHEADER[14] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_HEADER_PCBPRO taHEADER[15]
#define R_HEADER_PCBPRO(A) taHEADER[15] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : LNGCOL2 
#define S_HEADER_LNGCOL2 taHEADER[16]
#define R_HEADER_LNGCOL2(A) taHEADER[16] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : LRGCOL2 
#define S_HEADER_LRGCOL2 taHEADER[17]
#define R_HEADER_LRGCOL2(A) taHEADER[17] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : HAUCOL2_HAUCOU 
#define S_HEADER_HAUCOL2_HAUCOU taHEADER[18]
#define R_HEADER_HAUCOL2_HAUCOU(A) taHEADER[18] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : PDBCOL 
#define S_HEADER_PDBCOL taHEADER[19]
#define R_HEADER_PDBCOL(A) taHEADER[19] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : EDIPRO_CX 
#define S_HEADER_EDIPRO_CX taHEADER[20]
#define R_HEADER_EDIPRO_CX(A) taHEADER[20] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : EDIPRM_CX 
#define S_HEADER_EDIPRM_CX taHEADER[21]
#define R_HEADER_EDIPRM_CX(A) taHEADER[21] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : COUPAL 
#define S_HEADER_COUPAL taHEADER[22]
#define R_HEADER_COUPAL(A) taHEADER[22] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : COLCOU 
#define S_HEADER_COLCOU taHEADER[23]
#define R_HEADER_COLCOU(A) taHEADER[23] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : CODMDR 
#define S_HEADER_CODMDR taHEADER[24]
#define R_HEADER_CODMDR(A) taHEADER[24] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : CODMDS 
#define S_HEADER_CODMDS taHEADER[25]
#define R_HEADER_CODMDS(A) taHEADER[25] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : ZONPRF 
#define S_HEADER_ZONPRF taHEADER[26]
#define R_HEADER_ZONPRF(A) taHEADER[26] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : ALLPRF 
#define S_HEADER_ALLPRF taHEADER[27]
#define R_HEADER_ALLPRF(A) taHEADER[27] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : CODMDP 
#define S_HEADER_CODMDP taHEADER[28]
#define R_HEADER_CODMDP(A) taHEADER[28] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : CIRDET 
#define S_HEADER_CIRDET taHEADER[29]
#define R_HEADER_CIRDET(A) taHEADER[29] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : CIRPAL 
#define S_HEADER_CIRPAL taHEADER[30]
#define R_HEADER_CIRPAL(A) taHEADER[30] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : CODRSC 
#define S_HEADER_CODRSC taHEADER[31]
#define R_HEADER_CODRSC(A) taHEADER[31] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : TOLPOI 
#define S_HEADER_TOLPOI taHEADER[32]
#define R_HEADER_TOLPOI(A) taHEADER[32] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : INDTOL 
#define S_HEADER_INDTOL taHEADER[33]
#define R_HEADER_INDTOL(A) taHEADER[33] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : NBJDLV 
#define S_HEADER_NBJDLV taHEADER[34]
#define R_HEADER_NBJDLV(A) taHEADER[34] := build(A :0.70)
!-----------------------------------------------------------

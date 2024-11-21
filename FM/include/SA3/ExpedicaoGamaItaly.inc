! File ExpedicaoGamaItaly : 
!===========================================================
! Line : CabecalhoArquivo 
!===========================================================
! FIELD : IDArquivo 
#define S_CabecalhoArquivo_IDArquivo peel(pick(nPos, 1, 3), " ")
#define R_CabecalhoArquivo_IDArquivo(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
!===========================================================
! Line : CabelhoDocumento 
!===========================================================
! FIELD : NF 
#define S_CabelhoDocumento_NF peel(pick(nPos, 1, 9), " ")
#define R_CabelhoDocumento_NF(A) put(nRec, 1, A :9.9)
!-----------------------------------------------------------
! FIELD : DataColeta 
#define S_CabelhoDocumento_DataColeta peel(pick(nPos, 10, 8), " ")
#define R_CabelhoDocumento_DataColeta(A) put(nRec, 10, A :8.8)
!-----------------------------------------------------------
! FIELD : HoraColeta 
#define S_CabelhoDocumento_HoraColeta peel(pick(nPos, 18, 4), " ")
#define R_CabelhoDocumento_HoraColeta(A) put(nRec, 18, A :4.4)
!-----------------------------------------------------------
! FIELD : SerieNF 
#define S_CabelhoDocumento_SerieNF peel(pick(nPos, 22, 3), " ")
#define R_CabelhoDocumento_SerieNF(A) put(nRec, 22, A :3.3)
!-----------------------------------------------------------
! FIELD : CNPJempOrigem 
#define S_CabelhoDocumento_CNPJempOrigem peel(pick(nPos, 25, 14), " ")
#define R_CabelhoDocumento_CNPJempOrigem(A) put(nRec, 25, A :14.14)
!-----------------------------------------------------------

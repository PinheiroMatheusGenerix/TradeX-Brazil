! File ConfSeparacaoGamaItaly : 
!===========================================================
! Line : CabecalhoArquivo 
!===========================================================
! FIELD : IdArquivo 
#define S_CabecalhoArquivo_IdArquivo peel(pick(nPos, 1, 3), " ")
#define R_CabecalhoArquivo_IdArquivo(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
!===========================================================
! Line : CabecalhoDocumento 
!===========================================================
! FIELD : NF 
#define S_CabecalhoDocumento_NF peel(pick(nPos, 1, 9), " ")
#define R_CabecalhoDocumento_NF(A) put(nRec, 1, A :9.9)
!-----------------------------------------------------------
! FIELD : DataLibertacao 
#define S_CabecalhoDocumento_DataLibertacao peel(pick(nPos, 10, 8), " ")
#define R_CabecalhoDocumento_DataLibertacao(A) put(nRec, 10, A :8.8)
!-----------------------------------------------------------
! FIELD : HoraLibertacao 
#define S_CabecalhoDocumento_HoraLibertacao peel(pick(nPos, 18, 4), " ")
#define R_CabecalhoDocumento_HoraLibertacao(A) put(nRec, 18, A :4.4)
!-----------------------------------------------------------
! FIELD : SeriaNF 
#define S_CabecalhoDocumento_SeriaNF peel(pick(nPos, 22, 3), " ")
#define R_CabecalhoDocumento_SeriaNF(A) put(nRec, 22, A :3.3)
!-----------------------------------------------------------
! FIELD : CNPJRemetente 
#define S_CabecalhoDocumento_CNPJRemetente peel(pick(nPos, 25, 14), " ")
#define R_CabecalhoDocumento_CNPJRemetente(A) put(nRec, 25, A :14.14)
!-----------------------------------------------------------
! FIELD : CodigoProduto 
#define S_CabecalhoDocumento_CodigoProduto peel(pick(nPos, 39, 25), " ")
#define R_CabecalhoDocumento_CodigoProduto(A) put(nRec, 39, A :25.25)
!-----------------------------------------------------------
! FIELD : Status 
#define S_CabecalhoDocumento_Status peel(pick(nPos, 64, 1), " ")
#define R_CabecalhoDocumento_Status(A) put(nRec, 64, A :1.1)
!-----------------------------------------------------------

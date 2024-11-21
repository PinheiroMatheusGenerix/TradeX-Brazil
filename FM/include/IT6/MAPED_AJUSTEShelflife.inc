! File MAPED_AJUSTEShelflife : 
!===========================================================
! Line : Cabecalho 
!===========================================================
! FIELD : TipoRegisto 
#define S_Cabecalho_TipoRegisto peel(pick(nPos, 1, 2), " ")
#define R_Cabecalho_TipoRegisto(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : CodigoEstablecimento 
#define S_Cabecalho_CodigoEstablecimento peel(pick(nPos, 3, 10), " ")
#define R_Cabecalho_CodigoEstablecimento(A) put(nRec, 3, A :10.10)
!-----------------------------------------------------------
! FIELD : CodigoDepositante 
#define S_Cabecalho_CodigoDepositante peel(pick(nPos, 13, 15), " ")
#define R_Cabecalho_CodigoDepositante(A) put(nRec, 13, A :15.15)
!-----------------------------------------------------------
! FIELD : CodigoRCQ 
#define S_Cabecalho_CodigoRCQ peel(pick(nPos, 28, 10), " ")
#define R_Cabecalho_CodigoRCQ(A) put(nRec, 28, A :10.10)
!-----------------------------------------------------------
! FIELD : NumeroRCQ 
#define S_Cabecalho_NumeroRCQ peel(pick(nPos, 38, 10), " ")
#define R_Cabecalho_NumeroRCQ(A) put(nRec, 38, A :10.10)
!-----------------------------------------------------------
! FIELD : DataEmissaoRCQ 
#define S_Cabecalho_DataEmissaoRCQ peel(pick(nPos, 48, 8), " ")
#define R_Cabecalho_EDataEmissaoRCQ(A) put(nRec, 48, A :8.8)
!-----------------------------------------------------------
! FIELD : CodigoProduto 
#define S_Cabecalho_CodigoProduto peel(pick(nPos, 56, 25), " ")
#define R_Cabecalho_CodigoProduto(A) put(nRec, 56, A :25.25)
!-----------------------------------------------------------
! FIELD : TipoUOM 
#define S_Cabecalho_TipoUOM peel(pick(nPos, 81, 5), " ")
#define R_Cabecalho_TipoUOM(A) put(nRec, 81, A :5.5)
!-----------------------------------------------------------
! FIELD : DescTipoUC 
#define S_Cabecalho_DescTipoUC peel(pick(nPos, 86, 20), " ")
#define R_Cabecalho_DescTipoUC(A) put(nRec, 86, A :20.20)
!-----------------------------------------------------------
! FIELD : FatorTipoUC 
#define S_Cabecalho_FatorTipoUC peel(pick(nPos, 106, 20), " ")
#define R_Cabecalho_FatorTipoUC(A) put(nRec, 106, A :20.20)
!-----------------------------------------------------------
! FIELD : QTDEProduto 
#define S_Cabecalho_QTDEProduto peel(pick(nPos, 126, 20), " ")
#define R_Cabecalho_QTDEProduto(A) put(nRec, 126, A :20.20)
!-----------------------------------------------------------
! FIELD : ClasseProdOrigem 
#define S_Cabecalho_ClasseProdOrigem peel(pick(nPos, 146, 5), " ")
#define R_Cabecalho_ClasseProdOrigem(A) put(nRec, 146, A :5.5)
!-----------------------------------------------------------
! FIELD : ClasseProdDestino 
#define S_Cabecalho_ClasseProdDestino peel(pick(nPos, 151, 5), " ")
#define R_Cabecalho_ClasseProdDestino(A) put(nRec, 151, A :5.5)
!-----------------------------------------------------------
! FIELD : IDClasseProdOrigem 
#define S_Cabecalho_IDClasseProdOrigem peel(pick(nPos, 156, 15), " ")
#define R_Cabecalho_IDClasseProdOrigem(A) put(nRec, 156, A :15.15)
!-----------------------------------------------------------
! FIELD : IDClasseProdDestino 
#define S_Cabecalho_IDClasseProdDestino peel(pick(nPos, 171, 15), " ")
#define R_Cabecalho_IDClasseProdDestino(A) put(nRec, 171, A :15.15)
!-----------------------------------------------------------


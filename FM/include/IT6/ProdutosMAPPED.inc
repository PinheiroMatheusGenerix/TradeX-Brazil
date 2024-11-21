! File MONOREGISTO : 
!===========================================================
! Line : MONO 
!===========================================================
! FIELD : TipoRegisto 
#define S_MONO_TipoRegisto peel(pick(nPos, 1, 2), " ")
#define R_MONO_TipoRegisto(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : CodigoDepositante 
#define S_MONO_CodigoDepositante peel(pick(nPos, 3, 15), " ")
#define R_MONO_CodigoDepositante(A) put(nRec, 3, A :15.15)
!-----------------------------------------------------------
! FIELD : CodigoProduto 
#define S_MONO_CodigoProduto peel(pick(nPos, 18, 25), " ")
#define R_MONO_CodigoProduto(A) put(nRec, 18, A :25.25)
!-----------------------------------------------------------
! FIELD : Descricao 
#define S_MONO_Descricao peel(pick(nPos, 43, 40), " ")
#define R_MONO_Descricao(A) put(nRec, 43, A :40.40)
!-----------------------------------------------------------
! FIELD : CodigoGrupo 
#define S_MONO_CodigoGrupo peel(pick(nPos, 83, 6), " ")
#define R_MONO_CodigoGrupo(A) put(nRec, 83, A :6.6)
!-----------------------------------------------------------
! FIELD : DescricaoDoGrupo 
#define S_MONO_DescricaoDoGrupo peel(pick(nPos, 89, 40), " ")
#define R_MONO_DescricaoDoGrupo(A) put(nRec, 89, A :40.40)
!-----------------------------------------------------------
! FIELD : Largura 
#define S_MONO_Largura peel(pick(nPos, 129, 10), " ")
#define R_MONO_Largura(A) put(nRec, 129, A :10.10)
!-----------------------------------------------------------
! FIELD : Comprimento 
#define S_MONO_Comprimento peel(pick(nPos, 139, 10), " ")
#define R_MONO_Comprimento(A) put(nRec, 139, A :10.10)
!-----------------------------------------------------------
! FIELD : Altura 
#define S_MONO_Altura peel(pick(nPos, 149, 10), " ")
#define R_MONO_Altura(A) put(nRec, 149, A :10.10)
!-----------------------------------------------------------
! FIELD : PesoLiquido 
#define S_MONO_PesoLiquido peel(pick(nPos, 159, 10), " ")
#define R_MONO_PesoLiquido(A) put(nRec, 159, A :10.10)
!-----------------------------------------------------------
! FIELD : PesoBruto 
#define S_MONO_PesoBruto peel(pick(nPos, 169, 10), " ")
#define R_MONO_PesoBruto(A) put(nRec, 169, A :10.10)
!-----------------------------------------------------------
! FIELD : CodigoBarras 
#define S_MONO_CodigoBarras peel(pick(nPos, 179, 15), " ")
#define R_MONO_CodigoBarras(A) put(nRec, 179, A :15.15)
!-----------------------------------------------------------
! FIELD : TipoCodigoBarras 
#define S_MONO_TipoCodigoBarras peel(pick(nPos, 194, 5), " ")
#define R_MONO_TipoCodigoBarras(A) put(nRec, 194, A :5.5)
!-----------------------------------------------------------
! FIELD : PrimUOM 
#define S_MONO_PrimUOM peel(pick(nPos, 199, 2), " ")
#define R_MONO_PrimUOM(A) put(nRec, 199, A :2.2)
!-----------------------------------------------------------
! FIELD : SegUOM 
#define S_MONO_SegUOM peel(pick(nPos, 201, 2), " ")
#define R_MONO_SegUOM(A) put(nRec, 201, A :2.2)
!-----------------------------------------------------------
! FIELD : TerUOM 
#define S_MONO_TerUOM peel(pick(nPos, 203, 2), " ")
#define R_MONO_TerUOM(A) put(nRec, 203, A :2.2)
!-----------------------------------------------------------
! FIELD : QtdInnerSegUOM 
#define S_MONO_QtdInnerSegUOM peel(pick(nPos, 205, 7), " ")
#define R_MONO_QtdInnerSegUOM(A) put(nRec, 205, A :7.7)
!-----------------------------------------------------------
! FIELD : QtdMasterTerUOM 
#define S_MONO_QtdMasterTerUOM peel(pick(nPos, 212, 7), " ")
#define R_MONO_QtdMasterTerUOM(A) put(nRec, 212, A :7.7)
!-----------------------------------------------------------
! FIELD : CodigoBarrasInner 
#define S_MONO_CodigoBarrasInner peel(pick(nPos, 219, 15), " ")
#define R_MONO_CodigoBarrasInner(A) put(nRec, 219, A :15.15)
!-----------------------------------------------------------
! FIELD : LarguraINNER 
#define S_MONO_LarguraINNER peel(pick(nPos, 234, 10), " ")
#define R_MONO_LarguraINNER(A) put(nRec, 234, A :10.10)
!-----------------------------------------------------------
! FIELD : ComprimentoINNER 
#define S_MONO_ComprimentoINNER peel(pick(nPos, 244, 10), " ")
#define R_MONO_ComprimentoINNER(A) put(nRec, 244, A :10.10)
!-----------------------------------------------------------
! FIELD : AlturaINNER 
#define S_MONO_AlturaINNER peel(pick(nPos, 254, 10), " ")
#define R_MONO_AlturaINNER(A) put(nRec, 254, A :10.10)
!-----------------------------------------------------------
! FIELD : PesoLiquidoINNER 
#define S_MONO_PesoLiquidoINNER peel(pick(nPos, 264, 10), " ")
#define R_MONO_PesoLiquidoINNER(A) put(nRec, 264, A :10.10)
!-----------------------------------------------------------
! FIELD : PesoBrutoINNER 
#define S_MONO_PesoBrutoINNER peel(pick(nPos, 274, 10), " ")
#define R_MONO_PesoBrutoINNER(A) put(nRec, 274, A :10.10)
!-----------------------------------------------------------
! FIELD : CodigoBarrasMaster 
#define S_MONO_CodigoBarrasMaster peel(pick(nPos, 284, 15), " ")
#define R_MONO_CodigoBarrasMaster(A) put(nRec, 284, A :15.15)
!-----------------------------------------------------------
! FIELD : LarguraMaster 
#define S_MONO_LarguraMaster peel(pick(nPos, 299, 10), " ")
#define R_MONO_LarguraMaster(A) put(nRec, 299, A :10.10)
!-----------------------------------------------------------
! FIELD : ComprimentoMaster 
#define S_MONO_ComprimentoMaster peel(pick(nPos, 309, 10), " ")
#define R_MONO_ComprimentoMaster(A) put(nRec, 309, A :10.10)
!-----------------------------------------------------------
! FIELD : AlturaMaster 
#define S_MONO_AlturaMaster peel(pick(nPos, 319, 10), " ")
#define R_MONO_AlturaMaster(A) put(nRec, 319, A :10.10)
!-----------------------------------------------------------
! FIELD : PesoLiquidoMaster 
#define S_MONO_PesoLiquidoMaster peel(pick(nPos, 329, 10), " ")
#define R_MONO_PesoLiquidoMaster(A) put(nRec, 329, A :10.10)
!-----------------------------------------------------------
! FIELD : PesoBrutoMaster 
#define S_MONO_PesoBrutoMaster peel(pick(nPos, 339, 10), " ")
#define R_MONO_PesoBrutoMaster(A) put(nRec, 339, A :10.10)
!-----------------------------------------------------------

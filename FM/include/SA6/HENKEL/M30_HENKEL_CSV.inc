! File M30_Loreal_CSV : 
!===========================================================
! Line : Produto 
#define S_Produto split(pick(1,1,EOL), taProduto, ";")
!===========================================================
! FIELD : Material 
#define S_Produto_Material taProduto[1]
#define R_Produto_Material(A) taProduto[1] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : UMA 
#define S_Produto_UMA taProduto[2]
#define R_Produto_UMA(A) taProduto[2] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Contador 
#define S_Produto_Contador taProduto[3]
#define R_Produto_Contador(A) taProduto[3] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Codigo_EAN_UPC 
#define S_Produto_Codigo_EAN_UPC taProduto[4]
#define R_Produto_Codigo_EAN_UPC(A) taProduto[4] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Cg 
#define S_Produto_Cg taProduto[5]
#define R_Produto_Cg(A) taProduto[5] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Comprimento 
#define S_Produto_Comprimento taProduto[6]
#define R_Produto_Comprimento(A) taProduto[6] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Largura 
#define S_Produto_Largura taProduto[7]
#define R_Produto_Largura(A) taProduto[7] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Altura 
#define S_Produto_Altura taProduto[8]
#define R_Produto_Altura(A) taProduto[8] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : UOMmedidas 
#define S_Produto_UOMmedidas taProduto[9]
#define R_Produto_UOMmedidas(A) taProduto[9] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Volume 
#define S_Produto_Volume taProduto[10]
#define R_Produto_Volume(A) taProduto[10] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : UVI 
#define S_Produto_UVI taProduto[11]
#define R_Produto_UVI(A) taProduto[11] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : PesoBruto 
#define S_Produto_PesoBruto taProduto[12]
#define R_Produto_PesoBruto(A) taProduto[12] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : UnidadeVolumePeso 
#define S_Produto_UnidadeVolumePeso taProduto[13]
#define R_Produto_UnidadeVolumePeso(A) taProduto[13] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : UMI 
#define S_Produto_UMI taProduto[14]
#define R_Produto_UMI(A) taProduto[14] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : MaterialDescription 
#define S_Produto_MaterialDescription taProduto[15]
#define R_Produto_MaterialDescription(A) taProduto[15] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : ReferenceMaterial 
#define S_Produto_ReferenceMaterial taProduto[16]
#define R_Produto_ReferenceMaterial(A) taProduto[16] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : HazMatNum 
#define S_Produto_HazMatNum taProduto[17]
#define R_Produto_HazMatNum(A) taProduto[17] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Notused1 
#define S_Produto_Notused1 taProduto[18]
#define R_Produto_Notused1(A) taProduto[18] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Notused2
#define S_Produto_Notused2 taProduto[19]
#define R_Produto_Notused2(A) taProduto[19] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : RShLi 
#define S_Produto_RShLi taProduto[20]
#define R_Produto_RShLi(A) taProduto[20] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : SLife 
#define S_Produto_SLife taProduto[21]
#define R_Produto_SLife(A) taProduto[21] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : PerInd 
#define S_Produto_PerInd taProduto[22]
#define R_Produto_PerInd(A) taProduto[22] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : CodAct
#define S_Produto_CodAct taProduto[23]
#define R_Produto_CodAct(A) taProduto[23] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : CODMDR
#define S_Produto_CODMDR taProduto[24]
#define R_Produto_CODMDR(A) taProduto[24] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : CODMDS
#define S_Produto_CODMDS taProduto[25]
#define R_Produto_CODMDS(A) taProduto[25] := build(A :0.100)
!-----------------------------------------------------------

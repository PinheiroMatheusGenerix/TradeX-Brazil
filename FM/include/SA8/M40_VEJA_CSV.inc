! File M40_VEJA_CSV : 
!===========================================================
! Line : REGISTRO 
#define S_REGISTRO split(pick(1,1,EOL), taREGISTRO, ";")
!===========================================================
! FIELD : Produto 
#define S_REGISTRO_Produto taREGISTRO[1]
#define R_REGISTRO_Produto(A) taREGISTRO[1] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : DescricaoProduto 
#define S_REGISTRO_DescricaoProduto taREGISTRO[2]
#define R_REGISTRO_DescricaoProduto(A) taREGISTRO[2] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Palete 
#define S_REGISTRO_Palete taREGISTRO[3]
#define R_REGISTRO_Palete(A) taREGISTRO[3] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Quantidade 
#define S_REGISTRO_Quantidade taREGISTRO[4]
#define R_REGISTRO_Quantidade(A) taREGISTRO[4] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : PesoLiquido 
#define S_REGISTRO_PesoLiquido taREGISTRO[5]
#define R_REGISTRO_PesoLiquido(A) taREGISTRO[5] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : PesoBruto 
#define S_REGISTRO_PesoBruto taREGISTRO[6]
#define R_REGISTRO_PesoBruto(A) taREGISTRO[6] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Lote 
#define S_REGISTRO_Lote taREGISTRO[7]
#define R_REGISTRO_Lote(A) taREGISTRO[7] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : ClasseDePerigo 
#define S_REGISTRO_ClasseDePerigo taREGISTRO[8]
#define R_REGISTRO_ClasseDePerigo(A) taREGISTRO[8] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : CodigoPersonalidade 
#define S_REGISTRO_CodigoPersonalidade taREGISTRO[9]
#define R_REGISTRO_CodigoPersonalidade(A) taREGISTRO[9] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Caminhao 
#define S_REGISTRO_Caminhao taREGISTRO[10]
#define R_REGISTRO_Caminhao(A) taREGISTRO[10] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : DataEnvio 
#define S_REGISTRO_DataEnvio taREGISTRO[11]
#define R_REGISTRO_DataEnvio(A) taREGISTRO[11] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : NumeroOrdem 
#define S_REGISTRO_NumeroOrdem taREGISTRO[12]
#define R_REGISTRO_NumeroOrdem(A) taREGISTRO[12] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : TipoOrdem 
#define S_REGISTRO_TipoOrdem taREGISTRO[13]
#define R_REGISTRO_TipoOrdem(A) taREGISTRO[13] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Planta 
#define S_REGISTRO_Planta taREGISTRO[14]
#define R_REGISTRO_Planta(A) taREGISTRO[14] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Parceiro 
#define S_REGISTRO_Parceiro taREGISTRO[15]
#define R_REGISTRO_Parceiro(A) taREGISTRO[15] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Classe 
#define S_REGISTRO_Classe taREGISTRO[16]
#define R_REGISTRO_Classe(A) taREGISTRO[16] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Prioridade 
#define S_REGISTRO_Prioridade taREGISTRO[17]
#define R_REGISTRO_Prioridade(A) taREGISTRO[17] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Divisao 
#define S_REGISTRO_Divisao taREGISTRO[18]
#define R_REGISTRO_Divisao(A) taREGISTRO[18] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : CD 
#define S_REGISTRO_CD taREGISTRO[19]
#define R_REGISTRO_CD(A) taREGISTRO[19] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Cliente 
#define S_REGISTRO_Cliente taREGISTRO[20]
#define R_REGISTRO_Cliente(A) taREGISTRO[20] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : IMOBILIZACAO 
#define S_REGISTRO_IMOBILIZACAO taREGISTRO[21]
#define R_REGISTRO_IMOBILIZACAO(A) taREGISTRO[21] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : EMBARQUE 
#define S_REGISTRO_EMBARQUE taREGISTRO[22]
#define R_REGISTRO_EMBARQUE(A) taREGISTRO[22] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : CODPROPRIETARIO 
#define S_REGISTRO_CODPROPRIETARIO taREGISTRO[23]
#define R_REGISTRO_CODPROPRIETARIO(A) taREGISTRO[23] := build(A :0.35)
!-----------------------------------------------------------

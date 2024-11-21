! File COPACK_LOREAL_CSV_IN : 
!===========================================================
! Line : REGISTO 
#define S_REGISTO split(pick(1,1,EOL), taREGISTO, ";")
!===========================================================
! FIELD : Produto 
#define S_REGISTO_Produto taREGISTO[1]
#define R_REGISTO_Produto(A) taREGISTO[1] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : DescricaoProduto 
#define S_REGISTO_DescricaoProduto taREGISTO[2]
#define R_REGISTO_DescricaoProduto(A) taREGISTO[2] := build(A :0.100)
!-----------------------------------------------------------
! FIELD : Palete 
#define S_REGISTO_Palete taREGISTO[3]
#define R_REGISTO_Palete(A) taREGISTO[3] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Quantidade 
#define S_REGISTO_Quantidade taREGISTO[4]
#define R_REGISTO_Quantidade(A) taREGISTO[4] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : PesoLiquido 
#define S_REGISTO_PesoLiquido taREGISTO[5]
#define R_REGISTO_PesoLiquido(A) taREGISTO[5] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : PesoBruto 
#define S_REGISTO_PesoBruto taREGISTO[6]
#define R_REGISTO_PesoBruto(A) taREGISTO[6] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Lote 
#define S_REGISTO_Lote taREGISTO[7]
#define R_REGISTO_Lote(A) taREGISTO[7] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : ClasseDePerigo 
#define S_REGISTO_ClasseDePerigo taREGISTO[8]
#define R_REGISTO_ClasseDePerigo(A) taREGISTO[8] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : CodigoPersonalidade 
#define S_REGISTO_CodigoPersonalidade taREGISTO[9]
#define R_REGISTO_CodigoPersonalidade(A) taREGISTO[9] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Caminhao 
#define S_REGISTO_Caminhao taREGISTO[10]
#define R_REGISTO_Caminhao(A) taREGISTO[10] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : DataEnvio 
#define S_REGISTO_DataEnvio taREGISTO[11]
#define R_REGISTO_DataEnvio(A) taREGISTO[11] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : NumeroOrdem 
#define S_REGISTO_NumeroOrdem taREGISTO[12]
#define R_REGISTO_NumeroOrdem(A) taREGISTO[12] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : TipoOrdem 
#define S_REGISTO_TipoOrdem taREGISTO[13]
#define R_REGISTO_TipoOrdem(A) taREGISTO[13] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Planta 
#define S_REGISTO_Planta taREGISTO[14]
#define R_REGISTO_Planta(A) taREGISTO[14] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Parceiro 
#define S_REGISTO_Parceiro taREGISTO[15]
#define R_REGISTO_Parceiro(A) taREGISTO[15] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Classe 
#define S_REGISTO_Classe taREGISTO[16]
#define R_REGISTO_Classe(A) taREGISTO[16] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Prioridade 
#define S_REGISTO_Prioridade taREGISTO[17]
#define R_REGISTO_Prioridade(A) taREGISTO[17] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Divisao 
#define S_REGISTO_Divisao taREGISTO[18]
#define R_REGISTO_Divisao(A) taREGISTO[18] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : CD 
#define S_REGISTO_CD taREGISTO[19]
#define R_REGISTO_CD(A) taREGISTO[19] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : Cliente 
#define S_REGISTO_Cliente taREGISTO[20]
#define R_REGISTO_Cliente(A) taREGISTO[20] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : IMOBILIZACAO 
#define S_REGISTO_IMOBILIZACAO taREGISTO[21]
#define R_REGISTO_IMOBILIZACAO(A) taREGISTO[21] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : EMBARQUE 
#define S_REGISTO_EMBARQUE taREGISTO[22]
#define R_REGISTO_EMBARQUE(A) taREGISTO[22] := build(A :0.35)
!-----------------------------------------------------------
! FIELD : CODPROPRIETARIO 
#define S_REGISTO_CODPROPRIETARIO taREGISTO[23]
#define R_REGISTO_CODPROPRIETARIO(A) taREGISTO[23] := build(A :0.35)
!-----------------------------------------------------------

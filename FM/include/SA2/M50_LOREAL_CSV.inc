! File M50_LOREAL_CSV : 
!===========================================================
! Line : HEADER 
#define S_HEADER split(pick(1,1,EOL), taHEADER, ";")
!===========================================================
! FIELD : Fornmto 
#define S_HEADER_Fornmto taHEADER[1]
#define R_HEADER_Fornmto(A) taHEADER[1] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : N_OT 
#define S_HEADER_N_OT taHEADER[2]
#define R_HEADER_N_OT(A) taHEADER[2] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : N_D 
#define S_HEADER_N_D taHEADER[3]
#define R_HEADER_N_D(A) taHEADER[3] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : Plnt 
#define S_HEADER_Plnt taHEADER[4]
#define R_HEADER_Plnt(A) taHEADER[4] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : Material 
#define S_HEADER_Material taHEADER[5]
#define R_HEADER_Material(A) taHEADER[5] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : Texto_breve_material 
#define S_HEADER_Texto_breve_material taHEADER[6]
#define R_HEADER_Texto_breve_material(A) taHEADER[6] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : Lote 
#define S_HEADER_Lote taHEADER[7]
#define R_HEADER_Lote(A) taHEADER[7] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : TpDepos 
#define S_HEADER_TpDepos taHEADER[8]
#define R_HEADER_TpDepos(A) taHEADER[8] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : Posicao_dep_origem 
#define S_HEADER_Posicao_dep_origem taHEADER[9]
#define R_HEADER_Posicao_dep_origem(A) taHEADER[9] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : Unid_dep_origem 
#define S_HEADER_Unid_dep_origem taHEADER[10]
#define R_HEADER_Unid_dep_origem(A) taHEADER[10] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : Qtd_teorica_origem 
#define S_HEADER_Qtd_teorica_origem taHEADER[11]
#define R_HEADER_Qtd_teorica_origem(A) taHEADER[11] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : Peso 
#define S_HEADER_Peso taHEADER[12]
#define R_HEADER_Peso(A) taHEADER[12] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : Quantidade_selecionada 
#define S_HEADER_Quantidade_selecionada taHEADER[13]
#define R_HEADER_Quantidade_selecionada(A) taHEADER[13] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : Numero_do_Cliente 
#define S_HEADER_Numero_do_Cliente taHEADER[14]
#define R_HEADER_Numero_do_Cliente(A) taHEADER[14] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : DatadeEntrega 
#define S_HEADER_DatadeEntrega taHEADER[15]
#define R_HEADER_DatadeEntrega(A) taHEADER[15] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : Zona 
#define S_HEADER_Zona taHEADER[16]
#define R_HEADER_Zona(A) taHEADER[16] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : Endereco 
#define S_HEADER_Endereco taHEADER[17]
#define R_HEADER_Endereco(A) taHEADER[17] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : Tipodeacondicionamento 
#define S_HEADER_Tipodeacondicionamento taHEADER[18]
#define R_HEADER_Tipodeacondicionamento(A) taHEADER[18] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : NumeroUM 
#define S_HEADER_NumeroUM taHEADER[19]
#define R_HEADER_NumeroUM(A) taHEADER[19] := build(A :0.30)
!-----------------------------------------------------------

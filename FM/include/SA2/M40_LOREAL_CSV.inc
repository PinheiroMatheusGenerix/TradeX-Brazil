! File M40_LOREAL_CSV : 
!===========================================================
! Line : HEADER 
#define S_HEADER split(pick(1,1,EOL), taHEADER, ";")
!===========================================================
! FIELD : Fornmto 
#define S_HEADER_Fornmto taHEADER[1]
#define R_HEADER_Fornmto(A) taHEADER[1] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : Material 
#define S_HEADER_Material taHEADER[2]
#define R_HEADER_Material(A) taHEADER[2] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : Texto_breve_material 
#define S_HEADER_Texto_breve_material taHEADER[3]
#define R_HEADER_Texto_breve_material(A) taHEADER[3] := build(A :0.70)
!-----------------------------------------------------------
! FIELD : N_OT 
#define S_HEADER_N_OT taHEADER[4]
#define R_HEADER_N_OT(A) taHEADER[4] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : Item 
#define S_HEADER_Item taHEADER[5]
#define R_HEADER_Item(A) taHEADER[5] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : Unid_dep_origem 
#define S_HEADER_Unid_dep_origem taHEADER[6]
#define R_HEADER_Unid_dep_origem(A) taHEADER[6] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : UD_destino 
#define S_HEADER_UD_destino taHEADER[7]
#define R_HEADER_UD_destino(A) taHEADER[7] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : N_D 
#define S_HEADER_N_D taHEADER[8]
#define R_HEADER_N_D(A) taHEADER[8] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : Plnt 
#define S_HEADER_Plnt taHEADER[9]
#define R_HEADER_Plnt(A) taHEADER[9] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : Tp 
#define S_HEADER_Tp taHEADER[10]
#define R_HEADER_Tp(A) taHEADER[10] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : Pos_origem 
#define S_HEADER_Pos_origem taHEADER[11]
#define R_HEADER_Pos_origem(A) taHEADER[11] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : Tp_2 
#define S_HEADER_Tp_2 taHEADER[12]
#define R_HEADER_Tp_2(A) taHEADER[12] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : PosicDest 
#define S_HEADER_PosicDest taHEADER[13]
#define R_HEADER_PosicDest(A) taHEADER[13] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : SC 
#define S_HEADER_SC taHEADER[14]
#define R_HEADER_SC(A) taHEADER[14] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : Usuario 
#define S_HEADER_Usuario taHEADER[15]
#define R_HEADER_Usuario(A) taHEADER[15] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : Hora 
#define S_HEADER_Hora taHEADER[16]
#define R_HEADER_Hora(A) taHEADER[16] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : Usuario2 
#define S_HEADER_Usuario2 taHEADER[17]
#define R_HEADER_Usuario2(A) taHEADER[17] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : HoraCnf 
#define S_HEADER_HoraCnf taHEADER[18]
#define R_HEADER_HoraCnf(A) taHEADER[18] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : TpMov 
#define S_HEADER_TpMov taHEADER[19]
#define R_HEADER_TpMov(A) taHEADER[19] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : Qtd_real_destino 
#define S_HEADER_Qtd_real_destino taHEADER[20]
#define R_HEADER_Qtd_real_destino(A) taHEADER[20] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : Peso_Liquido 
#define S_HEADER_Peso_Liquido taHEADER[21]
#define R_HEADER_Peso_Liquido(A) taHEADER[21] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : Peso_Bruto 
#define S_HEADER_Peso_Bruto taHEADER[22]
#define R_HEADER_Peso_Bruto(A) taHEADER[22] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : Dt_criacao 
#define S_HEADER_Dt_criacao taHEADER[23]
#define R_HEADER_Dt_criacao(A) taHEADER[23] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : Data_conf 
#define S_HEADER_Data_conf taHEADER[24]
#define R_HEADER_Data_conf(A) taHEADER[24] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : Lote 
#define S_HEADER_Lote taHEADER[25]
#define R_HEADER_Lote(A) taHEADER[25] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : Classe_de_perigo 
#define S_HEADER_Classe_de_perigo taHEADER[26]
#define R_HEADER_Classe_de_perigo(A) taHEADER[26] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : Codigo_personalizado 
#define S_HEADER_Codigo_personalizado taHEADER[27]
#define R_HEADER_Codigo_personalizado(A) taHEADER[27] := build(A :0.30)
!-----------------------------------------------------------

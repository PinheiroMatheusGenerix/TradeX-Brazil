! File MAKROORDER : 
!===========================================================
! Line : CABArq 
#define S_CABArq split(pick(1,1,EOL), taCABArq, ";")
!===========================================================
! FIELD : tpRegistro 
#define S_CABArq_tpRegistro taCABArq[1]
#define R_CABArq_tpRegistro(A) taCABArq[1] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : cdEmpresa 
#define S_CABArq_cdEmpresa taCABArq[2]
#define R_CABArq_cdEmpresa(A) taCABArq[2] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : nuPedido 
#define S_CABArq_nuPedido taCABArq[3]
#define R_CABArq_nuPedido(A) taCABArq[3] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : TVROMCAB_CNLOJCLI 
#define S_CABArq_TVROMCAB_CNLOJCLI taCABArq[4]
#define R_CABArq_TVROMCAB_CNLOJCLI(A) taCABArq[4] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : TVROMCAB_CNCLI 
#define S_CABArq_TVROMCAB_CNCLI taCABArq[5]
#define R_CABArq_TVROMCAB_CNCLI(A) taCABArq[5] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : CdTabelaPreco 
#define S_CABArq_CdTabelaPreco taCABArq[6]
#define R_CABArq_CdTabelaPreco(A) taCABArq[6] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : TVROMCAB_DTVEN 
#define S_CABArq_TVROMCAB_DTVEN taCABArq[7]
#define R_CABArq_TVROMCAB_DTVEN(A) taCABArq[7] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : TVROMCAB_DTRET 
#define S_CABArq_TVROMCAB_DTRET taCABArq[8]
#define R_CABArq_TVROMCAB_DTRET(A) taCABArq[8] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : TVROMCAB_VCTOTVEN 
#define S_CABArq_TVROMCAB_VCTOTVEN taCABArq[9]
#define R_CABArq_TVROMCAB_VCTOTVEN(A) taCABArq[9] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : TVROMCAB_ANOBS 
#define S_CABArq_TVROMCAB_ANOBS taCABArq[10]
#define R_CABArq_TVROMCAB_ANOBS(A) taCABArq[10] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : TVROMCAB_ANUSRINC 
#define S_CABArq_TVROMCAB_ANUSRINC taCABArq[11]
#define R_CABArq_TVROMCAB_ANUSRINC(A) taCABArq[11] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : flemergencial 
#define S_CABArq_flemergencial taCABArq[12]
#define R_CABArq_flemergencial(A) taCABArq[12] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : cdstringlogistica 
#define S_CABArq_cdstringlogistica taCABArq[13]
#define R_CABArq_cdstringlogistica(A) taCABArq[13] := build(A :0.30)
!-----------------------------------------------------------
! FIELD : cdsegmento 
#define S_CABArq_cdsegmento taCABArq[14]
#define R_CABArq_cdsegmento(A) taCABArq[14] := build(A :0.30)
!-----------------------------------------------------------
!===========================================================
! Line : ItemsDoc 
#define S_ItemsDoc split(pick(1,1,EOL), taItemsDoc, ";")
!===========================================================
! FIELD : tpRegistro 
#define S_ItemsDoc_tpRegistro taItemsDoc[1]
#define R_ItemsDoc_tpRegistro(A) taItemsDoc[1] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : cdEmpresa 
#define S_ItemsDoc_cdEmpresa taItemsDoc[2]
#define R_ItemsDoc_cdEmpresa(A) taItemsDoc[2] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : nuPedido 
#define S_ItemsDoc_nuPedido taItemsDoc[3]
#define R_ItemsDoc_nuPedido(A) taItemsDoc[3] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : TVROMDET_CNART 
#define S_ItemsDoc_TVROMDET_CNART taItemsDoc[4]
#define R_ItemsDoc_TVROMDET_CNART(A) taItemsDoc[4] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : TVROMDET_SQART 
#define S_ItemsDoc_TVROMDET_SQART taItemsDoc[5]
#define R_ItemsDoc_TVROMDET_SQART(A) taItemsDoc[5] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : TVROMDET_QTVEN 
#define S_ItemsDoc_TVROMDET_QTVEN taItemsDoc[6]
#define R_ItemsDoc_TVROMDET_QTVEN(A) taItemsDoc[6] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : TVROMDET_VCPRVCPR 
#define S_ItemsDoc_TVROMDET_VCPRVCPR taItemsDoc[7]
#define R_ItemsDoc_TVROMDET_VCPRVCPR(A) taItemsDoc[7] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : TVROMDET_VCPRVATU 
#define S_ItemsDoc_TVROMDET_VCPRVATU taItemsDoc[8]
#define R_ItemsDoc_TVROMDET_VCPRVATU(A) taItemsDoc[8] := build(A :0.20)
!-----------------------------------------------------------
!===========================================================
! Line : EmissaoNF 
#define S_EmissaoNF split(pick(1,1,EOL), taEmissaoNF, ";")
!===========================================================
! FIELD : tpRegistro 
#define S_EmissaoNF_tpRegistro taEmissaoNF[1]
#define R_EmissaoNF_tpRegistro(A) taEmissaoNF[1] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : cdEmpresa 
#define S_EmissaoNF_cdEmpresa taEmissaoNF[2]
#define R_EmissaoNF_cdEmpresa(A) taEmissaoNF[2] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : nuPedido 
#define S_EmissaoNF_nuPedido taEmissaoNF[3]
#define R_EmissaoNF_nuPedido(A) taEmissaoNF[3] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : TVROMNFS_CNLOJCLI 
#define S_EmissaoNF_TVROMNFS_CNLOJCLI taEmissaoNF[4]
#define R_EmissaoNF_TVROMNFS_CNLOJCLI(A) taEmissaoNF[4] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : cdEndereco 
#define S_EmissaoNF_cdEndereco taEmissaoNF[5]
#define R_EmissaoNF_cdEndereco(A) taEmissaoNF[5] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : TVROMNFS_CATIPNFS 
#define S_EmissaoNF_TVROMNFS_CATIPNFS taEmissaoNF[6]
#define R_EmissaoNF_TVROMNFS_CATIPNFS(A) taEmissaoNF[6] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : TVROMNFS_NMPED 
#define S_EmissaoNF_TVROMNFS_NMPED taEmissaoNF[7]
#define R_EmissaoNF_TVROMNFS_NMPED(A) taEmissaoNF[7] := build(A :0.20)
!-----------------------------------------------------------
! FIELD : TVROMNFS_OBSERVATION 
#define S_EmissaoNF_TVROMNFS_OBSERVATION taEmissaoNF[8]
#define R_EmissaoNF_TVROMNFS_OBSERVATION(A) taEmissaoNF[8] := build(A :0.140)
!-----------------------------------------------------------
!===========================================================
! Line : InfExportacao 
#define S_InfExportacao split(pick(1,1,EOL), taInfExportacao, ";")
!===========================================================
! FIELD : tpRegistro 
#define S_InfExportacao_tpRegistro taInfExportacao[1]
#define R_InfExportacao_tpRegistro(A) taInfExportacao[1] := build(A :0.60)
!-----------------------------------------------------------
! FIELD : cdEmpresa 
#define S_InfExportacao_cdEmpresa taInfExportacao[2]
#define R_InfExportacao_cdEmpresa(A) taInfExportacao[2] := build(A :0.60)
!-----------------------------------------------------------
! FIELD : nuPedido 
#define S_InfExportacao_nuPedido taInfExportacao[3]
#define R_InfExportacao_nuPedido(A) taInfExportacao[3] := build(A :0.60)
!-----------------------------------------------------------
! FIELD : TVROMEXP_CNLOJCLI 
#define S_InfExportacao_TVROMEXP_CNLOJCLI taInfExportacao[4]
#define R_InfExportacao_TVROMEXP_CNLOJCLI(A) taInfExportacao[4] := build(A :0.60)
!-----------------------------------------------------------
! FIELD : TVROMEXP_ANSHIP 
#define S_InfExportacao_TVROMEXP_ANSHIP taInfExportacao[5]
#define R_InfExportacao_TVROMEXP_ANSHIP(A) taInfExportacao[5] := build(A :0.60)
!-----------------------------------------------------------
! FIELD : TVROMEXP_DTSHIPPING 
#define S_InfExportacao_TVROMEXP_DTSHIPPING taInfExportacao[6]
#define R_InfExportacao_TVROMEXP_DTSHIPPING(A) taInfExportacao[6] := build(A :0.60)
!-----------------------------------------------------------
! FIELD : TVROMEXP_ANDESTNAME 
#define S_InfExportacao_TVROMEXP_ANDESTNAME taInfExportacao[7]
#define R_InfExportacao_TVROMEXP_ANDESTNAME(A) taInfExportacao[7] := build(A :0.60)
!-----------------------------------------------------------
! FIELD : TVROMEXP_ANDESTENDER 
#define S_InfExportacao_TVROMEXP_ANDESTENDER taInfExportacao[8]
#define R_InfExportacao_TVROMEXP_ANDESTENDER(A) taInfExportacao[8] := build(A :0.60)
!-----------------------------------------------------------
! FIELD : TVROMEXP_ANDESTNUM 
#define S_InfExportacao_TVROMEXP_ANDESTNUM taInfExportacao[9]
#define R_InfExportacao_TVROMEXP_ANDESTNUM(A) taInfExportacao[9] := build(A :0.60)
!-----------------------------------------------------------
! FIELD : TVROMEXP_ANDESTBAIR 
#define S_InfExportacao_TVROMEXP_ANDESTBAIR taInfExportacao[10]
#define R_InfExportacao_TVROMEXP_ANDESTBAIR(A) taInfExportacao[10] := build(A :0.60)
!-----------------------------------------------------------
! FIELD : TVROMEXP_ANCIDDEST 
#define S_InfExportacao_TVROMEXP_ANCIDDEST taInfExportacao[11]
#define R_InfExportacao_TVROMEXP_ANCIDDEST(A) taInfExportacao[11] := build(A :0.60)
!-----------------------------------------------------------
! FIELD : TVROMEXP_CNDESTCOUNTRY 
#define S_InfExportacao_TVROMEXP_CNDESTCOUNTRY taInfExportacao[12]
#define R_InfExportacao_TVROMEXP_CNDESTCOUNTRY(A) taInfExportacao[12] := build(A :0.60)
!-----------------------------------------------------------
! FIELD : TVROMEXP_ANLOCEMBRQ 
#define S_InfExportacao_TVROMEXP_ANLOCEMBRQ taInfExportacao[13]
#define R_InfExportacao_TVROMEXP_ANLOCEMBRQ(A) taInfExportacao[13] := build(A :0.60)
!-----------------------------------------------------------
! FIELD : TVROMEXP_ANTRANNAME 
#define S_InfExportacao_TVROMEXP_ANTRANNAME taInfExportacao[14]
#define R_InfExportacao_TVROMEXP_ANTRANNAME(A) taInfExportacao[14] := build(A :0.60)
!-----------------------------------------------------------
! FIELD : TVROMEXP_NMTRANMOD 
#define S_InfExportacao_TVROMEXP_NMTRANMOD taInfExportacao[15]
#define R_InfExportacao_TVROMEXP_NMTRANMOD(A) taInfExportacao[15] := build(A :0.60)
!-----------------------------------------------------------
! FIELD : TVROMEXP_CDTRANANTT 
#define S_InfExportacao_TVROMEXP_CDTRANANTT taInfExportacao[16]
#define R_InfExportacao_TVROMEXP_CDTRANANTT(A) taInfExportacao[16] := build(A :0.60)
!-----------------------------------------------------------
! FIELD : TVROMEXP_ACTRANPLC 
#define S_InfExportacao_TVROMEXP_ACTRANPLC taInfExportacao[17]
#define R_InfExportacao_TVROMEXP_ACTRANPLC(A) taInfExportacao[17] := build(A :0.60)
!-----------------------------------------------------------
! FIELD : TVROMEXP_CATRANPLCUF 
#define S_InfExportacao_TVROMEXP_CATRANPLCUF taInfExportacao[18]
#define R_InfExportacao_TVROMEXP_CATRANPLCUF(A) taInfExportacao[18] := build(A :0.60)
!-----------------------------------------------------------
! FIELD : TVROMEXP_CNTRANCPF 
#define S_InfExportacao_TVROMEXP_CNTRANCPF taInfExportacao[19]
#define R_InfExportacao_TVROMEXP_CNTRANCPF(A) taInfExportacao[19] := build(A :0.60)
!-----------------------------------------------------------
! FIELD : TVROMEXP_CNTRANCNPJ 
#define S_InfExportacao_TVROMEXP_CNTRANCNPJ taInfExportacao[20]
#define R_InfExportacao_TVROMEXP_CNTRANCNPJ(A) taInfExportacao[20] := build(A :0.60)
!-----------------------------------------------------------
! FIELD : TVROMEXP_ANTRANIE 
#define S_InfExportacao_TVROMEXP_ANTRANIE taInfExportacao[21]
#define R_InfExportacao_TVROMEXP_ANTRANIE(A) taInfExportacao[21] := build(A :0.60)
!-----------------------------------------------------------
! FIELD : TVROMEXP_ANTRANENDE 
#define S_InfExportacao_TVROMEXP_ANTRANENDE taInfExportacao[22]
#define R_InfExportacao_TVROMEXP_ANTRANENDE(A) taInfExportacao[22] := build(A :0.60)
!-----------------------------------------------------------
! FIELD : TVROMEXP_ANTRANMUN 
#define S_InfExportacao_TVROMEXP_ANTRANMUN taInfExportacao[23]
#define R_InfExportacao_TVROMEXP_ANTRANMUN(A) taInfExportacao[23] := build(A :0.60)
!-----------------------------------------------------------
! FIELD : TVROMEXP_ANTRANUF 
#define S_InfExportacao_TVROMEXP_ANTRANUF taInfExportacao[24]
#define R_InfExportacao_TVROMEXP_ANTRANUF(A) taInfExportacao[24] := build(A :0.60)
!-----------------------------------------------------------
! FIELD : TVROMEXP_NMVOLQVOL 
#define S_InfExportacao_TVROMEXP_NMVOLQVOL taInfExportacao[25]
#define R_InfExportacao_TVROMEXP_NMVOLQVOL(A) taInfExportacao[25] := build(A :0.60)
!-----------------------------------------------------------
! FIELD : TVROMEXP_ANVOLESP 
#define S_InfExportacao_TVROMEXP_ANVOLESP taInfExportacao[26]
#define R_InfExportacao_TVROMEXP_ANVOLESP(A) taInfExportacao[26] := build(A :0.60)
!-----------------------------------------------------------
! FIELD : TVROMEXP_ANVOLMARCA 
#define S_InfExportacao_TVROMEXP_ANVOLMARCA taInfExportacao[27]
#define R_InfExportacao_TVROMEXP_ANVOLMARCA(A) taInfExportacao[27] := build(A :0.60)
!-----------------------------------------------------------
! FIELD : TVROMEXP_ANVOLNVOL 
#define S_InfExportacao_TVROMEXP_ANVOLNVOL taInfExportacao[28]
#define R_InfExportacao_TVROMEXP_ANVOLNVOL(A) taInfExportacao[28] := build(A :0.60)
!-----------------------------------------------------------
! FIELD : TVROMEXP_NMVOLPB 
#define S_InfExportacao_TVROMEXP_NMVOLPB taInfExportacao[29]
#define R_InfExportacao_TVROMEXP_NMVOLPB(A) taInfExportacao[29] := build(A :0.60)
!-----------------------------------------------------------
! FIELD : TVROMEXP_NMVOLPL 
#define S_InfExportacao_TVROMEXP_NMVOLPL taInfExportacao[30]
#define R_InfExportacao_TVROMEXP_NMVOLPL(A) taInfExportacao[30] := build(A :0.60)
!-----------------------------------------------------------
! FIELD : TVROMEXP_ANINFCPL 
#define S_InfExportacao_TVROMEXP_ANINFCPL taInfExportacao[31]
#define R_InfExportacao_TVROMEXP_ANINFCPL(A) taInfExportacao[31] := build(A :0.2000)
!-----------------------------------------------------------
!===========================================================
! Line : FinalizadorDoc 
#define S_FinalizadorDoc split(pick(1,1,EOL), taFinalizadorDoc, ";")
!===========================================================
! FIELD : TipodeRegistro 
#define S_FinalizadorDoc_TipodeRegistro taFinalizadorDoc[1]
#define R_FinalizadorDoc_TipodeRegistro(A) taFinalizadorDoc[1] := build(A :0.8)
!-----------------------------------------------------------
! FIELD : PrimeiroCaracter 
#define S_FinalizadorDoc_PrimeiroCaracter taFinalizadorDoc[2]
#define R_FinalizadorDoc_PrimeiroCaracter(A) taFinalizadorDoc[2] := build(A :0.8)
!-----------------------------------------------------------
! FIELD : DataSistema 
#define S_FinalizadorDoc_DataSistema taFinalizadorDoc[3]
#define R_FinalizadorDoc_DataSistema(A) taFinalizadorDoc[3] := build(A :0.8)
!-----------------------------------------------------------
! FIELD : QtLinhasArquivo 
#define S_FinalizadorDoc_QtLinhasArquivo taFinalizadorDoc[4]
#define R_FinalizadorDoc_QtLinhasArquivo(A) taFinalizadorDoc[4] := build(A :0.8)
!-----------------------------------------------------------
! FIELD : Hash 
#define S_FinalizadorDoc_Hash taFinalizadorDoc[5]
#define R_FinalizadorDoc_Hash(A) taFinalizadorDoc[5] := build(A :0.8)
!-----------------------------------------------------------
! FIELD : UltimoCaracter 
#define S_FinalizadorDoc_UltimoCaracter taFinalizadorDoc[6]
#define R_FinalizadorDoc_UltimoCaracter(A) taFinalizadorDoc[6] := build(A :0.8)
!-----------------------------------------------------------

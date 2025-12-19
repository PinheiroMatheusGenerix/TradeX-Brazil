SELECT  trim(ve.REFLIV)                                                                    AS Pedido_Nro
       ,case ve.codtli WHEN 'EC' THEN 'B2C' else 'B2B' end                                 AS tipo_venda
       ,case ve.codtli WHEN 'EC' THEN 'ECOMMERCE' WHEN 'RT' THEN 'LOJA' else 'ATACADO' end AS CANAL_VENDA
       ,to_date(ve.DTILIV || right('0000' || ve.HEILIV || 00,6),'YYYY-MM-DD hh24:mi:ss')   AS Pedido_DatAge
       ,ve.NUMVAG                                                                          AS Onda
       ,nf.*
       ,''                                                                                 AS Mensagem
       ,ve.CODCLI                                                                          AS Pedido_Prop
       ,ve.NOMCLI                                                                          AS Dest_Nome
       ,ve.CLILIV                                                                          AS Dest_CNPJ_CPF
       ,ve.CLILIV                                                                          AS Dest_Insc_Est
       ,substr(ve.AD1CLI,1,instr(ve.AD1CLI,' ') - 1)                                       AS Dest_Log
       ,ve.AD3CLI                                                                          AS Dest_Bairro
       ,ve.CPICLI                                                                          AS Dest_Cep
       ,trim(ve.TELCLI)                                                                    AS Dest_Fone
       ,trim(ve.EMLADR)                                                                    AS Dest_Email
       ,trim(ve.DIPLIV)                                                                    AS NF_Chave
       ,pe.NUMSUP                                                                          AS Volume_Num
       ,pe.LIBSUP                                                                          AS Volume_Desc
       ,pe.CUMPOI                                                                          AS Volume_PesoL
       ,pe.CUMPOI + em.PDBEMB                                                              AS Volume_PesoB
       ,pe.CUMVOL / 1000                                                                   AS Volume_DM3
       ,pe.CUMLOG                                                                          AS Volume_Quantidade
       ,em.LRGPAL                                                                          AS Volume_Largura
       ,em.LNGPAL                                                                          AS Volume_Comprimento
       ,em.HAUSCL                                                                          AS Volume_Altura
       ,em.LIBEMB                                                                          AS Volume_Especie
       ,(
SELECT  COUNT(1)
FROM FGE50FM0A8.GEZEMB vol
WHERE vol.codemb = pe.codemb) AS Volume_Total , '' AS CFOP, 0 AS Vlr_Total_Prod_Vol , 0 AS Prod_PesoBruto, 0 AS Prod_PesoLiq, 0 AS Prod_Altura, 0 AS Prod_largura, '' AS Prod_Desc , 0 AS Prod_Comprimento, 0 Prod_VolM3 , ga.faxact AS remetente_cnpj , ga.nomact AS remetente_nome , ga.ad1act AS remetente_endereco , ga.ad3act AS remetente_bairro , ga.vilact AS remetente_cidade_uf , ga.cpiact AS remetente_cep , CASE tr.TELTRA WHEN 'CORREIO' THEN 'CORREIOS' ELSE tr.NOMTRA END AS transp , tr.codtra, tr.nomtra , CASE NF.SERVICOENVIO WHEN 'PAC' THEN '1' ELSE '2' END AS cod_intellipost , CASE tr.TELTRA WHEN 'CORREIO' THEN 'CORREIOS' ELSE tr.NOMTRA END AS nome_transp , to_date(te.DATEXP || right('000000' || te.HEUEXP, 6), 'YYYY-MM-DD hh24:mi:ss') AS Data_Exped , '0076910849' AS CARTAO_POSTAGEM, '' AS COD_SERVICO_ADIC , '' AS SKU, 0 PESO_BRUTO, 0 PESO_LIQUIDO, 0 QTD_ITEM, 0 VOLUME, 0 PRICE
FROM FGE50FM0A8.GELIVE ve
LEFT JOIN FGE50FM0A8.GESUPE pe
ON pe.numliv = ve.numliv AND pe.typsup = 1 AND pe.TOPMNQ = 0 AND pe.cumlog > 0 AND PE.TRTCLS <> '*SP'
LEFT JOIN FGE50FM0A8.GETOUD TD
ON TD.NUMLIV = PE.NUMLIV AND TD.SNULIV = PE.SNULIV
LEFT JOIN FGE50FM0A8.GETOUE TE
ON TE.NUMTOU = TD.NUMTOU AND TE.ETATOU = '40'
LEFT JOIN FGE50FM0A8.GETRA TR
ON TD.codtra = TR.codtra
LEFT JOIN FGE50FM0A8.GEZEMB em
ON em.codemb = pe.codemb
LEFT JOIN FGE50FM0A8.GEACT GA
ON ve.codact = ga.codact
JOIN
(
	SELECT  numliv
	       ,snuliv
	       ,MAX( CASE WHEN CODRUB = 'DT01' THEN trim(VALRUB) else '' end)  AS NF_Dta
	       ,MAX( CASE WHEN CODRUB = 'NF01' THEN trim(VALRUB) else '' end)  AS NF_Nro
	       ,MAX( CASE WHEN CODRUB = 'PS01' THEN trim(VALRUB) else '' end)  AS NF_Peso
	       ,MAX( CASE WHEN CODRUB = 'SE01' THEN trim(VALRUB) else '' end)  AS NF_Serie
	       ,MAX( CASE WHEN CODRUB = 'SOLD' THEN trim(VALRUB) else '' end)  AS NF_Cliente
	       ,MAX( CASE WHEN CODRUB = 'VL01' THEN trim(VALRUB) else '' end)  AS NF_ValorTotal
	       ,MAX( CASE WHEN CODRUB = 'VO01' THEN trim(VALRUB) else '' end)  AS NF_Volume
	       ,MAX( CASE WHEN CODRUB = 'XPT1' THEN trim(VALRUB) else '' end)  AS NF_Protocolo
	       ,MAX( CASE WHEN CODRUB = 'XTP1' THEN trim(VALRUB) else '' end)  AS NF_Data_Protocolo
	       ,MAX( CASE WHEN CODRUB = 'XTP1' THEN trim(VALRUB) else '' end)  AS NF_TpEmissao
	       ,MAX( CASE WHEN CODRUB = 'TSRV' THEN trim(VALRUB) else '' end)  AS ServicoEnvio
	       ,MAX( CASE WHEN CODRUB = 'RAST.' THEN trim(VALRUB) else '' end) AS Objeto
	       ,MAX( CASE WHEN CODRUB = 'STAD' THEN trim(VALRUB) else '' end)  AS Dest_End
	       ,MAX( CASE WHEN CODRUB = 'STNU' THEN trim(VALRUB) else '' end)  AS Dest_End_Nro
	       ,MAX( CASE WHEN CODRUB = 'STEC' THEN trim(VALRUB) else '' end)  AS Dest_Complemento
	       ,MAX( CASE WHEN CODRUB = 'STCI' THEN trim(VALRUB) else '' end)  AS Dest_Cidade
	       ,MAX( CASE WHEN CODRUB = 'STES' THEN trim(VALRUB) else '' end)  AS Dest_UF
	FROM FGE50FM0A8.GELIRUB
	GROUP BY  numliv
	         ,snuliv
) nf
ON nf.numliv = ve.numliv AND nf.snuliv = ve.snuliv
WHERE ve.codact = 'VEJ'
AND ve.codtli = 'EC'
AND trim(ve.REFLIV) = '87012168'
ORDER BY 1 
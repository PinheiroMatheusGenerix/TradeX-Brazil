SELECT  Planta
       ,Ordem_Carga
       ,Pedido
       ,to_date(datliv || left(heiliv || '000000',6),'YYYY-MM-DD hh24:mi:ss') AS Data_pedido
       ,to_date(datsup2 || '000000','YYYY-MM-DD hh24:mi:ss')                  AS Data_Separacao
       ,Tipo
       ,Sigla_Rota
       ,Expedicao
       ,Sku
       ,Lote
       ,Produto
       ,SUM(UVCCDE)                                                           AS Encomenda
       ,SUM(UVCMNQ)                                                           AS Falta
       ,SUM(uvcliv)                                                           AS Separado
       ,Proprietario
FROM
(
	SELECT  ml.CODACT                                                                                                                                  AS planta
	       ,trim(ml.criliv)                                                                                                                            AS Ordem_Carga
	       ,case md.indmas WHEN '3' THEN trim(replace(d.Refliv,trim(ml.criliv )|| '.','')) else trim(replace(md.Refliv,trim(ml.criliv) || '.','')) end AS Pedido
	       ,ml.datliv
	       ,CASE WHEN length(ml.heiliv) <= 3 THEN right('0000' || ml.heiliv,4) END                                                                     AS heiliv
	       ,mh.datsup2
	       ,ml.CODMOP                                                                                                                                  AS Tipo
	       ,ml.codtra                                                                                                                                  AS Sigla_Rota
	       ,CASE WHEN ml.TOULIV = 0 THEN ''  ELSE mh.NUMTOU || ' - ' || VARCHAR_FORMAT(ml.TOULIV) END                                                  AS Expedicao
	       ,md.codpro                                                                                                                                  AS Sku
	       ,trim(MD.DS1PRO) || trim(MD.DS2PRO)                                                                                                         AS produto
	       ,md.codlot                                                                                                                                  AS Lote
	       ,case md.indmas WHEN '3' THEN d.SEQLIV else md.SEQLIV end                                                                                   AS seqliv
	       ,MAX(case md.indmas WHEN '3' THEN d.UVCCDE else md.UVCCDE end)                                                                              AS UVCCDE
	       ,SUM(case md.indmas WHEN '3' THEN d.UVCMNQ else md.UVCMNQ end)                                                                              AS UVCMNQ
	       ,SUM(case md.indmas WHEN '3' THEN d.uvcliv else md.uvcliv end)                                                                              AS uvcliv
	       ,trim(C.CODCLI) || ' - ' || C.NOMCLI                                                                                                        AS PROPRIETARIO
	FROM FGE50FM0NS.GESUPD md
	INNER JOIN FGE50FM0NS.GESUPE mh
	ON md.numsup = mh.numsup
	INNER JOIN FGE50FM0NS.GELIVE ml
	ON ml.numliv = mh.numliv
	LEFT JOIN FGE50FM0NS.GESUPD d
	ON d.CPTMAS = md.CPTMAS AND d.indMas = '1' AND d.CPTMAS > 0
	LEFT JOIN FGE50FM0NS.GECLI C
	ON md.CODACT = C.CODACT AND md.CODCLI = C.CODCLI
	WHERE mh.typsup IN (1, 2)
	AND md.indMas <> '1'
	AND ml.CODACT = 'HAR'
	AND ml.datliv >= 20251117
	AND ml.datliv <= 20251117
	GROUP BY  ml.CODACT
	         ,trim(ml.criliv)
	         ,case md.indmas WHEN '3' THEN trim(replace(d.Refliv,trim(ml.criliv )|| '.','')) else trim(replace(md.Refliv,trim(ml.criliv) || '.','')) end
	         ,ml.datliv
	         ,ml.heiliv
	         ,mh.datsup2
	         ,ml.CODMOP
	         ,ml.codtra
	         ,CASE WHEN ml.TOULIV = 0 THEN ''  ELSE mh.NUMTOU || ' - ' || VARCHAR_FORMAT(ml.TOULIV) END
	         ,md.codpro
	         ,trim(MD.DS1PRO) || trim(MD.DS2PRO)
	         ,md.codlot
	         ,case md.indmas WHEN '3' THEN d.SEQLIV else md.SEQLIV end
	         ,trim(C.CODCLI) || ' - ' || C.NOMCLI
) ped
WHERE 1 = 1
GROUP BY  Planta
         ,Ordem_Carga
         ,Pedido
         ,datliv
         ,heiliv
         ,datsup2
         ,Tipo
         ,Sigla_Rota
         ,Expedicao
         ,Sku
         ,produto
         ,Lote
         ,Proprietario
ORDER BY  4
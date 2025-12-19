--HARMAN
SELECT  PLANTA
       ,ORIGEM
       ,PEDIDO
       ,TIPO_PEDIDO
       ,NUMERO_NF
       ,VOLUME_NF
       ,CLIENTE
       ,MAX(DATA_INTERFACE)                                                                                 AS DATA_INTERFACE
       ,DATA_ENTREGA
       ,NUMERO_ONDA
       ,DATA_ONDA
       ,QTD_ITENS
       ,QTD_SKU
       ,MAX(DOCA)                                                                                           AS DOCA
       ,MAX(ROTA)                                                                                           AS ROTA
       ,MAX(REGIAO)                                                                                         AS REGIAO
       ,MAX(NOMTRA)                                                                                         AS NOMTRA
       ,MIN(DATA_EXPEDICAO)                                                                                 AS DATA_EXPEDICAO
       ,MAX(REFERENCIA)                                                                                     AS REFERENCIA
       ,MAX(VOLUME_ONDA)                                                                                    AS VOLUME_ONDA
       ,MAX(DOCA_EXP)                                                                                       AS DOCA_EXP
       ,MAX(DATA_SEP_INI)                                                                                   AS DATA_SEP_INI
       ,MAX(DATA_SEP_FIM)                                                                                   AS DATA_SEP_FIM
       ,MAX(STATUS)                                                                                         AS STATUS
       ,MAX(QTD_PECAS)                                                                                      AS QTD_PECAS
       ,SUM(PECAS_A_PREPARAR_CASE)                                                                          AS PECAS_A_PREPARAR_CASE
       ,SUM(PECAS_A_PREPARAR_AEREO)                                                                         AS PECAS_A_PREPARAR_AEREO
       ,SUM(PECAS_EM_PREPARACAO)                                                                            AS PECAS_EM_PREPARACAO
       ,SUM(PECAS_PENDENTE_BANCADA)                                                                         AS PECAS_PENDENTE_BANCADA
       ,SUM(PECAS_VALIDADA_DOCA)                                                                            AS PECAS_VALIDADA_DOCA
       ,SUM(PECAS_EXPEDIDA)                                                                                 AS PECAS_EXPEDIDA
       ,SUM(SUPORTES)                                                                                       AS SUPORTES
       ,SUM(SUPORTE_EM_PREPARACAO)                                                                          AS SUPORTE_EM_PREPARACAO
       ,SUM(SUPORTE_SEPARADO)                                                                               AS SUPORTE_SEPARADO
       ,SUM(SUPORTE_FINALIZADO)                                                                             AS SUPORTE_FINALIZADO
       ,cast(cast(SUM(PECAS_VALIDADA_DOCA) AS float) / cast(SUM(QTD_PECAS) AS float) * 100 AS decimal(5,2)) AS PERC_CONCLUIDO
       ,cast(cast(SUM(Suporte_Finalizado) AS float) / cast(SUM(Suportes) AS float) * 100 AS decimal(5,2))   AS PERC_SUP_FINALIZADO
       ,''                                                                                                  AS PROPRIETARIO
       ,DATA_ITF_NF
FROM
(
	SELECT  z.PLANTA
	       ,z.ORIGEM
	       ,z.PEDIDO
	       ,z.CODTLI AS Tipo_Pedido
	       ,(
	SELECT  MIN(r.valrub)
	FROM FGE50FM0NS.GELIRUB r
	INNER JOIN FGE50FM0NS.GELIVE G
	ON G.NUMLIV = R.NUMLIV
	WHERE replace(REPLACE(G.REFLIV, 'UN', ''), 'CX', '') = z.PEDIDO
	AND r.codrub = 'NF01') AS Numero_NF , (
	SELECT  MIN(r.valrub)
	FROM FGE50FM0NS.GELIRUB r
	INNER JOIN FGE50FM0NS.GELIVE G
	ON G.NUMLIV = R.NUMLIV
	WHERE replace(REPLACE(G.REFLIV, 'UN', ''), 'CX', '') = z.PEDIDO
	AND r.codrub = 'VO01') AS Volume_NF , z.CLIENTE, z.DATA_INTERFACE, z.DATA_ENTREGA, z.NUMERO_ONDA, z.DATA_ONDA, z.DATA_SEP_INI, z.DATA_SEP_FIM , (CASE WHEN z.ETAINI = 00 THEN '00-Integrado' WHEN z.ETAINI = 05 THEN '05-Onda a lançar' WHEN z.ETAINI = 07 THEN '07-Onda em Penúria' WHEN z.ETAINI = 09 THEN '09-Massificação' WHEN z.ETAINI = 10
	AND z.ETAFIM = 10 THEN '10-Onda a preparar' WHEN z.ETAINI = 10
	AND z.ETAFIM > 10 THEN '20-Em preparação' WHEN z.ETAINI = 20 THEN '20-Em preparação' WHEN z.ETAINI = 25 THEN '25-Pendente Bancada' WHEN z.ETAINI = 30 THEN '30-Validado Doca' WHEN z.ETAINI = 40 THEN '40-Veiculo Carregado' WHEN z.ETAINI = 50 THEN '50-Expedido' WHEN z.ETAINI = 60 THEN '60-Rearmazenado' WHEN z.ETAINI = 70 THEN '70-Embalado' WHEN z.ETAINI = 90 THEN '90-Cancelado' else VARCHAR_FORMAT(z.etaini) end ) AS Status , (
	SELECT  MIN(r.valrub)
	FROM FGE50FM0NS.GELIRUB r
	INNER JOIN FGE50FM0NS.GELIVE G
	ON G.NUMLIV = R.NUMLIV
	WHERE replace(REPLACE(G.REFLIV, 'UN', ''), 'CX', '') = z.PEDIDO
	AND r.codrub = 'QLIN') AS QTD_ITENS , (
	SELECT  COUNT(distinct d.codpro)
	FROM FGE50FM0NS.gelivd d
	INNER JOIN FGE50FM0NS.GELIVE G
	ON G.NUMLIV = d.NUMLIV
	WHERE replace(REPLACE(G.REFLIV, 'UN', ''), 'CX', '') = z.PEDIDO
	AND z.DATLIV = g.DATLIV) AS QTD_SKU , z.QTD_PECAS , z.PECAS_A_PREPARAR_CASE , z.PECAS_A_PREPARAR_AEREO , z.PECAS_EM_PREPARACAO , z.PECAS_PENDENTE_BANCADA , z.PECAS_VALIDADA_DOCA , cast(cast(z.PECAS_VALIDADA_DOCA AS float) / cast(z.QTD_PECAS AS float) * 100 AS decimal(5, 2)) AS PERC_CONCLUIDO , z.PECAS_EXPEDIDA , z.Suportes , z.Suporte_Em_preparacao , z.Suporte_Separado , z.Suporte_Finalizado , cast(cast(z.Suporte_Finalizado AS float) / cast(z.Suportes AS float) * 100 AS decimal(5, 2)) AS PERC_SUP_FINALIZADO , z.DOCA, z.ROTA, z.REGIAO, z.NOMTRA, z.DATA_EXPEDICAO, z.REFERENCIA, vol.VOLUME_ONDA , (
	SELECT  MAX(kailiv)
	FROM FGE50FM0NS.GETOUD d
	WHERE d.numvag = z.NUMERO_ONDA
	AND d.CodCli = 'MASSIFICATION') AS DOCA_EXP, (
	SELECT  to_date(r.majcre || right('000000' || r.majhms,6),'YYYY-MM-DD hh24:mi:ss')
	FROM FGE50FM0NS.GELIRUB r
	WHERE numliv = z.numliv
	AND r.codrub = 'NF01') DATA_ITF_NF
	FROM
	(
		SELECT  ge.codact                                                                                                                          AS Planta
		       ,case ge.ORICDE WHEN 1 THEN 'Interface' else 'Manual' end                                                                           AS Origem
		       ,replace(REPLACE(GE.REFLIV,'UN',''),'CX','')                                                                                        AS PEDIDO
		       ,ge.Nomcli                                                                                                                          AS Cliente
		       ,GE.NUMVAG                                                                                                                          AS ONDA
		       ,ge.numliv
		       ,CASE WHEN ge.codtli = 'STD' THEN 'VD'  ELSE ge.codtli END                                                                          AS codtli
		       ,to_date(ge.datExc || right('000000' || ge.heuExc,6),'YYYY-MM-DD hh24:mi:ss')                                                       AS DATA_INTERFACE
		       ,to_date(ge.datliv || right('0000' || ge.heiliv,4) || '00','YYYY-MM-DD hh24:mi:ss')                                                 AS DATA_ENTREGA
		       ,ge.numvag                                                                                                                          AS Numero_Onda
		       ,MIN(case WHEN o.majcre > 0 THEN to_date(o.majcre || right('000000' || o.majhms,6),'YYYY-MM-DD hh24:mi:ss') else null end)          AS DATA_ONDA
		       ,MIN(case WHEN u.datsup1 > 0 THEN to_date(u.datsup1 || right('000000' || u.HeuSup1,6),'YYYY-MM-DD hh24:mi:ss') else null end)       AS DATA_Sep_Ini
		       ,MAX(case WHEN u.datsup2 > 0 THEN to_date(u.datsup2 || right('000000' || u.HeuSup2,6),'YYYY-MM-DD hh24:mi:ss') else null end)       AS DATA_Sep_Fim
		       ,MIN(CASE WHEN ge.etaliv <= 10 THEN 00 WHEN ge.etaliv = 20 THEN 05 WHEN ge.etaliv >= 90 THEN 90 WHEN o.ETAVAG = 25 THEN 07 WHEN u.ETASUP <= 10 THEN 10 WHEN u.ETASUP = 20 THEN 20 WHEN u.ETASUP = 30 AND upper(k.LIBKAI) not LIKE '%BANC%' AND q.numsup is null THEN 30 WHEN u.ETASUP = 30 AND upper(k.LIBKAI) not LIKE '%BANC%' AND q.numsup is not null AND q.etactl < 40 THEN 30 WHEN u.ETASUP = 30 AND upper(k.LIBKAI) LIKE '%BANC%' AND U.CODLDP <> 'PCK' THEN 25 WHEN u.ETASUP = 30 AND upper(k.LIBKAI) LIKE '%BANC%' AND U.CODLDP = 'PCK' THEN 30 WHEN u.ETASUP = 40 THEN 40 WHEN u.ETASUP = 50 THEN 50 WHEN u.ETASUP = 60 THEN 60 WHEN u.ETASUP = 70 THEN 70 WHEN u.ETASUP >= 90 THEN 90 WHEN u.ETASUP is null THEN 09 else u.etasup END) AS ETAINI
		       ,MAX(CASE WHEN ge.etaliv <= 10 THEN 00 WHEN ge.etaliv = 20 THEN 05 WHEN ge.etaliv >= 90 THEN 90 WHEN o.ETAVAG = 25 THEN 07 WHEN u.ETASUP <= 10 THEN 10 WHEN u.ETASUP = 20 THEN 20 WHEN u.ETASUP = 30 AND upper(k.LIBKAI) not LIKE '%BANC%' AND q.numsup is null THEN 30 WHEN u.ETASUP = 30 AND upper(k.LIBKAI) not LIKE '%BANC%' AND q.numsup is not null AND q.etactl < 40 THEN 30 WHEN u.ETASUP = 30 AND upper(k.LIBKAI) LIKE '%BANC%' AND U.CODLDP <> 'PCK' THEN 25 WHEN u.ETASUP = 30 AND upper(k.LIBKAI) LIKE '%BANC%' AND U.CODLDP = 'PCK' THEN 30 WHEN u.ETASUP = 40 THEN 40 WHEN u.ETASUP = 50 THEN 50 WHEN u.ETASUP = 60 THEN 60 WHEN u.ETASUP = 70 THEN 70 WHEN u.ETASUP >= 90 THEN 90 WHEN u.ETASUP is null THEN 09 else u.etasup END) AS ETAFIM
		       ,SUM(s.uvcliv)                                                                                                                      AS QTD_PECAS
		       ,SUM(CASE WHEN ge.etaliv IN (30) AND u.ETASUP <= 10 AND c.TYPCIR = 1 THEN s.uvcliv else 0 end)                                      AS pecas_A_preparar_Case
		       ,SUM(CASE WHEN ge.etaliv IN (30) AND u.ETASUP <= 10 AND c.TYPCIR <> 1 THEN s.uvcliv else 0 end)                                     AS pecas_A_preparar_Aereo
		       ,SUM(CASE WHEN ge.etaliv IN (30) AND u.ETASUP = 20 THEN s.uvcliv else 0 end)                                                        AS pecas_Em_preparacao
		       ,SUM(CASE WHEN ge.etaliv IN (30) AND u.ETASUP = 30 AND upper(k.LIBKAI) LIKE '%BANC%' AND U.CODLDP <> 'PCK'then s.uvcliv else 0 end) AS pecas_pendente_Bancada
		       ,SUM(CASE WHEN(ge.etaliv IN (30) AND u.ETASUP = 30 AND upper(k.LIBKAI) LIKE '%BANC%' AND U.CODLDP = 'PCK') or(ge.etaliv IN (30) AND u.ETASUP = 30 AND upper(k.LIBKAI) not LIKE '%BANC%') THEN s.uvcliv else 0 end) AS pecas_Validada_Doca
		       ,SUM(CASE WHEN ge.etaliv IN (30) AND u.ETASUP = 50 THEN s.uvcliv else 0 end)                                                        AS pecas_Expedida
		       ,COUNT(distinct u.numsup)                                                                                                           AS Suportes
		       ,COUNT(distinct(CASE WHEN u.ETASUP = 20 THEN s.numsup else null end))                                                               AS Suporte_Em_preparacao
		       ,COUNT(distinct(CASE WHEN u.ETASUP = 30 THEN s.numsup else null end))                                                               AS Suporte_Separado
		       ,COUNT(distinct(CASE WHEN u.ETASUP = 30 AND upper(k.LIBKAI) not LIKE '%BANC%' AND q.numsup is not null AND q.etactl = 40 THEN s.numsup else null end)) + COUNT(distinct(CASE WHEN u.ETASUP = 30 AND upper(k.LIBKAI) not LIKE '%BANC%' AND q.numsup is null THEN s.numsup else null end)) AS Suporte_Finalizado
		       ,MIN(TRIM(K.LIBKAI))                                                                                                                AS DOCA
		       ,MAX(U.TOULIV)                                                                                                                      AS ROTA
		       ,MAX(ge.CODRGT)                                                                                                                     AS regiao
		       ,ge.Nomtra
		       ,MAX(case WHEN t.datexp > 0 THEN SUBSTR(T.DATEXP,7,2) || '/' || SUBSTR(T.DATEXP,5,2) || '/' || SUBSTR(T.DATEXP,1,4) else null end)  AS DATA_EXPEDICAO
		       ,MAX(case WHEN T.REFCNT <> '' THEN T.REFCNT WHEN T.MSGEXP1 <> '' THEN T.MSGEXP1 else ge.CRILIV end)                                 AS REFERENCIA
		       ,ge.DATLIV
		FROM FGE50FM0NS.GELIVE GE
		LEFT JOIN FGE50FM0NS.GESUPE u
		ON u.NUMLIV = ge.numliv AND u.TYPSUP IN (1, 2) AND u.topmnq = 0
		LEFT JOIN FGE50FM0NS.GESUPD s
		ON s.NUMSUP = u.numsup AND s.uvcliv > 0 AND s.indMas <> '1'
		LEFT JOIN FGE50FM0NS.GEZKAI K
		ON u.KAILIV = K.CODKAI
		LEFT JOIN FGE50FM0NS.GEZCIR c
		ON c.CIRPIC = u.CIRPIC
		LEFT JOIN FGE50FM0NS.GEVAG o
		ON o.numvag = ge.numvag
		LEFT JOIN FGE50FM0NS.GETOUE T
		ON t.TOULIV = ge.TOULIV AND t.DATLIV = ge.datliv AND ge.TOULIV <> 0 AND CAST(t.ETATOU AS INTEGER) > 0
		LEFT JOIN FGE50FM0NS.GECSUPE q
		ON q.numsup = u.numsup
		WHERE 1 = 1
		AND ge.CODACT = 'HAR'
		AND ge.datExc >= 20251117
		AND ge.datExc <= 20251117
		GROUP BY  ge.codact
		         ,ge.ORICDE
		         ,replace(REPLACE(GE.REFLIV,'UN',''),'CX','')
		         ,CASE WHEN ge.codtli = 'STD' THEN 'VD'  ELSE ge.codtli END
		         ,ge.numliv
		         ,ge.cumlig
		         ,ge.Nomcli
		         ,GE.MAJCRE
		         ,ge.datExc
		         ,ge.heuExc
		         ,ge.DATLIV
		         ,ge.heiliv
		         ,ge.Nomtra
		         ,ge.numvag
	) z
	LEFT JOIN
	(
		SELECT  x.numvag
		       ,SUM(x.volume) AS Volume_Onda
		       ,x.refliv
		FROM
		(
			SELECT  md.numvag
			       ,replace(replace(TRIM(md.refliv),'CX',''),'UN','')                                                     AS refliv
			       ,CEIL(SUM( case (md.indmas)when '3' then(d.uvcliv) else (md.uvcliv)end) / cast((md.PCBPRO) AS float) ) AS Volume
			FROM FGE50FM0NS.GESUPD md
			INNER JOIN FGE50FM0NS.GESUPE mh
			ON md.numsup = mh.numsup
			LEFT JOIN FGE50FM0NS.GESUPD d
			ON d.CPTMAS = md.CPTMAS AND d.indMas = '1' AND md.CPTMAS > 0
			WHERE Md.codact = 'HAR'
			AND mh.typsup IN (1, 2)
			AND md.uvcliv > 0
			AND mh.TOPMNQ = 0
			AND md.indMas <> '1'
			GROUP BY  md.CODPRO
			         ,md.PCBPRO
			         ,md.numvag
			         ,replace(replace(TRIM(md.refliv),'CX',''),'UN','')
		) x
		GROUP BY  x.numvag
		         ,x.refliv
	) AS vol
	ON vol.numvag = z.onda AND vol.refliv = z.pedido
) T
GROUP BY  PLANTA
         ,ORIGEM
         ,PEDIDO
         ,TIPO_PEDIDO
         ,NUMERO_NF
         ,VOLUME_NF
         ,CLIENTE
         ,DATA_ENTREGA
         ,NUMERO_ONDA
         ,DATA_ONDA
         ,QTD_ITENS
         ,QTD_SKU
         ,DATA_ITF_NF
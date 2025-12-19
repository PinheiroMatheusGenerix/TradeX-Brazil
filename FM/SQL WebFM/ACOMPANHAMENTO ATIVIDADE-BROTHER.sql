--BROTHER
SELECT  *
FROM
(
	SELECT  ped.PEDIDO
	       ,ped.EMISSAO_NF
	       ,ped.NOME_CLIENTE
	       ,ped.ONDA
	       ,ped.DATA_INTERFACE
	       ,ped.DATA_ENTREGA
	       ,ped.DATA_EXPEDICAO
	       ,CASE WHEN MIN(ETASUP) = 90 THEN '90-Cancelado'
	             WHEN MIN(ETASUP) = 00 THEN '01-Onda a Lançar'
	             WHEN MIN(ETASUP) = 07 THEN '05-Onda em Penúria'
	             WHEN MIN(ETASUP) = 09 THEN '07-Corte Onda'
	             WHEN GNRE = 'BLOQUEADO' THEN '09-Aguardando GNRE'
	             WHEN MIN(ETASUP) = 10 AND MAX(ETASUP) = 10 THEN '10-Onda a preparar'
	             WHEN MIN(ETASUP) = 10 AND MAX(ETASUP) > 10 THEN '20-Em preparação'
	             WHEN MIN(ETASUP) = 20 THEN '20-Em preparação'
	             WHEN MIN(ETASUP) = 25 THEN '25-Conferencia Bancada'
	             WHEN MIN(ETASUP) = 26 THEN '26-Conferencia Doca'
	             WHEN MIN(ETASUP) = 50 THEN '50-Expedido'
	             WHEN MIN(ETASUP) BETWEEN 30 AND 35 THEN '35-Aguardando Coleta'
	             WHEN MIN(ETASUP) = 40 THEN '40-Veiculo Carregado'
	             WHEN MIN(ETASUP) = 60 THEN '60-Rearmazenado'
	             WHEN MIN(ETASUP) = 70 THEN '70-Embalado'  ELSE VARCHAR_FORMAT(MIN(ETASUP)) END                                   AS Status
	       ,SUM(ped.TOT_LIN)                                                                                                      AS TOT_LIN
	       ,SUM(ped.TOT_PECA)                                                                                                     AS TOT_PECAS
	       ,SUM(ped.VOL_BANC)                                                                                                     AS VOL_BANC
	       ,SUM(ped.VOL_DOCA)                                                                                                     AS VOL_DOCA
	       ,SUM(ped.TOT_M3)                                                                                                       AS TOT_M3
	       ,SUM(case WHEN ped.ETASUP > 20 THEN ped.VOL_BANC + ped.VOL_DOCA else 0 end) / SUM( ped.VOL_BANC + ped.VOL_DOCA) * 100  AS Perc_Sep
	       ,SUM(case WHEN ped.ETASUP >= 30 THEN ped.VOL_BANC + ped.VOL_DOCA else 0 end) / SUM( ped.VOL_BANC + ped.VOL_DOCA) * 100 AS Perc_Conc
	       ,ped.REGIAO
	       ,ped.CARGA
	       ,ped.ROTA
	       ,ped.DOCA
	       ,ped.FRETE
	       ,ped.TRANSPORTADOR
	FROM
	(
		SELECT  ge.codact                                                                                                                            AS Planta
		       ,TRIM(ge.CODRGT)                                                                                                                      AS REGIAO
		       ,TRIM(ge.REFLIV)                                                                                                                      AS PEDIDO
		       ,nd.VALRUB                                                                                                                            AS EMISSAO_NF
		       ,trim(gn.VALRUB)                                                                                                                      AS GNRE
		       ,case fr.VALRUB WHEN '0' THEN 'CIF' WHEN '1' THEN 'FOB' WHEN '2' THEN 'Terceirtos' WHEN '3' THEN 'Próprio Remetente' WHEN '4' THEN 'Próprio Destinatário' WHEN '9' THEN 'Sem Transporte' else '' end AS FRETE
		       ,ge.Nomcli                                                                                                                            AS Nome_Cliente
		       ,ge.criliv                                                                                                                            AS carga
		       ,ge.NUMVAG                                                                                                                            AS ONDA
		       ,to_date(ge.datExc || '000000','YYYY-MM-DD hh24:mi:ss')                                                                               AS DATA_INTERFACE
		       ,to_date(ge.datliv || right('0000' || ge.heiliv,4) || '00','YYYY-MM-DD hh24:mi:ss')                                                   AS DATA_ENTREGA
		       ,MIN(case WHEN te.datexp > 0 THEN to_date(te.DATEXP || right('000000' || te.heuexp,6),'YYYY-MM-DD hh24:mi:ss') else null end)         AS DATA_EXPEDICAO
		       ,CASE WHEN ge.etaliv >= 90 THEN 90
		             WHEN ge.etaliv <= 10 THEN 00
		             WHEN o.ETAVAG = 25 THEN 07
		             WHEN ge.etaliv = 20 THEN 00
		             WHEN se.ETASUP <= 10 THEN 10
		             WHEN se.ETASUP = 20 THEN 20
		             WHEN se.ETASUP = 30 AND se.KAILIV <> 1 AND coalesce(pak.kailiv,0) <> 1 AND se.indpak <> '1' AND qe.numsup is null THEN 30
		             WHEN se.ETASUP = 30 AND se.KAILIV <> 1 AND coalesce(pak.kailiv,0) <> 1 AND se.indpak <> '1' AND qe.numsup is not null AND qe.etactl < 40 THEN 26
		             WHEN se.ETASUP = 30 AND se.KAILIV <> 1 AND coalesce(pak.kailiv,0) <> 1 AND se.indpak <> '1' AND qe.numsup is not null AND qe.etactl >= 40 THEN 30
		             WHEN se.ETASUP = 30 AND (se.KAILIV = 1 or coalesce(pak.kailiv,0) = 1) AND se.indpak <> '1' THEN 25
		             WHEN se.ETASUP = 30 AND se.indpak = '1' THEN 30
		             WHEN se.ETASUP = 40 THEN 40
		             WHEN se.ETASUP = 50 THEN 50
		             WHEN se.ETASUP = 60 THEN 60
		             WHEN se.ETASUP = 70 THEN 70
		             WHEN se.ETASUP >= 90 THEN 90
		             WHEN se.etasup is null THEN 09  ELSE se.etasup END                                                                              AS ETASUP
		       ,COUNT(Distinct sd.CODPRO)                                                                                                            AS TOT_LIN
		       ,SUM(sd.uvcliv)                                                                                                                       AS TOT_PECA
		       ,cast( CASE WHEN se.KAILIV = 1 or coalesce(pak.kailiv,0) = 1 or se.indpak = '1' THEN COUNT(distinct se.numsup) else 0 end AS integer) AS VOL_BANC
		       ,round(SUM(case WHEN se.KAILIV <> 1 AND coalesce(pak.kailiv,0) <> 1 AND se.indpak <> '1' AND sd.PRPPIC = 4 THEN sd.uvcliv / cast(sd.SPCPRO AS float) WHEN se.KAILIV <> 1 AND coalesce(pak.kailiv,0) <> 1 AND se.indpak <> '1' AND sd.PRPPIC <> 5 THEN sd.uvcliv / cast(sd.PCBPRO AS float) else 0 end),0) AS VOL_DOCA
		       ,SUM( CASE WHEN se.KAILIV = 1 or coalesce(pak.kailiv,0) = 1 or se.indpak = '1' THEN emb.lrgpal * emb.lngpal * emb.hauscl * 0.000001 ELSE cast((case WHEN p.VOLUVC <> 0 THEN p.VOLUVC else p.VOLCOL / p.PCBPRO end) * sd.uvcliv * 0.001 AS decimal(19,6)) END ) AS TOT_M3
		       ,MAX(td.kailiv)                                                                                                                       AS DOCA
		       ,ge.TOULIV                                                                                                                            AS ROTA
		       ,ge.Nomtra                                                                                                                            AS Transportador
		FROM FGE50FM0A9.GELIVE ge
		LEFT JOIN FGE50FM0A9.GELIRUB fr
		ON fr.codrub = 'MFRE' AND fr.numliv = ge.numliv
		LEFT JOIN FGE50FM0A9.GELIRUB nd
		ON nd.codrub = 'DT01' AND nd.numliv = ge.numliv
		LEFT JOIN FGE50FM0A9.GELIRUB gn
		ON gn.codrub = 'GNRE' AND gn.numliv = ge.numliv
		LEFT JOIN FGE50FM0A9.GESUPE se
		ON se.NUMLIV = ge.numliv AND se.TYPSUP IN (1, 2) AND se.topmnq = 0
		LEFT JOIN FGE50FM0A9.GESUPD sd
		ON sd.NUMSUP = se.numsup AND sd.uvcliv > 0
		LEFT JOIN FGE50FM0A9.GEPRO p
		ON p.codact = sd.codact AND p.codpro = sd.codpro
		LEFT JOIN FGE50FM0A9.GEVAG o
		ON o.numvag = ge.numvag
		LEFT JOIN FGE50FM0A9.GETOUD td
		ON td.numliv = ge.numliv
		LEFT JOIN FGE50FM0A9.GETOUE te
		ON te.numtou = td.numtou
		LEFT JOIN FGE50FM0A9.GESRKT pak
		ON pak.KAILIV = 1 AND pak.codkai = se.kailiv
		LEFT JOIN FGE50FM0A9.GEZEMB emb
		ON emb.CODEMB = se.CODEMB
		LEFT JOIN
		(
			SELECT  qe.numsup
			       ,MAX(qe.etactl) etactl
			FROM FGE50FM0A9.GECSUPE qe
			GROUP BY  qe.numsup
		) qe
		ON qe.numsup = se.numsup
		WHERE 1 = 1
		AND ge.codcli <> 'ETIQUETA'
		AND ge.CODACT = 'BRO'
		AND ge.datExc >= 20251117
		AND ge.datExc <= 20251117
		GROUP BY  ge.codact
		         ,TRIM(ge.CODRGT)
		         ,TRIM(ge.REFLIV)
		         ,fr.VALRUB
		         ,nd.VALRUB
		         ,gn.VALRUB
		         ,ge.Nomcli
		         ,ge.numvag
		         ,ge.numliv
		         ,ge.codmop
		         ,ge.datExc
		         ,ge.CUMUVC
		         ,ge.datliv
		         ,ge.heiliv
		         ,ge.Nomtra
		         ,ge.touliv
		         ,te.numtou
		         ,ge.criliv
		         ,gE.cumlig
		         ,se.KAILIV
		         ,pak.kailiv
		         ,se.indpak
		         ,ge.etaliv
		         ,o.ETAVAG
		         ,se.ETASUP
		         ,qe.numsup
		         ,qe.etactl
	) ped
	GROUP BY  ped.PEDIDO
	         ,ped.EMISSAO_NF
	         ,ped.GNRE
	         ,ped.FRETE
	         ,ped.NOME_CLIENTE
	         ,ped.CARGA
	         ,ped.ONDA
	         ,ped.DATA_INTERFACE
	         ,ped.DATA_ENTREGA
	         ,ped.DATA_EXPEDICAO
	         ,ped.DOCA
	         ,ped.REGIAO
	         ,ped.ROTA
	         ,ped.TRANSPORTADOR
) z
--Harman
SELECT  trim(act.libact)                            AS Embarcador
       ,replace(REPLACE(le.REFLIV,'UN',''),'CX','') AS NF
       ,te.NUMTOU                                   AS Num_Expedicao
       ,le.TOULIV                                   AS Num_Rota
       ,trim(tpt.libtpt)                            AS Tipo_Veiculo
       ,nvl( (
SELECT  MAX(kailiv)
FROM FGE50FM0NS.GETOUD d
WHERE d.numvag = le.numvag
AND d.CodCli = 'MASSIFICATION'), le.KAILIV) AS DOCA , trim(te.MSGEXP1) AS COD_VEICULO , to_date(le.datliv || right('0000' || le.heiliv, 4) || '00', 'YYYY-MM-DD hh24:mi:ss') AS DATA_AGENDAMENTO , to_date(te.datexp || right('000000'|| te.heuexp, 6) , 'YYYY-MM-DD hh24:mi:ss') AS DATA_EXPEDICAO , trim(le.criliv) AS ORDEM_CARGA , le.numvag AS Onda , le.NOMCLI AS Cliente , CASE WHEN le.datliv >= 0 THEN cli.AD3CLI else trim(le.vilcli) end AS Cidade , t.EDITRA AS TRANSP , trim(te.MSGEXP2) AS OBS , CASE WHEN le.codmop = 'ECO' THEN 'MERCADO INTERNO B2C' WHEN le.codmop = 'VEN' THEN 'MERCADO INTERNO B2B' WHEN le.codmop = 'VUN' THEN 'MERCADO INTERNO B2B' WHEN le.codmop = 'EXP' THEN 'EXPORTACAO' WHEN le.codmop = 'RET' THEN 'RETORNO' else '' end AS OBS_Atencao , SUM( sup.Tot_PCS ) AS Tot_UNID , SUM( sup.Tot_CXS ) AS Tot_CXS , cast(ru.valrub AS decimal(10, 3)) AS TOT_PESO , le.dipliv AS Chave_NFE , VARCHAR_FORMAT(null) AS Chave_NFE_Cod , 0 AS Qtd_Serie_Coletada , 'N' AS Exibir , case le.CODACT WHEN 'HAR' THEN case substr(MAX(le.codtli), 1, 1) WHEN 'G' THEN 'S' else 'N' end else case MAX(sup.codmdp) WHEN 'SER' THEN 'S' else 'N' end end AS Coleta_Serie
FROM FGE50FM0NS.GELIVE le
LEFT JOIN FGE50FM0NS.GETOUE te
ON te.TOULIV = le.TOULIV AND le.DATLIV = te.datliv AND le.TOULIV <> 0 AND cast(te.ETATOU AS integer) > 0 AND le.numvag > 0
LEFT JOIN FGE50FM0NS.GELIRUB ru
ON ru.numliv = le.numliv AND ru.codrub = 'PS01'
LEFT JOIN FGE50FM0NS.GETRA t
ON t.CODTRA = te.codtra
LEFT JOIN FGE50FM0NS.GEZTPT tpt
ON tpt.typtpt = te.typtpt
LEFT JOIN FGE50FM0NS.GEACT act
ON act.codact = le.codact
LEFT JOIN
(
	SELECT  md.numliv
	       ,md.codpro
	       ,SUM(md.uvcliv)                                    AS Tot_PCS
	       ,CEIL( cast( SUM(md.uvcliv) AS float) / md.PCBPRO) AS Tot_CXS
	       ,MAX(pr.codmdp)                                    AS codmdp
	FROM FGE50FM0NS.GESUPE mh
	JOIN FGE50FM0NS.GESUPD md
	ON md.numsup = mh.numsup AND md.uvcliv > 0 AND mh.typsup IN (1, 2)
	JOIN FGE50FM0NS.GEPRO pr
	ON md.codpro = pr.codpro AND mh.codact = pr.codact
	GROUP BY  md.numliv
	         ,md.codpro
	         ,md.PCBPRO
	         ,md.PDBCOL
) sup
ON sup.numliv = le.numliv
LEFT JOIN FGE50FM0NS.GECLI cli
ON cli.codcli = le.codcli
WHERE le.codact = 'HAR'
AND le.CODCLI <> 'MASSIFICATION'
AND trim(TE.NUMTOU) = '1111'
GROUP BY  le.CODACT
         ,trim(act.libact)
         ,replace(REPLACE(le.REFLIV,'UN',''),'CX','')
         ,te.NUMTOU
         ,le.TOULIV
         ,trim(tpt.libtpt)
         ,le.KAILIV
         ,trim(te.MSGEXP1)
         ,le.datliv
         ,le.heiliv
         ,te.datexp
         ,te.heuexp
         ,trim(le.criliv)
         ,le.numvag
         ,le.NOMCLI
         ,t.EDITRA
         ,trim(te.MSGEXP2)
         ,ru.valrub
         ,CASE WHEN le.datliv >= 0 THEN cli.AD3CLI  ELSE trim(le.vilcli) END
         ,CASE WHEN le.codmop = 'ECO' THEN 'MERCADO INTERNO B2C'
             WHEN le.codmop = 'VEN' THEN 'MERCADO INTERNO B2B'
             WHEN le.codmop = 'VUN' THEN 'MERCADO INTERNO B2B'
             WHEN le.codmop = 'EXP' THEN 'EXPORTACAO'
             WHEN le.codmop = 'RET' THEN 'RETORNO'  ELSE '' END
         ,le.dipliv
ORDER BY  2
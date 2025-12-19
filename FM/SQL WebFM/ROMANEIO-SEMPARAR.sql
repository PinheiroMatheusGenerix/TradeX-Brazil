--Sem Parar
SELECT  ml.CODACT                                                                         AS Embarcador
       ,trim(substr(trim(md.DIPLIV),19,6))                                                AS NF
       ,TE.NUMTOU                                                                         AS Num_Expedicao
       ,ml.TOULIV                                                                         AS Num_Rota
       ,case TE.ETATOU WHEN 00 THEN 'Em constituição' WHEN 10 THEN 'A preparar' WHEN 20 THEN 'Em preparação' WHEN 30 THEN 'Validada na Doca' WHEN 35 THEN 'Sinal de Partida' WHEN 40 THEN 'Expedida' WHEN 50 THEN 'Embalada' WHEN 60 THEN 'Rearmazenada' WHEN 90 THEN 'Anulada' End AS Status_Rota
       ,trim(TE.MSGEXP1)                                                                  AS COD_VEICULO
       ,trim(ml.dipliv)                                                                   AS RMS_VEICULO
       ,to_date(ml.datliv || right('0000'|| ml.heiliv,4) || '00','YYYY-MM-DD hh24:mi:ss') AS DATA_AGENDAMENTO
       ,trim(ml.criliv)                                                                   AS ORDEM_CARGA
       ,ml.numvag                                                                         AS Onda
       ,trim(ml.CODTRA)                                                                   AS Etiqueta
       ,ml.NOMCLI                                                                         AS Cliente
       ,trim(ml.Refliv)                                                                   AS Pedido
       ,trim(replace(ml.CODTRA,trim(ml.CODRGT)|| '-',''))                                 AS Sigla_Rota
       ,trim(TE.MSGEXP1) || ml.datliv || right('0000'|| ml.heiliv,4) || '00'              AS NRO_CONSOLIDADO
       ,cast(substr(trim(md.DIPLIV),13,5) AS int)                                         AS TOT_CXS
       ,t.NomTra                                                                          AS TRANSP
       ,cast((
SELECT  CAST(VALRUB AS FLOAT) / 10000
FROM FGE50FM0A3.GELIRUB
WHERE NUMLIV = ML.NUMLIV
AND CODRUB = 'P001') AS decimal(15, 4)) AS TOT_PESO , case mop.SRVUVC WHEN '1' THEN cast(SUM((md.uvcliv / md.PCBPRO) * md.VOLCOL * 0.001) AS decimal(10, 6)) else cast(SUM( cast(substr(trim(md.dipliv), 07, 5) AS int) * md.VOLCOL) * 0.001 AS decimal(10, 6)) end AS TOT_VOL
FROM FGE50FM0A3.GELIVE ml
LEFT JOIN FGE50FM0A3.GESUPE mh
ON mh.numliv = ml.numliv AND mh.typsup IN (1, 2)
LEFT JOIN FGE50FM0A3.GESUPD md
ON md.numsup = mh.numsup AND md.uvcliv > 0
LEFT JOIN FGE50FM0A3.GECLI c
ON c.codcli = ml.CLILIV
LEFT JOIN FGE50FM0A3.GETOUE TE
ON TE.TOULIV = ml.TOULIV AND TE.DATLIV = ml.datliv AND ml.TOULIV <> 0
LEFT JOIN FGE50FM0A3.GETRA t
ON t.CODTRA = TE.codtra
LEFT JOIN FGE50FM0A3.GEZMOP mop
ON MOP.CODMOP = ML.CODMOP
WHERE ml.codact = 'SEM'
AND ml.CODCLI <> 'MASSIFICATION'
AND md.DIPLIV <> ''
AND exists(
SELECT  1
FROM FGE50FM0A3.GELIRUB
WHERE NUMLIV = ml.numliv
AND CODRUB = 'I001') AND trim(TE.NUMTOU) = '1111'
GROUP BY  mop.SRVUVC
         ,ml.CODACT
         ,TE.NUMTOU
         ,ml.TOULIV
         ,case TE.ETATOU WHEN 00 THEN 'Em constituição' WHEN 10 THEN 'A preparar' WHEN 20 THEN 'Em preparação' WHEN 30 THEN 'Validada na Doca' WHEN 35 THEN 'Sinal de Partida' WHEN 40 THEN 'Expedida' WHEN 50 THEN 'Embalada' WHEN 60 THEN 'Rearmazenada' WHEN 90 THEN 'Anulada' End
         ,trim(TE.MSGEXP1)
         ,trim(ml.dipliv)
         ,ml.datliv
         ,ml.heiliv
         ,/*mh.KAILIV
         ,*/ t.NomTra
         ,trim(ml.criliv)
         ,ml.numvag
         ,trim(ml.CODTRA)
         ,ml.NOMCLI
         ,trim(ml.Refliv)
         ,ML.NUMLIV
         ,trim(replace(ml.CODTRA,trim(ml.CODRGT)|| '-',''))
         ,cast(substr(trim(md.DIPLIV),13,5) AS int)
         ,trim(substr(trim(md.DIPLIV),19,6))
         ,trim(TE.MSGEXP1) || ml.datliv || right('0000'|| ml.heiliv,4) || '00'
UNION ALL
SELECT  ml.CODACT                                                                         AS Embarcador
       ,trim(substr(trim(md.MSGLIG),19,6))                                                AS NF
       ,TE.NUMTOU                                                                         AS Num_Expedicao
       ,ml.TOULIV                                                                         AS Num_Rota
       ,case TE.ETATOU WHEN 00 THEN 'Em constituição' WHEN 10 THEN 'A preparar' WHEN 20 THEN 'Em preparação' WHEN 30 THEN 'Validada na Doca' WHEN 35 THEN 'Sinal de Partida' WHEN 40 THEN 'Expedida' WHEN 50 THEN 'Embalada' WHEN 60 THEN 'Rearmazenada' WHEN 90 THEN 'Anulada' End AS Status_Rota
       ,trim(TE.MSGEXP1)                                                                  AS COD_VEICULO
       ,trim(ml.dipliv)                                                                   AS RMS_VEICULO
       ,to_date(ml.datliv || right('0000'|| ml.heiliv,4) || '00','YYYY-MM-DD hh24:mi:ss') AS DATA_AGENDAMENTO
       ,trim(ml.criliv)                                                                   AS ORDEM_CARGA
       ,ml.numvag                                                                         AS Onda
       ,trim(ml.CODTRA)                                                                   AS Etiqueta
       ,ml.NOMCLI                                                                         AS Cliente
       ,trim(ml.Refliv)                                                                   AS Pedido
       ,trim(replace(ml.CODTRA,trim(ml.CODRGT)|| '-',''))                                 AS Sigla_Rota
       ,trim(TE.MSGEXP1) || ml.datliv || right('0000'|| ml.heiliv,4) || '00'              AS NRO_CONSOLIDADO
       ,cast(substr(trim(md.MSGLIG),13,5) AS int)                                         AS TOT_CXS
       ,t.NomTra                                                                          AS TRANSP
       ,cast((
SELECT  CAST(VALRUB AS FLOAT) / 10000
FROM FGE50FM0A3.GELIRUB
WHERE NUMLIV = ML.NUMLIV
AND CODRUB = 'P002') AS decimal(15, 4)) AS TOT_PESO , case mop.SRVUVC WHEN '1' THEN cast(SUM( (md.uvcliv / md.PCBPRO) * md.VOLCOL * 0.001) AS decimal(10, 6)) else cast(SUM( cast(substr(trim(md.MSGLIG), 07, 5) AS int) * md.VOLCOL) * 0.001 AS decimal(10, 6)) end AS TOT_VOL
FROM FGE50FM0A3.GELIVE ml
LEFT JOIN FGE50FM0A3.GESUPE mh
ON mh.numliv = ml.numliv AND mh.typsup IN (1, 2)
LEFT JOIN FGE50FM0A3.GESUPD md
ON md.numsup = mh.numsup AND md.uvcliv > 0
LEFT JOIN FGE50FM0A3.GECLI c
ON c.codcli = ml.CLILIV
LEFT JOIN FGE50FM0A3.GETOUE TE
ON TE.TOULIV = ml.TOULIV AND TE.DATLIV = ml.datliv AND ml.TOULIV <> 0
LEFT JOIN FGE50FM0A3.GETRA t
ON t.CODTRA = TE.codtra
LEFT JOIN FGE50FM0A3.GEZMOP mop
ON MOP.CODMOP = ML.CODMOP
WHERE ml.CODCLI <> 'MASSIFICATION'
AND ml.codact = 'SEM'
AND trim(md.msglig) <> ''
AND exists(
SELECT  1
FROM FGE50FM0A3.GELIRUB
WHERE NUMLIV = ml.numliv
AND CODRUB = 'I002') AND trim(TE.NUMTOU) = '1111'
GROUP BY  mop.SRVUVC
         ,ml.CODACT
         ,TE.NUMTOU
         ,ml.TOULIV
         ,case TE.ETATOU WHEN 00 THEN 'Em constituição' WHEN 10 THEN 'A preparar' WHEN 20 THEN 'Em preparação' WHEN 30 THEN 'Validada na Doca' WHEN 35 THEN 'Sinal de Partida' WHEN 40 THEN 'Expedida' WHEN 50 THEN 'Embalada' WHEN 60 THEN 'Rearmazenada' WHEN 90 THEN 'Anulada' End
         ,trim(TE.MSGEXP1)
         ,trim(ml.dipliv)
         ,ml.datliv
         ,ml.heiliv
         ,/*mh.KAILIV
         ,*/ t.NomTra
         ,trim(ml.criliv)
         ,ml.numvag
         ,trim(ml.CODTRA)
         ,ml.NOMCLI
         ,trim(ml.Refliv)
         ,ML.NUMLIV
         ,trim(replace(ml.CODTRA,trim(ml.CODRGT)|| '-',''))
         ,cast(substr(trim(md.MSGLIG),13,5) AS int)
         ,trim(substr(trim(md.MSGLIG),19,6))
         ,trim(TE.MSGEXP1) || ml.datliv || right('0000'|| ml.heiliv,4) || '00'
UNION ALL
SELECT  ml.CODACT                                                                         AS Embarcador
       ,trim(substr(trim(md.ZONSPF),19,6))                                                AS NF
       ,TE.NUMTOU                                                                         AS Num_Expedicao
       ,ml.TOULIV                                                                         AS Num_Rota
       ,case TE.ETATOU WHEN 00 THEN 'Em constituição' WHEN 10 THEN 'A preparar' WHEN 20 THEN 'Em preparação' WHEN 30 THEN 'Validada na Doca' WHEN 35 THEN 'Sinal de Partida' WHEN 40 THEN 'Expedida' WHEN 50 THEN 'Embalada' WHEN 60 THEN 'Rearmazenada' WHEN 90 THEN 'Anulada' End AS Status_Rota
       ,trim(TE.MSGEXP1)                                                                  AS COD_VEICULO
       ,trim(ml.dipliv)                                                                   AS RMS_VEICULO
       ,to_date(ml.datliv || right('0000'|| ml.heiliv,4) || '00','YYYY-MM-DD hh24:mi:ss') AS DATA_AGENDAMENTO
       ,trim(ml.criliv)                                                                   AS ORDEM_CARGA
       ,ml.numvag                                                                         AS Onda
       ,trim(ml.CODTRA)                                                                   AS Etiqueta
       ,ml.NOMCLI                                                                         AS Cliente
       ,trim(ml.Refliv)                                                                   AS Pedido
       ,trim(replace(ml.CODTRA,trim(ml.CODRGT)|| '-',''))                                 AS Sigla_Rota
       ,trim(TE.MSGEXP1) || ml.datliv || right('0000'|| ml.heiliv,4) || '00'              AS NRO_CONSOLIDADO
       ,cast(substr(trim(md.ZONSPF),13,5) AS int)                                         AS TOT_CXS
       ,t.NomTra                                                                          AS TRANSP
       ,cast((
SELECT  CAST(VALRUB AS FLOAT) / 10000
FROM FGE50FM0A3.GELIRUB
WHERE NUMLIV = ML.NUMLIV
AND CODRUB = 'P003') AS decimal(15, 4)) AS TOT_PESO , case mop.SRVUVC WHEN '1' THEN cast(SUM( (md.uvcliv / md.PCBPRO) * md.VOLCOL * 0.001) AS decimal(10, 6)) else cast(SUM( cast(substr(trim(md.ZONSPF), 07, 5) AS int) * md.VOLCOL) * 0.001 AS decimal(10, 6)) end AS TOT_VOL
FROM FGE50FM0A3.GELIVE ml
LEFT JOIN FGE50FM0A3.GESUPE mh
ON mh.numliv = ml.numliv AND mh.typsup IN (1, 2)
LEFT JOIN FGE50FM0A3.GESUPD md
ON md.numsup = mh.numsup AND md.uvcliv > 0
LEFT JOIN FGE50FM0A3.GECLI c
ON c.codcli = ml.CLILIV
LEFT JOIN FGE50FM0A3.GETOUE TE
ON TE.TOULIV = ml.TOULIV AND TE.DATLIV = ml.datliv AND ml.TOULIV <> 0
LEFT JOIN FGE50FM0A3.GETRA t
ON t.CODTRA = TE.codtra
LEFT JOIN FGE50FM0A3.GEZMOP mop
ON MOP.CODMOP = ML.CODMOP
WHERE ml.CODCLI <> 'MASSIFICATION'
AND ml.codact = 'SEM'
AND trim(md.ZONSPF) <> ''
AND exists(
SELECT  1
FROM FGE50FM0A3.GELIRUB
WHERE NUMLIV = ml.numliv
AND CODRUB = 'I003') AND trim(TE.NUMTOU) = '1111'
GROUP BY  mop.SRVUVC
         ,ml.CODACT
         ,TE.NUMTOU
         ,ml.TOULIV
         ,case TE.ETATOU WHEN 00 THEN 'Em constituição' WHEN 10 THEN 'A preparar' WHEN 20 THEN 'Em preparação' WHEN 30 THEN 'Validada na Doca' WHEN 35 THEN 'Sinal de Partida' WHEN 40 THEN 'Expedida' WHEN 50 THEN 'Embalada' WHEN 60 THEN 'Rearmazenada' WHEN 90 THEN 'Anulada' End
         ,trim(TE.MSGEXP1)
         ,trim(ml.dipliv)
         ,ml.datliv
         ,ml.heiliv
         ,/*mh.KAILIV
         ,*/ t.NomTra
         ,trim(ml.criliv)
         ,ml.numvag
         ,trim(ml.CODTRA)
         ,ml.NOMCLI
         ,trim(ml.Refliv)
         ,ML.NUMLIV
         ,trim(replace(ml.CODTRA,trim(ml.CODRGT)|| '-',''))
         ,cast(substr(trim(md.ZONSPF),13,5) AS int)
         ,trim(substr(trim(md.ZONSPF),19,6))
         ,trim(TE.MSGEXP1) || ml.datliv || right('0000'|| ml.heiliv,4) || '00'
         ,mh.KAILIV
         ,ml.vilcli
ORDER BY  2
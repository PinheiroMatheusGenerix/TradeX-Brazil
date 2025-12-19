SELECT  g.numrec
       ,g.refrec                                                                           AS NF
       ,G.CODTRE                                                                           AS TIPO_RECEBIMENTO
       ,case g.etarec WHEN '0' THEN '00-EM CURSO DE INTO' WHEN '10' THEN '10-A PLANIFICAR' WHEN '20' THEN '20-A RECEPCIONAR' WHEN '30' THEN '30-EM CURSO DE RECEPCAO' WHEN '35' THEN '35-BEING BROKEN DOWN' WHEN '40' THEN '40-RECEPCIONADA' WHEN '50' THEN '50-TRANSMITIDA POR GECOM' WHEN '90' THEN '90-ANULADA' WHEN '95' THEN '95-ARQUIVADA' end AS STATUS_NF
       ,gd.CODPRO                                                                          AS SKU
       ,trim(GD.DS1PRO) || trim(GD.DS2PRO)                                                 AS DESCRICAO
       ,gd.FAMPRO FAMILIA
       ,gd.CODLOT LOTE_NF
       ,gd.motimm STATUS_PROD
       ,SUM(CASE WHEN gd.pcbpro = 0 THEN 0 ELSE cast(gd.UVCREA/ gd.pcbpro AS integer) END) AS QTD_ESP_CX
       ,SUM(gd.UVCREA)                                                                     AS QTD_ESP_UN
       ,GP.CODPAL SSCC
       ,gp.motimm STATUS_PROD_REC
       ,(gp.uvcmvt/ gp.pcbpro)                                                             AS QTD_RECEBIDA
       ,(gp.uvcmvt) QTD_ESP_UN_DET
       ,(gp.uvcmvt/ gp.pcbpro) QTD_ESP_CX_DET
       ,SUBSTR(gd.datfvi,7,2) || '/' || SUBSTR(gd.datfvi,5,2) || '/' || SUBSTR(gd.datfvi,1,4) DATA_VALIDADE_ESP
       ,SUBSTR(gp.datfvi,7,2) || '/' || SUBSTR(gp.datfvi,5,2) || '/' || SUBSTR(gp.datfvi,1,4) DATA_VALIDADE_REC
FROM FGE50FM0A7.gerece g
INNER JOIN FGE50FM0A7.gerecd gd
ON gd.numrec = g.numrec AND gd.CODACT = g.codact
LEFT JOIN FGE50FM0A7.gerecp gp
ON g.codact = gp.codact AND g.numrec = gp.numrec AND gd.codpro = gp.codpro AND gd.codlot = gp.codlot
WHERE G.CODACT = 'MAR'
AND g.REFREC = '111'
GROUP BY  g.numrec
         ,g.refrec
         ,/*g.DTIREC
         ,*/ gd.CODPRO
         ,trim(GD.DS1PRO) || trim(GD.DS2PRO)
         ,gd.FAMPRO
         ,G.CODTRE
         ,g.etarec
         ,gd.CODLOT
         ,gd.motimm
         ,gd.datfvi
         ,GP.CODPAL
         ,gp.uvcmvt
         ,gp.pcbpro
         ,gp.motimm
         ,gp.datfvi
ORDER BY  g.refrec
         ,gd.CODPRO
         ,gd.CODLOT
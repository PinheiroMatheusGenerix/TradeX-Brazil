SELECT  gp.codpro SKU
       ,gp.codlot LOTE_NF
       ,trim(GP.DS1PRO) || trim(GP.DS2PRO) AS DESCRICAO
       ,gp.codpal SSCC
       ,SUBSTR(gp.datfvi,7,2) || '/' || SUBSTR(gp.datfvi,5,2) || '/' || SUBSTR(gp.datfvi,1,4) DATA_VALIDADE
       ,gp.motimm STATUS_PROD
       ,gp.uvcmvt QTD_ESP_UN
       ,CAST((gp.uvcmvt/ gp.pcbpro)        AS NUMERIC(10,0)) QTD_ESP_CX
FROM FGE50FM0A7.gerecp gp
WHERE gp.CODACT = 'MAR'
AND gp.REFREC = '111'
AND gp.codpro NOT IN ( SELECT distinct codpro FROM FGE50FM0A7.gerecd pp INNER JOIN FGE50FM0A7.gerece ce ON pp.numrec = ce.numrec AND ce.REFREC = '111') 
UNION ALL
SELECT  gp.codpro SKU
       ,gp.codlot LOTE_NF
       ,trim(GP.DS1PRO) || trim(GP.DS2PRO) AS DESCRICAO
       ,gp.codpal SSCC
       ,SUBSTR(gp.datfvi,7,2) || '/' || SUBSTR(gp.datfvi,5,2) || '/' || SUBSTR(gp.datfvi,1,4) DATA_VALIDADE
       ,gp.motimm STATUS_PROD
       ,gp.uvcmvt QTD_ESP_UN
       ,CAST((gp.uvcmvt/ gp.pcbpro)        AS NUMERIC(10,0)) QTD_ESP_CX
FROM FGE50FM0A7.gerecp gp
WHERE gp.CODACT = 'MAR'
AND gp.REFREC = '111'
AND gp.codlot NOT IN ( SELECT distinct codlot FROM FGE50FM0A7.gerecd pp INNER JOIN FGE50FM0A7.gerece ce ON pp.numrec = ce.numrec AND ce.REFREC = '111')
ORDER BY 1, 2 
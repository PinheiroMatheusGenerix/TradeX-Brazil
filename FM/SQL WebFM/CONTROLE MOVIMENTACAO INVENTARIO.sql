SELECT  CODACT                                                                                                                         AS PLANTA
       ,trim(CODPRO)                                                                                                                   AS SKU
       ,CODPAL                                                                                                                         AS PALETE
       ,ZONSTS || '-' || RIGHT(TRIM('00' || ALLSTS),3) || '-' || RIGHT(TRIM('000' || DPLSTS),4) || '-' || RIGHT(TRIM('0' || NIVSTS),2) AS LOCACAO
       ,to_date(DATMVT|| right('000000' || HEUMVT,6) ,'YYYY-MM-DD hh24:mi:ss')                                                         AS DATA
       ,MOTMVT                                                                                                                         AS MOTIVO
       ,trim(REFMVT)                                                                                                                   AS REFERENCIA
       ,SENMVT                                                                                                                         AS ACAO
       ,UVCMVT                                                                                                                         AS QTDE
       ,CASE WHEN CODMDU = 'RG' THEN 'RF'  ELSE ('TELA '|| CODMDU) END                                                                 AS TIPO
       ,CODUTI                                                                                                                         AS MATRICULA
       ,DS1PRO                                                                                                                         AS DESCRICAO
       ,PCBPRO                                                                                                                         AS PCB
       ,CODLOT                                                                                                                         AS LOTE
       ,to_date(DATFVI||'000000' ,'YYYY-MM-DD hh24:mi:ss')                                                                             AS VALIDADE
       ,numpal
       ,CodPrn                                                                                                                         AS PF
FROM FGE50FM0NS.GEJNL
WHERE CODACT = 'HAR'
AND DATMVT >= 20251117
AND DATMVT <= 20251117
AND CODPRO = '11' 
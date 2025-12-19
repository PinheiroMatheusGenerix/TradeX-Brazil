--HARMAN
SELECT  A.CODACT
       ,A.NUMVAG ONDA
       ,A.CODCLI CLIENTE
       ,A.REFLIV PEDIDO
       ,A.CODPRO SKU
       ,A.DS1PRO DESCRICAO
       ,a.NOMCLI
       ,A.UVCCDE QTD_PEDIDO
       ,A.UVCSRV QTD_ALOC
       ,A.NUMERR COD_ERRO
       ,CASE WHEN A.NUMERR = 832 THEN 'RUPTURA TOTAL - SEM ESTOQUE'
             WHEN A.NUMERR = 833 THEN 'SERVIÇO PARCIAL' END DESCRICAO_ERRO
       ,A.UNIPRO UNI_VENDA
       ,SUM(CASE WHEN B.MOTIMM = '' THEN 0 ELSE B.UVCSTO END) INDISP
       ,SUM(B.UVCDES) ALOCADO
       ,SUM(CASE WHEN B.ETAPAL = 50 THEN B.UVCSTO ELSE 0 END) PUTAWAY
       ,SUM(CASE WHEN B.ETAPAL = 20 THEN B.UVCSTO ELSE 0 END) RPL
       ,SUM(B.UVCSTO) TOT_ESTOQUE
       ,D.ZONPIC||'-'||LPAD(D.ALLPIC,2,0)||'-'||LPAD(D.DPLPIC,3,0)||'-'||LPAD(D.NIVPIC,2,0) ENDERECO
       ,D.CIRPIC                                                                                                                     AS PICKING
       ,case D.PRPPIC WHEN 5 THEN 'UVC' WHEN 4 THEN 'INNER' WHEN 3 THEN 'CAIXA'when 2 THEN 'CAMADA' WHEN 1 THEN 'PALETE' ELSE '' end AS PREPARACAO
       ,CASE WHEN D.SRVPCB = 1 THEN 'Sim'
             WHEN D.SRVPCB = 0 THEN 'Não'  ELSE '' END                                                                               AS SERVE_CAIXA
       ,CASE WHEN D.SRVSPC = 1 THEN 'Sim'
             WHEN D.SRVSPC = 0 THEN 'Não'  ELSE '' END                                                                               AS SERVE_INNER
       ,CASE WHEN D.SRVUVC = 1 THEN 'Sim'
             WHEN D.SRVUVC = 0 THEN 'Não'  ELSE '' END                                                                               AS SERVE_UVC
       ,D.PCBPRO                                                                                                                     AS PCB
       ,D.SPCPRO                                                                                                                     AS INNER
FROM FGE50FM0NS.GEERRT A
LEFT JOIN FGE50FM0NS.GEVAG C
ON A.NUMVAG = C.NUMVAG
LEFT JOIN FGE50FM0NS.GEPAL B
ON A.CODPRO = B.CODPRO
LEFT JOIN FGE50FM0NS.GEPIC D
ON A.CODPRO = D.CODPRO
WHERE C.ETAVAG = 25
AND A.CODACT = 'HAR'
GROUP BY  A.CODACT
         ,A.NUMVAG
         ,A.CODCLI
         ,A.REFLIV
         ,A.CODPRO
         ,A.DS1PRO
         ,a.NOMCLI
         ,A.UVCCDE
         ,A.UVCSRV
         ,A.NUMERR
         ,A.UNIPRO
         ,D.ZONPIC
         ,D.ALLPIC
         ,D.DPLPIC
         ,D.NIVPIC
         ,D.CIRPIC
         ,D.PRPPIC
         ,D.SRVPCB
         ,D.SRVSPC
         ,D.SRVUVC
         ,D.PCBPRO
         ,D.SPCPRO
--BROTHER
SELECT  e.CODACT
       ,e.NUMVAG ONDA
       ,trim(e.REFLIV) PEDIDO
       ,e.CODPRO SKU
       ,e.DS1PRO DESCRICAO
       ,e.NOMCLI
       ,P.IMMFRG                                                                                                                     AS DEPOSITO
       ,e.UVCCDE QTD_PEDIDO
       ,e.UVCSRV QTD_ALOC
       ,e.NUMERR COD_ERRO
       ,CASE WHEN e.NUMERR = 832 THEN 'RUPTURA TOTAL - SEM ESTOQUE'
             WHEN e.NUMERR = 833 THEN 'SERVIÇO PARCIAL' END DESCRICAO_ERRO
       ,e.UNIPRO UNI_VENDA
       ,SUM( CASE WHEN B.MOTIMM = p.IMMFRG THEN B.UVC_STO - B.UVC_PUTAWAY - B.UVC_DES else 0 END) DISPON
       ,SUM( CASE WHEN B.MOTIMM <> p.IMMFRG THEN B.UVC_STO + B.UVC_DES + b.UVC_PUTAWAY + B.UVC_RPL else 0 END) INDISP
       ,SUM( CASE WHEN B.MOTIMM = p.IMMFRG THEN B.UVC_DES else 0 END) ALOCADO
       ,SUM( CASE WHEN B.MOTIMM = p.IMMFRG THEN B.UVC_PUTAWAY ELSE 0 END) PUTAWAY
       ,SUM( CASE WHEN B.MOTIMM = p.IMMFRG THEN B.UVC_RPL ELSE 0 END) RPL
       ,SUM( B.UVC_STO) TOT_ESTOQUE
       ,D.CIRPIC                                                                                                                     AS PICKING
       ,case D.PRPPIC WHEN 5 THEN 'UVC' WHEN 4 THEN 'INNER' WHEN 3 THEN 'CAIXA'when 2 THEN 'CAMADA' WHEN 1 THEN 'PALETE' ELSE '' end AS PREPARACAO
       ,CASE WHEN D.SRVPCB = 1 THEN 'Sim'
             WHEN D.SRVPCB = 0 THEN 'Não'  ELSE '' END                                                                               AS SERVE_CAIXA
       ,CASE WHEN D.SRVSPC = 1 THEN 'Sim'
             WHEN D.SRVSPC = 0 THEN 'Não'  ELSE '' END                                                                               AS SERVE_INNER
       ,CASE WHEN D.SRVUVC = 1 THEN 'Sim'
             WHEN D.SRVUVC = 0 THEN 'Não'  ELSE '' END                                                                               AS SERVE_UVC
       ,e.PCBPRO                                                                                                                     AS PCB
       ,e.SPCPRO                                                                                                                     AS INNER
FROM FGE50FM0A9.GEERRT E
LEFT JOIN FGE50FM0A9.GEVAG O
ON o.NUMVAG = e.NUMVAG
LEFT JOIN FGE50FM0A9.GELIVD P
ON P.NUMLIV = e.numliv AND P.codpro = e.codpro
LEFT JOIN
(
	SELECT  x.CODACT
	       ,x.CODPRO
	       ,x.MOTIMM
	       ,SUM(x.UVCSTO) UVC_STO
	       ,SUM(x.UVCDES) UVC_DES
	       ,SUM( CASE WHEN x.ETAPAL = 50 THEN x.UVCSTO ELSE 0 END) UVC_PUTAWAY
	       ,SUM( CASE WHEN x.ETAPAL = 20 THEN x.UVCSTO ELSE 0 END) UVC_RPL
	FROM FGE50FM0A9.GEPAL x
	GROUP BY  x.CODACT
	         ,x.CODPRO
	         ,x.MOTIMM
) B
ON B.CODPRO = e.CODPRO AND B.CODACT = e.CODACT
LEFT JOIN FGE50FM0A9.GECPK D
ON D.CODPRO = e.CODPRO AND D.codact = e.codact
WHERE o.ETAVAG = 25
AND E.CODACT = 'BRO'
GROUP BY  e.CODACT
         ,e.NUMVAG
         ,trim(e.REFLIV)
         ,e.CODPRO
         ,e.DS1PRO
         ,e.NOMCLI
         ,P.IMMFRG
         ,e.UVCCDE
         ,e.UVCSRV
         ,e.NUMERR
         ,e.NUMERR
         ,e.UNIPRO
         ,D.CIRPIC
         ,D.PRPPIC
         ,D.SRVPCB
         ,D.SRVSPC
         ,D.SRVUVC
         ,e.PCBPRO
         ,e.SPCPRO
! File M41_DHL_OUT2 : 
!===========================================================
! Line : 00HEADER 
!===========================================================
! FIELD : CODEXC 
#define S_00HEADER_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_00HEADER_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_00HEADER_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_00HEADER_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_00HEADER_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_00HEADER_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_00HEADER_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_00HEADER_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : EMTEXC 
#define S_00HEADER_EMTEXC peel(pick(nPos, 7, 14), " ")
#define R_00HEADER_EMTEXC(A) put(nRec, 7, A :14.14)
!-----------------------------------------------------------
! FIELD : RCTEXC 
#define S_00HEADER_RCTEXC peel(pick(nPos, 21, 14), " ")
#define R_00HEADER_RCTEXC(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXC 
#define S_00HEADER_DATEXC peel(pick(nPos, 35, 8), " ")
#define R_00HEADER_DATEXC(A) put(nRec, 35, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_00HEADER_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_00HEADER_HEUEXC(A) put(nRec, 43, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : NUMEXC 
#define S_00HEADER_NUMEXC peel(pick(nPos, 49, 7), " ")
#define R_00HEADER_NUMEXC(A) put(nRec, 49, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : ACQEXC 
#define S_00HEADER_ACQEXC peel(pick(nPos, 56, 1), " ")
#define R_00HEADER_ACQEXC(A) put(nRec, 56, A :1.1)
!-----------------------------------------------------------
! FIELD : VEREXC 
#define S_00HEADER_VEREXC peel(pick(nPos, 57, 4), " ")
#define R_00HEADER_VEREXC(A) put(nRec, 57, A :4.4)
!-----------------------------------------------------------
! FIELD : NOMSYS 
#define S_00HEADER_NOMSYS peel(pick(nPos, 61, 8), " ")
#define R_00HEADER_NOMSYS(A) put(nRec, 61, A :8.8)
!-----------------------------------------------------------
! FIELD : NOMDTQ 
#define S_00HEADER_NOMDTQ peel(pick(nPos, 69, 10), " ")
#define R_00HEADER_NOMDTQ(A) put(nRec, 69, A :10.10)
!-----------------------------------------------------------
! FIELD : BIBDTQ 
#define S_00HEADER_BIBDTQ peel(pick(nPos, 79, 10), " ")
#define R_00HEADER_BIBDTQ(A) put(nRec, 79, A :10.10)
!-----------------------------------------------------------
! FIELD : LIBEXC 
#define S_00HEADER_LIBEXC peel(pick(nPos, 89, 30), " ")
#define R_00HEADER_LIBEXC(A) put(nRec, 89, A :30.30)
!-----------------------------------------------------------
! FIELD : BIBDST 
#define S_00HEADER_BIBDST peel(pick(nPos, 119, 10), " ")
#define R_00HEADER_BIBDST(A) put(nRec, 119, A :10.10)
!-----------------------------------------------------------
! FIELD : PGMDST 
#define S_00HEADER_PGMDST peel(pick(nPos, 129, 10), " ")
#define R_00HEADER_PGMDST(A) put(nRec, 129, A :10.10)
!-----------------------------------------------------------
! FIELD : PARDST 
#define S_00HEADER_PARDST peel(pick(nPos, 139, 30), " ")
#define R_00HEADER_PARDST(A) put(nRec, 139, A :30.30)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_00HEADER_CODACT peel(pick(nPos, 169, 3), " ")
#define R_00HEADER_CODACT(A) put(nRec, 169, A :3.3)
!-----------------------------------------------------------
! FIELD : IGLSIT 
#define S_00HEADER_IGLSIT peel(pick(nPos, 172, 3), " ")
#define R_00HEADER_IGLSIT(A) put(nRec, 172, A :3.3)
!-----------------------------------------------------------
! FIELD : EDISIT 
#define S_00HEADER_EDISIT peel(pick(nPos, 175, 14), " ")
#define R_00HEADER_EDISIT(A) put(nRec, 175, A :14.14)
!-----------------------------------------------------------
! FIELD : IMAEXC 
#define S_00HEADER_IMAEXC peel(pick(nPos, 189, 8), " ")
#define R_00HEADER_IMAEXC(A) put(nRec, 189, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_00HEADER_DISEXC peel(pick(nPos, 197, 60), " ")
#define R_00HEADER_DISEXC(A) put(nRec, 197, A :60.60)
!-----------------------------------------------------------
!===========================================================
! Line : 99FILEFOOTER 
!===========================================================
! FIELD : CODEXC 
#define S_99FILEFOOTER_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_99FILEFOOTER_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_99FILEFOOTER_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_99FILEFOOTER_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_99FILEFOOTER_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_99FILEFOOTER_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_99FILEFOOTER_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_99FILEFOOTER_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : EMTEXC 
#define S_99FILEFOOTER_EMTEXC peel(pick(nPos, 7, 14), " ")
#define R_99FILEFOOTER_EMTEXC(A) put(nRec, 7, A :14.14)
!-----------------------------------------------------------
! FIELD : RCTEXC 
#define S_99FILEFOOTER_RCTEXC peel(pick(nPos, 21, 14), " ")
#define R_99FILEFOOTER_RCTEXC(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXC 
#define S_99FILEFOOTER_DATEXC peel(pick(nPos, 35, 8), " ")
#define R_99FILEFOOTER_DATEXC(A) put(nRec, 35, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_99FILEFOOTER_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_99FILEFOOTER_HEUEXC(A) put(nRec, 43, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : NUMEXC 
#define S_99FILEFOOTER_NUMEXC peel(pick(nPos, 49, 7), " ")
#define R_99FILEFOOTER_NUMEXC(A) put(nRec, 49, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : CPTEXC 
#define S_99FILEFOOTER_CPTEXC peel(pick(nPos, 56, 8), " ")
#define R_99FILEFOOTER_CPTEXC(A) put(nRec, 56, build(number(A):R08.0))
!-----------------------------------------------------------
!===========================================================
! Line : 4100HEADER 
!===========================================================
! FIELD : CODEXC 
#define S_4100HEADER_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_4100HEADER_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_4100HEADER_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_4100HEADER_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_4100HEADER_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_4100HEADER_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_4100HEADER_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_4100HEADER_TRTEXC(A) put(nRec, 6, build(number(A):R01.0))
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_4100HEADER_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_4100HEADER_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_4100HEADER_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_4100HEADER_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_4100HEADER_REFREC peel(pick(nPos, 18, 30), " ")
#define R_4100HEADER_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : CODAPP 
#define S_4100HEADER_CODAPP peel(pick(nPos, 48, 10), " ")
#define R_4100HEADER_CODAPP(A) put(nRec, 48, A :10.10)
!-----------------------------------------------------------
! FIELD : CODLDR 
#define S_4100HEADER_CODLDR peel(pick(nPos, 58, 3), " ")
#define R_4100HEADER_CODLDR(A) put(nRec, 58, A :3.3)
!-----------------------------------------------------------
! FIELD : CODTRE 
#define S_4100HEADER_CODTRE peel(pick(nPos, 61, 3), " ")
#define R_4100HEADER_CODTRE(A) put(nRec, 61, A :3.3)
!-----------------------------------------------------------
! FIELD : ORICDE 
#define S_4100HEADER_ORICDE peel(pick(nPos, 64, 1), " ")
#define R_4100HEADER_ORICDE(A) put(nRec, 64, build(number(A):R01.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_4100HEADER_CODACT peel(pick(nPos, 65, 3), " ")
#define R_4100HEADER_CODACT(A) put(nRec, 65, A :3.3)
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_4100HEADER_CODFOU peel(pick(nPos, 68, 14), " ")
#define R_4100HEADER_CODFOU(A) put(nRec, 68, A :14.14)
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_4100HEADER_CODTRA peel(pick(nPos, 82, 14), " ")
#define R_4100HEADER_CODTRA(A) put(nRec, 82, A :14.14)
!-----------------------------------------------------------
! FIELD : DTIREC 
#define S_4100HEADER_DTIREC peel(pick(nPos, 96, 8), " ")
#define R_4100HEADER_DTIREC(A) put(nRec, 96, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEIREC 
#define S_4100HEADER_HEIREC peel(pick(nPos, 104, 4), " ")
#define R_4100HEADER_HEIREC(A) put(nRec, 104, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : DTMREC 
#define S_4100HEADER_DTMREC peel(pick(nPos, 108, 8), " ")
#define R_4100HEADER_DTMREC(A) put(nRec, 108, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEMREC 
#define S_4100HEADER_HEMREC peel(pick(nPos, 116, 4), " ")
#define R_4100HEADER_HEMREC(A) put(nRec, 116, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : DTRREC 
#define S_4100HEADER_DTRREC peel(pick(nPos, 120, 8), " ")
#define R_4100HEADER_DTRREC(A) put(nRec, 120, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HERREC 
#define S_4100HEADER_HERREC peel(pick(nPos, 128, 4), " ")
#define R_4100HEADER_HERREC(A) put(nRec, 128, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : KAIREC 
#define S_4100HEADER_KAIREC peel(pick(nPos, 132, 3), " ")
#define R_4100HEADER_KAIREC(A) put(nRec, 132, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CTRREC 
#define S_4100HEADER_CTRREC peel(pick(nPos, 135, 10), " ")
#define R_4100HEADER_CTRREC(A) put(nRec, 135, A :10.10)
!-----------------------------------------------------------
! FIELD : REFCNT 
#define S_4100HEADER_REFCNT peel(pick(nPos, 145, 10), " ")
#define R_4100HEADER_REFCNT(A) put(nRec, 145, A :10.10)
!-----------------------------------------------------------
! FIELD : CMTREC1 
#define S_4100HEADER_CMTREC1 peel(pick(nPos, 155, 30), " ")
#define R_4100HEADER_CMTREC1(A) put(nRec, 155, A :30.30)
!-----------------------------------------------------------
! FIELD : CMTREC2 
#define S_4100HEADER_CMTREC2 peel(pick(nPos, 185, 30), " ")
#define R_4100HEADER_CMTREC2(A) put(nRec, 185, A :30.30)
!-----------------------------------------------------------
! FIELD : DATRLQ 
#define S_4100HEADER_DATRLQ peel(pick(nPos, 215, 8), " ")
#define R_4100HEADER_DATRLQ(A) put(nRec, 215, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODACR 
#define S_4100HEADER_CODACR peel(pick(nPos, 223, 3), " ")
#define R_4100HEADER_CODACR(A) put(nRec, 223, A :3.3)
!-----------------------------------------------------------
! FIELD : NATREC 
#define S_4100HEADER_NATREC peel(pick(nPos, 226, 1), " ")
#define R_4100HEADER_NATREC(A) put(nRec, 226, A :1.1)
!-----------------------------------------------------------
! FIELD : EDIFOU 
#define S_4100HEADER_EDIFOU peel(pick(nPos, 227, 14), " ")
#define R_4100HEADER_EDIFOU(A) put(nRec, 227, A :14.14)
!-----------------------------------------------------------
! FIELD : CODCNT 
#define S_4100HEADER_CODCNT peel(pick(nPos, 241, 14), " ")
#define R_4100HEADER_CODCNT(A) put(nRec, 241, A :14.14)
!-----------------------------------------------------------
! FIELD : TYPRMT 
#define S_4100HEADER_TYPRMT peel(pick(nPos, 255, 1), " ")
#define R_4100HEADER_TYPRMT(A) put(nRec, 255, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_4100HEADER_DISEXC peel(pick(nPos, 256, 1), " ")
#define R_4100HEADER_DISEXC(A) put(nRec, 256, A :1.1)
!-----------------------------------------------------------
!===========================================================
! Line : 4101TRANSACTION 
!===========================================================
! FIELD : CODEXC 
#define S_4101TRANSACTION_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_4101TRANSACTION_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_4101TRANSACTION_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_4101TRANSACTION_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_4101TRANSACTION_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_4101TRANSACTION_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_4101TRANSACTION_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_4101TRANSACTION_TRTEXC(A) put(nRec, 6, build(number(A):R01.0))
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_4101TRANSACTION_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_4101TRANSACTION_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_4101TRANSACTION_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_4101TRANSACTION_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_4101TRANSACTION_REFREC peel(pick(nPos, 18, 30), " ")
#define R_4101TRANSACTION_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------

! FIELD : DIPREC 
#define S_4101TRANSACTION_DIPREC peel(pick(nPos, 48, 50), " ")
#define R_4101TRANSACTION_DIPREC(A) put(nRec, 48, A :50.50)








!===========================================================
! Line : GEEX4102 M41 : Entête remontée réception (facultatif)-M41: Heading ascent reception (optional)
! -
!===========================================================
! FIELD : CODEXC Code du mouvement d'échange-Code exchange movement
! Zone initialisée à "41"-Zone set to "41"
#define S_GEEX4102_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4102_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC Séparateur entre code et sous-code-Separator between code and subcode
! Zone initialisée à "."-Zone set to "."
#define S_GEEX4102_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4102_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC Sous-code du mouvement d'échange-Subcode exchange movement
! Zone initialisée à "02"-Zone set to "02"
#define S_GEEX4102_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4102_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC Code traitement du mouvement-motion processing codes
! Sans objet pour ce type de mouvement-Not applicable to this type of movement
#define S_GEEX4102_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4102_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC Numéro de la commande réceptionnée-No part of the received command
! N° interne à G.E. ou N° imposé-No internal or G.E. No. imposed
#define S_GEEX4102_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4102_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC Sous-numéro de la commande à réceptionner-Sub-order number to receive
! -
#define S_GEEX4102_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4102_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC Référence de la réception-Reference reception
! -
#define S_GEEX4102_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4102_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : MSGREC Message à éditer sur le Bon de réception-Message to edit on the Purchase receipt
! -
#define S_GEEX4102_MSGREC peel(pick(nPos, 48, 60), " ")
#define R_GEEX4102_MSGREC(A) put(nRec, 48, A :60.60)
!-----------------------------------------------------------
! FIELD : INFLIV Information bon de livraison-delivery information
! -
#define S_GEEX4102_INFLIV peel(pick(nPos, 108, 15), " ")
#define R_GEEX4102_INFLIV(A) put(nRec, 108, A :15.15)
!-----------------------------------------------------------
! FIELD : INFCMR Information convention de marchandise par route-road freight convention information
! -
#define S_GEEX4102_INFCMR peel(pick(nPos, 123, 15), " ")
#define R_GEEX4102_INFCMR(A) put(nRec, 123, A :15.15)
!-----------------------------------------------------------
! FIELD : INFVET Information vétérinaire-veterinary information
! -
#define S_GEEX4102_INFVET peel(pick(nPos, 138, 15), " ")
#define R_GEEX4102_INFVET(A) put(nRec, 138, A :15.15)
!-----------------------------------------------------------
! FIELD : INFDOU Information douane-customs information
! -
#define S_GEEX4102_INFDOU peel(pick(nPos, 153, 15), " ")
#define R_GEEX4102_INFDOU(A) put(nRec, 153, A :15.15)
!-----------------------------------------------------------
! FIELD : TEMCAM Température du camion-Temperature truck
! -
#define S_GEEX4102_TEMCAM peel(pick(nPos, 168, 3), " ")
#define R_GEEX4102_TEMCAM(A) put(nRec, 168, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : MOTRCP Motif de réception-reception pattern
! -
#define S_GEEX4102_MOTRCP peel(pick(nPos, 171, 3), " ")
#define R_GEEX4102_MOTRCP(A) put(nRec, 171, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMBDL Numéro du bon de livraison-delivery note number
! -
#define S_GEEX4102_NUMBDL peel(pick(nPos, 174, 6), " ")
#define R_GEEX4102_NUMBDL(A) put(nRec, 174, A :6.6)
!-----------------------------------------------------------
! FIELD : DATBDL Date du bon de livraison-Date of delivery
! -
#define S_GEEX4102_DATBDL peel(pick(nPos, 180, 8), " ")
#define R_GEEX4102_DATBDL(A) put(nRec, 180, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DISEXC Zone disponible pour de futures utilisations-Area available for future use
! -
#define S_GEEX4102_DISEXC peel(pick(nPos, 188, 69), " ")
#define R_GEEX4102_DISEXC(A) put(nRec, 188, A :69.69)
!-----------------------------------------------------------








!===========================================================
! Line : 4120ORDERLINE 
!===========================================================
! FIELD : CODEXC 
#define S_4120ORDERLINE_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_4120ORDERLINE_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_4120ORDERLINE_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_4120ORDERLINE_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_4120ORDERLINE_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_4120ORDERLINE_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_4120ORDERLINE_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_4120ORDERLINE_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_4120ORDERLINE_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_4120ORDERLINE_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_4120ORDERLINE_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_4120ORDERLINE_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_4120ORDERLINE_REFREC peel(pick(nPos, 18, 30), " ")
#define R_4120ORDERLINE_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_4120ORDERLINE_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_4120ORDERLINE_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_4120ORDERLINE_CODACT peel(pick(nPos, 53, 3), " ")
#define R_4120ORDERLINE_CODACT(A) put(nRec, 53, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_4120ORDERLINE_CODCLI peel(pick(nPos, 56, 14), " ")
#define R_4120ORDERLINE_CODCLI(A) put(nRec, 56, build(number(A):R014.0))
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_4120ORDERLINE_CODPRO peel(pick(nPos, 70, 17), " ")
#define R_4120ORDERLINE_CODPRO(A) put(nRec, 70, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_4120ORDERLINE_VALPRO peel(pick(nPos, 87, 2), " ")
#define R_4120ORDERLINE_VALPRO(A) put(nRec, 87, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : UVCREA 
#define S_4120ORDERLINE_UVCREA peel(pick(nPos, 89, 9), " ")
#define R_4120ORDERLINE_UVCREA(A) put(nRec, 89, A :9.9)
!-----------------------------------------------------------
! FIELD : UNICDE 
#define S_4120ORDERLINE_UNICDE peel(pick(nPos, 98, 3), " ")
#define R_4120ORDERLINE_UNICDE(A) put(nRec, 98, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRN 
#define S_4120ORDERLINE_CODPRN peel(pick(nPos, 101, 17), " ")
#define R_4120ORDERLINE_CODPRN(A) put(nRec, 101, A :17.17)
!-----------------------------------------------------------
! FIELD : TYPOPE 
#define S_4120ORDERLINE_TYPOPE peel(pick(nPos, 118, 1), " ")
#define R_4120ORDERLINE_TYPOPE(A) put(nRec, 118, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMOPE 
#define S_4120ORDERLINE_NUMOPE peel(pick(nPos, 119, 6), " ")
#define R_4120ORDERLINE_NUMOPE(A) put(nRec, 119, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODACR 
#define S_4120ORDERLINE_CODACR peel(pick(nPos, 125, 3), " ")
#define R_4120ORDERLINE_CODACR(A) put(nRec, 125, A :3.3)
!-----------------------------------------------------------
! FIELD : UVCREC 
#define S_4120ORDERLINE_UVCREC peel(pick(nPos, 128, 9), " ")
#define R_4120ORDERLINE_UVCREC(A) put(nRec, 128, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UVCGRA 
#define S_4120ORDERLINE_UVCGRA peel(pick(nPos, 137, 9), " ")
#define R_4120ORDERLINE_UVCGRA(A) put(nRec, 137, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UVCIMM 
#define S_4120ORDERLINE_UVCIMM peel(pick(nPos, 146, 9), " ")
#define R_4120ORDERLINE_UVCIMM(A) put(nRec, 146, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_4120ORDERLINE_MOTIMM peel(pick(nPos, 155, 3), " ")
#define R_4120ORDERLINE_MOTIMM(A) put(nRec, 155, A :3.3)
!-----------------------------------------------------------
! FIELD : UVCRFU 
#define S_4120ORDERLINE_UVCRFU peel(pick(nPos, 158, 9), " ")
#define R_4120ORDERLINE_UVCRFU(A) put(nRec, 158, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : MOTRFU 
#define S_4120ORDERLINE_MOTRFU peel(pick(nPos, 167, 3), " ")
#define R_4120ORDERLINE_MOTRFU(A) put(nRec, 167, A :3.3)
!-----------------------------------------------------------
! FIELD : UVCRLQ 
#define S_4120ORDERLINE_UVCRLQ peel(pick(nPos, 170, 9), " ")
#define R_4120ORDERLINE_UVCRLQ(A) put(nRec, 170, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_4120ORDERLINE_DATFVI peel(pick(nPos, 179, 8), " ")
#define R_4120ORDERLINE_DATFVI(A) put(nRec, 179, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : MESPRO 
#define S_4120ORDERLINE_MESPRO peel(pick(nPos, 187, 1), " ")
#define R_4120ORDERLINE_MESPRO(A) put(nRec, 187, A :1.1)
!-----------------------------------------------------------
! FIELD : PDNREC 
#define S_4120ORDERLINE_PDNREC peel(pick(nPos, 188, 11), " ")
#define R_4120ORDERLINE_PDNREC(A) put(nRec, 188, build(number(A):R011.0))
!-----------------------------------------------------------
! FIELD : DATFAB 
#define S_4120ORDERLINE_DATFAB peel(pick(nPos, 199, 8), " ")
#define R_4120ORDERLINE_DATFAB(A) put(nRec, 199, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_4120ORDERLINE_CODLOT peel(pick(nPos, 207, 20), " ")
#define R_4120ORDERLINE_CODLOT(A) put(nRec, 207, A :20.20)
!-----------------------------------------------------------
! FIELD : NUMLOT 
#define S_4120ORDERLINE_NUMLOT peel(pick(nPos, 227, 9), " ")
#define R_4120ORDERLINE_NUMLOT(A) put(nRec, 227, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : RECSOL 
#define S_4120ORDERLINE_RECSOL peel(pick(nPos, 236, 1), " ")
#define R_4120ORDERLINE_RECSOL(A) put(nRec, 236, A :1.1)
!-----------------------------------------------------------
! FIELD : CODMTR 
#define S_4120ORDERLINE_CODMTR peel(pick(nPos, 237, 5), " ")
#define R_4120ORDERLINE_CODMTR(A) put(nRec, 237, A :5.5)
!-----------------------------------------------------------
! FIELD : INDPRO 
#define S_4120ORDERLINE_INDPRO peel(pick(nPos, 242, 10), " ")
#define R_4120ORDERLINE_INDPRO(A) put(nRec, 242, A :10.10)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_4120ORDERLINE_DISEXC peel(pick(nPos, 252, 5), " ")
#define R_4120ORDERLINE_DISEXC(A) put(nRec, 252, A :5.5)
!-----------------------------------------------------------
!===========================================================
! Line : 4121ORDERLINE_COMPLEMENT 
!===========================================================
! FIELD : CODEXC 
#define S_4121ORDERLINE_COMPLEMENT_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_4121ORDERLINE_COMPLEMENT_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_4121ORDERLINE_COMPLEMENT_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_4121ORDERLINE_COMPLEMENT_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_4121ORDERLINE_COMPLEMENT_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_4121ORDERLINE_COMPLEMENT_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_4121ORDERLINE_COMPLEMENT_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_4121ORDERLINE_COMPLEMENT_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_4121ORDERLINE_COMPLEMENT_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_4121ORDERLINE_COMPLEMENT_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_4121ORDERLINE_COMPLEMENT_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_4121ORDERLINE_COMPLEMENT_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_4121ORDERLINE_COMPLEMENT_REFREC peel(pick(nPos, 18, 30), " ")
#define R_4121ORDERLINE_COMPLEMENT_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_4121ORDERLINE_COMPLEMENT_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_4121ORDERLINE_COMPLEMENT_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : DIPREC 
#define S_4121ORDERLINE_COMPLEMENT_DIPREC peel(pick(nPos, 53, 50), " ")
#define R_4121ORDERLINE_COMPLEMENT_DIPREC(A) put(nRec, 53, A :50.50)
!-----------------------------------------------------------
! FIELD : TOPREC 
#define S_4121ORDERLINE_COMPLEMENT_TOPREC peel(pick(nPos, 103, 1), " ")
#define R_4121ORDERLINE_COMPLEMENT_TOPREC(A) put(nRec, 103, A :1.1)
!-----------------------------------------------------------
! FIELD : TOPREC1 
#define S_4121ORDERLINE_COMPLEMENT_TOPREC1 peel(pick(nPos, 104, 1), " ")
#define R_4121ORDERLINE_COMPLEMENT_TOPREC1(A) put(nRec, 104, A :1.1)
!-----------------------------------------------------------
! FIELD : TOPREC2 
#define S_4121ORDERLINE_COMPLEMENT_TOPREC2 peel(pick(nPos, 105, 1), " ")
#define R_4121ORDERLINE_COMPLEMENT_TOPREC2(A) put(nRec, 105, A :1.1)
!-----------------------------------------------------------
! FIELD : TOPREC3 
#define S_4121ORDERLINE_COMPLEMENT_TOPREC3 peel(pick(nPos, 106, 1), " ")
#define R_4121ORDERLINE_COMPLEMENT_TOPREC3(A) put(nRec, 106, A :1.1)
!-----------------------------------------------------------
! FIELD : TOPREC4 
#define S_4121ORDERLINE_COMPLEMENT_TOPREC4 peel(pick(nPos, 107, 1), " ")
#define R_4121ORDERLINE_COMPLEMENT_TOPREC4(A) put(nRec, 107, A :1.1)
!-----------------------------------------------------------
! FIELD : PRXPRO 
#define S_4121ORDERLINE_COMPLEMENT_PRXPRO peel(pick(nPos, 108, 9), " ")
#define R_4121ORDERLINE_COMPLEMENT_PRXPRO(A) put(nRec, 108, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : EDIPRO 
#define S_4121ORDERLINE_COMPLEMENT_EDIPRO peel(pick(nPos, 117, 17), " ")
#define R_4121ORDERLINE_COMPLEMENT_EDIPRO(A) put(nRec, 117, A :17.17)
!-----------------------------------------------------------
! FIELD : EDICLI 
#define S_4121ORDERLINE_COMPLEMENT_EDICLI peel(pick(nPos, 134, 14), " ")
#define R_4121ORDERLINE_COMPLEMENT_EDICLI(A) put(nRec, 134, A :14.14)
!-----------------------------------------------------------
! FIELD : UVCPRE 
#define S_4121ORDERLINE_COMPLEMENT_UVCPRE peel(pick(nPos, 148, 9), " ")
#define R_4121ORDERLINE_COMPLEMENT_UVCPRE(A) put(nRec, 148, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UNIREC 
#define S_4121ORDERLINE_COMPLEMENT_UNIREC peel(pick(nPos, 157, 3), " ")
#define R_4121ORDERLINE_COMPLEMENT_UNIREC(A) put(nRec, 157, A :3.3)
!-----------------------------------------------------------
! FIELD : QTEUOM 
#define S_4121ORDERLINE_COMPLEMENT_QTEUOM peel(pick(nPos, 160, 9), " ")
#define R_4121ORDERLINE_COMPLEMENT_QTEUOM(A) put(nRec, 160, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CODTDD 
#define S_4121ORDERLINE_COMPLEMENT_CODTDD peel(pick(nPos, 169, 3), " ")
#define R_4121ORDERLINE_COMPLEMENT_CODTDD(A) put(nRec, 169, A :3.3)
!-----------------------------------------------------------
! FIELD : NUMMTR 
#define S_4121ORDERLINE_COMPLEMENT_NUMMTR peel(pick(nPos, 172, 20), " ")
#define R_4121ORDERLINE_COMPLEMENT_NUMMTR(A) put(nRec, 172, A :20.20)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_4121ORDERLINE_COMPLEMENT_DISEXC peel(pick(nPos, 192, 65), " ")
#define R_4121ORDERLINE_COMPLEMENT_DISEXC(A) put(nRec, 192, A :65.65)
!-----------------------------------------------------------

!===========================================================
! Line : GEEX4122 M41 : Remontée multi refus en réception-M41: lift multi refusal reception
! -
!===========================================================
! FIELD : CODEXC Code du mouvement d'échange-Code exchange movement
! -
#define S_GEEX4122_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX4122_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC Séparateur entre code et sous-code (Valeur=.)-Separator between code and subcode (Value =.)
! -
#define S_GEEX4122_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX4122_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC Sous-code du mouvement d'échange-Subcode exchange movement
! -
#define S_GEEX4122_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX4122_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC Code traitement du mouvement-motion processing codes
! -
#define S_GEEX4122_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX4122_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC Numéro de la commande à réceptionner-Order number to receive
! -
#define S_GEEX4122_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_GEEX4122_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC Sous-numéro de la commande à réceptionner-Sub-order number to receive
! -
#define S_GEEX4122_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_GEEX4122_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC Référence de la réception-Reference reception
! -
#define S_GEEX4122_REFREC peel(pick(nPos, 18, 30), " ")
#define R_GEEX4122_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC Numéro de la ligne pour interface réception-Line number for reception interface
! -
#define S_GEEX4122_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_GEEX4122_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODACT Code activité logistique-Code logistics business
! -
#define S_GEEX4122_CODACT peel(pick(nPos, 53, 3), " ")
#define R_GEEX4122_CODACT(A) put(nRec, 53, A :3.3)
!-----------------------------------------------------------
! FIELD : MOTRFU Motif de refus-Ground for refusal
! -
#define S_GEEX4122_MOTRFU peel(pick(nPos, 56, 3), " ")
#define R_GEEX4122_MOTRFU(A) put(nRec, 56, A :3.3)
!-----------------------------------------------------------
! FIELD : UVCRFU Nombre d'U.V.C. refusées lors de la réception-Number of U.V.C. refused when receiving
! -
#define S_GEEX4122_UVCRFU peel(pick(nPos, 59, 9), " ")
#define R_GEEX4122_UVCRFU(A) put(nRec, 59, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : DISEXC Zone disponible pour de futures utilisations-Area available for future use
! -
#define S_GEEX4122_DISEXC peel(pick(nPos, 68, 189), " ")
#define R_GEEX4122_DISEXC(A) put(nRec, 68, A :189.189)
!-----------------------------------------------------------

!===========================================================
! Line : 4130ORDERLINE_DETAIL 
!===========================================================
! FIELD : CODEXC 
#define S_4130ORDERLINE_DETAIL_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_4130ORDERLINE_DETAIL_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_4130ORDERLINE_DETAIL_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_4130ORDERLINE_DETAIL_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_4130ORDERLINE_DETAIL_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_4130ORDERLINE_DETAIL_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_4130ORDERLINE_DETAIL_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_4130ORDERLINE_DETAIL_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_4130ORDERLINE_DETAIL_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_4130ORDERLINE_DETAIL_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_4130ORDERLINE_DETAIL_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_4130ORDERLINE_DETAIL_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_4130ORDERLINE_DETAIL_REFREC peel(pick(nPos, 18, 30), " ")
#define R_4130ORDERLINE_DETAIL_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : NLIREC 
#define S_4130ORDERLINE_DETAIL_NLIREC peel(pick(nPos, 48, 5), " ")
#define R_4130ORDERLINE_DETAIL_NLIREC(A) put(nRec, 48, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : UVCMVT 
#define S_4130ORDERLINE_DETAIL_UVCMVT peel(pick(nPos, 53, 9), " ")
#define R_4130ORDERLINE_DETAIL_UVCMVT(A) put(nRec, 53, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : SPCPRO 
#define S_4130ORDERLINE_DETAIL_SPCPRO peel(pick(nPos, 62, 4), " ")
#define R_4130ORDERLINE_DETAIL_SPCPRO(A) put(nRec, 62, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : PCBPRO 
#define S_4130ORDERLINE_DETAIL_PCBPRO peel(pick(nPos, 66, 5), " ")
#define R_4130ORDERLINE_DETAIL_PCBPRO(A) put(nRec, 66, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODLOT 
#define S_4130ORDERLINE_DETAIL_CODLOT peel(pick(nPos, 71, 20), " ")
#define R_4130ORDERLINE_DETAIL_CODLOT(A) put(nRec, 71, A :20.20)
!-----------------------------------------------------------
! FIELD : NUMLOT 
#define S_4130ORDERLINE_DETAIL_NUMLOT peel(pick(nPos, 91, 9), " ")
#define R_4130ORDERLINE_DETAIL_NUMLOT(A) put(nRec, 91, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CODNDS 
#define S_4130ORDERLINE_DETAIL_CODNDS peel(pick(nPos, 100, 20), " ")
#define R_4130ORDERLINE_DETAIL_CODNDS(A) put(nRec, 100, A :20.20)
!-----------------------------------------------------------
! FIELD : DATFAB 
#define S_4130ORDERLINE_DETAIL_DATFAB peel(pick(nPos, 120, 8), " ")
#define R_4130ORDERLINE_DETAIL_DATFAB(A) put(nRec, 120, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATFVI 
#define S_4130ORDERLINE_DETAIL_DATFVI peel(pick(nPos, 128, 8), " ")
#define R_4130ORDERLINE_DETAIL_DATFVI(A) put(nRec, 128, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODPAL 
#define S_4130ORDERLINE_DETAIL_CODPAL peel(pick(nPos, 136, 18), " ")
#define R_4130ORDERLINE_DETAIL_CODPAL(A) put(nRec, 136, A :18.18)
!-----------------------------------------------------------
! FIELD : MOTIMM 
#define S_4130ORDERLINE_DETAIL_MOTIMM peel(pick(nPos, 154, 3), " ")
#define R_4130ORDERLINE_DETAIL_MOTIMM(A) put(nRec, 154, A :3.3)
!-----------------------------------------------------------
! FIELD : DATIMM 
#define S_4130ORDERLINE_DETAIL_DATIMM peel(pick(nPos, 157, 8), " ")
#define R_4130ORDERLINE_DETAIL_DATIMM(A) put(nRec, 157, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATIMM1 
#define S_4130ORDERLINE_DETAIL_DATIMM1 peel(pick(nPos, 165, 8), " ")
#define R_4130ORDERLINE_DETAIL_DATIMM1(A) put(nRec, 165, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUIMM 
#define S_4130ORDERLINE_DETAIL_HEUIMM peel(pick(nPos, 173, 6), " ")
#define R_4130ORDERLINE_DETAIL_HEUIMM(A) put(nRec, 173, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : HEUIMM1 
#define S_4130ORDERLINE_DETAIL_HEUIMM1 peel(pick(nPos, 179, 6), " ")
#define R_4130ORDERLINE_DETAIL_HEUIMM1(A) put(nRec, 179, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODSIT 
#define S_4130ORDERLINE_DETAIL_CODSIT peel(pick(nPos, 185, 3), " ")
#define R_4130ORDERLINE_DETAIL_CODSIT(A) put(nRec, 185, A :3.3)
!-----------------------------------------------------------
! FIELD : ZONSTS 
#define S_4130ORDERLINE_DETAIL_ZONSTS peel(pick(nPos, 188, 1), " ")
#define R_4130ORDERLINE_DETAIL_ZONSTS(A) put(nRec, 188, A :1.1)
!-----------------------------------------------------------
! FIELD : ALLSTS 
#define S_4130ORDERLINE_DETAIL_ALLSTS peel(pick(nPos, 189, 3), " ")
#define R_4130ORDERLINE_DETAIL_ALLSTS(A) put(nRec, 189, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : DPLSTS 
#define S_4130ORDERLINE_DETAIL_DPLSTS peel(pick(nPos, 192, 4), " ")
#define R_4130ORDERLINE_DETAIL_DPLSTS(A) put(nRec, 192, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : NIVSTS 
#define S_4130ORDERLINE_DETAIL_NIVSTS peel(pick(nPos, 196, 2), " ")
#define R_4130ORDERLINE_DETAIL_NIVSTS(A) put(nRec, 196, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_4130ORDERLINE_DETAIL_CODACT peel(pick(nPos, 198, 3), " ")
#define R_4130ORDERLINE_DETAIL_CODACT(A) put(nRec, 198, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI 
#define S_4130ORDERLINE_DETAIL_CODCLI peel(pick(nPos, 201, 14), " ")
#define R_4130ORDERLINE_DETAIL_CODCLI(A) put(nRec, 201, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO 
#define S_4130ORDERLINE_DETAIL_CODPRO peel(pick(nPos, 215, 17), " ")
#define R_4130ORDERLINE_DETAIL_CODPRO(A) put(nRec, 215, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO 
#define S_4130ORDERLINE_DETAIL_VALPRO peel(pick(nPos, 232, 2), " ")
#define R_4130ORDERLINE_DETAIL_VALPRO(A) put(nRec, 232, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : PRXPRO 
#define S_4130ORDERLINE_DETAIL_PRXPRO peel(pick(nPos, 234, 9), " ")
#define R_4130ORDERLINE_DETAIL_PRXPRO(A) put(nRec, 234, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : PDBPAL 
#define S_4130ORDERLINE_DETAIL_PDBPAL peel(pick(nPos, 243, 7), " ")
#define R_4130ORDERLINE_DETAIL_PDBPAL(A) put(nRec, 243, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : PDNREC 
#define S_4130ORDERLINE_DETAIL_PDNREC peel(pick(nPos, 250, 7), " ")
#define R_4130ORDERLINE_DETAIL_PDNREC(A) put(nRec, 250, build(number(A):R07.0))
!-----------------------------------------------------------


!===========================================================
! Line : 4180 
!===========================================================
! FIELD : CODEXC 
#define S_4180_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_4180_CODEXC(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_4180_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_4180_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_4180_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_4180_SCOEXC(A) put(nRec, 4, A :2.2)
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_4180_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_4180_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_4180_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_4180_NUMREC(A) put(nRec, 7, A :8.8)
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_4180_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_4180_SNUREC(A) put(nRec, 15, A :3.3)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_4180_CODACT peel(pick(nPos, 18, 3), " ")
#define R_4180_CODACT(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : CODFOU 
#define S_4180_CODFOU peel(pick(nPos, 21, 14), " ")
#define R_4180_CODFOU(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_4180_REFREC peel(pick(nPos, 35, 30), " ")
#define R_4180_REFREC(A) put(nRec, 35, A :30.30)
!-----------------------------------------------------------
! FIELD : CODEMB 
#define S_4180_CODEMB peel(pick(nPos, 65, 3), " ")
#define R_4180_CODEMB(A) put(nRec, 65, A :3.3)
!-----------------------------------------------------------
! FIELD : QTBSOR 
#define S_4180_QTBSOR peel(pick(nPos, 68, 9), " ")
#define R_4180_QTBSOR(A) put(nRec, 68, A :9.9)
!-----------------------------------------------------------
! FIELD : QTBENT 
#define S_4180_QTBENT peel(pick(nPos, 77, 9), " ")
#define R_4180_QTBENT(A) put(nRec, 77, A :9.9)
!-----------------------------------------------------------
! FIELD : PRXEMB 
#define S_4180_PRXEMB peel(pick(nPos, 86, 6), " ")
#define R_4180_PRXEMB(A) put(nRec, 86, A :6.6)
!-----------------------------------------------------------
! FIELD : CODTRA 
#define S_4180_CODTRA peel(pick(nPos, 92, 14), " ")
#define R_4180_CODTRA(A) put(nRec, 92, A :14.14)
!-----------------------------------------------------------
! FIELD : PROEMB 
#define S_4180_PROEMB peel(pick(nPos, 106, 17), " ")
#define R_4180_PROEMB(A) put(nRec, 106, A :17.17)
!-----------------------------------------------------------
! FIELD : DATEMB 
#define S_4180_DATEMB peel(pick(nPos, 123, 8), " ")
#define R_4180_DATEMB(A) put(nRec, 123, A :8.8)
!-----------------------------------------------------------
! FIELD : TYPTIE 
#define S_4180_TYPTIE peel(pick(nPos, 131, 1), " ")
#define R_4180_TYPTIE(A) put(nRec, 131, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_4180_DISEXC peel(pick(nPos, 132, 125), " ")
#define R_4180_DISEXC(A) put(nRec, 132, A :125.125)
!-----------------------------------------------------------



!===========================================================
! Line : 4199ORDERFOOTER 
!===========================================================
! FIELD : CODEXC 
#define S_4199ORDERFOOTER_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_4199ORDERFOOTER_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_4199ORDERFOOTER_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_4199ORDERFOOTER_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_4199ORDERFOOTER_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_4199ORDERFOOTER_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_4199ORDERFOOTER_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_4199ORDERFOOTER_TRTEXC(A) put(nRec, 6, build(number(A):R01.0))
!-----------------------------------------------------------
! FIELD : NUMREC 
#define S_4199ORDERFOOTER_NUMREC peel(pick(nPos, 7, 8), " ")
#define R_4199ORDERFOOTER_NUMREC(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUREC 
#define S_4199ORDERFOOTER_SNUREC peel(pick(nPos, 15, 3), " ")
#define R_4199ORDERFOOTER_SNUREC(A) put(nRec, 15, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : REFREC 
#define S_4199ORDERFOOTER_REFREC peel(pick(nPos, 18, 30), " ")
#define R_4199ORDERFOOTER_REFREC(A) put(nRec, 18, A :30.30)
!-----------------------------------------------------------
! FIELD : CUMLIG 
#define S_4199ORDERFOOTER_CUMLIG peel(pick(nPos, 48, 4), " ")
#define R_4199ORDERFOOTER_CUMLIG(A) put(nRec, 48, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : CUMPAL 
#define S_4199ORDERFOOTER_CUMPAL peel(pick(nPos, 52, 5), " ")
#define R_4199ORDERFOOTER_CUMPAL(A) put(nRec, 52, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : COLTOT 
#define S_4199ORDERFOOTER_COLTOT peel(pick(nPos, 57, 9), " ")
#define R_4199ORDERFOOTER_COLTOT(A) put(nRec, 57, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : TOTPRO 
#define S_4199ORDERFOOTER_TOTPRO peel(pick(nPos, 66, 5), " ")
#define R_4199ORDERFOOTER_TOTPRO(A) put(nRec, 66, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_4199ORDERFOOTER_DISEXC peel(pick(nPos, 71, 186), " ")
#define R_4199ORDERFOOTER_DISEXC(A) put(nRec, 71, A :186.186)
!-----------------------------------------------------------


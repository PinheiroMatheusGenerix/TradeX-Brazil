! File M80_ASCII : 


!===========================================================
! Line : 0000FILEHEADER 
!===========================================================
! FIELD : CODEXC 
#define S_0000FILEHEADER_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_0000FILEHEADER_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_0000FILEHEADER_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_0000FILEHEADER_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_0000FILEHEADER_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_0000FILEHEADER_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_0000FILEHEADER_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_0000FILEHEADER_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : EMTEXC 
#define S_0000FILEHEADER_EMTEXC peel(pick(nPos, 7, 14), " ")
#define R_0000FILEHEADER_EMTEXC(A) put(nRec, 7, A :14.14)
!-----------------------------------------------------------
! FIELD : RCTEXC 
#define S_0000FILEHEADER_RCTEXC peel(pick(nPos, 21, 14), " ")
#define R_0000FILEHEADER_RCTEXC(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXC 
#define S_0000FILEHEADER_DATEXC peel(pick(nPos, 35, 8), " ")
#define R_0000FILEHEADER_DATEXC(A) put(nRec, 35, A :8.8)
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_0000FILEHEADER_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_0000FILEHEADER_HEUEXC(A) put(nRec, 43, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : NUMEXC 
#define S_0000FILEHEADER_NUMEXC peel(pick(nPos, 49, 7), " ")
#define R_0000FILEHEADER_NUMEXC(A) put(nRec, 49, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : ACQEXC 
#define S_0000FILEHEADER_ACQEXC peel(pick(nPos, 56, 1), " ")
#define R_0000FILEHEADER_ACQEXC(A) put(nRec, 56, A :1.1)
!-----------------------------------------------------------
! FIELD : VEREXC 
#define S_0000FILEHEADER_VEREXC peel(pick(nPos, 57, 4), " ")
#define R_0000FILEHEADER_VEREXC(A) put(nRec, 57, A :4.4)
!-----------------------------------------------------------
! FIELD : NOMSYS 
#define S_0000FILEHEADER_NOMSYS peel(pick(nPos, 61, 8), " ")
#define R_0000FILEHEADER_NOMSYS(A) put(nRec, 61, A :8.8)
!-----------------------------------------------------------
! FIELD : NOMDTQ 
#define S_0000FILEHEADER_NOMDTQ peel(pick(nPos, 69, 10), " ")
#define R_0000FILEHEADER_NOMDTQ(A) put(nRec, 69, A :10.10)
!-----------------------------------------------------------
! FIELD : BIBDTQ 
#define S_0000FILEHEADER_BIBDTQ peel(pick(nPos, 79, 10), " ")
#define R_0000FILEHEADER_BIBDTQ(A) put(nRec, 79, A :10.10)
!-----------------------------------------------------------
! FIELD : LIBEXC 
#define S_0000FILEHEADER_LIBEXC peel(pick(nPos, 89, 30), " ")
#define R_0000FILEHEADER_LIBEXC(A) put(nRec, 89, A :30.30)
!-----------------------------------------------------------
! FIELD : BIBDST 
#define S_0000FILEHEADER_BIBDST peel(pick(nPos, 119, 10), " ")
#define R_0000FILEHEADER_BIBDST(A) put(nRec, 119, A :10.10)
!-----------------------------------------------------------
! FIELD : PGMDST 
#define S_0000FILEHEADER_PGMDST peel(pick(nPos, 129, 10), " ")
#define R_0000FILEHEADER_PGMDST(A) put(nRec, 129, A :10.10)
!-----------------------------------------------------------
! FIELD : PARDST 
#define S_0000FILEHEADER_PARDST peel(pick(nPos, 139, 30), " ")
#define R_0000FILEHEADER_PARDST(A) put(nRec, 139, A :30.30)
!-----------------------------------------------------------
! FIELD : CODACT 
#define S_0000FILEHEADER_CODACT peel(pick(nPos, 169, 3), " ")
#define R_0000FILEHEADER_CODACT(A) put(nRec, 169, A :3.3)
!-----------------------------------------------------------
! FIELD : IGLSIT 
#define S_0000FILEHEADER_IGLSIT peel(pick(nPos, 172, 3), " ")
#define R_0000FILEHEADER_IGLSIT(A) put(nRec, 172, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : EDISIT 
#define S_0000FILEHEADER_EDISIT peel(pick(nPos, 175, 14), " ")
#define R_0000FILEHEADER_EDISIT(A) put(nRec, 175, A :14.14)
!-----------------------------------------------------------
! FIELD : IMAEXC 
#define S_0000FILEHEADER_IMAEXC peel(pick(nPos, 189, 8), " ")
#define R_0000FILEHEADER_IMAEXC(A) put(nRec, 189, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_0000FILEHEADER_DISEXC peel(pick(nPos, 197, 60), " ")
#define R_0000FILEHEADER_DISEXC(A) put(nRec, 197, A :60.60)
!-----------------------------------------------------------

!===========================================================
! Line : GEEX8000 M80 : Mouvements divers-M80: Mixed reactions
! -
!===========================================================
! FIELD : CODEXC Code du mouvement d'échange-Code exchange movement
! Zone initialisée à "80"-Zone set to "80"
#define S_GEEX8000_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8000_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC Séparateur entre code et sous-code-Separator between code and subcode
! Zone initialisée à "."-Zone set to "."
#define S_GEEX8000_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8000_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC Sous-code du mouvement d'échange-Subcode exchange movement
! Zone initialisée à "00"-Field initialized to "00"
#define S_GEEX8000_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8000_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC Code traitement du mouvement-motion processing codes
! Sans objet pour ce type de mouvement-Not applicable to this type of movement
#define S_GEEX8000_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8000_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : DATMVT Date du mouvement-Date of movement
! Au format 'ssaammjj'-The format 'CCYYMMDD'
#define S_GEEX8000_DATMVT peel(pick(nPos, 7, 8), " ")
#define R_GEEX8000_DATMVT(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUMVT Heure du mouvement-movement time
! Au format 'hhmmss'-The format 'hhmmss'
#define S_GEEX8000_HEUMVT peel(pick(nPos, 15, 6), " ")
#define R_GEEX8000_HEUMVT(A) put(nRec, 15, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : DATRGL Date de régularisation-Date of regularization
! Au format 'ssaammjj'. (Future utilisation)-The format 'CCYYMMDD'. (Future Use)
#define S_GEEX8000_DATRGL peel(pick(nPos, 21, 8), " ")
#define R_GEEX8000_DATRGL(A) put(nRec, 21, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODMDU Code du module-Module code
! Exemple : "EM" pour Gestion des Emplacements-Example: "EM" Spaces Management
#define S_GEEX8000_CODMDU peel(pick(nPos, 29, 2), " ")
#define R_GEEX8000_CODMDU(A) put(nRec, 29, A :2.2)
!-----------------------------------------------------------
! FIELD : CODFON Code de la fonction-Function code
! Exemple: 6 pour Répertoire des palettes-Example: 6 pallets Directory
#define S_GEEX8000_CODFON peel(pick(nPos, 31, 1), " ")
#define R_GEEX8000_CODFON(A) put(nRec, 31, build(number(A):R01.0))
!-----------------------------------------------------------
! FIELD : CODMVT Code du mouvement de journalisation-Code of Logging movement
! -
#define S_GEEX8000_CODMVT peel(pick(nPos, 32, 2), " ")
#define R_GEEX8000_CODMVT(A) put(nRec, 32, A :2.2)
!-----------------------------------------------------------
! FIELD : SENMVT Sens du mouvement physique-physical movement direction
! -
#define S_GEEX8000_SENMVT peel(pick(nPos, 34, 1), " ")
#define R_GEEX8000_SENMVT(A) put(nRec, 34, A :1.1)
!-----------------------------------------------------------
! FIELD : MOTMVT Motif du mouvement journalisé-movement pattern journaled
! Selon la table "MVT"-According to the table "MVT"
#define S_GEEX8000_MOTMVT peel(pick(nPos, 35, 3), " ")
#define R_GEEX8000_MOTMVT(A) put(nRec, 35, A :3.3)
!-----------------------------------------------------------
! FIELD : EDIMVT Code du mouvement pour E.D.I.-Code of the movement for E.D.I.
! Selon la table "MVT"-According to the table "MVT"
#define S_GEEX8000_EDIMVT peel(pick(nPos, 38, 3), " ")
#define R_GEEX8000_EDIMVT(A) put(nRec, 38, A :3.3)
!-----------------------------------------------------------
! FIELD : REFMVT Référence du mouvement-movement reference
! Format et contenu paramétrable-Format and configurable content
#define S_GEEX8000_REFMVT peel(pick(nPos, 41, 30), " ")
#define R_GEEX8000_REFMVT(A) put(nRec, 41, A :30.30)
!-----------------------------------------------------------
! FIELD : UVCMVT Nombre d'unités du mouvement de régularisation-Number of units of regularization movement
! -
#define S_GEEX8000_UVCMVT peel(pick(nPos, 71, 9), " ")
#define R_GEEX8000_UVCMVT(A) put(nRec, 71, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CODACT Code activité logistique-Code logistics business
! -
#define S_GEEX8000_CODACT peel(pick(nPos, 80, 3), " ")
#define R_GEEX8000_CODACT(A) put(nRec, 80, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI Code du client propriétaire du stock-Code of the client owns the stock
! Blanc pour le "stock outil"-White for the "tool stock"
#define S_GEEX8000_CODCLI peel(pick(nPos, 83, 14), " ")
#define R_GEEX8000_CODCLI(A) put(nRec, 83, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO Code du produit-Product Code
! -
#define S_GEEX8000_CODPRO peel(pick(nPos, 97, 17), " ")
#define R_GEEX8000_CODPRO(A) put(nRec, 97, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO Variante logistique-logistics variant
! -
#define S_GEEX8000_VALPRO peel(pick(nPos, 114, 2), " ")
#define R_GEEX8000_VALPRO(A) put(nRec, 114, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODPRN Code produit d'une nomenclature-Product code of nomenclature
! Si gestion des nomenclatures-If BOM management
#define S_GEEX8000_CODPRN peel(pick(nPos, 116, 17), " ")
#define R_GEEX8000_CODPRN(A) put(nRec, 116, A :17.17)
!-----------------------------------------------------------
! FIELD : SPCPRO Sous par combien du produit-Sub by how much of the product
! -
#define S_GEEX8000_SPCPRO peel(pick(nPos, 133, 4), " ")
#define R_GEEX8000_SPCPRO(A) put(nRec, 133, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : PCBPRO Par combien du produit-By how much of the product
! -
#define S_GEEX8000_PCBPRO peel(pick(nPos, 137, 5), " ")
#define R_GEEX8000_PCBPRO(A) put(nRec, 137, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODSIT Code du site de stockage-Code of the storage site
! (Pour des utilisations en "multi-sites")-(For applications in "multi-site")
#define S_GEEX8000_CODSIT peel(pick(nPos, 142, 3), " ")
#define R_GEEX8000_CODSIT(A) put(nRec, 142, A :3.3)
!-----------------------------------------------------------
! FIELD : ZONSTS Zone de stockage de l'entrepôt-warehouse storage area
! -
#define S_GEEX8000_ZONSTS peel(pick(nPos, 145, 1), " ")
#define R_GEEX8000_ZONSTS(A) put(nRec, 145, A :1.1)
!-----------------------------------------------------------
! FIELD : ALLSTS Code de l'allée dans la zone-Code of the aisle in the area
! -
#define S_GEEX8000_ALLSTS peel(pick(nPos, 146, 3), " ")
#define R_GEEX8000_ALLSTS(A) put(nRec, 146, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : DPLSTS Déplacement de l'emplacement dans l'allée-location shift in the driveway
! -
#define S_GEEX8000_DPLSTS peel(pick(nPos, 149, 4), " ")
#define R_GEEX8000_DPLSTS(A) put(nRec, 149, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : NIVSTS Niveau de l'emplacement dans la colonne-placement level in column
! -
#define S_GEEX8000_NIVSTS peel(pick(nPos, 153, 2), " ")
#define R_GEEX8000_NIVSTS(A) put(nRec, 153, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : CODLOT Code du lot stocké-Lot code stored
! Si gestion des lots-If batch management
#define S_GEEX8000_CODLOT peel(pick(nPos, 155, 20), " ")
#define R_GEEX8000_CODLOT(A) put(nRec, 155, A :20.20)
!-----------------------------------------------------------
! FIELD : NUMLOT Numéro interne du lot de marchandise-Internal number of commodity lot
! -
#define S_GEEX8000_NUMLOT peel(pick(nPos, 175, 9), " ")
#define R_GEEX8000_NUMLOT(A) put(nRec, 175, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CODPAL Code de la palette stockée-Code stored pallet
! -
#define S_GEEX8000_CODPAL peel(pick(nPos, 184, 18), " ")
#define R_GEEX8000_CODPAL(A) put(nRec, 184, A :18.18)
!-----------------------------------------------------------
! FIELD : DATFVI Date de fin de vie du produit (obsolescence)-Date of end of life of the product (obsolescence)
! Si gestion des dates limites-If management deadlines
#define S_GEEX8000_DATFVI peel(pick(nPos, 202, 8), " ")
#define R_GEEX8000_DATFVI(A) put(nRec, 202, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : NUMDIM Numéro de desimmobilisation-Number of unlocking
! Selon le type de motif utilisé-Depending on the pattern used
#define S_GEEX8000_NUMDIM peel(pick(nPos, 210, 8), " ")
#define R_GEEX8000_NUMDIM(A) put(nRec, 210, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODTIE Code du tiers (Fournisseur ou Client)-third code (Supplier or Customer)
! Renseigné si TYPTIE = 1 ou 2-Provided if TYPTIE = 1 or 2
#define S_GEEX8000_CODTIE peel(pick(nPos, 218, 14), " ")
#define R_GEEX8000_CODTIE(A) put(nRec, 218, A :14.14)
!-----------------------------------------------------------
! FIELD : TYPTIE Type de tiers pour la gestion des emballages-Type third for the management of packaging
! -
#define S_GEEX8000_TYPTIE peel(pick(nPos, 232, 1), " ")
#define R_GEEX8000_TYPTIE(A) put(nRec, 232, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMCDE Numéro de la commande (Réception ou livraison)-Order number (Reception or delivery)
! Renseigné si TYPTIE = 1 ou 2-Provided if TYPTIE = 1 or 2
#define S_GEEX8000_NUMCDE peel(pick(nPos, 233, 8), " ")
#define R_GEEX8000_NUMCDE(A) put(nRec, 233, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SNUCDE Sous-numéro de commande (Réception/Livraison)-control subsystem number (Receiving / Shipping)
! Renseigné si TYPTIE = 1 ou 2-Provided if TYPTIE = 1 or 2
#define S_GEEX8000_SNUCDE peel(pick(nPos, 241, 3), " ")
#define R_GEEX8000_SNUCDE(A) put(nRec, 241, build(number(A):R03.0))
!-----------------------------------------------------------
! FIELD : CODUTI Code de l'utilisateur responsable du mouvement-User code responsible for movement
! -
#define S_GEEX8000_CODUTI peel(pick(nPos, 244, 10), " ")
#define R_GEEX8000_CODUTI(A) put(nRec, 244, A :10.10)
!-----------------------------------------------------------
! FIELD : UNIPRO Unité de mesure du produit-Product Measurement Unit
! -
#define S_GEEX8000_UNIPRO peel(pick(nPos, 254, 3), " ")
#define R_GEEX8000_UNIPRO(A) put(nRec, 254, A :3.3)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX8001 M80 : Mouvements divers (Facultatif)-M80: Murmurs (Optional)
! -
!===========================================================
! FIELD : CODEXC Code du mouvement d'échange-Code exchange movement
! Zone initialisée à "80"-Zone set to "80"
#define S_GEEX8001_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8001_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC Séparateur entre code et sous-code-Separator between code and subcode
! Zone initialisée à "."-Zone set to "."
#define S_GEEX8001_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8001_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC Sous-code du mouvement d'échange-Subcode exchange movement
! Zone initialisée à "01"-Zone set to "01"
#define S_GEEX8001_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8001_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC Code traitement du mouvement-motion processing codes
! Sans objet pour ce type de mouvement-Not applicable to this type of movement
#define S_GEEX8001_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8001_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : DATMVT Date du mouvement-Date of movement
! Au format 'ssaammjj'-The format 'CCYYMMDD'
#define S_GEEX8001_DATMVT peel(pick(nPos, 7, 8), " ")
#define R_GEEX8001_DATMVT(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUMVT Heure du mouvement-movement time
! Au format 'hhmmss'-The format 'hhmmss'
#define S_GEEX8001_HEUMVT peel(pick(nPos, 15, 6), " ")
#define R_GEEX8001_HEUMVT(A) put(nRec, 15, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : REFMVT Référence du mouvement-movement reference
! -
#define S_GEEX8001_REFMVT peel(pick(nPos, 21, 30), " ")
#define R_GEEX8001_REFMVT(A) put(nRec, 21, A :30.30)
!-----------------------------------------------------------
! FIELD : CODACT Code activité logistique-Code logistics business
! -
#define S_GEEX8001_CODACT peel(pick(nPos, 51, 3), " ")
#define R_GEEX8001_CODACT(A) put(nRec, 51, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPRO Code interne du produit-Internal product code
! -
#define S_GEEX8001_CODPRO peel(pick(nPos, 54, 17), " ")
#define R_GEEX8001_CODPRO(A) put(nRec, 54, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO Variante logistique (Gencod)-Logistics variant (EAN)
! -
#define S_GEEX8001_VALPRO peel(pick(nPos, 71, 2), " ")
#define R_GEEX8001_VALPRO(A) put(nRec, 71, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : PDBPAL Poids brut de la palette en Kg-gross weight of the pallet in Kg
! Pour gestion des produits à poids variable-To manage weight products
#define S_GEEX8001_PDBPAL peel(pick(nPos, 73, 7), " ")
#define R_GEEX8001_PDBPAL(A) put(nRec, 73, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : PDBMVT Poids brut mouvementé-eventful gross weight
! -
#define S_GEEX8001_PDBMVT peel(pick(nPos, 80, 7), " ")
#define R_GEEX8001_PDBMVT(A) put(nRec, 80, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : ANAPRO Code analyse du produit-Product code analysis
! -
#define S_GEEX8001_ANAPRO peel(pick(nPos, 87, 15), " ")
#define R_GEEX8001_ANAPRO(A) put(nRec, 87, A :15.15)
!-----------------------------------------------------------
! FIELD : FAMPRO Famille de classification du produit-Product Classification Family
! -
#define S_GEEX8001_FAMPRO peel(pick(nPos, 102, 10), " ")
#define R_GEEX8001_FAMPRO(A) put(nRec, 102, A :10.10)
!-----------------------------------------------------------
! FIELD : INDPRO Indicateurs paramétrables du produit-Product configurable indicators
! -
#define S_GEEX8001_INDPRO peel(pick(nPos, 112, 10), " ")
#define R_GEEX8001_INDPRO(A) put(nRec, 112, A :10.10)
!-----------------------------------------------------------
! FIELD : NLILIV Numéro de la ligne pour interface livraison-Line number for delivery interface
! -
#define S_GEEX8001_NLILIV peel(pick(nPos, 122, 5), " ")
#define R_GEEX8001_NLILIV(A) put(nRec, 122, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : CODTLI Code type de livraison-type of delivery code
! -
#define S_GEEX8001_CODTLI peel(pick(nPos, 127, 3), " ")
#define R_GEEX8001_CODTLI(A) put(nRec, 127, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPAL Code de la palette stockée aux normes EAN128-Code stored pallet standards EAN128
! -
#define S_GEEX8001_CODPAL peel(pick(nPos, 130, 18), " ")
#define R_GEEX8001_CODPAL(A) put(nRec, 130, A :18.18)
!-----------------------------------------------------------
! FIELD : DATFAB Date de fabrication-Date of manufacture
! -
#define S_GEEX8001_DATFAB peel(pick(nPos, 148, 8), " ")
#define R_GEEX8001_DATFAB(A) put(nRec, 148, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : MOTSAP Motif S.A.P.-S.A.P. pattern
! -
#define S_GEEX8001_MOTSAP peel(pick(nPos, 156, 4), " ")
#define R_GEEX8001_MOTSAP(A) put(nRec, 156, A :4.4)
!-----------------------------------------------------------
! FIELD : CODSAP Code S.A.P. (+/-)-S.A.P. code (+/-)
! -
#define S_GEEX8001_CODSAP peel(pick(nPos, 160, 3), " ")
#define R_GEEX8001_CODSAP(A) put(nRec, 160, A :3.3)
!-----------------------------------------------------------
! FIELD : STOSAP Emplacement de stockage S.A.P. (+/-)-storage location S.A.P. (+/-)
! -
#define S_GEEX8001_STOSAP peel(pick(nPos, 163, 4), " ")
#define R_GEEX8001_STOSAP(A) put(nRec, 163, A :4.4)
!-----------------------------------------------------------
! FIELD : STASAP Statut S.A.P. (+/-)-S.A.P. status (+/-)
! -
#define S_GEEX8001_STASAP peel(pick(nPos, 167, 1), " ")
#define R_GEEX8001_STASAP(A) put(nRec, 167, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC Zone disponible pour de futures utilisations-Area available for future use
! -
#define S_GEEX8001_DISEXC peel(pick(nPos, 168, 89), " ")
#define R_GEEX8001_DISEXC(A) put(nRec, 168, A :89.89)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX8020 M80 : Mouvements divers-M80: Mixed reactions
! -
!===========================================================
! FIELD : CODEXC Code du mouvement d'échange-Code exchange movement
! Zone initialisée à "80"-Zone set to "80"
#define S_GEEX8020_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8020_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC Séparateur entre code et sous-code-Separator between code and subcode
! Zone initialisée à "."-Zone set to "."
#define S_GEEX8020_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8020_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC Sous-code du mouvement d'échange-Subcode exchange movement
! Zone initialisée à "00"-Field initialized to "00"
#define S_GEEX8020_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8020_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC Code traitement du mouvement-motion processing codes
! Sans objet pour ce type de mouvement-Not applicable to this type of movement
#define S_GEEX8020_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8020_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : DATMVT Date du mouvement-Date of movement
! Au format 'ssaammjj'-The format 'CCYYMMDD'
#define S_GEEX8020_DATMVT peel(pick(nPos, 7, 8), " ")
#define R_GEEX8020_DATMVT(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUMVT Heure du mouvement-movement time
! Au format 'hhmmss'-The format 'hhmmss'
#define S_GEEX8020_HEUMVT peel(pick(nPos, 15, 6), " ")
#define R_GEEX8020_HEUMVT(A) put(nRec, 15, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODMVT Code du mouvement de journalisation-Code of Logging movement
! -
#define S_GEEX8020_CODMVT peel(pick(nPos, 21, 2), " ")
#define R_GEEX8020_CODMVT(A) put(nRec, 21, A :2.2)
!-----------------------------------------------------------
! FIELD : SENMVT Sens du mouvement physique-physical movement direction
! -
#define S_GEEX8020_SENMVT peel(pick(nPos, 23, 1), " ")
#define R_GEEX8020_SENMVT(A) put(nRec, 23, A :1.1)
!-----------------------------------------------------------
! FIELD : MOTMVT Motif du mouvement journalisé-movement pattern journaled
! Selon la table "MVT"-According to the table "MVT"
#define S_GEEX8020_MOTMVT peel(pick(nPos, 24, 3), " ")
#define R_GEEX8020_MOTMVT(A) put(nRec, 24, A :3.3)
!-----------------------------------------------------------
! FIELD : REFMVT Référence du mouvement-movement reference
! Format et contenu paramétrable-Format and configurable content
#define S_GEEX8020_REFMVT peel(pick(nPos, 27, 30), " ")
#define R_GEEX8020_REFMVT(A) put(nRec, 27, A :30.30)
!-----------------------------------------------------------
! FIELD : NLILIV Numéro de la ligne pour interface livraison-Line number for delivery interface
! -
#define S_GEEX8020_NLILIV peel(pick(nPos, 57, 5), " ")
#define R_GEEX8020_NLILIV(A) put(nRec, 57, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : UVCMVT Nombre d'unités du mouvement de régularisation-Number of units of regularization movement
! -
#define S_GEEX8020_UVCMVT peel(pick(nPos, 62, 9), " ")
#define R_GEEX8020_UVCMVT(A) put(nRec, 62, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CODACT Code activité logistique-Code logistics business
! -
#define S_GEEX8020_CODACT peel(pick(nPos, 71, 3), " ")
#define R_GEEX8020_CODACT(A) put(nRec, 71, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI Code du client propriétaire du stock-Code of the client owns the stock
! Blanc pour le "stock outil"-White for the "tool stock"
#define S_GEEX8020_CODCLI peel(pick(nPos, 74, 14), " ")
#define R_GEEX8020_CODCLI(A) put(nRec, 74, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO Code du produit-Product Code
! -
#define S_GEEX8020_CODPRO peel(pick(nPos, 88, 17), " ")
#define R_GEEX8020_CODPRO(A) put(nRec, 88, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO Variante logistique-logistics variant
! -
#define S_GEEX8020_VALPRO peel(pick(nPos, 105, 2), " ")
#define R_GEEX8020_VALPRO(A) put(nRec, 105, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : PCBPRO Par combien du produit-By how much of the product
! -
#define S_GEEX8020_PCBPRO peel(pick(nPos, 107, 5), " ")
#define R_GEEX8020_PCBPRO(A) put(nRec, 107, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : SPCPRO Sous par combien du produit-Sub by how much of the product
! -
#define S_GEEX8020_SPCPRO peel(pick(nPos, 112, 4), " ")
#define R_GEEX8020_SPCPRO(A) put(nRec, 112, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : CODLOT Code du lot stocké-Lot code stored
! Si gestion des lots-If batch management
#define S_GEEX8020_CODLOT peel(pick(nPos, 116, 20), " ")
#define R_GEEX8020_CODLOT(A) put(nRec, 116, A :20.20)
!-----------------------------------------------------------
! FIELD : CODPAL Code de la palette stockée-Code stored pallet
! -
#define S_GEEX8020_CODPAL peel(pick(nPos, 136, 18), " ")
#define R_GEEX8020_CODPAL(A) put(nRec, 136, A :18.18)
!-----------------------------------------------------------
! FIELD : DATFVI Date de fin de vie du produit (obsolescence)-Date of end of life of the product (obsolescence)
! Si gestion des dates limites-If management deadlines
#define S_GEEX8020_DATFVI peel(pick(nPos, 154, 8), " ")
#define R_GEEX8020_DATFVI(A) put(nRec, 154, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : SITPAL Site origine de la palette mise à jour-Site origin of the updated range
! Site de la palette mise à jour-Site update pallet
#define S_GEEX8020_SITPAL peel(pick(nPos, 162, 3), " ")
#define R_GEEX8020_SITPAL(A) put(nRec, 162, A :3.3)
!-----------------------------------------------------------
! FIELD : CLILIV Code du client à livrer-delivering customer code
! -
#define S_GEEX8020_CLILIV peel(pick(nPos, 165, 14), " ")
#define R_GEEX8020_CLILIV(A) put(nRec, 165, A :14.14)
!-----------------------------------------------------------
! FIELD : DISEXC Zone disponible pour de futures utilisations-Area available for future use
! -
#define S_GEEX8020_DISEXC peel(pick(nPos, 179, 78), " ")
#define R_GEEX8020_DISEXC(A) put(nRec, 179, A :78.78)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX8060 M80 : Mouvements d'immo/désimmo-M80: Movements of properties / désimmo
! -
!===========================================================
! FIELD : CODEXC Code du mouvement d'échange-Code exchange movement
! Zone initialisée à "80"-Zone set to "80"
#define S_GEEX8060_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8060_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC Séparateur entre code et sous-code-Separator between code and subcode
! Zone initialisée à "."-Zone set to "."
#define S_GEEX8060_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8060_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC Sous-code du mouvement d'échange-Subcode exchange movement
! Zone initialisée à "60"-Zone set to "60"
#define S_GEEX8060_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8060_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC Code traitement du mouvement-motion processing codes
! Sans objet pour ce type de mouvement-Not applicable to this type of movement
#define S_GEEX8060_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8060_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : CODACT Code activité logistique-Code logistics business
! -
#define S_GEEX8060_CODACT peel(pick(nPos, 7, 3), " ")
#define R_GEEX8060_CODACT(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : CODCLI Code du client propriétaire du stock-Code of the client owns the stock
! Blanc pour le "stock outil"-White for the "tool stock"
#define S_GEEX8060_CODCLI peel(pick(nPos, 10, 14), " ")
#define R_GEEX8060_CODCLI(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
! FIELD : CODPRO Code du produit-Product Code
! -
#define S_GEEX8060_CODPRO peel(pick(nPos, 24, 17), " ")
#define R_GEEX8060_CODPRO(A) put(nRec, 24, A :17.17)
!-----------------------------------------------------------
! FIELD : VALPRO Variante logistique-logistics variant
! -
#define S_GEEX8060_VALPRO peel(pick(nPos, 41, 2), " ")
#define R_GEEX8060_VALPRO(A) put(nRec, 41, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : MOTIMM Motif d'immobilisation-immobilization pattern
! -
#define S_GEEX8060_MOTIMM peel(pick(nPos, 43, 3), " ")
#define R_GEEX8060_MOTIMM(A) put(nRec, 43, A :3.3)
!-----------------------------------------------------------
! FIELD : DATIMM1 Date de début d'immobilisation-Start Date immobilization
! -
#define S_GEEX8060_DATIMM1 peel(pick(nPos, 46, 8), " ")
#define R_GEEX8060_DATIMM1(A) put(nRec, 46, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATIMM2 Date de fin d'immobilisation-End date capital
! -
#define S_GEEX8060_DATIMM2 peel(pick(nPos, 54, 8), " ")
#define R_GEEX8060_DATIMM2(A) put(nRec, 54, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATFVI Date de fin de vie du produit (obsolescence)-Date of end of life of the product (obsolescence)
! Si gestion des dates limites-If management deadlines
#define S_GEEX8060_DATFVI peel(pick(nPos, 62, 8), " ")
#define R_GEEX8060_DATFVI(A) put(nRec, 62, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : DATMVT Date du mouvement-Date of movement
! Au format 'ssaammjj'-The format 'CCYYMMDD'
#define S_GEEX8060_DATMVT peel(pick(nPos, 70, 8), " ")
#define R_GEEX8060_DATMVT(A) put(nRec, 70, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUMVT Heure du mouvement-movement time
! Au format 'hhmmss'-The format 'hhmmss'
#define S_GEEX8060_HEUMVT peel(pick(nPos, 78, 6), " ")
#define R_GEEX8060_HEUMVT(A) put(nRec, 78, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODMVT Code du mouvement de journalisation-Code of Logging movement
! -
#define S_GEEX8060_CODMVT peel(pick(nPos, 84, 2), " ")
#define R_GEEX8060_CODMVT(A) put(nRec, 84, A :2.2)
!-----------------------------------------------------------
! FIELD : SENMVT Sens du mouvement physique-physical movement direction
! -
#define S_GEEX8060_SENMVT peel(pick(nPos, 86, 1), " ")
#define R_GEEX8060_SENMVT(A) put(nRec, 86, A :1.1)
!-----------------------------------------------------------
! FIELD : MOTMVT Motif du mouvement journalisé-movement pattern journaled
! Selon la table "MVT"-According to the table "MVT"
#define S_GEEX8060_MOTMVT peel(pick(nPos, 87, 3), " ")
#define R_GEEX8060_MOTMVT(A) put(nRec, 87, A :3.3)
!-----------------------------------------------------------
! FIELD : EDIMVT Code du mouvement pour E.D.I.-Code of the movement for E.D.I.
! Selon la table "MVT"-According to the table "MVT"
#define S_GEEX8060_EDIMVT peel(pick(nPos, 90, 3), " ")
#define R_GEEX8060_EDIMVT(A) put(nRec, 90, A :3.3)
!-----------------------------------------------------------
! FIELD : REFMVT Référence du mouvement-movement reference
! Format et contenu paramétrable-Format and configurable content
#define S_GEEX8060_REFMVT peel(pick(nPos, 93, 30), " ")
#define R_GEEX8060_REFMVT(A) put(nRec, 93, A :30.30)
!-----------------------------------------------------------
! FIELD : UVCMVT Nombre d'unités du mouvement de régularisation-Number of units of regularization movement
! -
#define S_GEEX8060_UVCMVT peel(pick(nPos, 123, 9), " ")
#define R_GEEX8060_UVCMVT(A) put(nRec, 123, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : UNIPRO Unité de mesure du produit-Product Measurement Unit
! -
#define S_GEEX8060_UNIPRO peel(pick(nPos, 132, 3), " ")
#define R_GEEX8060_UNIPRO(A) put(nRec, 132, A :3.3)
!-----------------------------------------------------------
! FIELD : SITPAL Site origine de la palette mise à jour-Site origin of the updated range
! Site de la palette mise à jour-Site update pallet
#define S_GEEX8060_SITPAL peel(pick(nPos, 135, 3), " ")
#define R_GEEX8060_SITPAL(A) put(nRec, 135, A :3.3)
!-----------------------------------------------------------
! FIELD : CODPAL Code de la palette stockée aux normes EAN128-Code stored pallet standards EAN128
! -
#define S_GEEX8060_CODPAL peel(pick(nPos, 138, 18), " ")
#define R_GEEX8060_CODPAL(A) put(nRec, 138, A :18.18)
!-----------------------------------------------------------
! FIELD : CODLOT Code du lot stocké-Lot code stored
! -
#define S_GEEX8060_CODLOT peel(pick(nPos, 156, 20), " ")
#define R_GEEX8060_CODLOT(A) put(nRec, 156, A :20.20)
!-----------------------------------------------------------
! FIELD : NUMLOT Numéro interne du lot de marchandise-Internal number of commodity lot
! -
#define S_GEEX8060_NUMLOT peel(pick(nPos, 176, 9), " ")
#define R_GEEX8060_NUMLOT(A) put(nRec, 176, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : HEUIMM1 Heure de début d'immobilisation-early immobilization time
! -
#define S_GEEX8060_HEUIMM1 peel(pick(nPos, 185, 6), " ")
#define R_GEEX8060_HEUIMM1(A) put(nRec, 185, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : HEUIMM2 Heure de fin d'immobilisation-end of immobilization time
! -
#define S_GEEX8060_HEUIMM2 peel(pick(nPos, 191, 6), " ")
#define R_GEEX8060_HEUIMM2(A) put(nRec, 191, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODSAP Code S.A.P. (+/-)-S.A.P. code (+/-)
! -
#define S_GEEX8060_CODSAP peel(pick(nPos, 197, 3), " ")
#define R_GEEX8060_CODSAP(A) put(nRec, 197, A :3.3)
!-----------------------------------------------------------
! FIELD : STOSAP Emplacement de stockage S.A.P. (+/-)-storage location S.A.P. (+/-)
! -
#define S_GEEX8060_STOSAP peel(pick(nPos, 200, 4), " ")
#define R_GEEX8060_STOSAP(A) put(nRec, 200, A :4.4)
!-----------------------------------------------------------
! FIELD : STASAP Statut S.A.P. (+/-)-S.A.P. status (+/-)
! -
#define S_GEEX8060_STASAP peel(pick(nPos, 204, 1), " ")
#define R_GEEX8060_STASAP(A) put(nRec, 204, A :1.1)
!-----------------------------------------------------------
! FIELD : DISEXC Zone disponible pour de futures utilisations-Area available for future use
! -
#define S_GEEX8060_DISEXC peel(pick(nPos, 205, 52), " ")
#define R_GEEX8060_DISEXC(A) put(nRec, 205, A :52.52)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX8080 M80 : Mouvements divers sur compte emballages-M80: Mixed reactions on account packages
! -
!===========================================================
! FIELD : CODEXC Code du mouvement d'échange-Code exchange movement
! Zone initialisée à "80"-Zone set to "80"
#define S_GEEX8080_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8080_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC Séparateur entre code et sous-code-Separator between code and subcode
! Zone initialisée à "."-Zone set to "."
#define S_GEEX8080_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8080_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC Sous-code du mouvement d'échange-Subcode exchange movement
! Zone initialisée à "80"-Zone set to "80"
#define S_GEEX8080_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8080_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC Code traitement du mouvement-motion processing codes
! Sans objet pour ce type de mouvement-Not applicable to this type of movement
#define S_GEEX8080_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8080_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : DATMVT Date du mouvement-Date of movement
! Au format 'ssaammjj'-The format 'CCYYMMDD'
#define S_GEEX8080_DATMVT peel(pick(nPos, 7, 8), " ")
#define R_GEEX8080_DATMVT(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUMVT Heure du mouvement-movement time
! Au format 'hhmmss'-The format 'hhmmss'
#define S_GEEX8080_HEUMVT peel(pick(nPos, 15, 6), " ")
#define R_GEEX8080_HEUMVT(A) put(nRec, 15, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODEMB Code de l'emballage de manutention-Code handling packaging
! -
#define S_GEEX8080_CODEMB peel(pick(nPos, 21, 3), " ")
#define R_GEEX8080_CODEMB(A) put(nRec, 21, A :3.3)
!-----------------------------------------------------------
! FIELD : PROEMB Code produit de l'emballage pour interfaçage-Code Product Packaging for interfacing
! -
#define S_GEEX8080_PROEMB peel(pick(nPos, 24, 17), " ")
#define R_GEEX8080_PROEMB(A) put(nRec, 24, A :17.17)
!-----------------------------------------------------------
! FIELD : PRXEMB Prix unitaire indicatif de l'emballage-Indicative price of the package
! -
#define S_GEEX8080_PRXEMB peel(pick(nPos, 41, 6), " ")
#define R_GEEX8080_PRXEMB(A) put(nRec, 41, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : TYPTIE Type de tiers pour la gestion des emballages-Type third for the management of packaging
! -
#define S_GEEX8080_TYPTIE peel(pick(nPos, 47, 1), " ")
#define R_GEEX8080_TYPTIE(A) put(nRec, 47, A :1.1)
!-----------------------------------------------------------
! FIELD : CODTIE Code du tiers (Fournisseur/Client/Transporteur)-third code (Supplier / Customer / Carrier)
! -
#define S_GEEX8080_CODTIE peel(pick(nPos, 48, 14), " ")
#define R_GEEX8080_CODTIE(A) put(nRec, 48, A :14.14)
!-----------------------------------------------------------
! FIELD : MOTMVB Motif du mouvement d'emballage-Reason packaging movement
! -
#define S_GEEX8080_MOTMVB peel(pick(nPos, 62, 3), " ")
#define R_GEEX8080_MOTMVB(A) put(nRec, 62, A :3.3)
!-----------------------------------------------------------
! FIELD : REFMVT Référence du mouvement-movement reference
! -
#define S_GEEX8080_REFMVT peel(pick(nPos, 65, 30), " ")
#define R_GEEX8080_REFMVT(A) put(nRec, 65, A :30.30)
!-----------------------------------------------------------
! FIELD : CMTMVB Commentaire pour la régul. d'emballage-Comments for Regul. packing
! -
#define S_GEEX8080_CMTMVB peel(pick(nPos, 95, 30), " ")
#define R_GEEX8080_CMTMVB(A) put(nRec, 95, A :30.30)
!-----------------------------------------------------------
! FIELD : QTBENT Quantité entrée d'emballages-Amount input containers
! -
#define S_GEEX8080_QTBENT peel(pick(nPos, 125, 9), " ")
#define R_GEEX8080_QTBENT(A) put(nRec, 125, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : QTBSOR Quantité sortie d'emballages-Output quantity of packaging
! -
#define S_GEEX8080_QTBSOR peel(pick(nPos, 134, 9), " ")
#define R_GEEX8080_QTBSOR(A) put(nRec, 134, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : CODACT Code activité logistique-Code logistics business
! -
#define S_GEEX8080_CODACT peel(pick(nPos, 143, 3), " ")
#define R_GEEX8080_CODACT(A) put(nRec, 143, A :3.3)
!-----------------------------------------------------------
! FIELD : DATEMB Date de saisie physique du mouvement-Date of physical motion capture
! -
#define S_GEEX8080_DATEMB peel(pick(nPos, 146, 8), " ")
#define R_GEEX8080_DATEMB(A) put(nRec, 146, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : CODTRA Code du transporteur-Carrier Code
! -
#define S_GEEX8080_CODTRA peel(pick(nPos, 154, 14), " ")
#define R_GEEX8080_CODTRA(A) put(nRec, 154, A :14.14)
!-----------------------------------------------------------
! FIELD : CODFOU Code du fournisseur-Supplier code
! -
#define S_GEEX8080_CODFOU peel(pick(nPos, 168, 14), " ")
#define R_GEEX8080_CODFOU(A) put(nRec, 168, A :14.14)
!-----------------------------------------------------------
! FIELD : CODCLI Code du client propriétaire du stock-Code of the client owns the stock
! -
#define S_GEEX8080_CODCLI peel(pick(nPos, 182, 14), " ")
#define R_GEEX8080_CODCLI(A) put(nRec, 182, A :14.14)
!-----------------------------------------------------------
! FIELD : EDIMVT Code du mouvement pour E.D.I.-Code of the movement for E.D.I.
! -
#define S_GEEX8080_EDIMVT peel(pick(nPos, 196, 3), " ")
#define R_GEEX8080_EDIMVT(A) put(nRec, 196, A :3.3)
!-----------------------------------------------------------
! FIELD : DISEXC Zone disponible pour de futures utilisations-Area available for future use
! -
#define S_GEEX8080_DISEXC peel(pick(nPos, 199, 58), " ")
#define R_GEEX8080_DISEXC(A) put(nRec, 199, A :58.58)
!-----------------------------------------------------------
!===========================================================
! Line : GEEX8084 M80 : Mouvements divers sur compte emballages-M80: Mixed reactions on account packages
! -
!===========================================================
! FIELD : CODEXC Code du mouvement d'échange-Code exchange movement
! Zone initialisée à "80"-Zone set to "80"
#define S_GEEX8084_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_GEEX8084_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC Séparateur entre code et sous-code-Separator between code and subcode
! Zone initialisée à "."-Zone set to "."
#define S_GEEX8084_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_GEEX8084_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC Sous-code du mouvement d'échange-Subcode exchange movement
! Zone initialisée à "80"-Zone set to "80"
#define S_GEEX8084_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_GEEX8084_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC Code traitement du mouvement-motion processing codes
! Sans objet pour ce type de mouvement-Not applicable to this type of movement
#define S_GEEX8084_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_GEEX8084_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : DATMVT Date du mouvement-Date of movement
! Au format 'ssaammjj'-The format 'CCYYMMDD'
#define S_GEEX8084_DATMVT peel(pick(nPos, 7, 8), " ")
#define R_GEEX8084_DATMVT(A) put(nRec, 7, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUMVT Heure du mouvement-movement time
! Au format 'hhmmss'-The format 'hhmmss'
#define S_GEEX8084_HEUMVT peel(pick(nPos, 15, 6), " ")
#define R_GEEX8084_HEUMVT(A) put(nRec, 15, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : CODEMB Code de l'emballage de manutention-Code handling packaging
! -
#define S_GEEX8084_CODEMB peel(pick(nPos, 21, 3), " ")
#define R_GEEX8084_CODEMB(A) put(nRec, 21, A :3.3)
!-----------------------------------------------------------
! FIELD : LIBTYP LIbellé du type de traitement de l'immatric.-Wording the type of treatment immatric.
! -
#define S_GEEX8084_LIBTYP peel(pick(nPos, 24, 3), " ")
#define R_GEEX8084_LIBTYP(A) put(nRec, 24, A :3.3)
!-----------------------------------------------------------
! FIELD : CODIMA Immatriculation de l'emballage-Registration packaging
! -
#define S_GEEX8084_CODIMA peel(pick(nPos, 27, 210), " ")
#define R_GEEX8084_CODIMA(A) put(nRec, 27, A :210.210)
!-----------------------------------------------------------
! FIELD : DISEXC Zone disponible pour de futures utilisations-Area available for future use
! -
#define S_GEEX8084_DISEXC peel(pick(nPos, 237, 20), " ")
#define R_GEEX8084_DISEXC(A) put(nRec, 237, A :20.20)
!-----------------------------------------------------------
!===========================================================
! Line : 9900FILEFOOTER 
!===========================================================
! FIELD : CODEXC 
#define S_9900FILEFOOTER_CODEXC peel(pick(nPos, 1, 2), " ")
#define R_9900FILEFOOTER_CODEXC(A) put(nRec, 1, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : SEPEXC 
#define S_9900FILEFOOTER_SEPEXC peel(pick(nPos, 3, 1), " ")
#define R_9900FILEFOOTER_SEPEXC(A) put(nRec, 3, A :1.1)
!-----------------------------------------------------------
! FIELD : SCOEXC 
#define S_9900FILEFOOTER_SCOEXC peel(pick(nPos, 4, 2), " ")
#define R_9900FILEFOOTER_SCOEXC(A) put(nRec, 4, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : TRTEXC 
#define S_9900FILEFOOTER_TRTEXC peel(pick(nPos, 6, 1), " ")
#define R_9900FILEFOOTER_TRTEXC(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : EMTEXC 
#define S_9900FILEFOOTER_EMTEXC peel(pick(nPos, 7, 14), " ")
#define R_9900FILEFOOTER_EMTEXC(A) put(nRec, 7, A :14.14)
!-----------------------------------------------------------
! FIELD : RCTEXC 
#define S_9900FILEFOOTER_RCTEXC peel(pick(nPos, 21, 14), " ")
#define R_9900FILEFOOTER_RCTEXC(A) put(nRec, 21, A :14.14)
!-----------------------------------------------------------
! FIELD : DATEXC 
#define S_9900FILEFOOTER_DATEXC peel(pick(nPos, 35, 8), " ")
#define R_9900FILEFOOTER_DATEXC(A) put(nRec, 35, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : HEUEXC 
#define S_9900FILEFOOTER_HEUEXC peel(pick(nPos, 43, 6), " ")
#define R_9900FILEFOOTER_HEUEXC(A) put(nRec, 43, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : NUMEXC 
#define S_9900FILEFOOTER_NUMEXC peel(pick(nPos, 49, 7), " ")
#define R_9900FILEFOOTER_NUMEXC(A) put(nRec, 49, build(number(A):R07.0))
!-----------------------------------------------------------
! FIELD : CPTEXC 
#define S_9900FILEFOOTER_CPTEXC peel(pick(nPos, 56, 8), " ")
#define R_9900FILEFOOTER_CPTEXC(A) put(nRec, 56, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : NOMSYS 
#define S_9900FILEFOOTER_NOMSYS peel(pick(nPos, 64, 8), " ")
#define R_9900FILEFOOTER_NOMSYS(A) put(nRec, 64, A :8.8)
!-----------------------------------------------------------
! FIELD : NOMDTQ 
#define S_9900FILEFOOTER_NOMDTQ peel(pick(nPos, 72, 10), " ")
#define R_9900FILEFOOTER_NOMDTQ(A) put(nRec, 72, A :10.10)
!-----------------------------------------------------------
! FIELD : BIBDTQ 
#define S_9900FILEFOOTER_BIBDTQ peel(pick(nPos, 82, 10), " ")
#define R_9900FILEFOOTER_BIBDTQ(A) put(nRec, 82, A :10.10)
!-----------------------------------------------------------
! FIELD : IDEMSG 
#define S_9900FILEFOOTER_IDEMSG peel(pick(nPos, 92, 30), " ")
#define R_9900FILEFOOTER_IDEMSG(A) put(nRec, 92, A :30.30)
!-----------------------------------------------------------
! FIELD : DISEXC 
#define S_9900FILEFOOTER_DISEXC peel(pick(nPos, 122, 135), " ")
#define R_9900FILEFOOTER_DISEXC(A) put(nRec, 122, A :135.135)
!-----------------------------------------------------------



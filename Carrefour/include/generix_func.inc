%@(#)====================================================================
%@(#)|                       generix_func.inc                           |
%@(#)|           Librairie de fonctions utilitaires Generix             |
%@(#)|             Creation le 21/12/2007 par F. CHARLET                |
%@(#)|                    Version actuelle : v1.0                       |
%@(#)====================================================================

!========================================================================================
! Fichier : generix_func.inc
!========================================================================================
! Description : Librairie de fonctions utilitaires appelés par les traducteurs.
!========================================================================================
! Argument : aucun
!========================================================================================
! Auteur : FC - Generix Group
!========================================================================================
!                             Liste des fonctions
!========================================================================================
! bfSYSLOG      	: valide l'utilisation de la SYSLOG
! bfBEGIN       	: affiche un message de début de programme
! bfEND         	: affiche un message de  fin  de programme
! bfEXIT        	: gestion de sortie "brutale" de programme
! bfLOGt        	: affiche un libellé et une chaîne
! bfLOGn        	: affiche un libellé et une valeur numérique
! bfDEBUGt      	: affiche un libellé et une chaîne
! bfDEBUGn      	: affiche un libellé et une valeur numérique
! bfERREURt     	: affiche un libellé d'erreur et une chaîne
! bfERREURn     	: affiche un libellé d'erreur et une valeur numérique
! tfNOW         	: retourne la date et l'heure courante : jj.mm.aaaa hh:mm:ss
! tfConvertDate     : retourne la date au format voulu
! tfFindTransco     : retourne la valeur transcodifiée
!========================================================================================

base "partner.cfg" PARTNER
base "syslog.cfg" SYSLOG

#define MAX_LABEL_SIZE 50

!------------------------------------------------------------------------------
! Nom         : bfSYSLOG
! Arguments   : (aucun)
! Retour      : (aucun)
! Description :
!------------------------------------------------------------------------------
function bfSYSLOG()
	SYSLOG := find(sSYSLOG, INDEX=number(pINDEX))
	if not valid(SYSLOG) then
		bfERREURt("INDEX SYSLOG incorrect", pINDEX)
		bfEXIT(1)
	else
		close(SYSLOG.l)
		pEDISEND.ORIGINAL.REALNAME := SYSLOG.l  { "EDISEND.ORIGINAL.REALNAME", "=" }
		close(SYSLOG.l)

		redirect(LOGGING,SYSLOG.l)

		!
		! pour conserver le nom du fichier d'origine (EDISEND)
		!
		if pEDISEND.ORIGINAL.REALNAME = EMPTY then
			pEDISEND.ORIGINAL.REALNAME := pEDISEND.ORIGINAL.NAME
		endif

		!
		! pour conserver le nom du fichier d'origine (ROUTING FILE)
		!
		if pEDISEND.ORIGINAL.REALNAME = EMPTY then
			pEDISEND.ORIGINAL.REALNAME := pGW.ORIGINAL.NAME
		endif
		
        !
        ! pour conserver le nom du fichier d'origine (ROUTING FTP)
        !
        if pEDISEND.ORIGINAL.REALNAME = EMPTY then
			nChamp := split(pINFTP.DATAFILE, taTab, "/")
           	pEDISEND.ORIGINAL.REALNAME := taTab[nChamp]
       	endif		

		log("EDISEND.ORIGINAL.REALNAME=",pEDISEND.ORIGINAL.REALNAME, NL)
	endif
endfunction

!------------------------------------------------------------------------------
! Nom         : bfBEGIN
! Arguments   : (aucun)
! Retour      : (aucun)
! Description : affiche un message de debut de programme
!------------------------------------------------------------------------------
function bfBEGIN()
	log(NL)
	bfLOGt(build("--- ",TX_PROG_INFO," begins..."),tfNOW())
	bfSYSLOG()
endfunction

!------------------------------------------------------------------------------
! Nom         : bfEND
! Arguments   : (aucun)
! Retour      : (aucun)
! Description : affiche un message de fin de programme
!------------------------------------------------------------------------------
function bfEND()
	!bfGetGLNEntrepot()
	bfLOGt(build("--- ",TX_PROG_INFO," ends."),tfNOW())
	log(NL)
endfunction

!------------------------------------------------------------------------------
! Nom         : bfEXIT
! Arguments   : code erreur (numérique)
! Retour      : (aucun)
! Description : gestion de la sortie "brutale" de programme
!------------------------------------------------------------------------------
function bfEXIT(nEXIT_code)
	bfEND()
	exit(nEXIT_code)
endfunction

!------------------------------------------------------------------------------
! Nom         : bfLOGt
! Arguments   : un libellé (texte) et une chaîne (texte)
! Retour      : (aucun)
! Description :
!------------------------------------------------------------------------------
function bfLOGt(tLOG_label,tLOG_value)
	log("- ",tLOG_label:50.50," : ",tLOG_value,NL)
endfunction

!------------------------------------------------------------------------------
! Nom         : bfLOGn
! Arguments   : un libellé (texte) et une valeur (numérique)
! Retour      : (aucun)
! Description :
!------------------------------------------------------------------------------
function bfLOGn(tLOG_label,nLOG_value)
	log("- ",tLOG_label:50.50," : ",nLOG_value,NL)
endfunction

!------------------------------------------------------------------------------
! Nom         : bfDEBUGt
! Arguments   : un libellé (texte) et une chaîne (texte)
! Retour      : (aucun)
! Description :
!------------------------------------------------------------------------------
function bfDEBUGt(tDEBUG_label,tDEBUG_value)
	debug("# ",tDEBUG_label:50.50," : ",tDEBUG_value,NL)
endfunction

!------------------------------------------------------------------------------
! Nom         : bfDEBUGn
! Arguments   : un libellé (texte) et une valeur (numérique)
! Retour      : (aucun)
! Description :
!------------------------------------------------------------------------------
function bfDEBUGn(tDEBUG_label,nDEBUG_value)
	debug("# ",tDEBUG_label:50.50," : ",nDEBUG_value,NL)
endfunction

!------------------------------------------------------------------------------
! Nom         : bfERREURt
! Arguments   : un libellé (texte) et une chaîne (texte)
! Retour      : (aucun)
! Description :
!------------------------------------------------------------------------------
function bfERREURt(tERREUR_label,tERREUR_value)
	log("! ",tERREUR_label:50.50," : ",tERREUR_value,NL)
endfunction

!------------------------------------------------------------------------------
! Nom         : bfERREURn
! Arguments   : un libellé (texte) et une valeur (numérique)
! Retour      : (aucun)
! Description :
!------------------------------------------------------------------------------
function bfERREURn(tERREUR_label,nERREUR_value)
	log("! ",tERREUR_label:50.50," : ",nERREUR_value,NL)
endfunction

!------------------------------------------------------------------------------
! Nom         : tfNOW
! Arguments   : (aucun)
! Retour      : "jj.mm.aaaa hh:mm:ss"
! Description : retourne la date et l'heure courante au format jj.mm.aaaa hh:mm:ss
!------------------------------------------------------------------------------
function tfNOW()
	return time("now","%d.%m.%Y %H:%M:%S")
endfunction

!----------------------------------------------------------------------------------------
! function pour convertir la date tDate du format tFormatIn au format tFormatOut
!	
!----------------------------------------------------------------------------------------
!	Attention, les formats d'entrée et de sortie doivent être défini
!	dans la fonction
!----------------------------------------------------------------------------------------
!
!----------------------------------------------------------------------------------------


function tfConvertDate(tDate, tFormatIn, tFormatOut)

	switch(peel(toupper(tFormatIn)," ")) 
		case "YYYYMMDD": 
			tYear := substr(tDate,1,4)
			tMonth := substr(tDate,5,2)
			tDay := substr(tDate,7,2)
		case "DDMMYYYY":
			tYear := substr(tDate,5,4)
			tMonth := substr(tDate,3,2)
			tDay := substr(tDate,1,2)
		case "MMDDYYYY":
			tYear := substr(tDate,5,4)
			tMonth := substr(tDate,1,2)
			tDay := substr(tDate,3,2)
		case "DD/MM/YY" :
			tYear := build("20",substr(tDate,7,2))
			tMonth := substr(tDate,4,2)
			tDay := substr(tDate,1,2)
		case "DD-MM-YYYY" :
			tYear := substr(tDate,7,4)
			tMonth := substr(tDate,4,2)
			tDay := substr(tDate,1,2)
		case "YYYY-MM-DD" :
			tYear := substr(tDate,1,4)
			tMonth := substr(tDate,6,2)
			tDay := substr(tDate,9,2)
		case "DD/MM/YYYY" :
			tYear := substr(tDate,7,4)
			tMonth := substr(tDate,4,2)
			tDay := substr(tDate,1,2)
		case "DDMMYY" :
			tYear := build("20", substr(tDate,5,2))
			tMonth :=substr(tDate,3,2)
			tDay := substr(tDate,1,2)
		case "YYYYMMDDHHMM":
			tYear := substr(tDate,1,4)
			tMonth := substr(tDate,5,2)
			tDay := substr(tDate,7,2)
			tHour := substr(tDate,9,2)
			tMinut := substr(tDate,11,2)
			
		case "HH:MM":
			tHour := substr(tDate,1,2)
			tMinut := substr(tDate,4,2)
               ! JEM 07/03/2008
		case "DDMMYYYYHHMMSS":
                        tYear := substr(tDate,5,4)
                        tMonth := substr(tDate,3,2)
                        tDay := substr(tDate,1,2)
                        tHour := substr(tDate,9,2)
                        tMinut := substr(tDate,11,2)
                        tSecond :=substr(tDate,13,2)
		case "YYYYMMDDHHMMSS" :
			tYear := substr(tDate,1,4)
			tMonth := substr(tDate,5,2)
			tDay := substr(tDate,7,2)
			tHour := substr(tDate,9,2)
			tMinut := substr(tDate,11,2)
			tSecond :=substr(tDate,13,2)
		case "YYYY-MM-DDTHH:MM:SS" :
			tYear := substr(tDate,1,4)
			tMonth := substr(tDate,6,2)
			tDay := substr(tDate,9,2)
			tHour := substr(tDate,12,2)
			tMinut := substr(tDate,15,2)
			tSecond :=substr(tDate,18,2)
		case "YYYYMMDDTHH:MM:SS+HH:MM" :
			tYear := substr(tDate,1,4)
			tMonth := substr(tDate,5,2)
			tDay := substr(tDate,7,2)
			tHour := substr(tDate,10,2)
			tMinut := substr(tDate,13,2)
			tSecond :=substr(tDate,16,2)

		default :
			bfERREURt("Format Date invalide In", tFormatIn)
			bfEXIT(1)
	endswitch


        if number (tYear) = 0 or tYear = EMPTY then
			bfERREURt("Date invalide - Annee", tYear)
!			bfEXIT(1)
        endif

        if number(tMonth) < 1 or number (tMonth) > 12 or tMonth = EMPTY then
			bfERREURt("Date invalide - Mois", tMonth)
!			bfEXIT(1)
        endif

        if number(tDay) < 1 or number (tDay) > 31 or tDay = EMPTY then
			bfERREURt("Date invalide - Jour", tDay)
!			bfEXIT(1)
        endif



	switch(toupper(tFormatOut)) 
		case "YYYYMMDD" :
			tReturnDate := build(tYear,tMonth,tDay)
			return(tReturnDate)
		case "DD/MM/YY" :
			tReturnDate := build(tDay, "/", tMonth, "/", substr(tYear, 3, 2))
			return(tReturnDate)
		case "DD/MM/YYYY" :
			tReturnDate := build(tDay, "/", tMonth, "/", tYear)
			return(tReturnDate)
			
			
		case "DD/MM/AAAA - HH:MM:SS" :
			tReturnDate := build(tDay, "/", tMonth, "/", tYear, " - ",tHour, ":",tMinut, ":",tSecond)
			return(tReturnDate)
			
				
			
		case "YYYY-MM-DD" :
		
			tReturnDate := build(tYear, "-",tMonth, "-", tDay)
			return(tReturnDate)
		case "DDMMYYYY" :
			tReturnDate := build(tDay,tMonth, tYear)
			return(tReturnDate)
		case "HHMM" :
			tReturnDate := build(tHour,tMinut)
			return(tReturnDate)
		case "HHMMSS" :
			tReturnDate := build(tHour,tMinut,tSecond)
			return(tReturnDate)
		case "YYYYMMDDHHMM":
			tReturnDate := build(tYear,tMonth,tDay,tHour,tMinut)
			return(tReturnDate)
		case "YYYYMMDDHHMMSS":
			tReturnDate := build(tYear,tMonth,tDay,tHour,tMinut,tSecond)
			return(tReturnDate)
		case "YYYY-MM-DDTHH:MM:SS" :
			tReturnDate := build(tYear, "-",tMonth, "-",tDay, "T",tHour, ":",tMinut, ":",tSecond)
			return(tReturnDate)
		case "YYYYMMDDTHH:MM:SS+HH:MM" :
			tReturnDate := build(tYear,tMonth,tDay, "T",tHour, ":",tMinut, ":",tSecond,"+00:00")
			return(tReturnDate)
		case "YYYY-MM-DDT00:00:00" :
			tReturnDate := build(tYear, "-",tMonth, "-",tDay, "T00:00:00")
			return(tReturnDate)
                case "YYYYMMDDT00:00:00+00:00" :
			tReturnDate := build(tYear,tMonth,tDay, "T00:00:00+00:00")
			return(tReturnDate)
		case "YYYYMMDDTHH:MM:SS+00:00" :
			tReturnDate := build(tYear,tMonth,tDay, "T",tHour, ":",tMinut, ":",tSecond,"+00:00")
			return(tReturnDate)
		default :
			bfERREURt("Format Date invalide Out", tFormatout)
			return(tDate)
			! JEM 07/03/2008 bfEXIT(1)
	endswitch

endfunction


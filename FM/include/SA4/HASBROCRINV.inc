! File HASBRO_INV : 
!===========================================================
! Line : CR 
!===========================================================
! FIELD : recordtype 
#define S_CR_recordtype peel(pick(nPos, 1, 2), " ")
#define R_CR_recordtype(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : filetype 
#define S_CR_filetype peel(pick(nPos, 3, 3), " ")
#define R_CR_filetype(A) put(nRec, 3, A :3.3)
!-----------------------------------------------------------
! FIELD : plant 
#define S_CR_plant peel(pick(nPos, 6, 4), " ")
#define R_CR_plant(A) put(nRec, 6, A :4.4)
!-----------------------------------------------------------
! FIELD : filesequence 
#define S_CR_filesequence peel(pick(nPos, 10, 6), " ")
#define R_CR_filesequence(A) put(nRec, 10, A :6.6)
!-----------------------------------------------------------
! FIELD : filecreatedate 
#define S_CR_filecreatedate peel(pick(nPos, 16, 8), " ")
#define R_CR_filecreatedate(A) put(nRec, 16, A :8.8)
!-----------------------------------------------------------
! FIELD : endoflinemarker 
#define S_CR_endoflinemarker peel(pick(nPos, 24, 1), " ")
#define R_CR_endoflinemarker(A) put(nRec, 24, A :1.1)
!-----------------------------------------------------------
!===========================================================
! Line : DETAIL 
!===========================================================
! FIELD : plant 
#define S_DETAIL_plant peel(pick(nPos, 1, 4), " ")
#define R_DETAIL_plant(A) put(nRec, 1, A :4.4)
!-----------------------------------------------------------
! FIELD : movementtype 
#define S_DETAIL_movementtype peel(pick(nPos, 5, 3), " ")
#define R_DETAIL_movementtype(A) put(nRec, 5, A :3.3)
!-----------------------------------------------------------
! FIELD : postingdate 
#define S_DETAIL_postingdate peel(pick(nPos, 8, 6), " ")
#define R_DETAIL_postingdate(A) put(nRec, 8, A :6.6)
!-----------------------------------------------------------
! FIELD : materialnumber 
#define S_DETAIL_materialnumber peel(pick(nPos, 14, 18), " ")
#define R_DETAIL_materialnumber(A) put(nRec, 14, A :18.18)
!-----------------------------------------------------------
! FIELD : materialdescription 
#define S_DETAIL_materialdescription peel(pick(nPos, 32, 40), " ")
#define R_DETAIL_materialdescription(A) put(nRec, 32, A :40.40)
!-----------------------------------------------------------
! FIELD : storagelocation 
#define S_DETAIL_storagelocation peel(pick(nPos, 72, 4), " ")
#define R_DETAIL_storagelocation(A) put(nRec, 72, A :4.4)
!-----------------------------------------------------------
! FIELD : quantity 
#define S_DETAIL_quantity peel(pick(nPos, 76, 9), " ")
#define R_DETAIL_quantity(A) put(nRec, 76, A :9.9)
!-----------------------------------------------------------
! FIELD : vendornumber
#define S_DETAIL_vendornumber peel(pick(nPos, 85, 10), " ")
#define R_DETAIL_vendornumber(A) put(nRec, 85, A :10.10)
!-----------------------------------------------------------
! FIELD : costcenter 
#define S_DETAIL_costcenter peel(pick(nPos, 95, 10), " ")
#define R_DETAIL_costcenter(A) put(nRec, 95, A :10.10)
!-----------------------------------------------------------
! FIELD : reasoncode 
#define S_DETAIL_reasoncode peel(pick(nPos, 105, 4), " ")
#define R_DETAIL_reasoncode(A) put(nRec, 105, A :4.4)
!-----------------------------------------------------------
! FIELD : billoflading 
#define S_DETAIL_billoflading peel(pick(nPos, 109, 16), " ")
#define R_DETAIL_billoflading(A) put(nRec, 109, A :16.16)
!-----------------------------------------------------------
! FIELD : grgislipnumber 
#define S_DETAIL_grgislipnumber peel(pick(nPos, 125, 10), " ")
#define R_DETAIL_grgislipnumber(A) put(nRec, 125, A :10.10)
!-----------------------------------------------------------
! FIELD : PORAnumber 
#define S_DETAIL_PORAnumber peel(pick(nPos, 135, 10), " ")
#define R_DETAIL_PORAnumber(A) put(nRec, 135, A :10.10)
!-----------------------------------------------------------
! FIELD : PORAlinenumber 
#define S_DETAIL_PORAlinenumber peel(pick(nPos, 145, 5), " ")
#define R_DETAIL_PORAlinenumber(A) put(nRec, 145, A :5.5)
!-----------------------------------------------------------
! FIELD : vessel 
#define S_DETAIL_vessel peel(pick(nPos, 150, 28), " ")
#define R_DETAIL_vessel(A) put(nRec, 150, A :28.28)
!-----------------------------------------------------------
! FIELD : voyage 
#define S_DETAIL_voyage peel(pick(nPos, 178, 20), " ")
#define R_DETAIL_voyage(A) put(nRec, 178, A :20.20)
!-----------------------------------------------------------
! FIELD : container 
#define S_DETAIL_container peel(pick(nPos, 198, 20), " ")
#define R_DETAIL_container(A) put(nRec, 198, A :20.20)
!-----------------------------------------------------------
! FIELD : referencenumber 
#define S_DETAIL_referencenumber peel(pick(nPos, 218, 6), " ")
#define R_DETAIL_referencenumber(A) put(nRec, 218, A :6.6)
!-----------------------------------------------------------
! FIELD : Lot 
#define S_DETAIL_Lot peel(pick(nPos, 224, 10), " ")
#define R_DETAIL_Lot(A) put(nRec, 224, A :10.10)
!-----------------------------------------------------------
! FIELD : NFnumber 
#define S_DETAIL_NFnumber peel(pick(nPos, 234, 10), " ")
#define R_DETAIL_NFnumber(A) put(nRec, 234, A :10.10)
!-----------------------------------------------------------
! FIELD : NotaFiscalNumberSeries  
#define S_DETAIL_NotaFiscalNumberSeries peel(pick(nPos, 244, 3), " ")
#define R_DETAIL_NotaFiscalNumberSeries(A) put(nRec, 244, A :3.3)
!-----------------------------------------------------------
! FIELD : endoflinemarker 
#define S_DETAIL_endoflinemarker peel(pick(nPos, 247, 1), " ")
#define R_DETAIL_endoflinemarker(A) put(nRec, 247, A :1.1)
!-----------------------------------------------------------
!===========================================================
! Line : TR 
!===========================================================
! FIELD : recordTypeTR 
#define S_TR_recordTypeTR peel(pick(nPos, 1, 2), " ")
#define R_TR_recordTypeTR(A) put(nRec, 1, A :2.2)
!-----------------------------------------------------------
! FIELD : PLANT 
#define S_TR_PLANT peel(pick(nPos, 3, 4), " ")
#define R_TR_PLANT(A) put(nRec, 3, A :4.4)
!-----------------------------------------------------------
! FIELD : TOTALMATERIALCOUNT 
#define S_TR_TOTALMATERIALCOUNT peel(pick(nPos, 7, 7), " ")
#define R_TR_TOTALMATERIALCOUNT(A) put(nRec, 7, A :7.7)
!-----------------------------------------------------------
! FIELD : ENDOFLINEMARKER 
#define S_TR_ENDOFLINEMARKER peel(pick(nPos, 14, 1), " ")
#define R_TR_ENDOFLINEMARKER(A) put(nRec, 14, A :1.1)
!-----------------------------------------------------------

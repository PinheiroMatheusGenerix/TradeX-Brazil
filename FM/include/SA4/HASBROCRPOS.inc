! File HASBRO_CRMAT : 
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
! FIELD : vessel 
#define S_DETAIL_vessel peel(pick(nPos, 5, 28), " ")
#define R_DETAIL_vessel(A) put(nRec, 5, A :28.28)
!-----------------------------------------------------------
! FIELD : voyage 
#define S_DETAIL_voyage peel(pick(nPos, 33, 20), " ")
#define R_DETAIL_voyage(A) put(nRec, 33, A :20.20)
!-----------------------------------------------------------
! FIELD : container 
#define S_DETAIL_container peel(pick(nPos, 53, 20), " ")
#define R_DETAIL_container(A) put(nRec, 53, A :20.20)
!-----------------------------------------------------------
! FIELD : billoflading 
#define S_DETAIL_billoflading peel(pick(nPos, 73, 35), " ")
#define R_DETAIL_billoflading(A) put(nRec, 73, A :35.35)
!-----------------------------------------------------------
! FIELD : POnumber 
#define S_DETAIL_POnumber peel(pick(nPos, 108, 10), " ")
#define R_DETAIL_POnumber(A) put(nRec, 108, A :10.10)
!-----------------------------------------------------------
! FIELD : POlinenumber 
#define S_DETAIL_POlinenumber peel(pick(nPos, 118, 5), " ")
#define R_DETAIL_POlinenumber(A) put(nRec, 118, A :5.5)
!-----------------------------------------------------------
! FIELD : materialnumber 
#define S_DETAIL_materialnumber peel(pick(nPos, 123, 18), " ")
#define R_DETAIL_materialnumber(A) put(nRec, 123, A :18.18)
!-----------------------------------------------------------
! FIELD : materialdescription 
#define S_DETAIL_materialdescription peel(pick(nPos, 141, 40), " ")
#define R_DETAIL_materialdescription(A) put(nRec, 141, A :40.40)
!-----------------------------------------------------------
! FIELD : quantity 
#define S_DETAIL_quantity peel(pick(nPos, 181, 7), " ")
#define R_DETAIL_quantity(A) put(nRec, 181, A :7.7)
!-----------------------------------------------------------
! FIELD : estimatedarrivaldate 
#define S_DETAIL_estimatedarrivaldate peel(pick(nPos, 188, 8), " ")
#define R_DETAIL_estimatedarrivaldate(A) put(nRec, 188, A :8.8)
!-----------------------------------------------------------
! FIELD : departuredate  
#define S_DETAIL_departuredate peel(pick(nPos, 196, 8), " ")
#define R_DETAIL_departuredate(A) put(nRec, 196, A :8.8)
!-----------------------------------------------------------
! FIELD : portofentry 
#define S_DETAIL_portofentry peel(pick(nPos, 204, 20), " ")
#define R_DETAIL_portofentry(A) put(nRec, 204, A :20.20)
!-----------------------------------------------------------
! FIELD : casepack 
#define S_DETAIL_casepack peel(pick(nPos, 224, 5), " ")
#define R_DETAIL_casepack(A) put(nRec, 224, A :5.5)
!-----------------------------------------------------------
! FIELD : referencenumber 
#define S_DETAIL_referencenumber peel(pick(nPos, 229, 6), " ")
#define R_DETAIL_referencenumber(A) put(nRec, 229, A :6.6)
!-----------------------------------------------------------
! FIELD : NFnumber 
#define S_DETAIL_NFnumber peel(pick(nPos, 235, 10), " ")
#define R_DETAIL_NFnumber(A) put(nRec, 235, A :10.10)
!-----------------------------------------------------------
! FIELD : NotaFiscalNumberSeries  
#define S_DETAIL_NotaFiscalNumberSeries peel(pick(nPos, 245, 3), " ")
#define R_DETAIL_NotaFiscalNumberSeries(A) put(nRec, 245, A :3.3)
!-----------------------------------------------------------
! FIELD : POvendornumbe 
#define S_DETAIL_POvendornumbe peel(pick(nPos, 248, 10), " ")
#define R_DETAIL_POvendornumbe(A) put(nRec, 248, A :10.10)
!-----------------------------------------------------------
! FIELD : endoflinemarker 
#define S_DETAIL_endoflinemarker peel(pick(nPos, 212, 1), " ")
#define R_DETAIL_endoflinemarker(A) put(nRec, 212, A :1.1)
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

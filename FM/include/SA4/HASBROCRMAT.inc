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
! Line : PRODUCT 
!===========================================================
! FIELD : materialnumber 
#define S_PRODUCT_materialnumber peel(pick(nPos, 1, 18), " ")
#define R_PRODUCT_materialnumber(A) put(nRec, 1, A :18.18)
!-----------------------------------------------------------
! FIELD : materialdescription 
#define S_PRODUCT_materialdescription peel(pick(nPos, 19, 40), " ")
#define R_PRODUCT_materialdescription(A) put(nRec, 19, A :40.40)
!-----------------------------------------------------------
! FIELD : deliveryunitcasepack 
#define S_PRODUCT_deliveryunitcasepack peel(pick(nPos, 59, 5), " ")
#define R_PRODUCT_deliveryunitcasepack(A) put(nRec, 59, A :5.5)
!-----------------------------------------------------------
! FIELD : deliveryunitlength 
#define S_PRODUCT_deliveryunitlength peel(pick(nPos, 64, 9), " ")
#define R_PRODUCT_deliveryunitlength(A) put(nRec, 64, A :9.9)
!-----------------------------------------------------------
! FIELD : deliveryunitwidth 
#define S_PRODUCT_deliveryunitwidth peel(pick(nPos, 73, 9), " ")
#define R_PRODUCT_deliveryunitwidth(A) put(nRec, 73, A :9.9)
!-----------------------------------------------------------
! FIELD : deliveryunitheight 
#define S_PRODUCT_deliveryunitheight peel(pick(nPos, 82, 9), " ")
#define R_PRODUCT_deliveryunitheight(A) put(nRec, 82, A :9.9)
!-----------------------------------------------------------
! FIELD : deliveryunitcube 
#define S_PRODUCT_deliveryunitcube peel(pick(nPos, 91, 11), " ")
#define R_PRODUCT_deliveryunitcube(A) put(nRec, 91, A :11.11)
!-----------------------------------------------------------
! FIELD : deliveryunitweight 
#define S_PRODUCT_deliveryunitweight peel(pick(nPos, 102, 11), " ")
#define R_PRODUCT_deliveryunitweight(A) put(nRec, 102, A :11.11)
!-----------------------------------------------------------
! FIELD : materialfreightclass 
#define S_PRODUCT_materialfreightclass peel(pick(nPos, 113, 6), " ")
#define R_PRODUCT_materialfreightclass(A) put(nRec, 113, A :6.6)
!-----------------------------------------------------------
! FIELD : materialfreightclassref 
#define S_PRODUCT_materialfreightclassref peel(pick(nPos, 119, 12), " ")
#define R_PRODUCT_materialfreightclassref(A) put(nRec, 119, A :12.12)
!-----------------------------------------------------------
! FIELD : materialfreightclass2 
#define S_PRODUCT_materialfreightclass2 peel(pick(nPos, 131, 12), " ")
#define R_PRODUCT_materialfreightclass2(A) put(nRec, 131, A :12.12)
!-----------------------------------------------------------
! FIELD : foodindicator 
#define S_PRODUCT_foodindicator peel(pick(nPos, 143, 1), " ")
#define R_PRODUCT_foodindicator(A) put(nRec, 143, A :1.1)
!-----------------------------------------------------------
! FIELD : temperaturecontrolfoodindicator 
#define S_PRODUCT_temperaturecontrolfoodindicator peel(pick(nPos, 144, 1), " ")
#define R_PRODUCT_temperaturecontrolfoodindicator(A) put(nRec, 144, A :1.1)
!-----------------------------------------------------------
! FIELD : materialpricinggroup 
#define S_PRODUCT_materialpricinggroup peel(pick(nPos, 145, 2), " ")
#define R_PRODUCT_materialpricinggroup(A) put(nRec, 145, A :2.2)
!-----------------------------------------------------------
! FIELD : GTINSCC14 
#define S_PRODUCT_GTINSCC14 peel(pick(nPos, 147, 18), " ")
#define R_PRODUCT_GTINSCC14(A) put(nRec, 147, A :18.18)
!-----------------------------------------------------------
! FIELD : materialfreightclassdescription 
#define S_PRODUCT_materialfreightclassdescription peel(pick(nPos, 165, 40), " ")
#define R_PRODUCT_materialfreightclassdescription(A) put(nRec, 165, A :40.40)
!-----------------------------------------------------------
! FIELD : dangerousgoodsindicator 
#define S_PRODUCT_dangerousgoodsindicator peel(pick(nPos, 205, 1), " ")
#define R_PRODUCT_dangerousgoodsindicator(A) put(nRec, 205, A :1.1)
!-----------------------------------------------------------
! FIELD : shipcollectflag 
#define S_PRODUCT_shipcollectflag peel(pick(nPos, 206, 1), " ")
#define R_PRODUCT_shipcollectflag(A) put(nRec, 206, A :1.1)
!-----------------------------------------------------------
! FIELD : bulkbatteryindicator 
#define S_PRODUCT_bulkbatteryindicator peel(pick(nPos, 207, 1), " ")
#define R_PRODUCT_bulkbatteryindicator(A) put(nRec, 207, A :1.1)
!-----------------------------------------------------------
! FIELD : temperaturecontrolbatteryindicator 
#define S_PRODUCT_temperaturecontrolbatteryindicator peel(pick(nPos, 208, 1), " ")
#define R_PRODUCT_temperaturecontrolbatteryindicator(A) put(nRec, 208, A :1.1)
!-----------------------------------------------------------
! FIELD : deliveryunitunitofmeasure 
#define S_PRODUCT_deliveryunitunitofmeasure peel(pick(nPos, 209, 3), " ")
#define R_PRODUCT_deliveryunitunitofmeasure(A) put(nRec, 209, A :3.3)
!-----------------------------------------------------------
! FIELD : endoflinemarker 
#define S_PRODUCT_endoflinemarker peel(pick(nPos, 212, 1), " ")
#define R_PRODUCT_endoflinemarker(A) put(nRec, 212, A :1.1)
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

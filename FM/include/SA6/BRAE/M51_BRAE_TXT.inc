! File DANA_M51 : 
!===========================================================
! Line : HEADER
!===========================================================
! FIELD : recordtype 
#define S_HEADER_recordtype peel(pick(nPos, 1, 1), " ")
#define R_HEADER_recordtype(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : CNPJORIGEM 
#define S_HEADER_CNPJORIGEM peel(pick(nPos, 2, 15), " ")
#define R_HEADER_CNPJORIGEM(A) put(nRec, 2, A :15.15)
!-----------------------------------------------------------
! FIELD : CNPJDESTINO 
#define S_HEADER_CNPJDESTINO peel(pick(nPos, 17, 15), " ")
#define R_HEADER_CNPJDESTINO(A) put(nRec, 17, A :15.15)
!-----------------------------------------------------------
! FIELD : CLIPROPRI
#define S_HEADER_CLIPROPRI peel(pick(nPos, 32, 15), " ")
#define R_HEADER_CLIPROPRI(A) put(nRec, 32, A :15.15)

!===========================================================
! Line : DETAIL 
!===========================================================
! FIELD : plant 
#define S_DETAIL_recordtype peel(pick(nPos, 1, 1), " ")
#define R_DETAIL_recordtype(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : PLACAVEICULO 
#define S_DETAIL_PLACAVEICULO peel(pick(nPos, 2, 20), " ")
#define R_DETAIL_PLACAVEICULO(A) put(nRec, 2, A :20.20)
!-----------------------------------------------------------
! FIELD : PLACACARRETA 
#define S_DETAIL_PLACACARRETA peel(pick(nPos, 22, 20), " ")
#define R_DETAIL_PLACACARRETA(A) put(nRec, 22, A :20.20)
!-----------------------------------------------------------
! FIELD : LACRE 
#define S_DETAIL_LACRE peel(pick(nPos, 42, 20), " ")
#define R_DETAIL_LACRE(A) put(nRec, 42, A :20.20)
!-----------------------------------------------------------
! FIELD : NOMEMOTORISTA 
#define S_DETAIL_NOMEMOTORISTA peel(pick(nPos, 62, 40), " ")
#define R_DETAIL_NOMEMOTORISTA(A) put(nRec, 62, A :40.40)
!-----------------------------------------------------------
! FIELD : ORDEMCARGA 
#define S_DETAIL_ORDEMCARGA peel(pick(nPos, 102, 20), " ")
#define R_DETAIL_ORDEMCARGA(A) put(nRec, 102, A :20.20)
!-----------------------------------------------------------
! FIELD : PEDIDO 
#define S_DETAIL_PEDIDO peel(pick(nPos, 122, 20), " ")
#define R_DETAIL_PEDIDO(A) put(nRec, 122, A :20.20)
!-----------------------------------------------------------
! FIELD : NUMERONFE
#define S_DETAIL_NUMERONFE peel(pick(nPos, 142, 20), " ")
#define R_DETAIL_NUMERONFE(A) put(nRec, 142, A :20.20)
!-----------------------------------------------------------
! FIELD : SERIENFE 
#define S_DETAIL_SERIENFE peel(pick(nPos, 162, 5), " ")
#define R_DETAIL_SERIENFE(A) put(nRec, 162, A :5.5)
!-----------------------------------------------------------
! FIELD : DATAEMISSAONFE 
#define S_DETAIL_DATAEMISSAONFE peel(pick(nPos, 167, 14), " ")
#define R_DETAIL_DATAEMISSAONFE(A) put(nRec, 167, A :14.14)
!-----------------------------------------------------------
! FIELD : DATAAPRESENTACAO 
#define S_DETAIL_DATAAPRESENTACAO peel(pick(nPos, 181, 14), " ")
#define R_DETAIL_DATAAPRESENTACAO(A) put(nRec, 181, A :14.14)
!-----------------------------------------------------------
! FIELD : DATAENTRADA 
#define S_DETAIL_DATAENTRADA peel(pick(nPos, 195, 14), " ")
#define R_DETAIL_DATAENTRADA(A) put(nRec, 195, A :14.14)
!-----------------------------------------------------------
! FIELD : DATACHEGADADOCA 
#define S_DETAIL_DATACHEGADADOCA peel(pick(nPos, 209, 14), " ")
#define R_DETAIL_DATACHEGADADOCA(A) put(nRec, 209, A :14.14)
!-----------------------------------------------------------
! FIELD : DATAINICIOOPERACAO 
#define S_DETAIL_DATAINICIOOPERACAO peel(pick(nPos, 223, 14), " ")
#define R_DETAIL_DATAINICIOOPERACAO(A) put(nRec, 223, A :14.14)
!-----------------------------------------------------------
! FIELD : DATAFIMOPERACAO 
#define S_DETAIL_DATAFIMOPERACAO peel(pick(nPos, 237, 14), " ")
#define R_DETAIL_DATAFIMOPERACAO(A) put(nRec, 237, A :14.14)
!-----------------------------------------------------------
! FIELD : DATAHORASAIDA 
#define S_DETAIL_DATAHORASAIDA peel(pick(nPos, 251, 14), " ")
#define R_DETAIL_DATAHORASAIDA(A) put(nRec, 251, A :14.14)
!-----------------------------------------------------------

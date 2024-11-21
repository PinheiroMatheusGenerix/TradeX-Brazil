! File ConfRecebimentoSCOTT : 
!===========================================================
! Line : Header 
!===========================================================
! FIELD : TIPODEREGISTRO 
#define S_HeaderSCO_TIPODEREGISTRO peel(pick(nPos, 1, 1), " ")
#define R_HeaderSCO_TIPODEREGISTRO(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : CNPJORIGEM 
#define S_HeaderSCO_CNPJORIGEM peel(pick(nPos, 2, 15), " ")
#define R_HeaderSCO_CNPJORIGEM(A) put(nRec, 2, A :15.15)
!-----------------------------------------------------------
! FIELD : CNPJDESTINATARIO 
#define S_HeaderSCO_CNPJDESTINATARIO peel(pick(nPos, 17, 15), " ")
#define R_HeaderSCO_CNPJDESTINATARIO(A) put(nRec, 17, A :15.15)
!-----------------------------------------------------------
!===========================================================
! Line : HeaderOC 
!===========================================================
! FIELD : TIPODEREGISTRO 
#define S_HeaderOCSCO_TIPODEREGISTRO peel(pick(nPos, 1, 1), " ")
#define R_HeaderOCSCO_TIPODEREGISTRO(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMERODOCUMENTO
#define S_HeaderOCSCO_NUMERODOCUMENTO peel(pick(nPos, 2, 10), " ")
#define R_HeaderOCSCO_NUMERODOCUMENTO(A) put(nRec, 2, A :10.10)
!-----------------------------------------------------------
! FIELD : CodigodoSKU 
#define S_DetalheSCO_CodigodoSKU peel(pick(nPos, 12, 25), " ")
#define R_DetalheSCO_CodigodoSKU(A) put(nRec, 12, A :25.25)
!-----------------------------------------------------------
! FIELD : SERIAL
#define S_HeaderOCSCO_SERIAL peel(pick(nPos, 37, 30), " ")
#define R_HeaderOCSCO_SERIAL(A) put(nRec, 37, A :30.30)
!-----------------------------------------------------------
! FIELD : DATAESCANEAMENTO
#define S_HeaderOCSCO_DATAESCANEAMENTO peel(pick(nPos, 67, 8), " ")
#define R_HeaderOCSCO_DATAESCANEAMENTO(A) put(nRec, 67, A :8.8)
!-----------------------------------------------------------
! FIELD : HORAESCANEAMENTO
#define S_HeaderOCSCO_HORAESCANEAMENTO peel(pick(nPos, 75, 6), " ")
#define R_HeaderOCSCO_HORAESCANEAMENTO(A) put(nRec, 75, A :6.6)
!-----------------------------------------------------------

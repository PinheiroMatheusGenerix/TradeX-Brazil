! File SERIAL_SEM_PARAR_TXT : 
!===========================================================
! Line : LINE0 
!===========================================================
! FIELD : TIPO_REGISTRO 
#define S_LINE0_TIPO_REGISTRO peel(pick(nPos, 1, 1), " ")
#define R_LINE0_TIPO_REGISTRO(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : CNPJ_ORIGEM 
#define S_LINE0_CNPJ_ORIGEM peel(pick(nPos, 2, 15), " ")
#define R_LINE0_CNPJ_ORIGEM(A) put(nRec, 2, A :15.15)
!-----------------------------------------------------------
! FIELD : CNPJ_DEST 
#define S_LINE0_CNPJ_DEST peel(pick(nPos, 17, 15), " ")
#define R_LINE0_CNPJ_DEST(A) put(nRec, 17, A :15.15)
!-----------------------------------------------------------
! FIELD : CLIENTE_PROPRI 
#define S_LINE0_CLIENTE_PROPRI peel(pick(nPos, 32, 15), " ")
#define R_LINE0_CLIENTE_PROPRI(A) put(nRec, 32, A :15.15)
!-----------------------------------------------------------
! FIELD : PROCESSO_COLETA 
#define S_LINE0_PROCESSO_COLETA peel(pick(nPos, 47, 3), " ")
#define R_LINE0_PROCESSO_COLETA(A) put(nRec, 47, A :3.3)
!-----------------------------------------------------------
!===========================================================
! Line : LINE1 
!===========================================================
! FIELD : TIPO_REGISTRO 
#define S_LINE1_TIPO_REGISTRO peel(pick(nPos, 1, 1), " ")
#define R_LINE1_TIPO_REGISTRO(A) put(nRec, 1, A :1.1)
!-----------------------------------------------------------
! FIELD : NUMERO_DOCUMENTO 
#define S_LINE1_NUMERO_DOCUMENTO peel(pick(nPos, 2, 17), " ")
#define R_LINE1_NUMERO_DOCUMENTO(A) put(nRec, 2, A :17.17)
!-----------------------------------------------------------
! FIELD : CODIGO_PRODUTO 
#define S_LINE1_CODIGO_PRODUTO peel(pick(nPos, 19, 18), " ")
#define R_LINE1_CODIGO_PRODUTO(A) put(nRec, 19, A :18.18)
!-----------------------------------------------------------
! FIELD : SERIAL 
#define S_LINE1_SERIAL peel(pick(nPos, 37, 30), " ")
#define R_LINE1_SERIAL(A) put(nRec, 37, A :30.30)
!-----------------------------------------------------------
! FIELD : DATA_ESCANEAMENTO
#define S_LINE1_DATA_ESCANEAMENTO peel(pick(nPos, 67, 8), " ")
#define R_LINE1_DATA_ESCANEAMENTO(A) put(nRec, 67, A :8.8)
!-----------------------------------------------------------
! FIELD : HORA_ESCANEAMENTO 
#define S_LINE1_HORA_ESCANEAMENTO peel(pick(nPos, 75, 6), " ")
#define R_LINE1_HORA_ESCANEAMENTO(A) put(nRec, 75, A :6.6)
!-----------------------------------------------------------
! FIELD : INF_ADIC_PROD_NF 
#define S_LINE1_INF_ADIC_PROD_NF peel(pick(nPos, 81, 30), " ")
#define R_LINE1_INF_ADIC_PROD_NF(A) put(nRec, 81, A :30.30)
!-----------------------------------------------------------

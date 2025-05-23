MKTR=mktr -Cm32 -C ljvm -C L/usr/local/tx524/_jvm/jre1.8.0_333/lib/i386/client -o 

SRC=$(HOME)/rte
BIN=$(HOME)/bin

BINARIES=\
	$(BIN)/InfologDischarge \
	$(BIN)/M90_CARREFOUR_OUT \
	$(BIN)/M93_CARREFOUR_OUT \
	$(BIN)/M31_CARREFOUR_OUT \
	$(BIN)/M30_CARREFOUR_OUT \
	$(BIN)/M59_CARREFOUR_OUT \
	$(BIN)/RoutingMail \
	$(BIN)/Delete_IMEI \
	$(BIN)/Delete_IMEI_Excel \
	$(BIN)/TesteInterface \
	$(BIN)/DataInjection_KPI_REC \
	$(BIN)/DataInjection_PlanTMS \
	$(BIN)/DataInjection_PlanTMS_Excel \
	$(BIN)/DataInjection_KPI_REC_Excel \
	$(BIN)/ConvertExcel \
	$(BIN)/PickingNegativo \
	$(BIN)/ShelfLife \
	$(BIN)/M62_AWS_Insert \
	$(BIN)/Relatorio \
	$(BIN)/M30_UNIVERSAL_CSV \
	$(BIN)/M97_CARREFOUR_OUT \
	$(BIN)/M59_CARREFOUR_OUT \
	$(BIN)/M63_CARREFOUR_OUT \
	$(BIN)/RoutingEntry \
	$(BIN)/M62_CARREFOUR_IN \

all:	$(BINARIES)

$(BIN)/%: $(SRC)/%.rte
	$(MKTR) $@ $< -lessqljdbc
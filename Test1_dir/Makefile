#main Makefile

SOURCE_DIR := ./
TARGET = main

include $(SOURCE_DIR)/feature.mk
FUN1_DIR := $(shell pwd)/func1/
FUN2_DIR := $(shell pwd)/func2/
FUN3_DIR := $(shell pwd)/func1/

all:
	@if [ "$(FUNC1_EMABLE)" = "y" ]; then \
		make -C $(FUN1_DIR) clean; \ # can't not write make -C $(FUN1_DIR)/Makefile clean
		make -C $(FUN1_DIR); \
	else \
		echo "func1 no enable."; \
	fi

# main Makefile

# 引入.mk file
include ./partA/feature.mk
include ./partB/feature.mk

# 定義變量
CC := gcc
CFLAGS := -Wall -Wextra 
SUBDIR := partA partB
LIB_NAME := # 先宣告，但不定義，因為要看feature.mk有沒有設定要編譯
LIB_POSITION := 
LIBS :=

# 先確認有哪些靜態庫需要編譯
ifeq ($(strip $(PARTA)), y)
	LIB_NAME += partA
	LIB_POSITION += ./partA
endif

ifeq ($(strip $(PARTA)), y)
	LIB_NAME += partB
	LIB_POSITION += ./partB
endif

# 如果LIB_NAME有定義LIBS才賦值
ifneq ($(strip $(LIB_NAME)),)
	LIBS := $(foreach lib, $(LIB_NAME),-L$(CURDIR)/$(lib) -l$(lib))	
endif
#
#LIBS := -L$(CURDIR)/partA -lpartA -L$(CURDIR)/partB -lpartB

# 執行檔
TARGET := myapp

# 預設目標
all: $(TARGET)

# Precompile命列 執行partA、B Makefile，$$這個很重要
Precompile: 
	@for dir in $(LIB_POSITION); do\
		$(MAKE) -C $$dir; \
	done

# 最終目標
$(TARGET): main.o
	$(MAKE) Precompile
	$(CC) $(CFLAGS) -o $@ $< $(LIBS) 

main.o: main.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	sudo rm -f $(TARGET) *.o
	$(MAKE) -C ./partA clean
	$(MAKE) -C ./partB clean

# 測試的命令
Test:
	@echo "PARTA = $(PARTA)"
	@echo "PARTB = $(PARTB)"
	@echo "LIB_NAME = $(LIB_NAME)"
	@echo "LIB_POSITION = $(LIB_POSITION)"
	@echo "LIBS = $(LIBS)"
	@echo "over"
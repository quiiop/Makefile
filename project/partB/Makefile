# partB Makefile

# 變量定義
CC := gcc
CFLAGS := -Wall -Wextra 
AR := ar # 編譯靜態庫command
SOURCE_DIR := source
FILE_SET := $(filter %.c, $(shell ls $(SOURCE_DIR)))
SOURCE := $(foreach file, $(FILE_SET), $(SOURCE_DIR)/$(file))
# OBJ := $(addsuffix .o, $(basename $(SOURCE))) # 第一種方法
OBJ := $(patsubst %.c, %.o, $(SOURCE))

# 最終目標創建靜態庫
LIB := libpartB.a

# 設定編譯目標
all: $(LIB)

# 創建靜態庫
$(LIB): $(OBJ)
	$(AR) -r $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

# 自訂命令
Test: 
	@echo $(FILE_SET)
	@echo $(SOURCE)
	@echo $(OBJ)

clean:
	sudo rm -f $(LIB) *.o $(SOURCE_DIR)/*.o

.PHONY: all clean 
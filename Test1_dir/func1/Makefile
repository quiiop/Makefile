#func1 Makefile
Current_Dir := $(shell pwd)
SRC := $(filter %.c,$(shell ls $(Current_Dir)))
OBJ := $(SRC:.c=.o)
TARGET := libfunc1.a

$(TARGET): $(OBJ)
	ar rcs $@ $^

%.o: %.c
	gcc -c $< -o $@

test:
	@echo "Current_Dir $(Current_Dir)";
	@echo "SRC $(SRC)";
	@echo "OBJ $(OBJ)";

all: $(TARGET)

clean:
	rm -f $(OBJ) $(TARGET)

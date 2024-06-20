#func3 Makefile
SRC := func3.c
OBJ := $(SRC:.c=.o)
TARGET := libfunc3.a

all: $(TARGET)

$(TARGET): $(OBJ)
	ar rcs $@ $^

$(OBJ): %.o: %.c
	gcc -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
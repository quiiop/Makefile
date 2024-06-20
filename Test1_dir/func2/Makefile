#func2 Makefile
SRC := func2.c
OBJ := $(SRC:.c=.o)
TARGET := libfunc2.a

all: $(TARGET)

$(TARGET): $(OBJ)
	ar rcs $@ $^

$(OBJ): %.o: %.c
	gcc -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
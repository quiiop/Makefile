objects := test1.c test2.c test3.c test4.c
target := test1.c test2.c
sources := foo.c bar.c baz.s foo.h
remove_target = foo.c bar.c

str := "feet on the street"
str1 := $(subst ee,EE,$(str))
str2 := $(patsubst %.c,%.o,$(objects))
str3 := $(strip " hello kuo ")
str4 := $(findstring $(target),$(objects))
str5 := $(filter %.c %.s,$(sources))
str6 := $(filter-out $(remove_target),$(sources))
str7 := $(word 2,$(objects))
str8 := $(wordlist 1,3,$(objects))

DIR := ./dir
str9 := $(patsubst %.c,%.o,$(shell ls $(DIR)))

filename := hello
file := $(addsuffix .txt,$(filename))

names := a b c d
str10 := $(foreach n,$(names),$(n).o)

CREATE_ENABLE := y
Message := ""
ifeq ($(CREATE_ENABLE), y)
	Message := "create file"
else
	Message := "no create file"
endif

test:
	@echo $(str10)
	@echo $(Message)

test2:
	@if [ "$(CREATE_ENABLE)" = "y" ]; then \
		echo "create file"; \
		touch hello2.c; \
	else \
		echo "no create file"; \
	fi
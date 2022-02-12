CC	= gcc
OBJ	= obj/
CFLAGS = -Wall -Wextra -Wdouble-promotion -Wconversion -Wsign-conversion  -O0 -g -D_GNU_SOURCE
SRC	= src/
INCLUDE = include/
LIBS	= -lm

allprog: test main
	$(CC) $(CFLAGS) $(OBJ)/*.o -o test $(LIBS)

test: Menu

Menu: $(SRC)menu.c $(INCLUDE)menu.h
	$(CC) $(CFLAGS) -o $(OBJ)menu.o -c $(SRC)menu.c

main: $(SRC)main.c
	$(CC) $(CFLAGS) -o $(OBJ)main.o -c $(SRC)main.c

clean:
	@echo -n "Cleaning...\n"
	@rm -rf $(OBJ)
	@rm test


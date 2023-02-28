PROG=diverse.exe
CC=gcc
CFLAGS=-g -Wall
DEPS = menu.h safeinput.h circle.h longestword.h files.h
OBJ = menu.o main.o safeinput.o circle.o longestword.o files.o
 
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
 
$(PROG): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
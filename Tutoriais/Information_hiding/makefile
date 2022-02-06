CC = gcc
CFLAGS = -fstack-protector-all -std=c99 -g -Wall
OBJ = objects

clear:
	rm $(OBJ)/*.o

IH : $(OBJ)/main.o $(OBJ)/rectangles.o $(OBJ)/utils.o
	$(CC) $(CFLAGS) $(OBJ)/*.o -o executable


$(OBJ)/main.o : main.c |$(OBJ)
	$(CC) $(CFLAGS) -c -o $@ $<

$(OBJ)/rectangles.o : geometry/rectangles.c geometry/rectangles.h |$(OBJ)
	$(CC) $(CFLAGS) -c -o $@ $<

$(OBJ)/utils.o : utils/utils.c utils/utils.h |$(OBJ)
	$(CC) $(CFLAGS) -c -o $@ $<
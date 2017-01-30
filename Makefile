CC = gcc
SRC = ./src/*.c 
INC = -I ./include/

NAME = ./build/roguelike

CFLAGS = 
LFLAGS = -lSDL2

all: $(SRC)
	mkdir build
	$(CC) $(SRC) $(CFLAGS) $(LFLAGS) $(INC) -o $(NAME)

clean:
	rm -rf ./build/
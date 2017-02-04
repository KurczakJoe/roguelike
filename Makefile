CC = gcc
SRC = ./src/*.c 
INC = -I ./include/

NAME = roguelike

CFLAGS = 
LFLAGS = -lSDL2 -lSDL2_image

all: $(SRC)
	$(CC) $(SRC) $(CFLAGS) $(LFLAGS) $(INC) -o $(NAME)

clean:
	rm -rf ./build/
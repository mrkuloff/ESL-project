CC = gcc
CFLAGS = -Wall -Wextra -std=c11
OBJ = main.o vector.o

all: vector_example

vector_example: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ) vector_example

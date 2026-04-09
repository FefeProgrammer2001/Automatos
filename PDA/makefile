CC=gcc
CFLAGS=-Wall -Werror -Wextra -std=c17 -O3 -g
SRC=Pilha.c palindromo.c main.c
BIN=main

pda: $(BIN)

$(BIN): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(BIN)

clear:
	rm main

.PHONY: pda clear

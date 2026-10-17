# The C compiler, and warnings worth seeing while learning.
CC = gcc
CFLAGS = -Wall -Wextra -std=c17

# Input source and the program `make` will produce.
SRC = src/main.c
BIN = build/algorithms

# `make` with no arguments runs the first target, which is `all`.
all: $(BIN)

# Rebuild the program when main.c is newer than the binary.
$(BIN): $(SRC)
	mkdir -p build
	$(CC) $(CFLAGS) -o $(BIN) $(SRC)

# Build if needed, then run.
run: $(BIN)
	./$(BIN)

# Delete the compiled program. Source files are left alone.
clean:
	rm -rf build

.PHONY: all run clean

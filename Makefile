# The C compiler, and warnings worth seeing while learning.
CC = gcc
CFLAGS = -Wall -Wextra -std=c17

# Every .c file that defines a function must be listed here.
# sorting.c is #included from main.c, so it is not listed again.
SRC = src/main.c src/lib/cloneArray.c src/lib/printArray.c
BIN = build/algorithms

# `make` with no arguments runs the first target, which is `all`.
all: $(BIN)

# Rebuild the program when any source file is newer than the binary.
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

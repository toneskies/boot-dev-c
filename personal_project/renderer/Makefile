CC = gcc
TARGET = renderer
SRC = ./src/main.c

# Fix: Point to the 'include' directory, not the package root
INCLUDE_PATHS = -I/opt/homebrew/include
LIBRARY_PATHS = -L/opt/homebrew/lib
LIBRARIES = -lSDL2

# 1. 'make' will run this default target
all: $(TARGET)

# 2. Compile the binary
$(TARGET): $(SRC)
	$(CC) $(SRC) -o $(TARGET) $(INCLUDE_PATHS) $(LIBRARY_PATHS) $(LIBRARIES)

# 3. 'make run' will compile (if needed) and execute
run: $(TARGET)
	./$(TARGET)

# 4. 'make clean' removes the binary
clean:
	rm -f $(TARGET)

# .PHONY tells make that 'all', 'run', and 'clean' are not actual files
.PHONY: all run clean
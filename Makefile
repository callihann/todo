# Compiler
CC = g++

# Compiler flags
CFLAGS = -Wall -Wextra

# Source file
SRC = main.cpp

# Output directory
BUILD_DIR = build

# Output file
OUT = $(BUILD_DIR)/main.exe

# Default target
all: $(OUT)

# Compile the source file into an executable
$(OUT): $(SRC)
	$(CC) $(CFLAGS) -o $(OUT) $(SRC)

# Clean the generated files
clean:
	rm -f $(OUT)

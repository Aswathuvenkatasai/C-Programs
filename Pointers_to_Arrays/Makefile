# Compiler
CC = gcc

# Source files
SRCS = $(wildcard *.c)

# Output executable
OUT = Executable

# Build rule
all:
	$(CC) $(SRCS) -o $(OUT)

# Run rule (optional)
run: all
	./$(OUT)

# Clean rule
clean:
	del $(OUT).exe

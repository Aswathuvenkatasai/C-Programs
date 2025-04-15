# Compiler
CC = gcc

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -std=c11

# Source files
SRCS = main.c Function_defination.c Pointer_to_array.c Pointer_Array.c 

# Object files
OBJS = $(SRCS:.c=.o)

# Executable file
TARGET = Executable

# Default rule to build the program
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

# Rule to compile .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule to remove compiled files
clean:
	rm -f $(OBJS) $(TARGET)

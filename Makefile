# Makefile for compiling and cleaning the project

# Compiler and flags
CC = gcc
CFLAGS = -Wall -O
LDFLAGS = -lm
TARGET = main

# Default rule
all: $(TARGET)

# Rule to compile the target
$(TARGET): main.c
    $(CC) $(CFLAGS) -o $(TARGET) main.c $(LDFLAGS)

# Rule to clean the directory
clean:
    rm -f $(TARGET) *~

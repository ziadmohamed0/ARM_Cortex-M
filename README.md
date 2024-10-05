# Compiler and Linker
CC = arm-none-eabi-gcc
LD = arm-none-eabi-ld
OBJCOPY = arm-none-eabi-objcopy

# Flags
CFLAGS = -mcpu=cortex-m4 -mthumb -g -O2 -Wall
LDFLAGS = -T linker_script.ld

# Source files
SRCS = $(wildcard src/*.c)
OBJS = $(SRCS:.c=.o)

# Output file
TARGET = output.elf

# Default target
all: $(TARGET)

# Build target
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET) $(LDFLAGS)
	$(OBJCOPY) -O binary $(TARGET) output.bin

# Compile source files to object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -f $(OBJS) $(TARGET) output.bin

# Flash the binary to the board
flash:
	openocd -f interface/stlink.cfg -f target/stm32f4x.cfg -c "program output.bin verify reset exit"

.PHONY: all clean flash

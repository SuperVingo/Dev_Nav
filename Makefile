ARCH=armv7-a
MCPU=cortex-a9

CC=arm-none-eabi-gcc
AS=arm-none-eabi-as
LD=arm-none-eabi-ld
OC=arm-none-eabi-objcopy
GD=arm-none-eabi-gdb

LINKER_SCRIPT = ./devnav.ld
MAP_FILE = build/devnav.map

ASM_SRCS = $(wildcard boot/*.S)
ASM_OBJS = $(patsubst boot/%.S, build/%.os, $(ASM_SRCS))

C_SRCS = $(wildcard boot/*.c)
C_OBJS = $(patsubst boot/%.c, build/%.o, $(C_SRCS))

INC_DIRS = include

devnav = build/devnav.axf
devnav_bin = build/devnav.bin

.PHONY: all clean run debug gdb

all: $(devnav)

clean:
	@rm -fr build

run: $(devnav)
	qemu-system-arm -M realview-pbx-a9 -kernel $(devnav)

debug: $(devnav)
	qemu-system-arm -M realview-pbx-a9 -kernel $(devnav) -S -gdb tcp::1234,ipv4

gdb:
	$(GD)

$(devnav): $(ASM_OBJS) $(C_OBJS) $(LINKER_SCRIPT)
	$(LD) -n -T $(LINKER_SCRIPT) -o $(devnav) $(ASM_OBJS) $(C_OBJS) -Map=$(MAP_FILE)
	$(OC) -O binary $(devnav) $(devnav_bin)

build/%.os: $(ASM_SRCS)
	mkdir -p $(shell dirname $@)
	$(CC) -march=$(ARCH) -mcpu=$(MCPU) -I $(INC_DIRS) -c -g -O0 -o $@ $<

build/%.o: $(C_SRCS)
	mkdir -p $(shell dirname $@)
	$(CC) -march=$(ARCH) -mcpu=$(MCPU) -I $(INC_DIRS) -c -g -O0 -o $@ $<
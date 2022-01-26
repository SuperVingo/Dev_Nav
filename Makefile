ARCH=armv7-a
MCPU=cortex-a9

CC=arm-none-eabi-gcc
AS=arm-none-eabi-as
LD=arm-none-eabi-ld
OC=arm-none-eabi-objcopy
GD=arm-none-eabi-gdb

LINKER_SCRIPT = ./devnav.ld

ASM_SRCS = $(wildcard boot/*.S)
ASM_OBJS = $(patsubst boot/%.S, build/%.o, $(ASM_SRCS))

devnav = build/devnav.axf
devnav_bin = build/devnav.devnav_bin

.PHONY: all clean run debug gdb

all: $(devnav)

clean:
	@rm -fr build

run: $(devnav)
	qemu-system-arm -M smdkc210 -kernel $(devnav)

debug: $(devnav)
	qemu-system-arm -M smdkc210 -kernel $(devnav) -S -gdb tcp::1234,ipv4

gdb:
	$(GD)

$(devnav): $(ASM_OBJS) $(LINKER_SCRIPT)
	$(LD) -n -T $(LINKER_SCRIPT) -o $(devnav) $(ASM_OBJS)
	$(OC) -O binary $(devnav) $(devnav_bin)

build/%.o: boot/%.S
	mkdir -p $(shell dirname $@)
	$(AS) -march=$(ARCH) -mcpu=$(MCPU) -g -o $@ $<
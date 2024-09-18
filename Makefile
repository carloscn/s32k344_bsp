AUTOSAR      = s32k344_rtd
TOOLCHAINS   = $(GCC_PATH)/../
RTD_SRC      = RTD/src
PATH_SRC     = src
BOARD_SRC    = board
GENERATE_SRC = generate/src
START_CODE   = Start_Code
PATH_BUILD   = build/target
PATH_OBJS    = build/target/objects
BUILD_PATHS  = $(PATH_BUILD) $(PATH_OBJS)

CC       = $(GCC_PATH)/arm-none-eabi-gcc
AS       = $(GCC_PATH)/arm-none-eabi-gcc -x assembler-with-cpp -g3
CFLAGS   = -I$(PATH_SRC) \
		   -I$(BOARD_SRC) \
		   -I$(RTD_SRC)/../include \
		   -I$(GENERATE_SRC)/../include \
		   -I$(TOOLCHAINS)/arm-none-eabi/include \
		   -I$(TOOLCHAINS)/arm-none-eabi/usr/include \
		   -I$(TOOLCHAINS)/lib/gcc/arm-none-eabi/10.2.0/include \
		   -I$(TOOLCHAINS)/lib/gcc/arm-none-eabi/10.2.0/include-fixed \
		   -I$(AUTOSAR)/BaseNXP_TS_T40D34M30I0R0/header \
		   -I$(AUTOSAR)/BaseNXP_TS_T40D34M30I0R0/include \
		   -I$(AUTOSAR)/Platform_TS_T40D34M30I0R0/include \
		   -I$(AUTOSAR)/Platform_TS_T40D34M30I0R0/startup/include

CFLAGS  +=  -DD_CACHE_ENABLE \
		    -DI_CACHE_ENABLE \
			-DENABLE_FPU \
			-DGCC -DS32K3XX \
			-DS32K344 \
			-DCPU_S32K344 \
			-DVV_RESULT_ADDRESS=0x2043FF00 \
			-DMPU_ENABLE \
			-DDISABLE_MCAL_INTERMODULE_ASR_CHECK

CFLAGS  +=  -Os -funsigned-char -fomit-frame-pointer -ggdb3 -pedantic -Wall -Wextra -c -fno-short-enums -funsigned-bitfields \
			-fno-common -Wunused -Wstrict-prototypes -Wsign-compare -Werror=implicit-function-declaration -Wundef -Wdouble-promotion \
			-std=c99 -mcpu=cortex-m7 -mthumb -mlittle-endian -mfloat-abi=hard -mfpu=fpv5-sp-d16 -specs=nano.specs -specs=nosys.specs

LD       =  $(GCC_PATH)/arm-none-eabi-gcc
LDFLAGS  = -L$(PATH_SRC) \
		   -L$(BOARD_SRC) \
		   -L$(RTD_SRC)/include \
		   -L$(START_CODE) \
		   -L$(GENERATE_SRC)/include

LDFLAGS += -T linker_flash_s32k344.ld \
		   -nostartfiles --entry=Reset_Handler \
		   -ggdb3 -mcpu=cortex-m7 -mthumb -mlittle-endian -mfloat-abi=hard -mfpu=fpv5-sp-d16 \
		   -specs=nano.specs -specs=nosys.specs \
		   --sysroot="/home/haochenwei/opt/S32DS.3.5/eclipse/../S32DS/build_tools/gcc_v10.2/gcc-10.2-arm32-eabi/arm-none-eabi/lib" \
		   -lc -lm -lgcc

SRCS = $(wildcard $(PATH_SRC)/*.c) $(wildcard $(RTD_SRC)/*.c) $(wildcard $(BOARD_SRC)/*.c) $(wildcard $(GENERATE_SRC)/*.c) $(wildcard $(START_CODE)/*.c)
SRCS_AS =  $(wildcard $(START_CODE)/*.s)

MKDIR	   = mkdir -p

all: target convert printsize

target: $(BUILD_PATHS) $(PATH_BUILD)/target.out

# Define OBJS with full path for object files
OBJS = $(patsubst %.c, $(PATH_OBJS)/%.o, $(notdir $(SRCS))) $(patsubst %.s, $(PATH_OBJS)/%.o, $(notdir $(SRCS_AS)))

$(PATH_BUILD):
	$(MKDIR) $(PATH_BUILD)

$(PATH_OBJS):
	$(MKDIR) $(PATH_OBJS)

$(PATH_BUILD)/target.out: $(OBJS)
	$(LD) -o $@ $^ $(LDFLAGS)

# Rule to compile source files in PATH_SRC
$(PATH_OBJS)/%.o: $(PATH_SRC)/%.c
	$(CC) $(CFLAGS) $< -o $@

# Rule to compile source files in PATH_DRIVER
$(PATH_OBJS)/%.o: $(BOARD_SRC)/%.c
	$(CC) $(CFLAGS) $< -o $@

# Rule to compile source files in HAL_SRC
$(PATH_OBJS)/%.o: $(RTD_SRC)/%.c
	$(CC) $(CFLAGS) $< -o $@

$(PATH_OBJS)/%.o: $(GENERATE_SRC)/%.c
	$(CC) $(CFLAGS) $< -o $@

$(PATH_OBJS)/%.o: $(START_CODE)/%.c
	$(CC) $(CFLAGS) $< -o $@

$(PATH_OBJS)/%.o: $(START_CODE)/%.s
	$(AS) $(CFLAGS) $< -o $@

convert:
	$(GCC_PATH)/arm-none-eabi-objcopy -O ihex $(PATH_BUILD)/target.out $(PATH_BUILD)/target.hex
	@cp -v $(PATH_BUILD)/target.hex target.hex

printsize:
	$(GCC_PATH)/arm-none-eabi-size --format=berkeley $(PATH_BUILD)/target.out

clean:
	@rm -rf $(PATH_OBJS)/*.o
	@rm -rf $(PATH_BUILD)/*.out
	@rm -rf $(PATH_BUILD)/*.hex
	@rm -rf $(BUILD_PATHS)
	@rm -rf *.hex
	@rm -rfd Log

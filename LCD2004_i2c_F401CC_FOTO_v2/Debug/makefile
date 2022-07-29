################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32F4xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := LCD2004_i2c_F401CC_FOTO_v2
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
LCD2004_i2c_F401CC_FOTO_v2.elf \

MAP_FILES += \
LCD2004_i2c_F401CC_FOTO_v2.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
LCD2004_i2c_F401CC_FOTO_v2.list \

OBJCOPY_HEX += \
LCD2004_i2c_F401CC_FOTO_v2.hex \

OBJCOPY_BIN += \
LCD2004_i2c_F401CC_FOTO_v2.bin \


# All Target
all: main-build

# Main-build Target
main-build: LCD2004_i2c_F401CC_FOTO_v2.elf secondary-outputs

# Tool invocations
LCD2004_i2c_F401CC_FOTO_v2.elf LCD2004_i2c_F401CC_FOTO_v2.map: $(OBJS) $(USER_OBJS) /home/grid22/STM32/STM32Cube/1_10_1/LCD2004_i2c_F401CC_FOTO_v2/STM32F401CCUX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -u_printf_float -o "LCD2004_i2c_F401CC_FOTO_v2.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"/home/grid22/STM32/STM32Cube/1_10_1/LCD2004_i2c_F401CC_FOTO_v2/STM32F401CCUX_FLASH.ld" --specs=nosys.specs -Wl,-Map="LCD2004_i2c_F401CC_FOTO_v2.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -u _printf_float -u _scanf_float -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

LCD2004_i2c_F401CC_FOTO_v2.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "LCD2004_i2c_F401CC_FOTO_v2.list"
	@echo 'Finished building: $@'
	@echo ' '

LCD2004_i2c_F401CC_FOTO_v2.hex: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "LCD2004_i2c_F401CC_FOTO_v2.hex"
	@echo 'Finished building: $@'
	@echo ' '

LCD2004_i2c_F401CC_FOTO_v2.bin: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "LCD2004_i2c_F401CC_FOTO_v2.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) LCD2004_i2c_F401CC_FOTO_v2.bin LCD2004_i2c_F401CC_FOTO_v2.elf LCD2004_i2c_F401CC_FOTO_v2.hex LCD2004_i2c_F401CC_FOTO_v2.list LCD2004_i2c_F401CC_FOTO_v2.map default.size.stdout
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX) $(OBJCOPY_BIN)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets

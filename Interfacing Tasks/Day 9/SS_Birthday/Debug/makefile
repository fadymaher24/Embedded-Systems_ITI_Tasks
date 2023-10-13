################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
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

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
SS_Birthday.lss \

FLASH_IMAGE += \
SS_Birthday.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: SS_Birthday.elf secondary-outputs

# Tool invocations
SS_Birthday.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,SS_Birthday.map -mmcu=atmega32 -o "SS_Birthday.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

SS_Birthday.lss: SS_Birthday.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S SS_Birthday.elf  >"SS_Birthday.lss"
	@echo 'Finished building: $@'
	@echo ' '

SS_Birthday.hex: SS_Birthday.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex SS_Birthday.elf  "SS_Birthday.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: SS_Birthday.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 SS_Birthday.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) SS_Birthday.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/03-KPD/KPD_Program.c 

OBJS += \
./HAL/03-KPD/KPD_Program.o 

C_DEPS += \
./HAL/03-KPD/KPD_Program.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/03-KPD/%.o: ../HAL/03-KPD/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


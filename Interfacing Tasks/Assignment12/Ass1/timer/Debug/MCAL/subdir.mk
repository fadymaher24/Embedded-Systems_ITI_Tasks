################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/DIO_Program.c \
../MCAL/GIE_Program.c \
../MCAL/Timer0_Program.c 

OBJS += \
./MCAL/DIO_Program.o \
./MCAL/GIE_Program.o \
./MCAL/Timer0_Program.o 

C_DEPS += \
./MCAL/DIO_Program.d \
./MCAL/GIE_Program.d \
./MCAL/Timer0_Program.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/%.o: ../MCAL/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



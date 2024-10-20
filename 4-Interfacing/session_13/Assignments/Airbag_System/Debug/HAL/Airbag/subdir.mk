################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/Airbag/Airbag_program.c 

OBJS += \
./HAL/Airbag/Airbag_program.o 

C_DEPS += \
./HAL/Airbag/Airbag_program.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/Airbag/%.o: ../HAL/Airbag/%.c HAL/Airbag/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=800000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/KeyPade/KeyPade_program.c 

OBJS += \
./HAL/KeyPade/KeyPade_program.o 

C_DEPS += \
./HAL/KeyPade/KeyPade_program.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/KeyPade/%.o: ../HAL/KeyPade/%.c HAL/KeyPade/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=800000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



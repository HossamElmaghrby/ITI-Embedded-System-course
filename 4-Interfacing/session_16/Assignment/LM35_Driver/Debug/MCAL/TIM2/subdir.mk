################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/TIM2/TIM2_program.c 

OBJS += \
./MCAL/TIM2/TIM2_program.o 

C_DEPS += \
./MCAL/TIM2/TIM2_program.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/TIM2/%.o: ../MCAL/TIM2/%.c MCAL/TIM2/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



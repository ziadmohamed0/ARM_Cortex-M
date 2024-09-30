################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/03_Mcal/RCC/RCC_prog.c 

OBJS += \
./Src/03_Mcal/RCC/RCC_prog.o 

C_DEPS += \
./Src/03_Mcal/RCC/RCC_prog.d 


# Each subdirectory must supply rules for building sources it contributes
Src/03_Mcal/RCC/%.o Src/03_Mcal/RCC/%.su Src/03_Mcal/RCC/%.cyclo: ../Src/03_Mcal/RCC/%.c Src/03_Mcal/RCC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Src-2f-03_Mcal-2f-RCC

clean-Src-2f-03_Mcal-2f-RCC:
	-$(RM) ./Src/03_Mcal/RCC/RCC_prog.cyclo ./Src/03_Mcal/RCC/RCC_prog.d ./Src/03_Mcal/RCC/RCC_prog.o ./Src/03_Mcal/RCC/RCC_prog.su

.PHONY: clean-Src-2f-03_Mcal-2f-RCC


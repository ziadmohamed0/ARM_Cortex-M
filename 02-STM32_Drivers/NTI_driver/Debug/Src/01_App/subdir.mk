################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/01_App/main.c 

OBJS += \
./Src/01_App/main.o 

C_DEPS += \
./Src/01_App/main.d 


# Each subdirectory must supply rules for building sources it contributes
Src/01_App/%.o Src/01_App/%.su Src/01_App/%.cyclo: ../Src/01_App/%.c Src/01_App/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Src-2f-01_App

clean-Src-2f-01_App:
	-$(RM) ./Src/01_App/main.cyclo ./Src/01_App/main.d ./Src/01_App/main.o ./Src/01_App/main.su

.PHONY: clean-Src-2f-01_App


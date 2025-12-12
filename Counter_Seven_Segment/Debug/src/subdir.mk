################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Counter_Seven_Segment.c \
../src/gpio_driver.c \
../src/seven_segment.c 

C_DEPS += \
./src/Counter_Seven_Segment.d \
./src/gpio_driver.d \
./src/seven_segment.d 

OBJS += \
./src/Counter_Seven_Segment.o \
./src/gpio_driver.o \
./src/seven_segment.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	arm-linux-gnueabihf-gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Counter_Seven_Segment.d ./src/Counter_Seven_Segment.o ./src/gpio_driver.d ./src/gpio_driver.o ./src/seven_segment.d ./src/seven_segment.o

.PHONY: clean-src


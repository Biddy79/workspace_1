################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/User.cpp \
../src/sheard_ptr\ as\ Class\ variabels.cpp 

OBJS += \
./src/User.o \
./src/sheard_ptr\ as\ Class\ variabels.o 

CPP_DEPS += \
./src/User.d \
./src/sheard_ptr\ as\ Class\ variabels.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/sheard_ptr\ as\ Class\ variabels.o: ../src/sheard_ptr\ as\ Class\ variabels.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/sheard_ptr as Class variabels.d" -MT"src/sheard_ptr\ as\ Class\ variabels.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



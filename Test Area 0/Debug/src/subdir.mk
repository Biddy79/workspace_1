################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Test\ Area\ 0.cpp \
../src/User.cpp 

OBJS += \
./src/Test\ Area\ 0.o \
./src/User.o 

CPP_DEPS += \
./src/Test\ Area\ 0.d \
./src/User.d 


# Each subdirectory must supply rules for building sources it contributes
src/Test\ Area\ 0.o: ../src/Test\ Area\ 0.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Test Area 0.d" -MT"src/Test\ Area\ 0.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



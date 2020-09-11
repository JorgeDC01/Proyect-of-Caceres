################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Bar.cpp \
../src/Barrio.cpp \
../src/Via.cpp \
../src/algoritmos.cpp \
../src/pruebaAlgoritmos.cpp \
../src/pruebaBar.cpp \
../src/pruebaBarrio.cpp \
../src/pruebaVia.cpp 

OBJS += \
./src/Bar.o \
./src/Barrio.o \
./src/Via.o \
./src/algoritmos.o \
./src/pruebaAlgoritmos.o \
./src/pruebaBar.o \
./src/pruebaBarrio.o \
./src/pruebaVia.o 

CPP_DEPS += \
./src/Bar.d \
./src/Barrio.d \
./src/Via.d \
./src/algoritmos.d \
./src/pruebaAlgoritmos.d \
./src/pruebaBar.d \
./src/pruebaBarrio.d \
./src/pruebaVia.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



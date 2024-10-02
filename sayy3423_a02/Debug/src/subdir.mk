################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/main.c \
../src/movie.c \
../src/movie_utilities.c 

C_DEPS += \
./src/main.d \
./src/movie.d \
./src/movie_utilities.d 

OBJS += \
./src/main.o \
./src/movie.o \
./src/movie_utilities.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/main.d ./src/main.o ./src/movie.d ./src/movie.o ./src/movie_utilities.d ./src/movie_utilities.o

.PHONY: clean-src


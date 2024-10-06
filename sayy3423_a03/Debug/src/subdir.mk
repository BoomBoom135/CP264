################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/int_data.c \
../src/main.c \
../src/movie.c \
../src/movie_utilities.c \
../src/pq_array.c \
../src/queue_array.c \
../src/stack_array.c 

C_DEPS += \
./src/int_data.d \
./src/main.d \
./src/movie.d \
./src/movie_utilities.d \
./src/pq_array.d \
./src/queue_array.d \
./src/stack_array.d 

OBJS += \
./src/int_data.o \
./src/main.o \
./src/movie.o \
./src/movie_utilities.o \
./src/pq_array.o \
./src/queue_array.o \
./src/stack_array.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/int_data.d ./src/int_data.o ./src/main.d ./src/main.o ./src/movie.d ./src/movie.o ./src/movie_utilities.d ./src/movie_utilities.o ./src/pq_array.d ./src/pq_array.o ./src/queue_array.d ./src/queue_array.o ./src/stack_array.d ./src/stack_array.o

.PHONY: clean-src


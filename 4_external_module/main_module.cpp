/**
 * 
 * A C++ program that invokes externally defined functions
 * 
 * g++ -c external_module_1.cpp
 * g++ -c external_module_2.cpp
 * g++ -c main_module.cpp
 * g++ -o main_module.exe main_module.o external_module_1.o external_module_2.o
 * ./main_module.exe 
 * 
 * // Another alternative
 * g++ -c external_module_1.cpp
 * g++ -c external_module_2.cpp
 * g++ -c main_module.cpp
 * ar cru libArith.a external_module_1.o external_module_2.o
 * g++ -o main.exe main_module.o libArith.a
 * 
*/

#include <stdio.h>

// external function declaration - add
extern "C" int add(int a, int b);

// external function declaration - mul
extern "C" int mul(int a, int b);

int main(int argc, char **argv) {
    printf("Hello world -- %d, %d !\n", add(10, 20), mul(2, 18));
    return 0;
}

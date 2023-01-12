/**
 * 
 * Creating a shared object under linux
 * 
 * g++ -c external_module_1.cpp
 * g++ -c external_module_2.cpp
 * 
 * g++ -shared -fPIC -o libArith.so external_module_1.o external_module_2.o
 * 
 * // -fPIC => Position Independent Code means that the generated machine code is not dependent on being located at a specific address in order to work. 
 * //          E.g. jumps would be generated as relative rather than absolute.
 * 
 * // -shared => Create a shared library.
 * 
 * g++ -o main.exe main_module.cpp ./libArith.so
 * ./main.exe
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

/**
 * A hello world program using GNU C/C++ under Linux
 * 
 * g++ hello_world.cpp                      => output a.out executable file
 * g++ hello_world.cpp -o hello_world.exe   => output hello_world.exe executable file 
 * 
 * https://forum.freecodecamp.org/t/what-is-the-difference-in-the-out-and-exe-extension/451535
*/
#include <stdio.h>

int main(int argc, char **argv) {
    printf("Hello world\n");
    return 0;
}

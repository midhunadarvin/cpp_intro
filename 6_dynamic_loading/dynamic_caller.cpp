/**
 * 
 * Dynamically loading a shared object in C++
 * 
 * g++ -c external_module_1.cpp
 * g++ -c external_module_2.cpp
 * 
 * g++ -shared -fPIC -o libArith.so external_module_1.o external_module_2.o
 * 
 * g++ -o dynamic_caller.exe dynamic_caller.cpp
 * ./dynamic_caller.exe 
*/
#include <stdio.h>

/* Library for dynamic linking - https://pubs.opengroup.org/onlinepubs/7908799/xsh/dlfcn.h.html */
#include <dlfcn.h>

// Defines a type for the functions that are available in the shared library
typedef int (*BIN_FUNCTION)(int, int);

int main(int argc, char **argv) {

    // opens the shared object and returns a void pointer
    // RTLD_LAZY means "there may be symbols that can't be resolved; don't try to resolve them until they're used."
    void *handle = dlopen("libArith.so", RTLD_LAZY);

    if (handle == 0) {
        printf("Failed to open the shared library!\n");
        return 0;
    }

    // returns address of the add function in the handle ( dlsym - obtain the address of a symbol from a dlopen object )
    BIN_FUNCTION bn = (BIN_FUNCTION) dlsym(handle, "add");

    if (bn == 0) {
        printf("Failed to retrieve the function!");
        return 0;
    }

    int sum_result = (*bn)(10,10);
    printf("The value is %d\n", sum_result);
    return 0;
}

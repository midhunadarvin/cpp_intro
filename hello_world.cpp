#include <stdio.h>

// external function declaration - add
extern "C" int add(int a, int b);

// external function declaration - mul
extern "C" int mul(int a, int b);

int main(int argc, char **argv) {
    printf("Hello world -- %d, %d !\n", add(10, 20), mul(2, 9));
    return 0;
}
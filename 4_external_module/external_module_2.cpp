#include <stdio.h>

// external function declaration - multiply
extern "C" int mul(int a, int b) {
    return a * b;
}
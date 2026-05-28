// Write a program to find the size of int, float, double and char.,long double
#include <stdio.h>

int main() {

    printf("Size of int = %zu bytes\n", sizeof(int));
    printf("Size of float = %zu bytes\n", sizeof(float));
    printf("Size of double = %zu bytes\n", sizeof(double));
    printf("Size of char = %zu byte\n", sizeof(char));
    printf("Size of long double = %zu bytes\n", sizeof(long double));

    return 0;
}
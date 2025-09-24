#include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

int main()
{
    int a = 9;
    float b = 9.0;
    char c = 'd';
    long int d = 999999999;
    double e = 999999999.9999999;
    int size_of_int = sizeof(a);
    int size_of_float = sizeof(b);
    int size_of_char = sizeof(c);
    int size_of_long_int = sizeof(d);
    int size_of_double = sizeof(e);
    printf("Size of int: %d bytes\n", size_of_int);
    printf("Size of float: %d bytes\n", size_of_float);
    printf("Size of char: %d bytes\n", size_of_char);
    printf("Size of long int: %d bytes\n", size_of_long_int);
    printf("Size of double: %d bytes\n", size_of_double);
    return 0;
}
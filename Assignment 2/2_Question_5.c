#include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

int main()
{
    // swapping of two numbers
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    int temporary = a;
    a = b;
    b = temporary;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
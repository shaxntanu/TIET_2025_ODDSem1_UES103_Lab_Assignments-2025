#include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

int main()
{
    // using ternary operator
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("entered numbers are: %d and %d\n", a, b);
    (a > b) ? printf("%d is greater than %d\n", a, b) : printf("%d is greater than %d\n", b, a);
    return 0;
}
#include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

int main()
{
    int a = 10;
    int b = 10;
    int c = 10;
    int d = 10;
    int e = 10;
    printf("Initial values:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);
    printf("e = %d\n", e);
    a += 5;
    b -= 3;
    c *= 2;
    d /= 4;
    e %= 3;
    printf("Values after compound assignments:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);
    printf("e = %d\n", e);
    return 0;
}
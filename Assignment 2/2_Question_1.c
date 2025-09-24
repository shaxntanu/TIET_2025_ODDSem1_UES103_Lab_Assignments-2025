#include <stdio.h>
#include <math.h>
// #include<string.h>

int main()
{
    // trigonometry:
    printf("trigonometric fxn:");
    int x = cos(30);
    int y = sin(30);
    int z = tan(30);
    printf("c %d, s %d, t %d", x, y, z);
    // log
    int l = log10(10);
    printf("\nlog10(10) = %d", l);
    // power
    int p = pow(2, 2);
    printf("\n2 pow 2 = %d", p);
    // sqrt
    int r = sqrt(4);
    printf("\nsquare root 4 = %d", r);
    return 0;
}
#include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

int main()
{
    int a;
    a = 40; // binary = 00101000
    printf("Original value of a: %d\n", a);
    printf("Binary representation of a: 00101000\n");
    // for (int i = 7; i >= 0; i--) {
    //     printf("%d", (a >> i) & 1);
    // }
    int result = a << 2;                                                   // left shift by 2 bits
    printf("Result after left shifting %d by 2 bits is: %d\n", a, result); // expected output = 160 (binary = 10100000)
    return 0;
}
#include <stdio.h>
// #include <math.h>
// #include <string.h>

int main()
{
    float decimal_number = 1.83;
    printf("the decimal number is %f\n", decimal_number); // prints 1.830000
    printf("the decimal number upto 2 decimal placed is: %.2f", decimal_number); // prints 1.83 only
    return 0;
}
#include <stdio.h>
// #include <math.h>
// #include <string.h>

int main()
{
    int numerator;
    int denominator;
    printf("Enter Numerator: ");
    scanf("%d", &numerator);
    printf("\nEnter Denominator: ");
    scanf("%d", &denominator);
    printf("\nThe Rational Number is: %d/%d", numerator, denominator);
    return 0;
}
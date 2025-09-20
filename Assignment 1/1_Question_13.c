#include <stdio.h>
// #include <math.h>
// #include <string.h>

int main()
{
    float SI, p, r, t;
    printf("Enter Principal Amount:  ");
    scanf /* enter p, r, t in decimal! */ ("%f", &p);
    printf("\nEnter Rate: ");
    scanf("%f", &r);
    printf("\nEnter Time (Years): ");
    scanf("%f", &t);
    SI = (p * r * t) / 100;
    printf("\nThe Simple Interest is: %.3f", SI);
    return 0;
}
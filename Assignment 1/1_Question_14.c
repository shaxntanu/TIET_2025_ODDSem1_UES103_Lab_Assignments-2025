#include <stdio.h>
#include <math.h>
// #include <string.h>
int main()
{
    float p, r, t, CI, n, A;
    printf("Enter Principal Amount: ");
    scanf("%f", &p);
    printf("Enter Time (Years): ");
    scanf("%f", &t);
    printf("Enter Rate (in percent): ");
    scanf("%f", &r);
    printf("Enter the Number of compounding periods per year: ");
    scanf("%f", &n);

    float varone = (1 + (r / (n * 100)));
    float vartwo = n * t;
    A = p * pow(varone, vartwo);

    CI = A - p;
    printf("The compound interest is: %f\n", CI);
    return 0;
}

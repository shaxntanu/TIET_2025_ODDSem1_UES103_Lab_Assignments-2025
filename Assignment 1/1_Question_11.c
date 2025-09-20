#include <stdio.h>
#include <math.h>
// #include <string.h>

int main()
{
    // only for int
    int power_raised_number;
    int nth_root;
    printf("Enter number whose nth root is to be calculated: ");
    scanf("%d", &power_raised_number);
    printf("\nEnter n: ");
    scanf("%d", &nth_root);
    float answer = pow(power_raised_number, 1.0 / nth_root);
    printf("\nAnswer is: %f", answer);
    return 0;
}
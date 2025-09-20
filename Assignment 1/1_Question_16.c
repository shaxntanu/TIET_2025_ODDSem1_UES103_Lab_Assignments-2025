#include <stdio.h>
// #include <math.h>
// #include <string.h>

int main()
{
    float basic, da, ta, gross_salary;

    printf("Enter the basic salary: ");
    scanf("%f", &basic);

    da = 0.10 * basic;

    ta = 0.12 * basic;

    gross_salary = basic + da + ta;

    printf("The gross salary is: %.2f\n", gross_salary);

    return 0;
}
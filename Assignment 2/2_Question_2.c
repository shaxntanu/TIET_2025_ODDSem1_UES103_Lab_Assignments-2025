#include <stdio.h>
#include <math.h>
// #include <string.h>

int main()
{
    int a, b, c, rootone, roottwo;
    printf("Enter Coeffecient of x^2: ");
    scanf("%d", &a);
    printf("\nEnter Coeffecient of x: ");
    scanf("%d", &b);
    printf("\nEnter Constant: ");
    scanf("%d", &c);
    int D;
    D = ((b * b) - (4 * a * c));
    rootone = ((-b) + sqrt(D)) / 2 * a;
    roottwo = ((-b) - sqrt(D)) / 2 * a;
    if (D < 0)
    {
        printf("\nImaginary Roots");
    }
    else if (D >= 0)
    {
        printf("Root 1 = %d", rootone);
        printf("\nRoot 2 = %d", roottwo);
    }

    return 0;
}
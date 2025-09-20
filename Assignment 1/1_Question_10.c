#include <stdio.h>
// #include<math.h>
// #include<string.h>

int main()
{
    int a, b;
    a = 4;
    b = 2;
    printf("sum = %d\n", a + b);
    printf("difference = %d\n", a - b);
    printf("product = %d\n", a * b);
    printf("division = %d\n", a / b); // would not work if the numbers dont completely divide (numbers are int), to get answer in decimals use float;
    printf("remainder = %d", a % b);
    return 0;
}
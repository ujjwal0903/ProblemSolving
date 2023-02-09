#include <stdio.h>

void main()

{

    float n, x, i, fac = 1, sum = 0;

    printf("Enter the value of n : ");

    scanf("%f", &n);

    printf("Enter the value of x : ");

    scanf("%f", &x);

    for (i = 1; i < n; i++)

    {

        fac = fac * i;

        sum = sum + (x * (i / fac));
    }

    printf("Sum of the series = %f", 1 + sum);
}
#include <stdio.h>

#include <math.h>

void main()

{

    float i, n, sum = 0, x, sign = 0, fac = 1;

    printf("Enter the value of n : ");

    scanf("%f", &n);

    printf("Enter the value of x : ");

    scanf("%f", &x);

    for (i = 1; i < n; i++)

    {

        fac = fac * i;

        sign = pow(-1, i);

        sum = sum + (x * (i / fac)) * sign;
    }

    printf("Required Sum = %f", 1 + sum);
}
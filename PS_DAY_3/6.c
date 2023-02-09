#include <stdio.h>

#include <math.h>

void main()

{

    float i, n, y = 0, j, sum = 0, x, sign = 0, fac = 1;

    int k;

    printf("Enter the value of n : ");

    scanf("%f", &n);

    printf("Enter the value of x : ");

    scanf("%f", &x);

    k = 1;

    for (i = 2; i <= 2 * n - 1; i += 2)

    {

        fac = 1;

        for (j = i; j >= 1; j--)

        {

            fac = fac * j;
        }

        sign = pow(-1, k);

        y = pow(x, i);

        sum = sum + (y / fac) * sign;

        k++;
    }

    printf("Required Sum = %f", 1 + sum);
}
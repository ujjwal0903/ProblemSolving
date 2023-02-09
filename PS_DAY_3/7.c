#include <stdio.h>

#include <math.h>

void main()

{

    float i, n, u = 0, j, sum = 0, sign = 0, fac = 1;

    int k;

    printf("Enter the value of n : ");

    scanf("%f", &n);

    k = 2;

    u = 1;

    for (i = 1; i <= 2 * n - 1; i += 2)

    {

        fac = 1;

        for (j = i; j >= 1; j--)

        {

            fac = fac * j;
        }

        sign = pow(-1, k);

        sum = sum + (u / fac) * sign;

        k++;

        u++;
    }

    printf("Required Sum = %f", sum);
}
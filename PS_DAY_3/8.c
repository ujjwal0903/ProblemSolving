#include <stdio.h>

#include <math.h>

void main()

{

    int i, n, j, sum = 0, mul = 1;

    printf("Enter the value of n : ");

    scanf("%d", &n);

    for (i = 1; i <= n; i++)

    {

        mul = 1;

        for (j = i; j <= i + 2; j++)

        {

            mul = mul * j;
        }

        sum += mul;
    }

    printf("Required Sum = %d", sum);
}
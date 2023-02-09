#include <stdio.h>

void main()

{

    int n, i, fac = 1, sum = 0;

    printf("Enter any integer : ");

    scanf("%d", &n);

    for (i = 1; i <= n; i++)

    {

        fac = fac * i;

        sum += fac;
    }

    printf("Sum of the series = %d", sum);
}
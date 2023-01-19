#include <stdio.h>

void main()

{

    int i, j, k, n;

    printf("enter the value of n: ");

    scanf("%d", &n);

    for (i = 1; i <= n; i++)

    {

        for (j = 1; j < i; j++)

        {

            printf("%d", j);
        }

        for (k = i; k >= 1; k--)

        {

            printf("%d", k);
        }

        printf("\t");
    }
}
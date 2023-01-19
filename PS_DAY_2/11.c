#include <stdio.h>

void main()

{

    int i, j, k, m, n = 0;

    printf("Enter the value of n : ");

    scanf("%d", &n);

    for (i = 1; i <= n; i++)

    {

        for (j = 1; j <= i; j++)

        {

            printf("%d", j);
        }

        for (k = 2 * n; k > 2 * i; k--)

        {

            printf(" ");
        }

        for (m = i; m >= 1; m--)

        {

            printf("%d", m);
        }

        printf("\n");
    }
}
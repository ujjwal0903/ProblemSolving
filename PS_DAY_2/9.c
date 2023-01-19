#include <stdio.h>

void main()

{

    int i, j, k, l, n, m, u;

    printf("enter n: ");

    scanf("%d", &n);

    for (i = 1; i <= n; i++)

    {

        l = 2 * i - 1;

        for (k = n; k > i; k--)

        {

            printf(" ");
        }

        for (j = 1; j <= l; j++)

        {

            printf("*");
        }
        printf("\n");
    }

    for (i = 1; i <= n; i++)

    {

        l = 2 * i - 1;

        for (u = 0; u < i; u++)

        {

            printf(" ");
        }

        for (m = n + 1; m >= l; m--)

        {

            printf("*");
        }

        printf("\n");
    }
}
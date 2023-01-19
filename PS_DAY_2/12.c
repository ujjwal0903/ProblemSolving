#include <stdio.h>

void main()

{

    int i, j, k, m, n = 0;

    printf("Enter n : ");

    scanf("%d", &n);

    for (i = n; i >= 1; i--)

    {

        for (j = 1; j <= i; j++)

        {

            printf("%d", j);
        }

        for (k = i; k <= n; k++)

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
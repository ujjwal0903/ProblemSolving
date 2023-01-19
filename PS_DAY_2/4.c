#include <stdio.h>

void main()

{

    int i, j, k, m = 0;

    for (i = 1; i < 5; i++)

    {

        m = 2 * i - 1;

        for (j = i; j <= m; j++)

        {

            printf(" %c", j + 64);
        }

        printf("\n");
    }
}
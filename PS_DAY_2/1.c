#include <stdio.h>

void main()

{

    int i, j, m = 0;

    for (i = 1; i < 5; i++)

    {

        m = 2*i - 1;

        for (j = i; j <= m; j++)

        {

            printf("%d", j);
        }

        printf("\n");
    }
}
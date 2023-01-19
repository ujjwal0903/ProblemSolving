#include <stdio.h>

void main()

{

    int i, j, k, m = 0, l;

    for (i = 1; i < 5; i++)

    {

        for (k = 5; k > i; k--)

        {

            printf(" ");
        }

        m = 2 * i - 1;

        for (j = i; j <= m; j++)

        {

            printf("%d", j);
        }

        for (l = m - 1; l >= i; l--)

        {

            printf("%d", l);
        }

        printf("\n");
    }
}

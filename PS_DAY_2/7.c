#include <stdio.h>

void main()

{

    int i, j, k, l;

    for (i = 1; i < 5; i++)

    {

        for (k = 5; k > i; k--)

        {

            printf(" ");
        }

        for (j = i; j >= 1; j--)

        {

            printf("%d", j);
        }

        for (l = j + 2; l <= i; l++)

        {

            printf("%d", l);
        }

        printf("\n");
    }
}
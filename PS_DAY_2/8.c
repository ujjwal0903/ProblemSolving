#include <stdio.h>

void main()

{

    int i, j, k, l = 0;

    for (i = 1; i < 5; i++)

    {

        for (k = 5; k > i; k--)

        {

            printf(" ");
        }

        l = (2 * i - 1);

        for (j = 1; j <= l; j++)

        {

            printf("*");
        }

        printf("\n");
    }
}

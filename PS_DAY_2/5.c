#include <stdio.h>

void main()

{

    int i, j;

    for (i = 5; i >= 0; i--)

    {

        for (j = i; j < 5; j++)

        {

            printf("%c", j + 65);
        }

        printf("\n");
    }
}
#include <stdio.h>

int prime(int lv, int hv)

{

    int i, j, c;

    for (i = lv; i <= hv; i++)

    {

        c = 0;

        for (j = 1; j <= i; j++)

        {

            if (i % j == 0)

            {

                c++;
            }
        }

        if (c == 2)

        {

            printf("Prime number = %d\n", i);
        }
    }
}

void main()

{

    int lv, hv;

    printf("enter the lower value of the interval: ");

    scanf("%d", &lv);

    printf("enter the higher value of the interval : ");

    scanf("%d", &hv);

    prime(lv, hv);
}
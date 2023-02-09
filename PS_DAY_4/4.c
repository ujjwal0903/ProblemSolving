#include <stdio.h>

int perfect(int lv, int hv)

{

    int i, j, sum;

    for (i = lv; i <= hv; i++)

    {

        sum = 0;

        for (j = 1; j < i; j++)

        {

            if (i % j == 0)

            {

                sum += j;
            }
        }

        if (sum == i)

        {

            printf("Perfect number = %d\n", i);
        }
    }
}

void main()

{

    int lv, hv;

    printf("enter the lower value of the range: ");

    scanf("%d", &lv);

    printf("enter the higher value of the range: ");

    scanf("%d", &hv);

    perfect(lv, hv);
}
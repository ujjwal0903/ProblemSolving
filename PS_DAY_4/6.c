#include <stdio.h>

#include <math.h>

int arms(int lv, int hv)

{

    int i, j, n, m, c, a, sum;

    for (i = lv; i <= hv; i++)

    {

        n = i;

        m = i;

        c = 0;

        while (n > 0)

        {

            n = n / 10;

            c++;
        }

        sum = 0;

        while (m > 0)

        {

            a = m % 10;

            m = m / 10;

            sum = sum + pow(a, c);
        }

        if (sum == i)

        {

            printf("Armstrong number = %d\n", i);
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

    arms(lv, hv);
}
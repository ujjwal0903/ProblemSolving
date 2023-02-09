#include <stdio.h>

#include <math.h>

int pali(int lv, int hv)

{

    int i, j, m, c, a, sum;

    for (i = lv; i <= hv; i++)

    {

        m = i;

        sum = 0;

        while (m > 0)

        {

            a = m % 10;

            m = m / 10;

            sum = sum * 10 + a;
        }

        if (sum == i)

        {

            printf("Palindrome number = %d\n", i);
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

    pali(lv, hv);
}
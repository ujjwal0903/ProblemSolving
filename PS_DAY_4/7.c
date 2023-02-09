#include <stdio.h>

int strong(int n)

{

    int i, j, m, sum = 0, a, fact = 1;

    for (i = 1; i <= n; i++)

    {

        m = i;

        sum = 0;

        while (m > 0)

        {

            fact = 1;

            a = m % 10;

            m = m / 10;

            for (j = 1; j <= a; j++)

            {

                fact *= j;
            }

            sum = sum + fact;
        }

        if (sum == i)

        {

            printf("Strong number: %d\n", i);
        }
    }
}

void main()

{

    int n;

    printf("Enter the value of n: ");

    scanf("%d", &n);

    strong(n);
}
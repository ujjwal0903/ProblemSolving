#include <stdio.h>

int lcm(int a, int b)

{

    int i = 0;

    if (a == b)

        return a;

    if (a == 1)

        return b;

    if (b == 1)

        return a;

    if (a > b)

    {

        i = b;

        while (i >= b)

        {

            if (i % a == 0 && i % b == 0)

            {

                return i;
            }

            i++;
        }
    }

    else

    {

        i = a;

        while (i >= a)

        {

            if (i % a == 0 && i % b == 0)

            {

                return i;
            }

            i++;
        }
    }
}

void main()

{

    int a, b;

    printf("Enter 1st number :");

    scanf("%d", &a);

    printf("Enter 2nd number :");

    scanf("%d", &b);

    int res = lcm(a, b);

    printf("LCM of %d and %d is %d", a, b, res);
}
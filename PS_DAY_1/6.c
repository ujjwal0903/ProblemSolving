#include <stdio.h>

void main()

{
    int a, b, c;

    printf("enter side");

    scanf("%d", &a);

    printf("enter side");

    scanf("%d", &b);

    printf("enter side");

    scanf("%d", &c);

    if (a == b && a == c)
    {

        printf("triangle is equivalent");
    }

    else if (a == b || b == c || a == c)
    {

        printf("triangle is isosceles");
    }

    else
    {

        printf("scalene triangle");
    }
}
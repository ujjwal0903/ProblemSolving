#include <stdio.h>
void main()

{

    int a, b, c;

    printf("enter number");

    scanf("%d", &a);

    printf("enter number");

    scanf("%d", &b);

    printf("enter number");

    scanf("%d", &c);

    if (a > b && a > c)
    {

        printf("a is largest");
    }

    else if (b > a && b > c)
    {

        printf("b is largest");
    }

    else
    {

        printf("c is largest");
    }
}

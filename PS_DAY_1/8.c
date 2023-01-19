#include <stdio.h>

void main()

{

    int x, y;

    printf("enter x cordinate:");

    scanf("%d", &x);

    printf("enter y cordinate:");

    scanf("%d", &y);

    if (x > 0 && y > 0)

        printf("1 quadrant");

    else if (x < 0 && y > 0)

        printf("2 quadrant");

    else if (x < 0 && y < 0)

        printf("3 quadrant");

    else

        printf("4 quadrant");
}
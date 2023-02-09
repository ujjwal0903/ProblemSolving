#include <stdio.h>

int mean(int a, int b, int c, int d, int e)

{

    int x;

    x = (a + b + c + d + e) / 5;

    printf("mean = %d", x);
}

int median(int a, int b, int c, int d, int e)

{

    printf("median = %d", c);
}

void main()

{

    int a, b, c, d, e;

    printf("Enter 1st value: ");

    scanf("%d", &a);

    printf("Enter 2nd value: ");

    scanf("%d", &b);

    printf("Enter 3rd value: ");

    scanf("%d", &c);

    printf("Enter 4th value: ");

    scanf("%d", &d);

    printf("Enter 5th value: ");

    scanf("%d", &e);

    mean(a, b, c, d, e);

    median(a, b, c, d, e);
}
#include <stdio.h>

int gcd(int a, int b)

{

    if (a == b)

        return a;

    if (a == 0)

        return b;

    if (b == 0)

        return a;

    if (a > b)

        return gcd(a - b, b);

    return gcd(a, b - a);
}

void main()

{

    int a, b;

    printf("Enter 1st number :");

    scanf("%d", &a);

    printf("Enter 2nd number :");

    scanf("%d", &b);

    int res = gcd(a, b);

    printf("GCD of %d and %d is %d", a, b, res);
}

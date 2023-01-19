#include <stdio.h>

void main()

{

    int basic, ts, hra, da, allow, pf;

    char grade, a, b, c;

    printf("Enter basic salary :");

    scanf("%d", &basic);

    printf("enter the grade :");

    scanf(" %c", &grade);

    hra = 0.2 * basic;

    da = 0.5 * basic;

    pf = 0.11 * basic;

    if (grade = 'a')

        allow = 1700;

    else if (grade = 'b')

        allow = 1500;

    else if(grade = 'c')

            allow = 1300;

    ts = basic + hra + da + allow - pf;

    printf("total salary = %d", ts);
}
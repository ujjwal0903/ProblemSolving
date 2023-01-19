#include <stdio.h>

void main()

{

    char var;

    printf("enter the variable;");

    scanf("%c", &var);

    if (var == 'a' || var == 'e' || var == 'i' || var == 'o' || var == 'u')

        printf("vowel");

    else

        printf("consonant");
}
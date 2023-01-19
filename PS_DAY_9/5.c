#include<stdio.h>
void main()
{
    int n,i=0;
    printf("Enter any number :");
    scanf("%d",&n);
    while(n>0)
    {
        if(n%2==0)
        {
            n=n/2;
            i++;
        }
        else
        {
            n=n-1;
            i++;
        }
    }
        printf("%d",i);
}
#include<stdio.h>
int fact(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    else
    {
        return(n*fact(n-1));
    }
}
void main()
{
    int n,c=0,f,k;
    printf("Enter the number:");
    scanf("%d",&n);
    f=fact(n);
    printf("%d  ",f);
    while(f>0)
    {
        k=f%10;
        if(k==0)
            c++;
        else
            break;
        f=f/10;
    }
    printf("\nFactorial trailing zero is %d",c);
}
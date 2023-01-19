#include<stdio.h>
int main()
{
    int n=0,j=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(int i=1;i<=12;i++)
    {
        if(n%i==0)
        {
            // j++;
            printf("%d ",i);
        }
    }
    // printf("%d",j);
}
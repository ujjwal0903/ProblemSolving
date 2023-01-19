#include<stdio.h>
void main()
{
    long long n,arr[200],t;
    scanf("%d",&t);
    for(int j=0;j<t;j++)
    {
        int p=1;
        scanf("%ld",&n);
        for(int i=1;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=1;i<n;i++)
        {
            p=p*arr[i];
        }
        printf("%d",p%1234567);
    }
}
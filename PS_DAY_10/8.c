#include<stdio.h>
int main()
{
    int t;
    long long k, i=0;
    scanf("%d",&t);
    for(int j=1;j<=t;j++)
    {
        scanf("%lld",&k);
        i=k/2;
        printf("%lld",i*(k-i));
    }
}
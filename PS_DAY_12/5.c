#include<stdio.h>
int main()
{
    int n,a[50],b[50],c[50],i,j,max,sum1,sum2;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        scanf("%d", &a[i]);
    }
    if(n%2==0)
    {
        sum1=0;
        sum2=0;
        for(i=1;i<=n/2;i++)
        {
            b[i]=a[i];
            sum1=sum1+b[i];
        }
        for(j=n/2+1;j<=n;j++)
        {
            c[j]=a[j];
            sum2=sum2+c[j];
        }
        printf("%d", sum1*sum2);
    }
     else if(n%2!=0)
    {
        sum1=0;
        sum2=0;
        for(i=1;i<=n/2+1;i++)
        {
            b[i]=a[i];
            sum1=sum1+b[i];
        }
        for(j=n/2+2;j<=n;j++)
        {
            c[j]=a[j];
            sum2=sum2+c[j];
        }
        printf("%d", sum1*sum2);
    }
}
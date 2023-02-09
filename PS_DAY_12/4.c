#include<stdio.h>
int main()
{
    int n,a[50],i,j,max;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        scanf("%d", &a[i]);
    }
    max=a[1];
    for(i=1;i<=n;i++)
    {
        if(a[i]>max)
        {
          max=a[i];
        }
    }
    printf("%d", max);
}

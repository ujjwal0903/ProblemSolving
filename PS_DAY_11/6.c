#include<stdio.h>
void main()
{
    int n,k,arr[10],m,a,b;
    printf("Enter k");
    scanf("%d",&k);
    printf("Enter n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>k)
        {
            m=arr[i];
            while(m>0)
            {
                a=m%10;
                m=m/10;
                b=m%10;
            }
            if(a-b || b-a == 1)
                {
                    printf("%d",arr[i]);
                }
        }
    }
}
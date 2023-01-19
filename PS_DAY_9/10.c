#include<stdio.h>
void main()
{
    int i,n,c,d=0;
    printf("Enter the number :");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        c=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            d++;
        }
    }
        printf("%d",d);
}

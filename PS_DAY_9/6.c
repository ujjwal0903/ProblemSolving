#include<stdio.h>
void main()
{
    int l,r,i,k=0,flag=0,j;
    printf("Enter the lower range:");
    scanf("%d",&l);
    printf("Enter the upper range:");
    scanf("%d",&r);
    for(i=l;i<=r;i++)
    {
        j=i;
        while(i>0)
        {
            k=i%10;
            if(j%k==0)
                {
                    flag=1;
                }
            else
            {
                flag=0;
                break;
            }
            i=i/10;
        }
        i=j;
        if(flag==1) 
        {
            printf("%d  ",j);
        }
    }
}
#include<stdio.h>
void main()
{
    int n,sum,i;
    printf("Enter the number of attendee :");
    scanf("%d",&n);
    sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+i;
    }
    printf("Total no. of handshakes = %d",sum);
}
#include<stdio.h>
void main()
{
    int i,n,k;
    scanf("%d", &n);
    k=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            n=n-i;
            k++;
            i=0;
        }
        else
        continue;
    }
    if(k%2==0)
    printf("False");
    else
    printf("False");

}
// if(n%2==0)
// return 0;
// else 
// return 1;
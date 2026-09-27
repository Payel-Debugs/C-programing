//wap to print 4 8 16 32 64....n & calc. the sum of the series
#include<stdio.h>
void main ()
{
    int n,i,sum=0,j=4;
    printf("enter the range=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",j);
        sum=sum+j;
        j=j*2;
    }
    printf("=%d",sum);
}
        
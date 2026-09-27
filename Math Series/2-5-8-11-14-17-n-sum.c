//wap to print 2 5 8 11 14 17 20.....n
#include<stdio.h>
void main()
{
    int i,n,s=0;
    printf("enter the range=");
    scanf("%d",&n);
    for(i=2;i<=n;i=i+3)
    {
        printf("%d ",i);
        s=s+i;
    }
    printf("=%d",s);
    
}
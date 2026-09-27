//wap to print 1 11 111 1111.....n
#include<stdio.h>
void main()
{ 
    int i,n,s=0,j=1;
    printf("enter the range=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",j);
        s=s+j;
        j=(j*10)+1;
    }
    printf("=%d ",s);
}
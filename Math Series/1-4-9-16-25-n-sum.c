//wap to print 1 4 9 16 25.....n
#include<stdio.h>
void main()
{
    int i,n,s=0;
    printf("enter the range=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       printf("%d ",i*i);
       s=s+(i*i);
    }
      printf("=%d",s);
}
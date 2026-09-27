//0 3 8 15 24.....n
//(1*1-1) (2*2-1) (3*3-1) (4*4-1)......n
#include<stdio.h>
void main()
{
    int i,n,s=0;
    printf("enter the range=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",((i*i)-1));
        s=s+((i*i)-1);
    }
    printf("=%d",s);
}
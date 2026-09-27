//wap to print 0 5 10 17 26......n
#include<stdio.h>
void main()
{
    int i,n,s=0,t;
    printf("Enter the Range = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==1)
          t=(i*i)-1;
        else
          t=(i*i)+1;
        printf("%d ",t);
        s=s+t;
    }   
    printf(" = %d ",s);
}
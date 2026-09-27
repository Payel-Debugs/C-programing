//X -X^2 +X^3- x^4 +X^5    -n   & sum
#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,x,p,s=0,b;
    printf("Enter the Range = ");
    scanf("%d",&n);
    printf("Enter the Base = ");
    scanf("%d",&b);
    for(i=1,x=1;i<=n;i++,x=x+1)
    {
        p=pow(b,x);
        if(i==1)
          {
            printf("%d ",p);
            s=s+p;
          }
        else if(i%2==0)
        {
            printf(" - %d ",p);
            s=s-p;
        }
        else
        {
            printf(" + %d ",p);
            s=s+p;
        }
    }
    printf(" = %d ",s);
}
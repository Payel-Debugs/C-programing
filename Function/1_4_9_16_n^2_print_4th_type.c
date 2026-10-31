// 1 4 9 16 25 -n^2 & sum 4th type
#include<stdio.h>
int series(int);
void main()
{
    int x;
    printf("Enter the Range = ");
    scanf("%d",&x);
    int sum=series(x);
    printf(" = %d ",sum);
}
int series(int n)
{
   int i,p,s=0;
   for(i=1;i<=n;i++)
   {
      p=i*i;
      if(i==n)
        printf("%d  ",p);
      else
        printf("%d + ",p);
      s=s+p;
   }
   return s;
}
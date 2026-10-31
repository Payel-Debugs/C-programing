//armstrong no. by using func. 2nd type
#include<stdio.h>
#include<math.h>
void arm(int);
void main()
{
   int n;
   printf("Enter the No.  = ");
   scanf("%d",&n);
   arm(n);
}
void arm(int n)
{
    int x,rem,s=0,c=0,p;
    for(x=n;n!=0;n/=10)
       c++;
    for(n=x;n!=0;n/=10)
    {
        rem=n%10;
        p=pow(rem,c);
        s=s+p;
    }
   (x==s)?printf("%d is Armstrong No. ",x):printf("%d is NOT Armstrong No. ",x);
}
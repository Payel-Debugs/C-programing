//armstrong no. by using func. 3rd type
#include<stdio.h>
#include<math.h>
int arm();
int n,x;
void main()
{
    if(x==arm())
      printf("%d is Armstrong No. ",x);
    else
      printf("%d is NOT Armstrong No. ",x);
}
int arm()
{
   int rem,s=0,p,c=0;
   printf("Enter the No. = ");
   scanf("%d",&n);
   for(x=n;n!=0;n/=10)
     c++;
   for(n=x;n!=0;n/=10)
   {
      rem=n%10;
      p=pow(rem,c);
      s=s+p;
   } 
   return s;
}
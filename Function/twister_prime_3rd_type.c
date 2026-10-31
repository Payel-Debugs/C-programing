//Twisted Prime by using func. 3rd type
#include<stdio.h>
void prime(int);
int rev();
int f=0,n,x;
void main()
{
   int p;
   printf("Enter the No. =");
   scanf("%d",&n);  //n=17
   prime(n);//calling
   if(f==0)
    {
     p=rev();//71
     prime(p);
     if(f==0)
       printf("%d is Twisted Prime No.",x);
     else
       printf("%d is NOT Twisted Prime No.",x);
    }
    else
       printf("%d is NOT Twisted Prime No.",n);
}
void prime(int n)
{
    int i;
    f=0;
    for(i=2;i<n;i++)
     {
        if(n%i==0)
          {
              f=1;
              break;
          }
     }
     (f==0)?printf("%d is Prime No. ",n):printf("%d is NOT Prime No. ",n);
}
int rev()
{
   int rem,rev1=0;
   for(x=n;n!=0;n/=10)
    {
       rem=n%10;
       rev1=rev1*10+rem;
    } 
    return rev1;
}
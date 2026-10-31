//Factorial of a No. by using func. 3rd type
#include<stdio.h>
int fact();//declaration
int n;
void main()
{
   int x;
   x=fact();
   printf("Factorial of the No. %d is = %d",n,x);
} 
int fact()// definition
{
   int i,f=1;
   printf("Enter the No. = ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
     f=f*i;
   return f;  
}
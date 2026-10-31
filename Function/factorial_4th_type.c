//factorial no. 4th type( with both return & parameter passing)
#include<stdio.h>
int fact(int);
void main()
{
   int n;
   printf("Enter the No. = ");
   scanf("%d",&n);
   printf("Factorial of %d is %d ",n,fact(n));
}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
      f=f*i;
    return f;
}
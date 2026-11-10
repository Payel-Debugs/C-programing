//greater between 2 No. by using macro by call by value
#include<stdio.h>
#define p printf
#define s scanf
#define check(a,b)  (a>b)?printf("1st No. %d is Greater",a):(a==b)?printf("Both Equal"):printf("2nd No. %d is Greater",b)
void main()
{
   int x,y;
   p("Enter 2 No. = ");
   s("%d%d",&x,&y);
   check(x,y);//calling
}
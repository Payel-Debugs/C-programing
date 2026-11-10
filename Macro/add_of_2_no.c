//WAP to add 2 No. by using Macro
#include<stdio.h>
#define add(x,y) x+y
#define p printf
#define sc scanf
void main()
{
   int a,b;
   p("Enter 2 No. = ");
   sc("%d%d",&a,&b);
   p("addition= %d",add(a,b));//calling
}
#include<stdio.h>
#define p printf
#define sc scanf
#define evenodd(x) (x==0)?2:(x%2==0)?1:0
void main()
{
  int a,x;
  p("Enter the No. = ");
  sc("%d",&a);
  x=evenodd(a);//calling
  if(x==2)
    p("%d is Neutral No.",a);
  else if(x==1)
   p("%d is Even No.",a);
  else
   p("%d is Odd No.",a);
}
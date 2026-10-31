//WAP to calc. area & perimeter of circ.
#include<stdio.h>
#define pi 3.14
#define p printf
#define sc scanf
void main()
{
  float r,ar,pr;
  p("Enter the Radius = ");
  sc("%f",&r);
  ar=pi*r*r;
  pr=2*pi*r;
  p("Area = %.2f Perimeter = %.2f",ar,pr);
}
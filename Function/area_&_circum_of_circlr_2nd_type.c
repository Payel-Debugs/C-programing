//WAP to calc. area & circumference of Circle 2nd type
#include<stdio.h>
void circ_calc(float);//declaration
void main()
{
    float r;
    printf("Enter the Radius = ");
    scanf("%f",&r);
    circ_calc(r);//calling
}
void circ_calc(float r)
{
    float ar,cr;
    ar=3.14*r*r;
    cr=2*3.14*r;
    printf("Area = %.2f Circumference = %.2f",ar,cr);
}
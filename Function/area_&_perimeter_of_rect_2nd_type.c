//WAP to calc. area & perimeter of rect. 2nd type
#include<stdio.h>
void rect_calc(int,int);//declaration
void main()
{
    int a,b;
    printf("Enter the Length & Breadth = ");
    scanf("%d%d",&a,&b);
    rect_calc(a,b);//calling
}
void rect_calc(int x,int y)
{
    int ar,cr;
    ar=x*y;
    cr=2*(x+y);
    printf("Area = %d Perimeter = %d",ar,cr);
}
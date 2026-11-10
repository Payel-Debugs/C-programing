//wap to calculate simple interest by using macro(given principle,rate & time)
#include<stdio.h>
#define calc_si(p,r,t) (p*r*t)/100
void main()
{
 int p,r,t,si;
 printf("Enter the Principle=");
 scanf("%d",&p);
 printf("Enter the Rate=");
 scanf("%d",&r);
 printf("Enter the Time=");
 scanf("%d",&t);
 si=calc_si(p,r,t);//calling
 printf("Simple Interest = %d",si);
 printf("\nTotal Amount = %d",si+p);
}
//greatest No. by using ternary operator(half)
#include<stdio.h>
void main()
{
    int x,y,z;
    printf("Enter 3 No. = ");
    scanf("%d%d%d",&x,&y,&z);
    (x>y && x>z)?printf("1st No. %d is Greatest",x):(y>z)?printf("2nd No. %d is Greatest",y):(x==y && x==z)?printf("All are Equal"):printf("3rd No. %d is Greatest",z);
}
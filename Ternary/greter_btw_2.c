//WAP to check greater between 2 No. using ternary
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter 2 NO. = ");
    scanf("%d%d",&a,&b);
    (a>b)?printf("1st No. %d is Greater",a):(a==b)?printf("Both are Equal"):printf("2nd No. %d is Greater",b);
}

//calc. 4th type
#include<stdio.h>
int add(char,int,int);
int sub(char,int,int);
int multi(char,int,int);
int divi(char,int,int);
void main()
{
    char x;
    int a,b;
    printf("Enter the Operator = ");
    scanf("%c",&x);
    printf("Enter 2 No. = ");
    scanf("%d%d",&a,&b);
    add(x,a,b);
    sub(x,a,b);
    multi(x,a,b);
    divi(x,a,b);
}
int add(char x,int a,int b)
{
    if(x=='+')
      return printf("Add = %d", a+b);
}
int sub(char x,int a,int b)
{
    if(x=='-')
      return printf("Sub = %d", a-b);
}
int multi(char x,int a,int b)
{
    if(x=='*')
      return printf("Multi. = %d", a*b);
}
int divi(char x,int a,int b)
{
    if(x=='/')
      return printf("Divi. = %d", a/b);
}
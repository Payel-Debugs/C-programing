//WAP to add,sub,multi,div. of 2 No. by using func. 1st type
#include<stdio.h>
void input();//declaration
void add();//declaration
void sub();//declaration
void multi();//declaration
void divi();//declaration
int x,y;// global variable
void main()
{
   input();//calling
   sub();
   input();
   divi();
   multi();
   add();
}
void input()//definition
{
    printf("Enter 2 No. = ");
    scanf("%d%d",&x,&y);
}
void add()
{
    printf("Addition = %d\n",x+y);
}
void sub()
{
    printf("Subtraction = %d\n",x-y);
}
void multi()
{
    printf("Multiplication = %d\n",x*y);
}
void divi()
{
    printf("Division = %d\n",x/y);
}
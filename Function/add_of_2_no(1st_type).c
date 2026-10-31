//WAP to add 2 no. by using func. 1st type(no return no parameter passing)
#include<stdio.h>
void add();//func. declaration
void main()
{
    add();//func. calling
}
void add()//func. definition
{
    int x,y;
    printf("Enter 2 No. = ");
    scanf("%d%d",&x,&y);
    printf("Addition = %d \n",x+y);  
}
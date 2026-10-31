//WAP to add 2 no. by using call by ref. or copy address
#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
void add(int*,int*);// func. declaration
void main()
{
   int x,y;
   p("Enter 2 No. = ");
   s("%d%d",&x,&y);
   add(&x,&y);//calling
   getch();
}
void add(int *a,int *b)
{
    printf("Addition = %d",(*a)+(*b));	
}
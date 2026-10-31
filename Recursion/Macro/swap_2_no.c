//swap 2 No. by using call by ref.
#include<stdio.h>
#define p printf
#define s scanf
void swap(int*,int*);
void main()
{
   int x,y;
   p("Enter 2 no. = ");
   s("%d%d",&x,&y);
   swap(&x,&y);
}
void swap(int *a,int *b)
{
	int p1;
	p1=*a;
	*a=*b;
	*b=p1;
	p("A = %d B= %d",*a,*b);
}
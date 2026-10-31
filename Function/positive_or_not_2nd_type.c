//Positive or not by using func. 2nd type
#include<stdio.h>
void check(int);//func. declaration
void main()
{
   int a;
   printf("Enter the No. = ");
   scanf("%d",&a);
   check(a);//calling
}
void check(int x)//definition
{
    if(x>0)
      printf("%d is Positive No. ",x);
    else if(x==0)
      printf("%d is Neutral No. ",x);
    else
      printf("%d is Negative No. ",x);
}
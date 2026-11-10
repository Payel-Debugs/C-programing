//wap to greater between 2 no. using command line argument
#include<stdio.h>
#include<conio.h>
void main(int argc,char* argv[])//4
{
 int x,y;
 if(argc==3)
 {
    x=atoi(argv[1]);//x=100
    y=atoi(argv[2]);//y=100
    if(x>y) 
     printf("1st no. %d is greater",x);
    else if(x==y)
     printf("Both Equal");
    else
     printf("2nd no. %d is greater",y);
 }
 else
  printf("No. of argument mismatch");
 getch();
}
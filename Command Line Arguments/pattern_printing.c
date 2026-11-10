/*
  1
  2 1
  3 2 1
  4 3 2 1 command line argument
*/ 
#include<stdio.h>
#include<conio.h>
void main(int argc,char* argv[])
{
 int i,j,n;
 if(argc==2)
 {
    n=atoi(argv[1]);//n=4
    for(i=1;i<=n;i++)
    {
     for(j=i;j>=1;j--)
      {
       printf("%d ",j);
      }
      printf("\n");
    }
 }
 else
  printf("Invalid Argument");
 getch();
}
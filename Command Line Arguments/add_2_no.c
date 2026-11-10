//wap to add 2 no. using command line argumnet
#include<stdio.h>
#include<conio.h>
//argc-->integer type variable which is used to count how many arguments are passing at run time
//argv-->is character type of array pointer which is used to store the value within the array at dynamically at command time
void main(int argc,char* argv[])//argc=2
{
 int x,y,z;
 if(argc==3)
 {
  x=atoi(argv[1]);//  x= 100 atoi --> inbuilt func which is used to fetch the data from argv array index
  y=atoi(argv[2]);//y=500
   z=x+y;
  printf("\nResult=%d",z);
 }
  else
  printf("\nIncorrect argument number!");
 getch();
}
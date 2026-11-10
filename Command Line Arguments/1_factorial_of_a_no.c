//wap to print factorial of a no. using command line argument
#include<stdio.h>
#include<conio.h>
void main(int argc,char* argv[])//3
{
 int i,n,f=1;
 if(argc==2)
 {
    n=atoi(argv[1]);//n=5
    for(i=1;i<=n;i++)
    {
      f=f*i;
      printf("The Facorial of No. %d is %d\n",i,f);
    }
//    printf("The Facorial of No. %d is %d",n,f);
 }
else
    printf("Mismatch Argument");
 getch();
}
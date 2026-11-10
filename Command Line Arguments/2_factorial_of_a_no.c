//wap to print factorial of a no. using command line argument
#include<stdio.h>
#include<conio.h>
void main(int argc,char* argv[])//3
{
 int i,n,f=1;
 if(argc==2)
 {
    n=atoi(argv[1]);//n=5
    for(i=n;i>=1;i--)
    {
      f=f*i;
      if(i==1)
        printf("%d  ",i);
      else
        printf("%d x ",i);
    }
    printf("= %d",f);
 }
else
    printf("Mismatch Argument");
 getch();
}
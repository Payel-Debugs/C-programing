//wap to check whether a no. is palindrome or not by using command line argument
#include<stdio.h>
#include<conio.h>
//n=121
void main(int argc,char* argv[])
{
 int n,rem,s=0,d;
 //printf("Count = %d\n",argc);
 if(argc==2)
 {
    n=atoi(argv[1]);//n=121
    d=n;
    while(n>0)//0>0
    {
      rem=n%10;//1
      s=rem+(s*10);//s=121
      n=n/10;//n=0
    }
    if(d==s)
     printf("Palindrome No.");
    else
     printf("NOT Palindrome No.");
 }
 else
  printf("Argument mismatch");
 getch();
}
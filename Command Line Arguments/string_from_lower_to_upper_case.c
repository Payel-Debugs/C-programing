//wap to convert a string from lower to upper case by command line arguments...
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(int argc, char* argv[])//argc=3
{
 int i;
 char str[80];
 if(argc==3)//3==3
 {
 
  strcpy(str,argv[2]);//str="laboni\0"
  for(i=0;str[i]!='\0';i++)//\0!='\0'  i=6
  { 
    if(str[i]>=97 && str[i]<=122)
      str[i]=str[i]-32;
   }
   printf("\nold word=%s",argv[2]);
   printf("\nNew word=%s",str);
 }
 else
   printf("\nIncorrect argument number!");
 getch();
}
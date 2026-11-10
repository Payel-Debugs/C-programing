//WAP to copy the string from command line argument.
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(int argc, char* argv[])//argc=3
{
 int i,j;
 char str[80];
 //3==3
 
   for(i=1;i<=argc-1;i++)
   {
      strcpy(str,argv[i]);
      for(j=0;str[j]!='\0';j++)//\0!='\0'  i=6
      { 
        if(str[j]>=97 && str[j]<=122)
          str[j]=str[j]-32;
      }            
      printf("\nold word=%s",argv[i]);
      printf("\nNew word=%s",str);
 
 }
 getch();
}
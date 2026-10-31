//WAP to check whether a string is palindrome or not
#include<stdio.h>
#include<string.h>
void main()
{
    int i,j,len,f=0;
    char x[10];
    printf("Enter the String = ");
    gets(x);
    len=strlen(x);
    strupr(x);
    printf("String = %s\n",x);
    for(i=0,j=len-1;i<=j;i++,j--)
    {
         if(x[i]!=x[j])
         {
            f=1;
            break;
         }
    }
    if(f==1)
      printf("%s is Not Palindrome String",x);
    else
      printf("%s is Palindrome String",x);
}
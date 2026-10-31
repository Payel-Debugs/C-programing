//count how many times a letter present within a string
#include<stdio.h>
void main()
{
    char x[50],p;
    int i,c=0;
    printf("Enter the String = ");
    gets(x);
    printf("Enter the Letter you want to searched for = ");
    scanf("%c",&p);
    for(i=0;x[i]!='\0';i++)
      {
         if(x[i]==p)
          c++;
      }
     printf("%c present %d times ",p,c);
}
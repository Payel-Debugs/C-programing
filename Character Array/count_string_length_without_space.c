//WAP to count the length of a string(without space)
#include<stdio.h>
void main()
{
    char x[20];
    int c=0;
    printf("Enter the String = ");
    gets(x);
    printf("String = %s\n",x);
    for(int i=0;x[i]!='\0';i++)
    {
        if(x[i]!=' ')
          c++;
    }
    printf("Length = %d",c);
}
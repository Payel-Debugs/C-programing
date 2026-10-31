//WAP to count the length of a string(with space)
#include<stdio.h>
void main()
{
    char x[20];
    int i,c=0;
    printf("Enter the String = ");
    gets(x);
    printf("String = %s\n",x);
    for(int i=0;x[i]!='\0';i++)
    {
        c++;
    }
    printf("Length = %d",c);
}




/*
//WAP to count the length of a string(with space)
#include<stdio.h>
void main()
{
    char x[20];
    int i;
    printf("Enter the String = ");
    gets(x);
    printf("String = %s\n",x);
    for(i=0;x[i]!='\0';i++)
    {
    }
    printf("Length = %d",i);
}
*/
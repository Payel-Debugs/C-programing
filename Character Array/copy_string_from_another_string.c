//copy a string from another string
#include<stdio.h>
void main()
{
    char x[20],y[20];
    int i;
    printf("Enter the String = ");
    gets(x);
  //  printf("1st String = %s\n",x);
   // printf("2nd String = %s\n",y);
    for(i=0;x[i]!='\0';i++)
    {
        y[i]=x[i];
    }
    y[i]='\0';
    printf("String after copy = %s",y);
}
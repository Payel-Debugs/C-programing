//wap to convert a string lower to upper
#include<stdio.h>

void main()
{
    char str[20];
    int i;

    printf("Enter a string: ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
    }

    printf("Lowercase string = %s", str);
}
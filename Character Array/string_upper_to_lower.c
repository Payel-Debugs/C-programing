//wap to convert a strimg upper to lower
#include<stdio.h>

void main()
{
    char str[20];
    int i;

    printf("Enter a string: ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
    }

    printf("Lowercase string = %s", str);
}
//WAP to concatenate 2 string
#include<stdio.h>
void main()
{
    char x[10],y[10],z[10];
    int i,j;
    printf("Enter the 1st String = ");
    gets(x);
    printf("Enter the 2nd String = ");
    gets(y);
    printf("1st String = %s\n",x);
    printf("2nd String = %s",y);
    //copy 1st string
    for(i=0;x[i]!='\0';i++)
    {
        z[i]=x[i];
    }
    //2nd copy
    z[i]=' ';
    for(i=i+1,j=0;y[j]!='\0';j++,i++)
    {
        z[i]=y[j];
    }
    z[i]='\0';
    printf("\nConcatenated String = %s",z);
}
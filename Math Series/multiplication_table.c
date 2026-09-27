//multiplication table of a no.
#include<stdio.h>
void main()
{
    int i,n,m;
    printf("Enter the No. = ");
    scanf("%d",&n);
    printf("---------------------------------------------\n");
    printf("\tMultiplication Table\n");
    printf("---------------------------------------------\n");
    for(i=1;i<=10;i++)
    {
        m=n*i;
        printf("\t%d x %d = %d\n",n,i,m);
    }
}
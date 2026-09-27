/*
       ODD Even
        1   2
        3   4
        --n
*/
#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter the range = ");
    scanf("%d",&n);
    printf("-------------------------------------\n");
    printf("\tODD\tEven\n");
    printf("-------------------------------------\n");
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
          printf("\t%d\n",i);
        else
          printf("\t%d",i);
    }
}
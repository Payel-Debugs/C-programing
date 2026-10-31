// Pattern 2nd type
#include<stdio.h>
void pattern(int);
void main()
{
   int n;
   printf("Enter the Range = ");
   scanf("%d",&n);
   pattern(n);
}
void pattern(int n)
{
    int i,j,sp;
    for(i=1;i<=n;i++)
    {
        for(sp=n-1;sp>=i;sp--)
        {
          printf(" ");
        }
        for(j=1;j<=(2*i)-1;j++)
        {
          printf("*");
        }
        printf("\n");
    }
}
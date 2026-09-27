// 1/1! + 2/2! + 3/3! + 4/4! -  n/n!   ANOTHER WAY
#include<stdio.h>
void main()
{
    int i,n,f=1;
    float s=0.0;
    printf("Enter the Range = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
        printf("%d/%d! ",i,i);
        s=s+(float)i/(float)f;
    }
    printf(" = %.2f",s);
}
//12. WAP to check whether a matrix is NULL or not.
#include<stdio.h>
void main()
{
    int i,j,r,c,f=1;
    printf("Enter the No. of Row & column = ");
    scanf("%d%d",&r,&c);
    int a[r][c];
    //input
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
         {
            printf("Enter the No. = ");
            scanf("%d",&a[i][j]);
         }
    }
     //output
     printf("\nMatrix = \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
         {
            printf("%d ",a[i][j]);
         }
         printf("\n");
    }
    // checking null matrix
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]!=0)
            {
                f=0;
                break;
            }
        }
    }
    if(f==1)
        printf("\nmatrix is Null Matrix.");
    else
        printf("\nmatrix is NOT Null Matrix.");
}
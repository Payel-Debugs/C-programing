//2. column wise sum of a matrix
#include<stdio.h>
void main()
{
    int i,j,r,c,colsum=0,k=1;
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
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
         {
            printf("%d ",a[j][i]);
         }
         printf("\n");
    }
    //column wise sum
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
         {
            colsum=colsum+a[i][j];
         }
         printf("%d. rowwise sum = %d\n",k,colsum);
         colsum=0;
         k++;

    }
}
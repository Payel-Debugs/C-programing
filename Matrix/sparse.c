//13. check whether a matrix is sparse or not
#include<stdio.h>
void main()
{
    int i,j,r,c,count=0;
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
    //checking
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
         {
            if(a[i][j]==0 || a[i][j]==1)
              count++;
         }
    }
    if(count>(r*c)/2)
      printf("Sparse Matrix ");
    else
      printf("NOT Sparse Matrix ");
}
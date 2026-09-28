//4. matrix addition
#include<stdio.h>
void main()
{
    int i,j,r,c;
    printf("Enter the No. of Row & column = ");
    scanf("%d%d",&r,&c);
    int a[r][c],b[r][c],x[r][c];
    //input
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
         {
            printf("Enter the No. for 1st Matrix (%d,%d) coordinates = ",i,j);
            scanf("%d",&a[i][j]);
            printf("Enter the No. for 2nd Matrix (%d,%d) coordinates = ",i,j);
            scanf("%d",&b[i][j]);
         }
    }
     //output
     printf("\n1st Matrix = \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
         {
            printf("%d ",a[i][j]);
         }
         printf("\n");
    }
    printf("\n2nd Matrix = \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
         {
            printf("%d ",b[i][j]);
         }
         printf("\n");
    }
    //matrix addition 
    printf("\nMatrix Addition = \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
         {
            x[i][j]=a[i][j]+b[i][j];
            printf("%d ",x[i][j]);
         }
         printf("\n");
    }
}
//8. to print the diagonal of a matrix.
#include<stdio.h>
void main()
{
    int i,j,r,c;
    printf("Enter the No. of Row & column = ");
    scanf("%d%d",&r,&c);
    int a[r][c];
    if(r==c)
    {
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
    //diagonal
   printf("\nDiagonal Matrix = \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
         {
            if(i==j)
              printf("%d ",a[i][j]);
            else
              printf(" ");
         }
         printf("\n");
    }
  }
  else
   printf("It's Not Sq. Matrix so diagonal element can't be found");
}
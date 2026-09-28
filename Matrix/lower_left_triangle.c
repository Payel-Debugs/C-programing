//17. WAP to print the lower left triangle of the matrix.
#include<stdio.h>
void main()
{
    int i,j,r,c;
    printf("Enter the No. of Row & column = ");
    scanf("%d%d",&r,&c);
    int a[r][c];
    if(r!=c)
        printf("Not square matrix not possible");
    else{
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
    printf("\nLower Left Triangle of the Matrix = \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<=i;j++)
         {
            printf("%d ",a[i][j]);
         }
         printf("\n");
    }
}
}
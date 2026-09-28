//lower right triangle
#include<stdio.h>
void main()
{
    int i,j,r,c;
    printf("Enter the No. of Row & column = ");
    scanf("%d%d",&r,&c);
    int a[r][c];
    //input
    if(r==c)
    {
       for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                 printf("Enter the No. = ");
                 scanf("%d",&a[i][j]);
            }
        }
        //output
        printf("Matrix = \n");
         for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        //lower right triangle
        printf("\nLower Right Triangle = \n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            { 
                if((i+j)>=r-1)
                  printf("%d",a[i][j]);
                else
                  printf(" ");
            }
            printf("\n");
        }
    }
    else
      printf("As the Matrix is not Sq. so Lower Right Triangle Can't be found");
}
//skew symmetric matrix
#include<stdio.h>
void main()
{
    int i,j,r,c,f=0;
    printf("Enter the No. of Row & column = ");
    scanf("%d%d",&r,&c);
    int a[r][c],t[r][c];
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
        printf("\nTranspose Matrix = \n");
         for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                t[i][j]=a[j][i];
                 printf("%d ",t[i][j]);
            }
            printf("\n");
        }
        //Skew symmetric matrix
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(a[i][j]!=(-1* t[i][j]) && i!=j)
                {
                    f=1;
                    break;
                }
            }
            if(f==1)
             break;
        }
        if(f==0)
          printf("It's a Skew Symmetric Matrix");
        else
          printf("It's a NOT a Skew Symmetric Matrix");
    }
    else
      printf("As it is not Sq. so Skew Symmetric matrix is not possible");
}
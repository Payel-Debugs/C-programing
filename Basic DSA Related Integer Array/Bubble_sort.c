//bubble sort
#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,n,temp=0,k=1,count=0;
 printf("Enter the Range=");
 scanf("%d",&n);
 int a[n];
 //input
 for(i=0;i<n;i++)
 {
  printf("Enter the No.=");
  scanf("%d",&a[i]);
 }
 //bubble sort
 printf("\nAfter Sorting= ");
 for(i=0;i<n;i++)
 {
  count++;
   for(j=0;j<n-1;j++)
   {
      count++;
      if(a[j]>a[j+1])
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
   }
    printf("\nIteration %d=",k);
    k++;
    printf("\n");
    for(j=0;j<n;j++)
    {
      printf("%d ",a[j]);
    }
    printf("\nTotal Iteration = %d",count);
  }
 getch();
}
//WAP to search an array element by using linear search technique
#include<stdio.h>
int main()
{
    int i,n,f=0,ser,j;
    printf("Enter the Range = ");
    scanf("%d",&n);
    int a[n];// array create
    //input (store the data within the array)
    for(i=0;i<n;i++)
    {
        printf("Enter the No. = ");
        scanf("%d",&a[i]);
    }
    //output
    printf("Array List = ");
    for(i=0;i<n;i++)
    {
      printf("%d ",a[i]);
    }
    printf("Enter the No. to be searched for = ");
    scanf("%d",&ser);
    for(i=0;i<n;i++)
    {
        if(a[i]==ser)
        {
          f=1;
          j=i;
          break;
        }
    } 
    if(f==1)
      printf("%d found at %d index %d position ",ser,j,j+1);
    else
      printf("NOT found");
  }
//WAP to take input into an integer array & print the array
#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter the Range = ");
    scanf("%d",&n);
    int a[n]; //array declaration
    //input
    for(i=0;i<n;i++)
    {
        printf("Enter the No. = ");
        scanf("%d",&a[i]);
    }
    //print
    printf("\nArray List = \n");
    for(i=0;i<n;i++)
      printf("a[%d] = %d Address = %u\n",i,a[i],&a[i]);
}

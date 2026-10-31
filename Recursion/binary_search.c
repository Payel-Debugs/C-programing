//Binary Search
#include <stdio.h>
#include <conio.h>
void main()
{
  int i, f, last, m, n, ser, a[10],temp,k=1,j;
  printf("Enter number of elements\n");
  scanf("%d", &n);//n=5
  printf("Enter %d integers\n", n);
  //input
  for (i = 0; i < n; i++)
  {
    printf("Enter the No.=");
    scanf("%d", &a[i]);//10,20,30,40,50
  }
  printf("\nAfter Sorting= ");
 for(i=0;i<n;i++)
 {
   for(j=0;j<n-1;j++)
   {
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
 printf("\n");
}
  printf("Enter value to find\n");
  scanf("%d", &ser);//ser=40
  f = 0;//f=0
  last = n - 1;//last=4
  m = (f+last)/2;//m=2
  for(;f <= last;m = (f + last)/2) //1<=4
  {
    if (a[m] < ser) //a[0]<20  10<60
      f = m + 1;//f=1
    else if (a[m] == ser) //10==60
    {
      printf("%d found at %d index %d location %d.\n", ser,m, m+1);
      break;
    }
    else 
      last = m - 1;//last=-1
  }
  if (f > last)
    printf("Not found! %d isn't present in the list.\n", ser);
  getch();
}
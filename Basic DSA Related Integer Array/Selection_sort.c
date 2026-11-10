//selection sort
#include<stdio.h>
#include<conio.h>
int n, i, j, pos, swap,k=1;
void main()
{
  int array[100];
  printf("Enter number of elements\n");
  scanf("%d", &n);//n=5
  printf("Enter %d integers\n", n);
  //input loop
  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);
    //selection
  for (i = 0; i < (n - 1); i++)
  {
    pos = i;
    for (j= i + 1; j < n; j++)
    {
      if (array[pos] > array[j])
        pos = j;
    }
    
      swap = array[i];
      array[i] = array[pos];
      array[pos] = swap;
    
  printf("After  Iteration = %d:\n",k);
  for (j = 0; j < n; j++)
    printf("%d ", array[j]);
  printf("\n");
  k++;
  }
  getch();
}
#include<stdio.h>
void main(int argc, char* argv[])
{
   int i,n=argc-1,s=0,j;
   int arr[n];
   for(i=2,j=0;i<=n;i++,j++)
   {
      arr[j]=atoi(argv[i]);
      printf("%d ",arr[j]);
      s=s+arr[j];
   }
   printf(" = %d",s);
}
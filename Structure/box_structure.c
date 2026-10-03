//Box
#include<stdio.h>
struct box
{
    int len,br,h,vol;
};
void main()
{
  int i,n,maxvol;
  printf("Enter the No. of Box = ");
  scanf("%d",&n);
  struct box b[n];
  //input
  for(i=0;i<n;i++)
  {
    printf("Enter the Length of Box = ");
    scanf("%d",&b[i].len);
    printf("Enter the Breadth of Box = ");
    scanf("%d",&b[i].br);
    printf("Enter the height of Box = ");
    scanf("%d",&b[i].h);
    b[i].vol=b[i].len*b[i].br*b[i].h;
  }
  maxvol=b[0].vol;
  //output
   printf("--------------------------------------------------------------------------------\n");
   printf("Len\tbread.\tHt.\tVol.\n");
   printf("--------------------------------------------------------------------------------\n");
  for(i=0;i<n;i++)
    {
       printf("%d\t%d\t%d\t%d\n",b[i].len,b[i].br,b[i].h,b[i].vol);
       if(b[i].vol>maxvol)
         maxvol=b[i].vol;
    }
    printf("\nMax. volume = %d",maxvol);
}
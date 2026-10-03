//consists of (X,Y) coordinate. Create a structure of n types and print second quadrates & fourth quadrates within the points.
#include<stdio.h>
#include<conio.h>
struct Point
{
   int x,y;       
};
struct Point p[5];
void main()
{
  int i,n,f=1;
  printf("Enter the Range = ");
  scanf("%d",&n);
  //input
  for(i=0;i<n;i++)
  {
     printf("Enter the X co-ordinate Value = ");
     scanf("%d",&p[i].x);                
     printf("Enter the Y co-ordinate Value = ");
     scanf("%d",&p[i].y);
  }
  //output
  printf("-----------------------------------------------\n");
  printf("X\t\tY\n");
  printf("-----------------------------------------------\n");
  for(i=0;i<n;i++)
  {
     printf("%d\t\t%d\n",p[i].x,p[i].y);
  }
  //checking
  for(i=0;i<n;i++)
  {
     if(p[i].x<0 && p[i].y>0)
     { 
      printf(" (%d,%d) is at Second Quadrant\n",p[i].x,p[i].y);
      f=0;
      }
     else if(p[i].x>0 && p[i].y<0)
     {
      printf(" (%d,%d) is at 4th Quadrant",p[i].x,p[i].y);
      f=0;
      }
  }  
  if(f)
   printf("It's not present at no Quadrant");
  getch();
}
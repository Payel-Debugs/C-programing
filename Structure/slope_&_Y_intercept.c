//Define a structure data type called struct line to hold the 2 components (m i.e. slope and c i.e. the y intercept) of a line. Define a structure data type called struct point to hold the 2 components (x and y) of a point. Input the components for 2 line type variables L1 and L2, and find the point of intersection of the lines. Store the point of intersection in a point type data and display the result.
#include<stdio.h>
#include<conio.h>
struct line
{
	int l1[2],l2[2],in[2];
};
void main()
{
    int	i,n,f=0;
   printf("Enter the range =");
   scanf("%d",&n);
   struct line l[n];
   for(i=0;i<n;i++)
   {
   	    printf("Enter the co-ordinate of 1st line of %d no. index of structure 'line'\n",i+1);
   	    scanf("%d%d",&l[i].l1[0],&l[i].l1[1]);
   	    printf("Enter the co-ordinate of 2nd line of %d no. index of structure 'line'\n",i+1);
   	    scanf("%d%d",&l[i].l2[0],&l[i].l2[1]);
   	    if(l[i].l2[0]!=l[i].l1[0]&&l[i].l2[1]!=l[i].l1[1])
   	    {
		l[i].in[0]= (l[i].l1[1]-l[i].l2[1])/(l[i].l2[0]-l[i].l1[0]);
		l[i].in[1]=	l[i].l1[1]-l[i].l1[0]*l[i].in[0];
		f=1;
	    }
	    else
	        f=0;
   }
   for(i=0;i<n;i++)
   {
   	    if(f==0)
   	    {
   	        printf("your %d no. two lines are parallel\n",i+1);	
		}
   	    else
   	    {
   	        printf("your %d no. two lines have intersected on %d,%d point\n",i+1,l[i].in[0],l[i].in[1]);	
		}   
   }
  getch();   
}
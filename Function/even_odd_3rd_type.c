//even odd by using 3rd type
#include<stdio.h>
int even_odd();
int x;
void main()
{
   int p;
   p=even_odd();
   (p==0)?printf("%d is Neutral No.",x):(p==1)?printf("%d is Even No. ",x):printf("%d is Odd No. ",x);
}
int even_odd()
{
    printf("Enter the No. = ");
    scanf("%d",&x);
    if(x==0)
      return 0;
    else if(x%2==0)
      return 1;
    else
      return 2;
}
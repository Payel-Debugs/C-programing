//student structure in descending order of their total marks.
#include<stdio.h>
struct student
{
   int roll_no,Chem,math,phy,cs,t;
   char nm[20],grd;
};
void main()
{
   int i,j,n,r,f=0;
   printf("Enter the No. of Student = ");
   scanf("%d",&n);
   struct student s[n];
   //input
   for(i=0;i<n;i++)
   {
     printf("Enter the Roll No. = ");
     scanf("%d",&s[i].roll_no); 
     printf("Enter the Name = ");
     scanf("%s",&s[i].nm); 
     printf("Enter the Chemistry marks = ");
     scanf("%d",&s[i].Chem);
     printf("Enter the Math Marks = ");
     scanf("%d",&s[i].math);
     printf("Enter the Physics marks = ");
     scanf("%d",&s[i].phy);
     printf("Enter the Computer Science marks = ");
     scanf("%d",&s[i].cs);
     s[i].t=s[i].Chem+s[i].math+s[i].phy+s[i].cs;
   }
    //sorting
    struct student temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i].t<s[j].t)
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    //output
    printf("Student details in descending order of total marks:\n");
    printf("------------------------------------------------------------\n");
    printf("Roll No.\tName\tChem\tMath\tPhysics\tCS\tTotal\n");
    printf("------------------------------------------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t%s\t%d\t\t%d\t%d\t%d\t\t%d\n",s[i].roll_no,s[i].nm,s[i].Chem,s[i].math,s[i].phy,s[i].cs,s[i].t);
    }

}
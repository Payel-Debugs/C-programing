//employee structure in descending order of their gross salary.
#include<stdio.h>
#include<stdlib.h>
struct employee
{
   int empid;
   char empname[20];
   float basic_salary,DA,TA,HRA,Grosssalary,Pf,Netsalary;
};
void main()
{
     int i,j,n,x,empid,depamnt,f=0,withamnt,k=0;
     printf("Enter the number of employees: ");
     scanf("%d",&n);
     struct employee e[n];
     //input
        for(i=0;i<n;i++)
        {
            printf("Enter the Employee ID: ");
            scanf("%d",&e[i].empid);                
            printf("Enter the Employee Name: ");
            scanf("%s",&e[i].empname);
            printf("Enter the Basic Salary: ");
            scanf("%f",&e[i].basic_salary);
            
            // Calculate DA, TA, HRA, Gross salary, Pf and net salary
            e[i].DA=0.1*e[i].basic_salary; // 10% of basic salary
            e[i].TA=0.05*e[i].basic_salary; // 5% of basic salary
            e[i].HRA=0.15*e[i].basic_salary; // 15% of basic salary
            e[i].Grosssalary=e[i].basic_salary+e[i].DA+e[i].TA+e[i].HRA;
            e[i].Pf=0.12*e[i].basic_salary; // 12% of basic salary
            e[i].Netsalary=e[i].Grosssalary-e[i].Pf;
        }
        //print
     printf("----------------------------------------------------------------------------\n");
     printf("EmpID\tName\tBS\tDA\tTA\tHRA\tGS\tPF\tNet Salary\n");
     printf("----------------------------------------------------------------------------\n");
     for(i=0;i<n;i++)
        {
            printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",e[i].empid,e[i].empname,e[i].basic_salary,e[i].DA,e[i].TA,e[i].HRA,e[i].Grosssalary,e[i].Pf,e[i].Netsalary);
        }
        //sorting
        struct employee temp;       
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(e[i].Grosssalary<e[j].Grosssalary)
                {
                    temp=e[i];
                    e[i]=e[j];
                    e[j]=temp;
                }
            }
        }
        printf("----------------------------------------------------------------------------\n");
        printf("Employee details in descending order of gross salary:\n");
        printf("----------------------------------------------------------------------------\n");
        printf("EmpID\tName\tBS\tDA\tTA\tHRA\tGS\tPF\tNet Salary\n");
        printf("----------------------------------------------------------------------------\n");
        for(i=0;i<n;i++)
        {
            printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",e[i].empid,e[i].empname,e[i].basic_salary,e[i].DA,e[i].TA,e[i].HRA,e[i].Grosssalary,e[i].Pf,e[i].Netsalary);
        }
    }
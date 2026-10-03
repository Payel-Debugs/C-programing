//Create a structure called bank which consist of acc number,name and balance of a customer. Create a structure of n number of customers, if user press 1, specific users amount will be deposited and if the user press 0, then the specific users amount to be withdrawn.If the deposited amount less than or equals to 1000 then user can't withdraw the amount.
#include<stdio.h>
#include<stdlib.h>
struct Bank
{
   int accno,balance;
   char nm[20];
};
void main()
{
     int i,n,x,acno,depamnt,f=0,withamnt,k=0;
     printf("Enter the Range = ");
     scanf("%d",&n);
     struct Bank b[n];
     //input
     for(i=0;i<n;i++)
     {
        printf("Enter the Account no.= ");
        scanf("%d",&b[i].accno);                
        printf("Enter the Customer Name = ");
        scanf("%s",&b[i].nm);
        printf("Enter the Balance = ");
        scanf("%d",&b[i].balance);
     }
     //print
     printf("----------------------------------\n");
     printf("AccNo.\tName\tBalance\n");
     printf("----------------------------------\n");
     for(i=0;i<n;i++)
     {
        printf("%d\t%s\t%d\n",b[i].accno,b[i].nm,b[i].balance);
     }
     while(1)//for(;;)
     {
        printf("\nPress 1 for Deposit \nPress 0 for Withdraw\n");
        printf("Enter the Choice = ");
        scanf("%d",&x);
        switch(x)
        {
          case 1:
             printf("Enter the Account No. = ");
             scanf("%d",&acno);//1002
             for(i=0;i<n;i++)
             {
                if(acno==b[i].accno)
                {
                  printf("Enter the Deposit Amount = ");
                  scanf("%d",&depamnt);
                  b[i].balance=b[i].balance+depamnt;                
                  f=1;
                  break;
                }
             }
             if(f==1)
               {
                printf("----------------------------------\n");
                printf("AccNo.\tName\tBalance\n");
                printf("----------------------------------\n");
                for(i=0;i<n;i++)
                 {
                 if(acno==b[i].accno)
                 {
                  printf("%d\t%s\t%d\n",b[i].accno,b[i].nm,b[i].balance);
                  break;
                 } 
                 }     
               }           
            else
                 {
                   printf("AccNo. does not Exist");
                   break;          
                 }
                 f=0;
                 break;
          case 0:
             printf("Enter the Account No. = ");
             scanf("%d",&acno);
             for(i=0;i<n;i++)
             {
                if(acno==b[i].accno)//1003==1003
                {
                  printf("Enter the Withdrawn Amount = ");
                  scanf("%d",&withamnt);
                  k=1;
                  if( b[i].balance-withamnt>=1000)
                  {
                    b[i].balance=b[i].balance-withamnt;                
                    f=1;
                    break;
                  }
                  else{
                          printf("Insufficient Balance!!!");
                          break;
                  }
                }
               
             }
             if(k==1) 
               {
                if(f==1)
                {
                printf("----------------------------------\n");
                printf("AccNo.\tName\tBalance\n");
                printf("----------------------------------\n");
                for(i=0;i<n;i++)
                 {
                 if(acno==b[i].accno)
                  printf("%d\t%s\t%d\n",b[i].accno,b[i].nm,b[i].balance);
                 }      
                 if(f==0)
                    printf("Insufficient balance!!! ");
                 }
               }           
               else
                 {
                   printf("AccNo. does not Exist ");
                 }
                 f=0,k=0;
                 break;
             default:
                     exit(0);
        }        
     }
}
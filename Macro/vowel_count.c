//wap to count no. of vowel in a string
#include<stdio.h>
#include<string.h>
#define g gets
#define vowel(p)  (p=='a')||(p=='A')||(p=='e')||(p=='E')||(p=='i')||(p=='I')||(p=='o')||(p=='O')||(p=='u')||(p=='U')?0:1
void main()
{
   char x[20];
   int len,i,c=0,p;
   printf("Enter the String =");
   g(x);
   len=strlen(x);//len=13
   for(i=0;i<len;i++) 
   {
     p=vowel(x[i]);//calling
     if(p==0)
       c++;
   }
   printf("Vowel = %d",c);
}
//WAP to count the vowel & consonant within a string & store vowel & consonant in 2 separate array
#include<stdio.h>
void main()
{
    int i,v=0,c=0,s=0;
    char x[20],vow[10],con[10];
    printf("Enter the String = ");
    gets(x);
    //fgets(x,sizeof(x),stdin);
    printf("String = %s\n",x);
    for(i=0;x[i]!='\0';i++)
    {
        switch(x[i])
        {
            case 'a':case 'A':
            case 'e':case 'E':
            case 'i':case 'I':
            case 'o':case 'O':
            case 'u':case 'U':
                vow[v]=x[i];
                v++;
                break;
            case ' ':
                s++;
                break;
            default:
               con[c]=x[i];
               c++; 
        }
    }
    vow[v]='\0';
    con[c]='\0';
    printf("Vowel = %d",v);
    printf("\nConsonant = %d",c);
    printf("\nSpace = %d",s);
    printf("\nVowel List = %s",vow);
    printf("\nConsonant List = %s",con);
    
}
/*
sum of series=2/3,4/5,8/7,16/9,.....n & sum
*/
#include<stdio.h>
#include<math.h>
void main(){
    int i,n,n1=2,d1=3;
    float s=0;
    printf("Enter the Range = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d/%d\n",n1,d1);
        s=s+(float)n1/(float)d1;
        n1=n1*2;
        d1=d1+2;
    }
    printf("\nSum = %.3f",s);
}
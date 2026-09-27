/*
sum of series=1,1/3!,1/5!,1/7!,.....n & sum
*/
#include<stdio.h>
void main(){
    int i,n,f=1,j,t=1;
    float s=0;
    printf("Enter the Range = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        f=1;
        for(j=1;j<=t;j++){
            f=f*j;
        }
        printf("1/%d!\n",t);
        s=s+1/(float)f;
        t=t+2;
    }
    printf("\nSum = %.3f",s);
}
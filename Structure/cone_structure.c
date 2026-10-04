//create a structure called cone with radius and height of the cone, calculate the volume of cones of n times and find out the max volumes.
#include <stdio.h>
#include <math.h>

struct cone 
{
    float radius,height,volume;
};

void main() 
{
    int n,i;
    float max_volume=0;
//input
    printf("Enter the number of cones: ");
    scanf("%d",&n);
    struct cone c[n];
    for (i=0;i<n;i++)
     {
        printf("Enter the radius of cone: ");
        scanf("%f",&c[i].radius);
        printf("Enter the height of cone: ");
        scanf("%f",&c[i].height);

        c[i].volume=1.0/3.0*3.14159*c[i].radius*c[i].radius*c[i].height;
    }
//output
    printf("--------------------------------------------------\n");
    printf("Radius\tHeight\tVolume\n");
    printf("--------------------------------------------------\n");
    for (i=0;i<n;i++)
     {
        printf("%.2f\t%.2f\t%.2f\n",c[i].radius,c[i].height,c[i].volume);
        if(c[i].volume>max_volume)
            max_volume=c[i].volume;
     }
     printf("\nMax. volume = %.2f",max_volume);

}
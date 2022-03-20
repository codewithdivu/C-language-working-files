// Write a C program to find distance travelled by the equation d = ut + at^2

#include<stdio.h>

int main(int argc, char const *argv[])
{
    double u,t,a,d;
    printf("Enter the u value \n  and t value \n and a value");
    scanf("%lf %lf %lf",&u,&t,&a);
    d=(u*t + a*t*t);
    printf("Travelled distance is : %.2lf",d);
    return 0;
}

#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    double i, cuberoot;
    printf("enter the value \n");
    scanf("%lf", &i);
    cuberoot = cbrt(i);
    printf("Cube root is : %lf", cuberoot);
    return 0;
}

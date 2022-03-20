#include <stdio.h>

#define pi 3.14

int main(int argc, char const *argv[])
{
    float radius;
    printf("enter radius : \n");
    scanf("%f", &radius);
    printf("area of circle is : %f \n", (pi * radius * radius));
    return 0;
}

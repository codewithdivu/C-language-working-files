#include <stdio.h>

int main(int argc, char const *argv[])
{
    float length, breadth;
    printf("enter length and breadth : \n");
    scanf("%f %f", &length, &breadth);
    printf("area of rectangle is : %f \n", length * breadth);
    return 0;
}

#include <stdio.h>

#define PI 3.14
int main(int argc, char const *argv[])
{
    float radius = 0;
    printf("Enter the radius of circle:\n");
    scanf("%f", &radius);
    if (radius < 0)
        printf("Please enter valid choice\n");
    else
    {
        printf("Area of circle is %f", PI * radius * radius);     
    }

    return 0;
}

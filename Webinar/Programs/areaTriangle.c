#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int height, base;
    printf("please enter the height and base of triangel\n");
    scanf("%d %d", &height, &base);

    float area = (height * base) / 2;

    printf("area of triangle is %f ", area);

    return 0;
}

// 48
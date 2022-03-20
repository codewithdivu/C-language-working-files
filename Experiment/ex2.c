// 2. Write a program to find area of triangle

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int area, height, base;
    printf("enter height of triangle and enter base \n");
    scanf("%d \n %d", &height, &base);
    area = (height * base) / 2;
    printf("Area of triangle is : %d", area);
    return 0;
}

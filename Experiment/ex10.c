// 10. Write a program to read three numbers from keyboard and find out maximum out of these three

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("enter three numbers \n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("number %d is Maximum number out of these \n", a);
    }
    else if (b > a && b > c)
    {
        printf("number %d is Maximum number out of these \n", b);
    }
    else if (c > a && c > b)
    {
        printf("number %d is Maximum number out of these \n", c);
    }
    return 0;
}

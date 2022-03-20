// 26. Write a C program to find 1+1/2+1/3+1/4+....+1/n

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    double j, sum = 0.0;
    printf("enter a number \n");
    scanf("%d", &n);

    for (double i = 1; i <= n; i++)
    {
        j = 1 / i;
        sum = sum + j;
    }
    printf(" sum of series is : %lf", sum);

    return 0;
}

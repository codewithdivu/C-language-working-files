// 25. Write a program to evaluate the series 1^2+2^2+3^2+……+n^2

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int j, sum = 0, n;
    printf("enter a number \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        j = i * i;
        sum = sum + j;
    }
    printf("sum of series id : %d", sum);

    return 0;
}

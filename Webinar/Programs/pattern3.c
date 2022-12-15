// 1+1/2+1/3+1/4+....+1/n

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + (1 / i);
    }
    printf("ans is %lf ", sum);
    return 0;
}

// 54
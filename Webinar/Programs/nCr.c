
// nCr = n! / (r! * (n-r)!

#include <stdio.h>
#include <stdlib.h>

int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    return num * factorial(num - 1);
}

int main(int argc, char const *argv[])
{
    int n, r;
    scanf("%d %d", &n, &r);

    double ans;

    ans = factorial(n) / (factorial(r) * factorial(n - r));

    printf("ans is %lf ", ans);

    return 0;
}

// 59
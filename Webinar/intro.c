#include <stdio.h>
#include <stdlib.h>

int fibo(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    int ans = fibo(n);

    printf("nth term is %d", ans);
    return 0;
}
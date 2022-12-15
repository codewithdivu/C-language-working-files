#include <stdio.h>
#include <stdlib.h>

int factorial(int num)
{
    int ans = 1;
    for (int i = 1; i <= num; i++)
    {
        ans = ans * i;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    int ans = factorial(n);

    printf("factorial is %d ", ans);

    return 0;
}
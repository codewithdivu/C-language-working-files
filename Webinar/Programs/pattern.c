#include <stdio.h>
#include <stdlib.h>

//  1 2 2 3 3 3 4 4 4 4 5 5 5 5 5

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
    }
    return 0;
}

// 7
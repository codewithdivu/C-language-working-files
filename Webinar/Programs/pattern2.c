// 1+1/2!+1/3!+1/4!+.....+1/n!

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    float sum = 0.0;

    for (int i = 1; i <= n; i++)
    {

        int fact = 1;
        for (int j = i; j >0; j--)
        {
            fact = fact * j;
        }

        sum = sum + (1.0 / fact);
    }

    printf("ans is %f ", &sum);

    return 0;
}
// 52
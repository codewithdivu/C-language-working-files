#include <stdio.h>
#include <stdlib.h>

int isPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    int num;
    scanf("%d", &num);

    int ans = isPrime(num);

    if (ans == 1)
    {
        printf("Number is prime\n");
    }
    else
    {
        printf("Not Prime\n");
    }

    return 0;
}

// 16
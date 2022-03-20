#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    int isPrime = 0;
    printf("enter the number to check prime or non prime \n");
    scanf("%d", &a);
    if (a < 0 || a == 0 || a == 1)
    {
        printf("enter valid number \n");
    }

    else
    {
        for (int i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                isPrime = 1;
                break;
            }
        }

        if (isPrime!=1)
        {
            printf("%d is prime number", a);
        }
        else
        {

            printf("%d is non-prime number",a);
        }
    }

    return 0;
}

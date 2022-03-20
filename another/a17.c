#include <stdio.h>
#include <conio.h>

int fib(int n)
{
    if (n == 1 || n == 2)
    {
        return (n - 1);
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int number;
    printf("enter the number that you need fibonacci series \n");
    scanf("%d", &number);
    printf("%d", fib(number));
    return 0;
}

#include <stdio.h>

int fact(int num)
{
    if (num > 1)
        return (num * fact(num - 1));
    else
    {
        return 1;
    }
}
int main(int argc, char const *argv[])
{
    int num;
    printf("enter your number:\n");
    scanf("%d", &num);
    printf("factorial of %d is %d", num, fact(num));
    return 0;
}
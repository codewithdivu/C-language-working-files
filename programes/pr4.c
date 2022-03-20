#include <stdio.h>

int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }

    return number * factorial(number - 1);
}

int main(int argc, char const *argv[])
{
    int num;
    printf("enter the number to find factorial \n");
    scanf("%d", &num);
    printf("number of %d factorial is %d",num,factorial(num));
    return 0;
}

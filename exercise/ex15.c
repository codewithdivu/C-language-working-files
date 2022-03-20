#include <stdio.h>

int factorial(int number)
{

    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }

   
}

int main(int argc, char const *argv[])
{

    int number;
    printf("enter num which want you factorial");
    scanf("%d", &number);

    printf("your fact is %d", factorial(number));
    return 0;
}

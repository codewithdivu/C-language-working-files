#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Please enter the digit..\n");
    scanf("%d", &num);

    int lastDigit = num % 10;

    if (lastDigit % 2 == 0)
    {
        printf("last digit is EVEN\n");
    }
    else
    {
        printf("last digit is ODD\n");
    }

    return 0;
}

// 33
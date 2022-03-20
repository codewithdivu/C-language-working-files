// 16. Write a C program to input an integer number and check the last digit of number is even or odd

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num, a, b, c;
    printf("Enter the number \n");
    scanf("%d", &num);

    if ((num % 10) % 2 == 0)
    {
        printf("Last digit of number is Even \n");
    }
    else
    {
        printf("Last digit of number is Odd \n");
    }

    return 0;
}

// 17. Write a C program to find factorial of given number

#include <stdio.h>
#include <stdlib.h>

int fact(int num)
{
    if (num == 0 || num == 1)
    {
        return num;
    }
    else
        return (num * fact(num - 1));
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number which you want factorial \n");
    scanf("%d", &n);
    printf("factorial of %d is : %d", n, fact(n));
    return 0;
}

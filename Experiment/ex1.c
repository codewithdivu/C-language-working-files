// 1. Write a program to that perform as a calculator

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;

    printf("Enter two numbers \n");
    scanf("%d %d", &a, &b);
    
    printf("Sum is : %d \n", a + b);
    printf("Substraction is : %d \n", a - b);
    printf("Multiplication is : %d \n", a * b);
    printf("Division is : %d \n", a / b);

    return 0;
}

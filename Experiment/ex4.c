// 4. Write a C program to interchange two numbers

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, temp;
    printf("Enter the number which want to interchange \n");
    scanf("%d %d", &a, &b);
    printf("Before change the numbers is : %d %d \n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After change the number is : %d %d \n", a, b);
    return 0;
}

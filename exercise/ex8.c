#include <stdio.h>
int sum(int a, int b)
{
    return (a + b);
}

int main(int argc, char const *argv[])
{
    int a, b;
    printf("enter your numbers");
    scanf("%d %d", &a, &b);

    printf("your sum is : %d \n", sum(a, b));
    return 0;
}

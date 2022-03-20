#include <stdio.h>

int sum(int num)
{
    if (num != 0)
    {
        return num + sum(num - 1);
    }
    else
    {
        return num;
    }
}

int main(int argc, char const *argv[])
{
    int number, result;
    printf("enter the positive number : \n");
    scanf("%d",&number);
    result = sum(number);
        printf("sum=%d", result);
    return 0;
}

#include <stdio.h>

int multi(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return number*multi(number - 1);
    }
}

int main(int argc, char const *argv[])
{
    int num;
    printf("enter the number \n");
    scanf("%d", &num);
    printf("multi=%d", multi(num));
    return 0;
}

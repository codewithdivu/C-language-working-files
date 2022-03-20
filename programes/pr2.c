#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, result = 0, originalnum, remainder;
    printf("Enter the 3 digit number to chech armstrong \n");
    scanf("%d", &num);
    originalnum = num;
    while (originalnum != 0)
    {
        remainder = originalnum % 10;
        result += remainder * remainder * remainder;
        originalnum / 10;
        printf("%d",result);
    }
    if (result == num)
    {
        printf("%d is armstrong number \n", num);
    }
    else
    {
        printf("%d is not armstrong number", num);
    }

    return 0;
}

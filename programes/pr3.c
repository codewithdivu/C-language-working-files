#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("enter the number to check odd and even \n");
    scanf("%d", &num);
    if (num != 0)
    {
        if (num % 2 == 0)
        {
            printf("%d is even number \n",num);
        }
        else
        {
            printf("%d is odd number",num);
        }
    }

    return 0;
}

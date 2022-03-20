#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    printf("enter your number");
    scanf("%d", &i);

    if (i == 0)
    {
        printf("number is zero");
    }
    else if (i % 2 == 0)
    {
        printf("number is even");
    }
    else
    {
        printf("number is odd");
    }

    return 0;
}

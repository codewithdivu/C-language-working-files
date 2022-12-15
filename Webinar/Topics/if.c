#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num;
    scanf("%d", &num);

    if (num > 0)
    {
        printf("num is positvie\n");
    }
    else if (num < 0)
    {
        printf("num is negative");
    }
    else
    {
        printf("num is zero\n");
    }
    return 0;
}
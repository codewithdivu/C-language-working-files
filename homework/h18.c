#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("enter values \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        printf("a is bigger than b");
    }
    else if (b > c)
    {
        printf("b is bigger than c");
    }
    else
    {
        printf("c is bigger");
    }

    return 0;
}

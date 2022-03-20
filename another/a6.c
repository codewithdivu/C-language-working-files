#include <stdio.h>

int main(int argc, char const *argv[])
{
    int fruits, apples, bananas, pie;
    printf("enter the fruits numbers : \n");
    scanf("%d", &fruits);
    if ((fruits % 2) == 0)
    {
        apples = fruits / 2;
        bananas = fruits / 2;
        pie = apples / 3;
        printf("number of pies is %d \n", pie);
    }
    else
    {
        printf("enter the even number of fruits \n");
    }

    return 0;
}

#include <stdio.h>

int swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("after swapping your value is %d %d  \n", *x, *y);
}

int main(int argc, char const *argv[])
{
    int a, b;
    printf("enter the value \n");
    scanf("%d %d", &a, &b);
    printf("your value before swapping %d %d \n", a, b);
    swap(&a, &b);
    printf("your values after swapping %d %d \n", a, b);
    return 0;
}

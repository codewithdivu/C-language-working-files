#include <stdio.h>
int swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("values after swapping %d %d\n", *x, *y);
}
int main(int argc, char const *argv[])
{
    int a = 8, b = 7;
    printf("values before swapping %d %d\n", a, b);
    swap(&a, &b);
    printf("values after swapping in main %d %d\n", a, b);

    return 0;
}

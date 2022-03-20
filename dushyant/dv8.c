#include <stdio.h>

int incr(int x, int y)
{
    printf("incremeteed : %d %d \n", x++, y++);
    return 0;
}
int incra(int *x, int *y)
{
    printf("incremeteed : %d %d \n", x++, y++);
    return 0;
}

int main(int argc, char const *argv[])
{
    int a = 3, b = 4;
    incr(a, b);
    printf("%d %d\n", a, b);
    incra(&a, &b);
    printf("%d %d\n", a, b);

    return 0;
}

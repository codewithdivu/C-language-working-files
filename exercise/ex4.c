#include <stdio.h>
int divu(int, int, int, int);
int main(int argc, char const *argv[])
{
    int a, b, c, d;
    int i;
    printf("please enter numbers :");
    scanf("%d %d %d %d  ", &a, &b, &c, &d);
    i = divu(a, b, c, d);
    printf("%d", i);

    return 0;
}
int divu(int a, int b, int c, int d)
{
    return ((a + b + c + d) / 4);
}
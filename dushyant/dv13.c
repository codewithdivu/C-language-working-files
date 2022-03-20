#include <stdio.h>

int incr()
{
    static int count=0;
    count++;
    printf("%d", count);
    return 0;
}
int incr1()
{
    int count=0;
    count++;
    printf("%d", count);
    return 0;
}
int main(int argc, char const *argv[])
{
    int n, i;

    printf("Enter your no.\n");
    scanf("%d", &i);
    for (n = 0; n <= i; n++)
    {

        incr();
        incr1();
    }
    return 0;
}

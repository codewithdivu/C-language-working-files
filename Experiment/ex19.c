// 19. Write a program to generate first n number of Fibonacci series

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n, t1 = 0, t2 = 1, nextterm;
    printf("Enter the number \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d, ", t1);
        nextterm = t1 + t2;
        t1 = t2;
        t2 = nextterm;
    }
    return 0;
}

#include <stdio.h>
#include <time.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    // unsigned int n, n1 = 0, n2 = 1, next;
    // printf("enter the number \n");
    // scanf("%d", &n);
    // printf("Fibonacci series is.. \n");

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d \n", n1);
    //     next = n1 + n2;
    //     n1 = n2;
    //     n2 = next;
    // }
    srand(time(NULL));
    long r = rand();
    r = r * 1000;
    printf("your account number is : %ld \n", r);

    return 0;
}

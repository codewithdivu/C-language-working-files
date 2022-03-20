// Write a C program to find the sum and average of different numbers which are accepted by user as many as user wants

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int ary[1000], n, sum = 0;
    printf("how many number you will enter \n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + ary[i];
    }
    printf("%d numbers sum is : %d\n", n, sum);
    printf("%d numbers average is : %d\n", n, sum / n);

    return 0;
}
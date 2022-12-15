
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num;
    int sum = 0;

    do
    {
        printf("enter the number");
        scanf("%d", &num);
        sum += num;
    } while (num != 0);

    printf("sum is %d ", sum);
    return 0;
}
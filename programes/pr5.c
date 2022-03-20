#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, sum = 0, value;
    printf("enter the number that you need\n");
    scanf("%d", &num);

    printf("enter %d integers",num);

    for (int i = 1; i <= num; i++)
    {
        scanf("%d", &value);
        sum = sum + value;
    }
    printf("sum is %d",sum);
    return 0;
}

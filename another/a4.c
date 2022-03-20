#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num[10], sum = 0;
    printf("enter the arry : \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int j = 0; j < 10; j++)
    {
        if ((num[j] % 2) == 0)
        {
            sum = sum + num[j];
        }
    }
    printf("your sum is : %d \n ", sum);

    return 0;
}

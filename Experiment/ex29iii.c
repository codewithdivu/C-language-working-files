#include <stdio.h>

int main(int argc, char const *argv[])
{
    int row;
    scanf("%d", &row);

    for (int i = 1; i <= row; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
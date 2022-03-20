#include <stdio.h>

int main(int argc, char const *argv[])
{
    int row;
    scanf("%d", &row);

    for (int i = row; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int row;
    scanf("%d", &row);

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row - i + 1; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
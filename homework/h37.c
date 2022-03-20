#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, line, j;
    printf("enter number of line");
    scanf("%d", &line);

    for (i = 1; i <= line; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, line, j;
    printf("enter number of line");
    scanf("%d", &line);

    for (i = 1; i <= line; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%d \t", j);
        }
        printf("\n");
    }

    return 0;
}

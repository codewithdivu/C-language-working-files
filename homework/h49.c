#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, line, j;
    printf("Enter no of line:\n");
    scanf("%d", &line);
    for (i = 1; i <= line; i++)
    {
        for (j = 1; j <= line - i; j++)
        {

            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

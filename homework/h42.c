#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, line, j;
    printf("Enter no of line:\n");
    scanf("%d", &line);
    for (i = line; i >=1; i--)
    {
        for (j =1; j <= i; j++)
        {
            printf("%3d ", j);
        }
        printf("\n");
    }

    return 0;
}

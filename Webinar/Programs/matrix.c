#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("MATRIX IS \n");

    for (int a = 0; a < 3; a++)
    {
        for (int b = 0; b < 3; b++)
        {
            printf("%d ", arr[a][b]);
        }
        printf("\n");
    }

    return 0;
}

// 58
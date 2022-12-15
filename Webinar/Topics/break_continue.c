#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n = 50;


    for (int i = 0; i < n; i++)
    {
        if (i == 15)
        {
            break;
        }
        printf("%d ", i);
    }


    printf("\n\n");


    for (int j = 0; j < n; j++)
    {
        if (j % 2 == 0)
        {
            continue;
        }
        printf("%d ", j);
    }

    return 0;
}
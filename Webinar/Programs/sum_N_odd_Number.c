#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n = 50;

    for (int i = 0; i < 50; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}

// 13
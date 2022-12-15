
//      CALLOC
/*
“calloc” or “contiguous allocation” method in C is used to dynamically allocate the specified number of blocks of memory of the specified type. it is very much similar to malloc() but has two different points and these are:
It initializes each block with a default value ‘0’.
It has two parameters or arguments as compare to malloc().
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *ptr;
    int n;

    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL)
    {
        printf("memory is not allocated\n");
    }
    else
    {
        printf("memory is successfullly allocated\n");

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ptr[i]);
        }

        for (int j = 0; j < n; j++)
        {
            printf("%d ", ptr[j]);
        }
    }

    return 0;
}


// ptr = realloc(ptr, n * sizeof(int));
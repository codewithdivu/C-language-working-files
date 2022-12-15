

// MALLOC

/*
The “malloc” or “memory allocation” method in C is used to dynamically allocate a single large block of memory with the specified size.It returns a pointer of type void which can be cast into a pointer of any form.It doesn’t Initialize memory at execution time so that it has initialized each block with the default garbage value initially.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *ptr;
    int n;

    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

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
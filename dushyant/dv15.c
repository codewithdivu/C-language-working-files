#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *ptr, n;
    printf("enter the size of arry \n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    printf("enter the eliment \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%3d", ptr[i]);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *ptr, n, sum = 0;
    printf("enter the size of arry \n");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (ptr[i] % 2 == 0)
        {
            sum = sum + ptr[i];
        }
    }
    printf("even numbers sum is %d \n", sum);

    return 0;
}

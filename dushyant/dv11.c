#include <stdio.h>

int take(int x[], int t)
{
    int i;
    for (i = 0; i < t; i++)
    {
        printf("%d \n", x[i]);
    }
}
int main(int argc, char const *argv[])
{
    int even[15], i, n;
    printf("enter size of an array:\n");
    scanf("%d", &n);
    if (n >= 15 || n < 0)
        printf("enter valid size\n");
    else
    {

        printf("enter the numbers:\n");

        for (i = 0; i < n; i++)
        {
            scanf("%d", &even[i]);
        }
        take(even, n);
    }
    return 0;
}

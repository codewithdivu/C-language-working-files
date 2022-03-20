#include <stdio.h>
#define MAX_SIZE 1000

int main(int argc, char const *argv[])
{
    int n, arr[MAX_SIZE], sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            sum = sum + arr[i];
        }
    }
    printf("%d", sum);
    return 0;
}
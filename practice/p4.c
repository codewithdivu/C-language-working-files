#include <stdio.h>
int main(int argc, char const *argv[])
{
    int divyesh[10], i, n;
    printf("how many nos u wnat:\n");
    scanf("%d", &n);
    printf("enter your nos:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &divyesh[i]);
    }
    for (i = n-1; i >= 0; i--)
    {
        printf("%d", divyesh[i]);
    }
    printf("nikdi gya");
    return 0;
}

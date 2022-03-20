#include <stdio.h>
int main()
{
    int i, n, v1 = 0, v2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
   
    for (i = 1; i <= n; ++i)
    {
        printf("%2d,", v1);
        nextTerm = v1 + v2;
        v1 = v2;
        v2 = nextTerm;
    }

    return 0;
}
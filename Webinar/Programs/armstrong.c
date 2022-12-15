#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    int num = n;
    int ans = 0;
    while (num != 0)
    {
        int digit = num % 10;
        ans = ans + pow(digit, 3);
        num = num / 10;
    }

    if (ans == n)
    {
        printf("number is armstrong\n");
    }
    else
    {
        printf("NOT\n");
    }

    return 0;
}

// 57

// 1, 2, 3, 4, 5, 6, 7, 8, 9, 153, 370, 371, 407, 1634, 8208, 9474
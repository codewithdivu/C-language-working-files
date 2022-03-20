#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    int sum = 0;
    int originalN = n;

    while (n != 0)
    {
        int lastdigit = n % 10;
        sum = sum + (lastdigit * lastdigit * lastdigit);
        n = n / 10;
    }

    if (originalN == sum)
    {
        printf("Number is armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }

    return 0;
}

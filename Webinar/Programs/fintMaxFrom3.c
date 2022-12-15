#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int first, second, third;
    scanf("%d %d %d", &first, &second, &third);

    if (first > second && first > third)
    {
        printf("maximum no is %d ", first);
    }
    else if (second > first && second > third)
    {
        printf("maximum no is %d ", second);
    }
    else
    {
        printf("maximum no is %d ", third);
    }

    return 0;
}
// 44
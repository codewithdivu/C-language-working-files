#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        int num;
        scanf("%d", &num);
        arr[i] = num;
    }

    int maxx = INT_MIN;

    for (int j = 0; j < 10; j++)
    {
        if (arr[j] > maxx)
        {
            maxx = arr[j];
        }
    }

    printf("Maximum no is from this array is %d ", maxx);

    return 0;
}

// 45
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

    int sum = 0;
    int minn = INT_MAX;

    for (int j = 0; j < 10; j++)
    {
        sum = sum + arr[j];
        if (arr[j] < minn)
        {
            minn = arr[j];
        }
    }
    float avg  = sum/10;

    printf("sum of an array is %d\n", sum);
    printf("sum of an average is %f\n", avg);
    printf("sum of an minimum is %d\n", minn);

    return 0;
}

// 19
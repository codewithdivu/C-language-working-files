#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, ary[20];
    printf("how many element will you enter \n");
    scanf("%d", &n);
    printf("enter the array \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", ary[i]);
    }

    return 0;
}

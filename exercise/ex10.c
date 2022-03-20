#include <stdio.h>
int size(int ary[50])
{
    int i = 50;

    printf("%d", size(ary[i - 1]));
}
int main(int argc, char const *argv[])
{
    int i, sz, ary[50];
    printf("enter size of value \n");
    scanf("%d", &sz);
    if (sz >= 50)
    {
        printf("enter valid size");
    }
    else
    {
        printf("enter the eliment of ary \n");
        for (i = 0; i < ary[sz]; i++)
        {
            scanf("%d", &ary[sz]);
        }
    }

    return 0;
}

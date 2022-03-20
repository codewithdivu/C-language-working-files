#include <stdio.h>
int main(int argc, char const *argv[])
{
    int dk[50], i;
    printf("your nu is :\n");
    for (i = 1; i < 50; i++)
    {
        if (i % 3 == 0)
            printf("%d\n", i);
    }
    return 0;
}

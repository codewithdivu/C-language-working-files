#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    printf("enter one number: \n");
    scanf("%d", &i);

    if (i == 0)
    {
        printf("number is zero");
    }
    else
    {
        printf("number is non zero");
    }
    return 0;
}

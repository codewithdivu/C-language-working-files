#include <stdio.h>

int main(int argc, char const *argv[])
{
    int v1, v2;
    printf("enter any 2 numbers \n");
    scanf("%d %d", &v1, &v2);

    printf("your sum is %d \n", v1 + v2);
    printf("your sub is %d \n", v1 - v2);
    printf("your multi is %d \n", v1 * v2);
    printf("your divi is %d \n", v1 / v2);

    return 0;
}

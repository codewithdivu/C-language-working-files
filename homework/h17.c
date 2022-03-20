#include <stdio.h>

int main(int argc, char const *argv[])
{
    int v1, v2;
    printf("enter two numbers \n");
    scanf("%d %d", &v1, &v2);

    printf("%d is minimum", (v1 < v2) ? v1 : v2);

    return 0;
}

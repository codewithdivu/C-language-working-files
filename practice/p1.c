#include <stdio.h>
int divu(int);

int main(int argc, char const *argv[])

{
    int v1, flag = 0;
    printf("enter your number\n");
    scanf("%d", &v1);
    flag = divu(v1);
    if (flag == 0)
    {
        printf("number is odd\n");
    }
    else
    {
        printf("number is even\n");
    }

    return 0;
}
int divu(int v1)
{
    if (v1 % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
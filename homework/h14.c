#include <stdio.h>

int main(int argc, char const *argv[])
{
    int mark;
    printf("enter your mark");
    scanf("%d", &mark);
    if (mark < 33)
    {
        printf("you are failed");
    }
    else
    {
        printf("congrats......you are passed");
    }

    return 0;
}

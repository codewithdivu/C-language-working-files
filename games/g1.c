#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int generate(int x)
{
    int t;
    srand(time(NULL));
    t = rand() % 2;
    if (t == 0)
    {
        printf("Head\n");
    }
    else
    {
        printf("tail \n");
    }

    if (x == 0)
    {
        printf("head \n");
    }
    else
    {
        printf("tail \n");
    }

    if (t == x)
    {
        printf("you won\n");
    }
    else
    {
        printf("bad luck\n");
    }

    return 0;
}
int main(int argc, char const *argv[])
{
    char temp, t;
    printf("WELCOME TO THE TOSSING GAME \n");
    printf("0: Head \n 1: Tail \n");
    printf("Enter your guessing choice:\n");
    scanf("%d", &temp);
    generate(temp);
    return 0;
}

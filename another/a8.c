#include <stdio.h>

int main(int argc, char const *argv[])
{
    int yard;
    printf("enter the yard : \n");
    scanf("%d", &yard);
    if (yard >= 0)
    {
        if (yard > 10)
        {
            printf("HIGH FIVE..");
        }
        else if (yard <= 1)
        {
            printf("shhh..\n");
        }
        else if (yard <= 10 && yard > 1)
        {
            for (int i = 1; i <= yard; i++)
            {
                printf("Ra! \n");
            }
        }
    }
    else
    {
        printf("enter valid yard \n");
    }

    return 0;
}

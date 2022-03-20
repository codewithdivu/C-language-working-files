#include <stdio.h>
int main(int argc, char const *argv[])
{
    int yr = 0;
    char ch;
    do
    {

        printf("hello friends..!!\n");
        printf("Enter the year:");
        scanf("%d", &yr);
        if (yr <= 0 || yr >= 2021)
            printf("Enter valid year..!!\n");
        else
        {
            if (yr % 4 == 0)
                printf("This is leap year\n ");
            else
            {
                printf("This is not leap year\n ");
            }
        f:
            printf("are u want to continue y or n:\n");
            scanf("%s", ch);
            if (ch != 'y' || ch != 'n')
            {
                printf("enter valid choice:\n");
            }
            else
                goto f;
        }
    } while (ch != 'n');

    return 0;
}

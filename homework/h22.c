#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int v1, v2;
    int ch;
    do
    {
        printf("\n welcome to the calci \n");
        printf("please enter your numbers :\n");
        scanf("%d %d", &v1, &v2);
        printf("1.addition\n 2.sub\n 3.multi\n 4.divi\n 5.exit\n ");
        printf("enter your choice\n");
        scanf("%d", &ch);

        if (ch == 1)
        {
            printf("your sum is : %d", v1 + v2);
        }
        else if (ch == 2)
        {
            printf("your sub is : %d", v1 - v2);
        }
        else if (ch == 3)
        {
            printf("your multi is : %d", v1 * v2);
        }
        else if (ch == 4)
        {
            printf("your division is : %d", v1 / v2);
        }
        else if (ch == 5)
            exit(1);
    } while (ch != 5);
    return 0;
}

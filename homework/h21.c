#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int ch;
    do
    {
        printf("\n 1.sunday 2.monday 3.tuesday 4.wednesday 5.thursday 6.friday 7.saturday 8.exit \n ");
        printf("enter your choice \n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:

            printf("SUNDAY");
            break;

        case 2:

            printf("MONDAY");
            break;

        case 3:

            printf("TUESDAY");
            break;

        case 4:

            printf("WEDNESDAY");
            break;

        case 5:

            printf("THURSDAY");
            break;

        case 6:

            printf("FRIDAY");
            break;

        case 7:

            printf("SATURDAY");
            break;

        case 8:
            exit(1);
            break;

        default:
            printf("enter valid choice");
            break;
        }
    } while (ch != 8);

    return 0;
}

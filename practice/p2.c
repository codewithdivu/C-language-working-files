#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int ch;
    double v1;
    do
    {

        printf("1.meter to km \n 2.meter to cm\n 3.exit \n");
        printf("enter your number\n");
        scanf("%lf", &v1);
        printf("enter your ch\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("your value in km %lf\n", v1 / 1000);
            break;
        case 2:
            printf("your value in cm %lf\n", v1 * 100);
            break;
        case 3:
            exit(1);
            break;
        default:
            printf("enter valid choice");
        }
    } while (ch != 3);
    return 0;
}

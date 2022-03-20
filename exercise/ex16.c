#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float cel, far, celsius, fahrenheit;
    int ch;

    do
    {
        printf("1.celsius to fahrenheit \n");
        printf("2.fahrenheit to celsius \n");
        printf("3.exit \n");
        printf("enter choice \n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
        {
            printf("enter value celsius to fahrenheit \n");
            scanf("%f", &cel);
            celsius = ((9 * cel) / 5) + 32;
            printf("your temperature is %f \n", celsius);
            break;
        }
        case 2:
        {
            printf("enter value fahrenheit to celsius \n");
            scanf("%f", &far);
            fahrenheit = 5 * (far - 32) / 9;
            printf("your temperature is %f \n", fahrenheit);
            break;
        }
        case 3:
            exit(1);
            break;

        default:
            printf("enter valid choice\n");
            break;
        }
    } while (ch != 3);
    return 0;
}

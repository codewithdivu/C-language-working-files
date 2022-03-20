// 14. Write a C program to read no 1 to 7 and print relatively day sunday to saturday

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int number;
    printf("Enter the number \n");
    scanf("%d", &number);

    switch (number)
    {
    case 1:
        printf("Sunday \n");
        break;
    case 2:
        printf("Monday \n");
        break;
    case 3:
        printf("Tuesday \n");
        break;
    case 4:
        printf("Wednesday \n");
        break;
    case 5:
        printf("Thursday \n");
        break;
    case 6:
        printf("Friday \n");
        break;
    case 7:
        printf("Saturday \n");
        break;

    default:
        printf("Enter valid number \n");
        break;
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int choice;
    printf("please enter the nuber between 1 to 7\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Sunday\n");
        break;
    case 2:
        printf("Monday\n");
        break;
    case 3:
        printf("tuesday\n");
        break;
    case 4:
        printf("wednestday\n");
        break;
    case 5:
        printf("thursday\n");
        break;
    case 6:
        printf("friday\n");
        break;
    case 7:
        printf("saturday\n");
        break;

    default:
        printf("please enter valid number...\n");
        break;
    }
    return 0;
}

// 34
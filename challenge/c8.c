#include <stdio.h>

void am()
{
    char str1[10];
    printf("enter the string \n");
    gets(str1);
    puts(str1);    
}

void pm()
{
    char str2[10];
    printf("enter the string \n");
    gets(str2);

}

int main(int argc, char const *argv[])
{
    int ch;
    printf("enter the choice \n");
    scanf("%d",&ch);
    printf("welcome to the time convert machine \n");
    printf("1.am 2.pm");

    switch (ch)
    {
    case 1:
        am();
        break;
    case 2:
        pm();
        break;

    default:
        printf("enter valid choice \n");
        break;
    }
    return 0;
}

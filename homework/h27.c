#include <stdio.h>

int main(int argc, char const *argv[])
{
    char i;
    printf("enter character that check \n");
    scanf("%c", &i);
    if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' || i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U')
    {
        printf("you entered vowel \n");
    }
    else
    {
        printf("you entered consonant \n");
    }

    return 0;
}

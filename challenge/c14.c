#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char word[50], character;
    int track = 0;
    printf("enter the string \n");
    gets(word);
    printf("enter the character \n");
    scanf("%c", &character);
    
    for (int i = 0; i <= strlen(word); i++)
    {
        if (character == word[i])
        {
            track++;
        }
    }
    printf("%d", track);
    return 0;
}

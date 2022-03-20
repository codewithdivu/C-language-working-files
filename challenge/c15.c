#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char word[50];
    char vowels[] = {'a', 'e', 'i', 'o', 'u', '\0'};
    int track = 0;
    printf("enter the string \n");
    gets(word);

    for (int j = 0; j < strlen(vowels); j++)
    {

        for (int i = 0; i <= strlen(word); i++)
        {
            if (vowels[j] == word[i])
            {
                track++;
            }
        }
    }
    printf("vowels numbers is %d\n", track);

    return 0;
}

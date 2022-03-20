#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void parsel(char *ht)
{
    int track = 0, index = 0;

    for (int i = 0; i < strlen(ht); i++)

    {
        if (ht[i] == '<')
        {
            track = 1;
            continue;
        }
        else if (ht[i] == '>')
        {
            track = 0;
            continue;
        }
        if (track == 0)
        {
            ht[index] = ht[i];
            index++;
        }
    }
    ht[index] = '\0';
    while (ht[0] == ' ')
    {
        for (int i = 0; i < strlen(ht); i++)
        {
            ht[i] = ht[i + 1];
        }
    }
    while (ht[strlen(ht)-1] == ' ')
    {
        ht[strlen(ht)-1]='\0';
    }
}

int main(int argc, char const *argv[])
{
    char html[100];
    printf("enter your html code \n");
    gets(html);
    parsel(html);
    printf("your parsed string is ~~%s~~ \n", html);

    return 0;
}
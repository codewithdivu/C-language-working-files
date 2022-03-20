#include <stdio.h>
#include <string.h>

void lodo(char *piki)
{
    char joint[] = "ay", in;
    in = piki[0];
    for (int i = 0; i < strlen(piki); i++)
    {
        piki[i] = piki[i + 1];
    }
    piki[strlen(piki)]=in;
    for (int i = 0; i < strlen(piki),i<strlen(joint); i++)
    {
        piki[strlen(piki)] =joint[i];
    }

    piki[strlen(piki)]='\0';
    
}

int main(int argc, char const *argv[])
{
    char word[50];
    printf("enter the string \n");
    gets(word);
    lodo(word);
    printf("your msg is %s", word);
    return 0;
}

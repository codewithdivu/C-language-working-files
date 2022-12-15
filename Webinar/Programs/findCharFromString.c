#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char ch;
    printf("Enter the character that you want to find\n");
    scanf("%c", &ch);
    char str[] = "Hellobhai";

    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if (str[i] == ch)
        {
            printf("bhai character is present\n");
            break;
        }
    }

    return 0;
}
// 39
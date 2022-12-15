#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char ch;
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o'|| ch == 'u')
    {
        printf("character is vowel\n");
    }
    else
    {
        printf("character is not vowel\n");
    }

    return 0;
}

// 56
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{

    int i, b;
    char a[5];
    puts("enter the string: \n");
    gets(a);
    b = strlen(a);
    for (i = 0; i <= strlen(a); i++)
    {
        if (a[i] != a[b - i])
            break;
        else

            printf("this is palindrom\n");
    }
    printf("this is not palindrom\n");
    return 0;
}

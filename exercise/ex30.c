#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *p = NULL;
    char s[50] = "hello world";
    p = fopen("file.txt", "w");
    fprintf(p, "%s", s);
    // puts(s);

    return 0;
}

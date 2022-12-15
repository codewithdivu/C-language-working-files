#include <stdio.h>

void main()
{
    FILE *fp;
    char ch;

    fp = fopen("file.txt", "w");
    // fputc('a', fp);
    // fputs("hello everyone how are you?", fp);
    fclose(fp);

    // // read a character from a file
    // fp = fopen("file.c", "r");
    // while ((ch = fgetc(fp)) != EOF)
    // {
    //     printf("%c", ch);
    // }
    // fclose(fp);
    // printf("\n");
}

// EOF => End of File

// 20
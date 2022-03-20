#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char word[10];
    printf("enter the word : \n");
    gets(word);
    strrev(word);
    printf("reverse word is : %s \n", word);
    return 0;
}

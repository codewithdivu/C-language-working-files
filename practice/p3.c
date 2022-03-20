#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char city[100];
    int length = 0, i;
    printf("enter your city \n");
    gets(city);
    printf("your string length is ");
    for (i = 0; city[i] != '\0'; ++i); 

    printf(" %d", i);
    //puts(city);
    return 0;
}

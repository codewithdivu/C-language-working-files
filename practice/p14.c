#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{

    char str[15], divu[15], dk[15];
    puts("enter your first name : \n");
    gets(str);

    puts("enter your second name : \n");
    gets(divu);

    puts("enter your third name : \n");
    gets(dk);

    i = strcat(str, divu);
    strcat(str, dk);

    printf("your full name is : %s \n", str);

    return 0;
}

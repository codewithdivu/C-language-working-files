#include<stdio.h>
#include<stdlib.h>

    struct manas
    {
        char name[10];
        int adhar_id;
    
    };

int main(int argc, char const *argv[])
{
    struct manas m1,m2;
    printf("enter your name then adharid then city\n");
    // getdata
    gets(m1.name);
    scanf("%d",&m1.adhar_id);
    // print
    puts("your details is \n");
    puts(m1.name);
    printf("%d",m1.adhar_id);
    return 0;
}

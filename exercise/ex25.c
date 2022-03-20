#include <stdio.h>
#include <string.h>
union student
{
    char name[10];
    unsigned int roll;
};

int main(int argc, char const *argv[])
{                  
    int i;
    char m[10];

    union student divu;
    printf("enter your name : \n");
    gets(m);

    printf("enter your roll no : \n");
    scanf("%d", &i);
    divu.roll = i;
    strcpy(divu.name, m);
    printf("your name is : %s \n", divu.name);

    printf("your roll no is : %d \n", divu.roll);
    return 0;
}

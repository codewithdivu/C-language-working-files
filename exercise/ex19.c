#include <stdio.h>

struct employee
{
    char name[10];
    int id, salary;
};

int main(int argc, char const *argv[])
{
    struct employee e1, e2;
    printf("enter your name and id then enter your salry \n");
    gets(e1.name);
    scanf("%d %d", &e1.id, &e1.salary);

    puts(e1.name);
    printf("your id is : %d \n your salary is :%d \n", e1.id, e1.salary);

    printf("enter your name and id then enter your salry \n");
    gets(e2.name);
    scanf("%d %d", &e2.id, &e2.salary);

    puts(e2.name);
    printf("your id is %d: \n your salary is %d: \n", e2.id, e2.salary);
    return 0;
}

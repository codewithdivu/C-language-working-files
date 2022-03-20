#include <stdio.h>
#include <string.h>
struct fname
{
    char fsname[10], miname[10], surname[10];
};
struct person
{
    struct fname n;
    int phno[10];
};

int main(int argc, char const *argv[])
{
    int i;
    struct person divu;
    printf("enter your first name : \n ");
    gets(divu.n.fsname);
    printf("enter your middle name : \n ");
    gets(divu.n.miname);
    printf("enter your surname name : \n ");
    gets(divu.n.surname);
    printf("enter your no \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &divu.phno[i]);
    }
    printf("your details are : \n");
    strcat(divu.n.fsname, divu.n.miname);
    strcat(divu.n.fsname, divu.n.surname);
    puts(divu.n.fsname);
    for (i = 0; i < 10; i++)
    {
        printf("%2.0d", divu.phno[i]);
    }

    return 0;
}

// TRAVEL AGENCY MANAGEMENT //

#include <stdio.h>
#include<string.h>

struct travel
{
    char name[10], route[20];
    char lice[10];
    int kms;
};

int main(int argc, char const *argv[])
{
    struct travel d1, d2, d3;
    printf("WELCOME TO THE DM TRAVELS AGENCY \n");
    printf("Enter your name : \n");
    gets(d1.name);
    printf("Enter your lice no : \n");
    gets(d1.lice);
    printf("Enter your rout : \n");
    gets(d1.route);
    printf("Enter your kms : \n");
    scanf("%d", &d1.kms);

    printf("Enter your name : \n");
    gets(d2.name);
    printf("Enter your lice no : \n");
    gets(d2.lice);
    printf("Enter your rout : \n");
    gets(d2.route);
    printf("Enter your kms : \n");
    scanf("%d", &d2.kms);

    printf("Enter your name : \n");
    gets(d3.name);
    printf("Enter your lice no : \n");
    gets(d3.lice);
    printf("Enter your rout : \n");
    gets(d3.route);
    printf("Enter your kms : \n");
    scanf("%d", &d3.kms);

    printf("your name : \n");
    puts(d1.name);
    printf(" your lice no : \n");
    puts(d1.lice);
    printf(" your rout : \n");
    puts(d1.route);
    printf(" your kms : %d \n", d1.kms);

    printf(" your name : \n");
    puts(d2.name);
    printf(" your lice no : \n");
    puts(d2.lice);
    printf(" your rout : \n");
    puts(d2.route);
    printf(" your kms : %d \n", d2.kms);

    printf(" your name : \n");
    puts(d3.name);
    printf(" your lice no : \n");
    puts(d3.lice);
    printf(" your rout : \n");
    puts(d3.route);
    printf(" your kms : %d \n", d3.kms);

    return 0;
}

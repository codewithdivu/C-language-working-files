#include <stdio.h>

struct address
{
    int h_no;
    char street[10], are[10];
    char city[10];
};
struct student
{
    char name[10];
    int roll, marks[5];
    struct address adrs;
};

int main(int argc, char const *argv[])
{
    int i, j, sum = 0;
    struct student dushyant;
    printf("enter your name : \n  ");
    gets(dushyant.name);
    printf("enter your h_no : \n enter your street : \n enter your area : \n enter your city : \n");
    scanf("%d", &dushyant.adrs.h_no);
    gets(dushyant.adrs.street);
    gets(dushyant.adrs.are);
    gets(dushyant.adrs.city);
    printf(" enter your roll : \n");
    scanf("%d", &dushyant.roll);
    printf("enter your marks : \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &dushyant.marks[i]);
    }
    for (j = 0; j < 5; j++)
    {
        sum = sum + dushyant.marks[j];
    }
    sum = sum / 5;
    if (sum < 33)
    {
        printf("your name is : \n ");
        puts(dushyant.name);
        printf("your address is : \n ");
        printf("%d \n", dushyant.adrs.h_no);
        puts(dushyant.adrs.street);
        puts(dushyant.adrs.are);
        puts(dushyant.adrs.city);
        printf("your roll no is %d  \n", dushyant.roll);
        printf("you are failed \n");
    }
    else
    {
        printf("your name is : \n ");
        puts(dushyant.name);
        printf("your address is : \n ");
        printf("%d \n", dushyant.adrs.h_no);
        puts(dushyant.adrs.street);
        puts(dushyant.adrs.are);
        puts(dushyant.adrs.city);
        printf("your roll no is %d  \n", dushyant.roll);
        printf("congratulations you are passed and your pr is %d : \n", sum);
    }

    return 0;
}

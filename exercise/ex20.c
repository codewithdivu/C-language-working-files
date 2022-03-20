#include <stdio.h>

struct student
{
    char name[10], city[10];
    int roll, marks[5];
};

int main(int argc, char const *argv[])
{
    int i, j, sum = 0;
    struct student dushyant;
    printf("enter your name : \n enter your city : \n enter your roll : \n  ");
    gets(dushyant.name);
    gets(dushyant.city);
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
        printf("your city is : \n ");
        puts(dushyant.city);
        printf("your roll no is %d  \n", dushyant.roll);
        printf("you are failed \n");
    }
    else
    {
        printf("your name is : \n ");
        puts(dushyant.name);
        printf("your city is : \n ");
        puts(dushyant.city);
        printf("your roll no is %d  \n", dushyant.roll);
        printf("congratulations you are passed and your pr is %d : \n", sum);
    }

    return 0;
}

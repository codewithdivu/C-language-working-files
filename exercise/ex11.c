#include <stdio.h>

int detail()
{
    int roll, std;
    char name[10];
    printf("enter your name \n");
    gets(name);

    printf("enter your roll \n ");
    scanf("%d", &roll);
    if (roll <= 0)
    {
        printf("enter valid roll no \n");
    }

    printf("enter your std \n");
    scanf("%d", &std);
    if (std <= 0 || std >= 13)
    {
        printf("enter valid std \n");
    }
}

int marks()
{
    int mark[5], i, sum = 0;
    float pr = 0;
    printf("enter your marks of 5 sub \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &mark[i]);
    }
    for (i = 0; i <= 5; i++)
    {
        sum = sum + mark[i];
    }
    pr = (sum / 5);
    if (pr < 33)
    {
        printf("you are fail \n");
    }
    else
    {
        printf(" your pr is %d you are pass \n", pr);
    }
}

int main(int argc, char const *argv[])
{
    detail();
    marks();
    return 0;
}

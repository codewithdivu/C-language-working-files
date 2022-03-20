#include <stdio.h>

struct student
{
    char name[10];
    int marks[5];
    int roll;
};

int main(int argc, char const *argv[])
{
    struct student stu[10];
    float pr = 0;
    for (int i = 1; i <= 10; i++)
    {
        printf("enter your detailes \n");
        printf("enter your name : \n");
        scanf("%s", stu[i].name);
        printf("enter your roll no : \n");
        scanf("%d", &stu[i].roll);
        for (int j = 1; j <= 5; j++)
        {
            printf("enter your %d subject marks : \n", j);
            scanf("%d", &stu[i].marks[j]);
            pr = pr + stu[i].marks[j];
            pr = pr / 5;
        }

        if (pr < 33)
        {
            printf("you are failed \n");
        }
        else
        {
            printf("you are passed with %f \n", pr);
        }
        printf("%s your detailes are \n", stu[i].name);
        printf(" your roll no : %d \n", stu[i].roll);
    }

    return 0;
}

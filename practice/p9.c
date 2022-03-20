#include <stdio.h>
int main(int argc, char const *argv[])
{
    char name[10], city[10];
    int rolno, age, m1, m2, m3, m4, m5;
    float pr = 0;
    printf("Enter your name:\n");
    gets(name);
    printf("Enter your city:\n");
    gets(city);
    printf("Enter your age:\n");
    scanf("%d", &age);
    printf("Enter your rolno:\n");
    scanf("%d", &rolno);
    printf("enter your marks:\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    if (m1 < 0 || m2 < 0 || m3 < 0 || m4 < 0 || m5 < 0)
    {
        printf("enter valid marks:\n");
    }
    else
    {
        pr = (m1 + m2 + m3 + m4 + m5) / 5;
        printf("your pr is %f\n", pr);
        puts(name);
        puts(city);

        printf("your age:%d\n", age);

        printf(" your rolno:%d\n", rolno);
    }
    return 0;
}

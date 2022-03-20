#include <stdio.h>

int fun(int a[])
{
    int i, sum = 0;
    for (i = 0; i < 10; i++)
    {
        sum = sum + a[i];
    }
    printf("your salary average is %d \n", sum / 10);
}

int main(int argc, char const *argv[])
{
    int salary[10], i;
    printf("enter your salary \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &salary[i]);
    }
    fun(salary);
    return 0;
}

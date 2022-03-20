#include <stdio.h>

// assume that hra = 10%, da = 5%, pf = 12%

int main(int argc, char const *argv[])
{
    float hra, da, pf, salary;
    printf("enter your salary : \n ");
    scanf("%f", &salary);

    hra = salary * 0.1;
    da = salary * 0.05;
    pf = salary * 0.12;

    printf("your salary is : %f \n", salary + hra + da - pf);
    return 0;
}

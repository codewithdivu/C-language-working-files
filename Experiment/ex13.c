// 13. Write a c program to prepare pay slip using following data

#include <stdio.h>
#define ma 300

int main(int argc, char const *argv[])
{
    int basic;
    double da, hra, pf, nt, gross;
    printf("Enter the basic \n");
    scanf("%d", &basic);
    da = basic * 0.1;
    hra = basic * 0.075;
    pf = basic * 0.125;
    gross = basic + da + hra + ma;
    nt = gross - pf;
    printf("NT is : %.2lf", nt);
    return 0;
}

#include<stdio.h>

int main(int argc, char const *argv[])
{
    typedef unsigned int integer;
    integer salary;

    printf("enter your salary");
    scanf("%d",&salary);

    printf("your salary is :  %d \n",salary);
    return 0;
}

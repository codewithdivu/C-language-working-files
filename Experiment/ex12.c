// 12. Write a program to read marks from keyboard and your program should display equivalent grade according to following table

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int mark;
    printf("enter your mark \n");
    scanf("%d", &mark);
    if (mark >= 80 && mark <= 100)
    {
        printf("Distinction");
    }
    else if (mark >= 60 && mark <= 79)
    {
        printf("First Class");
    }
    else if (mark >= 40 && mark <= 59)
    {
        printf("Second Class");
    }
    else if (mark < 40)
    {
        printf("Fail");
    }
    return 0;
}

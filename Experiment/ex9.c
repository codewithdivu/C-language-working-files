// 9. Write a C program to read marks of a student from keyboard whether the student is pass or fail

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int mark;
    printf("enter your mark : \n");
    scanf("%d", &mark);
    if (mark < 33)
    {
        printf("you are failed");
    }
    else
    {
        printf("congrats......you are passed");
    }

    return 0;
}

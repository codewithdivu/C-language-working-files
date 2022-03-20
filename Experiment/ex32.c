// 32. Write a C program to read and store the roll no and marks of 20 students using array.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int roll[10], marks[10];

    for (int i = 1; i <= 10; i++)
    {
        printf("Enter the roll no student %d \n", i);
        scanf("%d", &roll[i]);
        printf("Enter the marks of student %d \n", i);
        scanf("%d", &marks[i]);
    }
    for (int j = 1; j <= 10; j++)
    {
        printf("roll no of student %d is %d \n", j, roll[j]);
        printf("marks of student %d is %d \n", j, marks[j]);
    }
    return 0;
}

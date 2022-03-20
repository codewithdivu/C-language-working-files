// Write a C program to find that the accepted number is Negative, or Positive or zero

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    printf("enter the number: \n");
    scanf("%d", &i);

    if (i == 0)
    {
        printf("number is zero");
    }
    else if(i>0)
    {
        printf("number is Positive");
    }
    else if(i<0)
    {
        printf("number is Negative");
    }
    return 0;
}


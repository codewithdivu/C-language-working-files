#include <stdio.h>
/* 90-100 = A
   80-90 = B
   70-80 = C
   60-70 = D 
   50-60 = E */
int main(int argc, char const *argv[])
{
    float pr;
    printf("enter your percantage \n");
    scanf("%f", &pr);

    if (pr < 0 || pr > 100)
    {
        printf("enter valid percantage \n");
    }
    else if (pr >= 90 && pr <= 100)
    {
        printf("grade is : A");
    }
    else if (pr >= 80 && pr < 90)
    {
        printf("grade is : B");
    }
    else if (pr >= 70 && pr < 80)
    {
        printf("grade is : C");
    }
    else if (pr >= 60 && pr < 70)
    {
        printf("grade is : D");
    }
    else if (pr >= 50 && pr < 60)
    {
        printf("grade is : E");
    }
    else if (pr < 50 && pr >= 33)
    {
        printf("you are not eligible for grade");
    }
    else
    {
        printf("sorry.....you are failed");
    }

    return 0;
}

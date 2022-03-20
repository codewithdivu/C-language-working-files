// 3. Write a program to find simple interest

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int p, r, t;
    printf("enter principle amount : \n rate of interest : \n time : \n ");
    scanf("%d %d %d", &p, &r, &t);
    printf("simple interest is : %d \n ", (p * r * t) / 1000);

    return 0;
}

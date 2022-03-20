#include<stdio.h>
#include "p18.c"
int main(int argc, char const *argv[])
{
    int div[10];
    // printf("enter the elements of ary : \n");
    aryscan(div);
    printf("your erray is : \n");
    aryprint(div);
    return 0;
}

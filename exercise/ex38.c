#include<stdio.h>
#include "ex37.c"
int main(int argc, char const *argv[])
{
    int a,b;
    printf("enter the values : \n");
    scanf("%d %d",&a,&b);
    sum(a,b);
    sub(a,b);
    return 0;
}

#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    int a=10,*dick;
    dick=&a;
    printf("%d",dick);
    return 0;
}
#include<stdio.h>

int main(int argc, char const *argv[])
{
    float v1,*ptr;
    printf("please enter value");
    scanf("%f",&v1);
    ptr=&v1;
    printf("%x",ptr);
    return 0;
}

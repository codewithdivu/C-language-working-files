#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a=343;
    float b=8.33;
    void* ptr;
    ptr=&b;
    printf("the value  of b is %f \n",*((float *)ptr));
    ptr=&a;
    printf("the value  of a is %d \n",*((int *)ptr));
    return 0;
}


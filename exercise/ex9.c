#include<stdio.h>

int sum(int num)
{
    int v1=0; 
    if(num>v1)
    return(num+sum(num-1));
}


int main(int argc, char const *argv[])
{
    int num;
    printf("enter your value");
    scanf("%d",&num);
    printf("your sum is %d",sum(num));
    return 0;
}

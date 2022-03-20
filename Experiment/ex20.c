// Write a program to find out sum of first and last digit of a given number.

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int n,a,b,c;
    scanf("%d",&n);
    b=n%10;
    while (n>=10)
    {
        a=n/10;
    }
    
    c=a+b;
    printf("%d",c);
    return 0;
}

// Write a C program to find 1+1/2!+1/3!+1/4!+.....+1/n!.

#include<stdio.h>

double func(double num)
{
    if(num==1 || num==0)
        return num;
    else
        return(num*func(num-1));
}

int main(int argc, char const *argv[])
{
    int n;
    double sum=0.0,j,k;
    scanf("%d",&n);

    for (double i = 1; i <=n; i++)
    {
        k=func(i);
        j=i/k;
        sum=sum+j;
    }
    printf("%lf",sum);
    
    return 0;
}

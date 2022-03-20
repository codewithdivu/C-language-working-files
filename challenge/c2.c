#include<stdio.h>

int paint_brush = 40;

int main(int argc, char const *argv[])
{
    int colour,sum;
    scanf("%d",&colour);
    sum=paint_brush+(colour*5);
    sum=sum+sum/10;
    printf("your total purchase %d",sum);
    return 0;
}

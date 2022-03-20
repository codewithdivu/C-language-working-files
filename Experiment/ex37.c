#include<stdio.h>
#include<string.h>


int main(int argc, char const *argv[])
{
    int x=20,y=25;
    x=x++;
    y=++y;
    printf("%d %d",x,y);
    return 0;
}

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    for(i=0;i<50;i++)
    {
        if (i==5)
        {
            continue;
        }
        
        printf("%d \n ",i);
    }
    return 0;
}

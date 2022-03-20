#include<stdio.h>

int main(int argc, char const *argv[])
{
    int ary[15],i,j=0;
    printf("enter your values");
    for (i = 0; i <5; i++)
    {
        scanf("%d",&ary[i]);
    }

    for ( i = 0; i <5; i++)
    {
        j=ary[i]+j;
    }
        printf("multipication : %d \n",j);
    
    
    return 0;
}

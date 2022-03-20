#include<stdio.h>

int borrow()
{
    static int  count = 0;
    count++;
    printf("%d", count);
}

int main(int argc, char const *argv[])
{
    int need,i;
    printf("enter how many time you need");
    scanf("%d",&need);

    for ( i = 1; i <=need ; i++)
    {
        borrow();
    }
    
    return 0;
}

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int ary[5], i;
    printf("enter the ary : \n ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d",&ary[i]);
    }
   printf("reversed array is : \n");
    for (i = 4; i >= 0; i--)
    {
        printf(" %d \t", ary[i]);
    }

    return 0;
}

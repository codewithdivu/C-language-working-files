#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        for (int j = i; j <=n; j++)
        {
            printf("%c",(i+64));
        }
        printf("\n");        
    }

    return 0;
}
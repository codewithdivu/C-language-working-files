#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
            printf("%c",j+64);
        }
        printf("\n");
    }
    return 0;
}
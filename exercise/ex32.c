#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[2][2];
    printf("Enter the values of matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    for (int i = 0; i < 2; i++)
    {
        printf("[");
        for (int j = 0; j < 2; j++)
        {
            printf("%3d",a[i][j]);
        }

        printf("]");
        printf("\n");
        
    }
    
    return 0;
}

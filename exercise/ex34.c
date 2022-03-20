#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[2][2];
    int b[2][2];
    int c[2][2];
    printf("Enter the values of first matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the values of second matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
   
   
    printf("final matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        printf("[");
        for (int j = 0; j < 2; j++)
        {
        c[i][j]=0;
        for (int k = 0; i < 2; i++)
        {
            c[i][j]+=a[i][k]*b[k][j];
        }
        
        }

        printf("]");
        printf("\n");
        
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%3d", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}

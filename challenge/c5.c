#include<stdio.h>
#include<string.h>


int main(int argc, char const *argv[])
{
    int row; 
    printf("enter the row \n");
    scanf("%d",&row);

    for (int i = 1; i <= (row*2)-1; i++)
    {
        for (int j = row; j >=1 ; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
    return 0;
}

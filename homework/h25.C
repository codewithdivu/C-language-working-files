#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,j;
    printf("enter number which want you table \n");
    scanf("%d",&i);
    printf("multiplication table  of %d is : \n",i);
    for ( j = 1; j <= 10; j++)
    {
        printf("%d * %d = %d \n",i,j,i*j  ); 
    }
    
    return 0;
}

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int word[10],k;
    printf("enter the array : \n");
    for (int i = 1; i <=10 ; i++)
    {
        scanf("%d",&word[i]);
    }
    k=word[1];
    for (int j = 1; j<=10; j++)
    {
        if(k>word[j])
        {
        k=word[j];
        }
            
    }
            printf("%d is minimum",k);
        
    return 0;
}

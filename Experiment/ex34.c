// Write a program to find maximum element from 1-Dimensional array.

#include<stdio.h>

#define MAX_SIZE 200
int main(int argc, char const *argv[])
{
    int max=0,numbers[MAX_SIZE],n;
    printf("How many number you want to enter \n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("Enter %d number\n",i);
        scanf("%d",&numbers[i]);
    }
    for (int j = 1; j <= n; j++)
    {
        if (max<numbers[j])
        {
            max=numbers[j];
        }
    }
    printf("Maximum number of this array is : %d \n",max);
    return 0;
}

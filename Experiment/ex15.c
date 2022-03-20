// Write a C program to find out the Maximum and Minimum number from given 10 numbers

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int nums[10],min,max;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&nums[i]);
    }
    min=max=nums[0];
    for (int i = 0; i < 10; i++)
    {
        if (min>nums[i])
        {
            min=nums[i];
        }
        if (max<nums[i])
        {
            max=nums[i];
        }
        
    }
    printf("Maximum number is : %d \n",max);    
    printf("Minimum number is : %d \n",min);    
    return 0;
}

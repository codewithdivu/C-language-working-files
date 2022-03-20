// Write a program to find out which number is even or odd from list of 10 numbers using 
// array 

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int numbers[10];
    for (int i = 1; i <= 10; i++)
    {
        printf("Enter the number \n");
        scanf("%d",&numbers[i]);
    }
    for (int j = 1; j <= 10; j++)
    {
        if(numbers[j]%2==0)
        {
            printf("Number  %d is Even \n",numbers[j]);
        }
        else
        {
            printf("Number  %d is Odd \n",numbers[j]);
        }
    }
    
    
    return 0;
}

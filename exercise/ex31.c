#include <stdio.h>

int func(int num)
{
    int rev = 0;
    while (num != 0)
    {
        rev = rev*10 + (num % 10);
        num = num / 10;
    }
    // printf(" reversed num is : \n %d", rev);
    return rev;

}

int main(int argc, char const *argv[])
{
    int num,i;
    printf("enter a number \n");
    scanf("%d", &num);
    
    i=func(num);
    
    if (num == i)
    {
        printf(" \n number is palindrom ");
    }
    else
    {
        printf(" \n number is not palindrom \n");
    }
    return 0;
}

// Write a C program to check whether the entered character is capital, small letter, digit or any special character.

#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char c;
    printf("Enter a character \n");
    scanf("%c",&c);

    if (c>64 && c<91)
    {
        printf("It is Capital letter");
    }
    else if (c>96 && c<123)
    {
        printf("It is Small letter");
    }
    else if (c>47 && c<58)
    {
        printf("It is digit letter");
    }
    else
    {
        printf("It is special letter");
    }
    
    
    return 0;
}

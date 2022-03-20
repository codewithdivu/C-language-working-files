#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char word[10],temp[1],str[]="ay";
    printf("enter the string : \n");
    gets(word);
    temp=word[0];
    for (int i = 0; i <='\0'; i++)
    {
        word[i]=word[i+1];
    }
    strcat(word,temp);
    strcat(word,str);
    puts(word);
    return 0;
}

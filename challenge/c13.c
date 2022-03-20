#include<stdio.h>

int main(int argc, char const *argv[])
{
    FILE *ptr = NULL;
    ptr =fopen("myfile.txt","r");

    // char c = fgetc(ptr);
    // printf("%c \n",c);
    
    // char str[50];
    //   fgets(str,8,ptr);
    //   printf("%s \n",str);


    // ptr =fopen("myfile.txt","w");
    
    // fputc('o',ptr);
    // fputs("this is divu",ptr);
    return 0;
}

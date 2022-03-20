#include<stdio.h>

void timer(char * time)
{
    int n1,n2,n3,n4;
    n1=(int)time[0];
    n2=(int)time[1];
    n3=(int)time[3];
    n4=(int)time[4];
    printf("%d \n",n1);
    
}

int main(int argc, char const *argv[])
{
    char str[10];
    printf("enter the time \n");
    gets(str);
    timer(str);
    printf("your time is ~~%s~~ \n",str);


    
    return 0;
}

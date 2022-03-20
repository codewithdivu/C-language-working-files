#include<stdio.h>
int divu()
{
    int i;
    for(i=1;i<=50;i++)
    if(i%2==0)
    printf(" even num is : %d \n",i);
    else
      printf("odd num is : %d \n",i);  
}
int main(int argc, char const *argv[])
{
    divu();
    return 0;
}


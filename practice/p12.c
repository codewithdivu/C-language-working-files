#include<stdio.h>
int sum(int, int, int, int, int);
int sub(int, int, int, int, int);
int multi(int a, int b, int c, int d, int e)
{
    printf("your multi is : %d  \n",a*b*c*d*e);
}

int main(int argc, char const *argv[])
{
    int v1,v2,v3,v4,v5;
    printf("please enter values \n");
    scanf("%d %d %d %d %d",&v1,&v2,&v3,&v4,&v5);
    multi(v1,v2,v3,v4,v5);
    printf("your sum is : %d \n",sum(v1,v2,v3,v4,v5));
    printf("your sub is : %d \n",sub(v1,v2,v3,v4,v5));
    return 0;
}
int sum(int v1, int v2, int v3, int v4,int v5)
{
 return(v1+v2+v3+v4+v5);
}
int sub(int v1,int v2,int v3,int v4,int v5)
{
    return(v1-v2-v3-v4-v5);
}
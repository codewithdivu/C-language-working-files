#include<stdio.h>


int main(int argc, char const *argv[])
{
    int n,ary;
    float sum=0;
    printf("enter the number of eliments \n");
    scanf("%d",&n);
    printf("enter %d elements",n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ary);
        sum=sum+ary;
    }
    printf("average is %f \n",sum/n);
    return 0;
}

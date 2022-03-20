#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,temp,piko;
    printf("enter the 2 numbers \n");
    scanf("%d %d",&a,&b);
    if (a>b)
    {
        piko=b;
    }
    else
    {
        piko=a;
    }
    
    
    for (int i = piko; i <100 ; i++)
    {
        if(i%a==0 && i%b==0)
        {
            temp=i;
            break;
        }
    }
    printf("%d",temp);
    
    return 0;
}

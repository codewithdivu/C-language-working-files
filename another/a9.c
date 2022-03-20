#include<stdio.h>

int main(int argc, char const *argv[])
{
    int cri;
    printf("how many criminal are there : \n");
    scanf("%d",&cri);

    if(cri>0)
    {
        if(cri<5)
        {
            printf("I GOT THIS ! \n");
        }
        else if(cri>=5 && cri<=10)
        {
            printf("Help me Batman\n");

        }
        else if(cri>10)
        {
            printf("Good luck out there!\n");

        }
        
    }
    else
    {
        
    printf("enter valid cri\n");
    }
    
    return 0;
}

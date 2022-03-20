#include <stdio.h>
#include <stdlib.h>
#include<time.h>


int aryscan(int ary[])
{
srand(time(NULL));

    for (int i = 1; i <= 10; i++)
    {
        ary[i] = rand() % 100;
    }
}
int aryprint(int ari[])
{

    for (int i = 1; i <= 10; i++)
    {
        printf("%3d  \n ", ari[i]);
    }
}
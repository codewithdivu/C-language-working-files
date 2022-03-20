#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int a[100];
    int s1, s2, s3, s4, s5;
    for (int i = 1; i <= 5; i++)
    {
        scanf("%d", &a[i]);
    }
    s1 = a[1] + a[2] + a[3] + a[4];
    s2 = a[0] + a[2] + a[3] + a[4];
    s3 = a[0] + a[1] + a[3] + a[4];
    s4 = a[0] + a[1] + a[2] + a[4];
    s5 = a[0] + a[1] + a[2] + a[3];

     if ((s1 > s2) && (s1 > s3) && (s1 > s4) && (s1 > s5))
        {printf("%d \n", s1);}
    else if ((s2 > s1) && (s2 > s3) && (s2 > s4) && (s2 > s5))
        {printf("%d \n", s2);}
    else if ((s3 > s2) && (s3 > s1) && (s3 > s4) && (s3 > s5))
        {printf("%d \n", s3);}
    else if ((s4 > s2) && (s4 > s3) && (s4 > s1) && (s4 > s5))
        {printf("%d \n", s4);}
    else if ((s5 > s1) && (s5 > s2) && (s5 > s3) && (s5 > s4))
        {printf("%d \n", s5);}


    if ((s1 < s2) && (s1 < s3) && (s1 < s4) && (s1 < s5))
       { printf("%d \n", s1);}
    else if ((s2 < s1) && (s2 < s3) && (s2 < s4) && (s2 < s5))
       { printf("%d \n", s2);}
    else if ((s3 < s1) && (s3 < s2) && (s3 < s4) && (s3 < s5))
       { printf("%d \n", s3);}
    else if ((s4 < s2) && (s4 < s3) && (s4 < s1) && (s4 < s5))
       { printf("%d \n", s4);}
    else if ((s5 < s2) && (s5 < s3) && (s5 < s1) && (s5 < s4))
       { printf("%d \n", s5);}

   
    return 0;
}

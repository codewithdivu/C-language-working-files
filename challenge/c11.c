#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    printf("File name is %s \n", __FILE__);
    printf(" time  %s \n", __TIME__);
    printf("todays date  %s \n", __DATE__);
    printf("line no is %d \n", __LINE__);
    printf("ANSI : %d \n", __STDC__);
    printf("todays date  %s \n", __DATE__);

    return 0;
}

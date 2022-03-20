#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int v, on, rem, n = 0;
    float result = 0;
    printf("enter your no :\n");
    scanf("%d", &v);
    on = v;
    for (on = v; on != 0; v++)
        on / 10;

    for (on = v; on != 0; on /= 10)
    {

        rem = on % 10;
        result += pow(rem, n);
    }
    if ((int)result == v)
    {
        printf("%d is an armstrong no.", v);
    }
    else
    {
        printf("%d is not an armstriong no", v);
    }

    return 0;
}

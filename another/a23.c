#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int n;
    int ary[1000], po = 0, ne = 0, ze = 0;
    float positive, negative, zero;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);

        if (ary[i] > 0)
        {
            po++;
        }
        else if (ary[i] < 0)
        {
            ne++;
        }
        else if (ary[i] == 0)
        {
            ze++;
        }
    }
    positive = (float)po / n;
    negative = (float)ne / n;
    zero = (float)ze / n;
    printf("%3.5f \n", positive);
    printf("%3.5f \n", negative);
    printf("%3.5f \n", zero);
    return 0;
}

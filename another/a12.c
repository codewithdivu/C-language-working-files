#include <stdio.h>

int main(int argc, char const *argv[])
{
    int h = 0, m = 0, s = 0;
    printf("please enter the time format in HH:MM:SS");
    scanf("%d %d %d", &h, &m, &s);
start:
    for (h; h < 24; h++)
    {
        for (m; m < 60; m++)
        {
            for (s; s < 60; s++)
            {
                printf("\n\n\t\t\t %d:%d:%d", h, m, s);
                if (h < 12)
                {
                    printf("AM");
                }
                else
                {
                    printf("PM");
                }
                printf("\n\n\t\t\t thursday 26 nov 2020");
                for (double i = 0; i < 3619999; i++)
                {
                    i++;

                    i--;
                }
            }
            s = 0;
        }
        m = 0;
    }
    h = 0;
    goto start;
    return 0;
}

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int score, ticket, lund;
//     scanf("%d", score);
//     scanf("%d", ticket);

//     lund = ticket * 12;
//     if (lund > score)
//     {
//         printf("Try again");
//     }
//     else if (lund < score)
//     {
//         printf("Buy it!");
//     }

//     return 0;
// }

// #include<stdio.h>

// #define canvas 40
// int main(int argc, char const *argv[])
// {
//     int n_paint,paint,intrest,money;
//     scanf("%d",&n_paint);
//     paint = n_paint*5;
//     paint = paint + canvas;
//     intrest= paint/10;
//     money = intrest + paint;
//     printf("%d",money);
//     return 0;
// }

#include <stdio.h>
#include <string.h>


void parsel (char* ht)
{
    int track = 0, index = 0;

    for (int i = 0; i < strlen(ht); i++)

    {
        if (ht[i] == 'G')
        {
            track = 1;
            continue;
        }
        else if (ht[i] == '>')
        {
            track = 0;
            continue;
        }
        if (track == 0)
        {
            ht[index] = ht[i];
            index++;
        }
    }
}


int main(int argc, char const *argv[])
{
    int length;
    char str[100];
    gets(str);

    return 0;
}

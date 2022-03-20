// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int yard, i;
//     scanf("%d", &yard);

//     if (yard > 10)
//     {
//         printf("High Five");
//     }
//     else if (yard < 1)
//     {
//         printf("shh");
//     }
//     else if (yard >= 1 && yard <= 10)
//     {
//         for (int i = 1; i <= yard; i++)
//         {
//             printf("Ra!");
//         }
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main(int argc, char const *argv[])
// {
//     char stri[100];
//     gets(stri);
//     strrev(stri);
//     printf("%s", stri);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main(int argc, char const *argv[])
// {
//     char s[100];

//     gets(s);
//     for (int i = strlen(s) - 1; i >= 0; i--)
//     {
//         printf("%c", s[i]);
//     }

//     return 0;
// }

// #include<stdio.h>

// int main(int argc, char const *argv[])
// {
//     int fruits,pie,apples;
//     scanf("%d",&fruits);
//     apples = (int)fruits/2;
//     pie = (int)apples/3;
//     printf("%d",pie);
//     return 0;
// }

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int n;
//     scanf("%d", &n);

//     for (int i = 0; i < n - 1; i++)
//     {
//         if (i % 2 == 0)
//         {
//             i += 1;
//             if (i % 3 == 0 && i % 5 == 0)
//             {
//                 printf("SoloLearn");
//             }
//             else if (i % 3 == 0)
//             {
//                 printf("Solo");
//             }
//             else if (i % 5 == 0)
//             {
//                 printf("Learn");
//             }
//             else
//             {
//                 printf("%d", i);
//             }
//         }
//     }

//     return 0;
// }

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int siblings, popsicles;
    scanf("%d", &siblings);
    scanf("%d", &popsicles);

    if (popsicles % siblings == 0)
    {
        printf("Give away");
    }
    else
    {
        printf("eat them yourself");
    }

    return 0;
}

// #include<stdio.h>

// int main(int argc, char const *argv[])
// {

//     return 0;
// }

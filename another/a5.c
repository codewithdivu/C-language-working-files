#include <stdio.h>

int main(int argc, char const *argv[])
{
    int siblings, popsicles;
    printf("enter how many sibling : \n");
    printf("enter how many popsicles : \n");
    scanf("%d", &siblings);
    scanf("%d", &popsicles);

    if (popsicles > siblings)
    {
        printf("give away \n");
        printf("each child get %d candy \n", popsicles / siblings);

        printf("eat them yourself\n", popsicles % siblings);
    }
    else
    {
        printf("no enough popsicles \n");
    }

    return 0;
}

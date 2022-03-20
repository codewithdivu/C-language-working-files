#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int size1, size2, size3;
    char *id;
    printf("enter the length of id of employee 1 : \n");
    scanf("%d", &size1);
    id = (char *)malloc((size1 + 1) * sizeof(char));

    printf("enter the id of employee 1 : \n");
    scanf("%s", id);

    printf("employee 1 id is  %s  \n", id);

    printf("enter the length of id of employee 2 : \n");
    scanf("%d", &size2);
    id = (char *)realloc(id, (size2 + 1) * sizeof(char));

    printf("enter the id of employee 2 : \n");
    scanf("%s", id);
    printf("employee 2 id is  %s  \n", id);

    printf("enter the length of id of employee 3 : \n");
    scanf("%d", &size3);
    id = (char *)realloc(id, (size3 + 1) * sizeof(char));

    printf("enter the id of employee 3 : \n");
    scanf("%s", id);

    printf("employee 3 id is  %s  \n", id);

    free(id);

    return 0;
}

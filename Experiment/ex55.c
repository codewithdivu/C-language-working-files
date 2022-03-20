// 55. Write a C program to swap the two values using pointers.

#include <stdio.h>

void swap(int *, int *);

int main(void)
{
    int i = 32, j = 69;
    printf("\n Before Swapping i = %d j = %d", i, j);
    swap(&i, &j);
    printf("\n After Swapping  i = %d j = %d", i, j);
    return 0;
}

void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
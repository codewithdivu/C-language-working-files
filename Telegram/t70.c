// 70. Program to check whether the number is neon number or not.

#include<stdio.h>
#include<conio.h>
void main()
{
    int n, sq, i, sum = 0;
    clrscr();
    printf("Enter the number : ");
    scanf("%d", &n);

    sq = n * n;

    for (i = sq; i > 0; i = i / 10)
        sum = sum + i % 10;

    if (sum == n)
        printf("%d is a neon number.", n);
    else
        printf("%d is not a neon number.", n);
    getch();
}

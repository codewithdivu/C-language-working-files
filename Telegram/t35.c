// 35. Number Pyramid                   //         1
                                        //       232
                                        //     34543
#include<stdio.h>                       //   4567654
#include<conio.h>                       // 567898765
void main()
{
    int n, c, d, num = 1, space;
    clrscr();

    printf("Enter the number of rows : ");
    scanf("%d", &n);
    space = n - 1;
    for (d = 1; d <= n; d++)
    {
        num = d;
        for (c = 1; c <= space; c++)
            printf(" ");
        space--;
        for (c = 1; c <= d; c++)
        {
            printf("%d", num);
            num++;
        }
        num--;
        num--;
        for (c = 1; c < d; c++)
        {
            printf("%d", num);
            num--;
        }
        printf("\n");
    }
    getch();
}
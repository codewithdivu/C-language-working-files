// 39. Number Alphabet Pattern          // 1
                                        // A B
                                        // 2 3 4
                                        // C D E F
#include<stdio.h>                       // 5 6 7 8 9
#include<conio.h>                       // G H I J K L
void main()
{
    int num, r, c;
    int i = 1;
    char ch = 'A';
    clrscr();
    printf("Enter the number of rows : ");
    scanf("%d", &num);
    printf("\n");
    for (r = 1; r <= num; r++)
    {
        for (c = 1; c <= r; c++)
        {
            if (r % 2 == 0)
            {
                printf(" %c", ch++);
            }
            else
            {
                printf(" %d", i++);
            }
        }
        printf("\n");
    }
    getch();
}
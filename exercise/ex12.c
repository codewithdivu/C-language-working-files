#include <stdio.h>
int calculate()
{
    int days, year, month;
    printf("enter days which want you years and months  \n ");
    scanf("%d", &days);
    if (days > 365)
    {
        year = (days / 365);
        printf("year is : %d \n", year);
        days = days - 365;
        if (days > 30)
        {
            month = days / 30;
            printf("month is : %d \n", month);
            days = days - 30;
            printf("days is : %d \n", days);
        }
    }
}
int main(int argc, char const *argv[])
{

    calculate();
    return 0;
}

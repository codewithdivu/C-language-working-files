#include <stdio.h>
int calculate()
{
    int days, year, month, hour, minutes, seconds;
    printf("enter days which want you years and months  \n ");
    scanf("%d", &days);
    if (days > 365)
    {
        year = (days / 365);
        printf("year is : %d \n", year);
        days = days - 365;
        if (days > 30)
        {
            month = (days / 30);
            printf("month is : %d \n", month);
            days = days - 30;
            printf("days is : %d \n", days);
        }
        if (days <= 1)
        {
            hour = (days * 24);
            printf("time is %d \n", hour);
        }
        if (hour <= 24)
        {
            minutes = (hour * 60);
            printf("minutes is %d \n", minutes);
        }
        if (minutes <= 1440)
        {
            seconds = (minutes * 60);
            printf("seconds is %d \n", seconds);
        }
    }
}
int main(int argc, char const *argv[])
{

    calculate();
    return 0;
}

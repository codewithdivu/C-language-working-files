#include <stdio.h>

int dob()
{
    int date, month, year;
    // CURRENT DATE YOU HAVE TO ENTER CURRENT DATE IN BELOW
    int day = 28, mo = 10, ye = 2020;
    if (year < 2020)
    {
        printf("enter your year \n");
        scanf("%d", &year);

        if (month <= 12)
        {
            printf("enter your month \n");
            scanf("%d", &month);

            if (date <= 30)
            {
                printf("enter your date \n");
                scanf("%d", &date);
            }
        }
    }
    if (date > day)
    {
        date = date - day;
        printf("your days is %d \n", date);
    }
    else if (day > date)
    {
        date = day - date;
        printf("your days is %d \n", date);
    }

    if (month > mo)
    {
        month = month - mo;
        printf("your months is %d \n", month);
    }
    else if (mo > month)
    {
        month = mo - month;
        printf("your months is %d \n", month);
    }
    if (year > ye)
    {
        year = year - ye;
        printf("your years is %d \n", year);
    }
    else if (ye > year)
    {
        year = ye - year;
        printf("your years is %d \n", year);
    }
}

int main(int argc, char const *argv[])
{
    dob();
    return 0;
}

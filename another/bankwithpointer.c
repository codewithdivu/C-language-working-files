// STATE BANK OF INDIA

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

static float balance = 0;

struct account
{
    char name[50], father_name[50], mother_name[50], email[50], city[50], address[50];
    int age;
    int phone_number, aadhar_number;
} n1;

int account()
{
    printf("please..enter your name \n");
    scanf("%s", &n1.name);
    printf("enter your age \n");
    scanf("%d", &n1.age);
    printf("enter your father name \n");
    scanf("%s", &n1.father_name);
    printf("enter your mother name \n");
    scanf("%s", &n1.mother_name);
    printf("enter your city name \n");
    scanf("%s", &n1.city);
    printf("enter your email id \n");
    scanf("%s", &n1.email);
    printf("enter your phone number \n");
    scanf("%ld", &n1.phone_number);
    printf("enter your aadhar number \n");
    scanf("%ld", &n1.aadhar_number);
    printf("YOUR ACCOUNT CREATED SUCCESFULLY....\n");
}

int show_details()
{

    srand(time(NULL));
    long r = rand();
    r = r * 1000;
    printf("your account number is : %ld \n", r);

    printf("your name is : %s \n", n1.name);
    printf("your age is : %d \n", n1.age);
    printf("your father name is : %s \n", n1.father_name);
    printf("your mother name is : %s\n", n1.mother_name);
    printf("your city name is : %s\n", n1.city);
    printf("your email id is : %s \n", n1.email);
    printf("your phone number is : %ld \n", n1.phone_number);
    printf("your aadhar number is : %ld \n", n1.aadhar_number);
}
int show_balance()
{
    printf("your account balance is %f \n", balance);
}

int deposit()
{
    int amount;
    printf("enter the amount to the deposit \n");
    scanf("%d", &amount);
    if (amount != 0 && amount > 0)
    {
        balance = balance + amount;
        show_balance();
    }
    else
    {
        printf("enter valid amount \n");
    }

    return 0;
}

int withdraw()
{
    int amount;
    printf("enter amount for withdraw \n");
    scanf("%d", &amount);
    if (amount != 0 && amount > 0)
    {

        if (balance != 0 && amount < balance)
        {
            balance-=amount;
            show_balance();
        }
        else
        {
            printf(" sorry....you have not enough balance to withdraw\n");
        }
        
    }
    else
    {
        printf("enter valid amount \n");
    }
}

int main(int argc, char const *argv[])
{

    int ch;
    printf(" WELCOME TO THE STATE BANK OF INDIA \n ");
    printf("we have many convenience for you \n");
    do
    {

        printf("1.create an account \n 2.show details \n 3.deposit of money  \n 4.withdraw \n 5.logout \n");
        printf("enter your option :\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            account();
            break;
        case 2:
            show_details();
            break;
        case 3:
            deposit();
            break;
        case 4:
            withdraw();
            break;
        case 5:
            exit(1);
            break;
        default:
            printf("enter valid option \n");
            break;
        }
    } while (ch != 5);
    return 0;
}

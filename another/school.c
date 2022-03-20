// SHREE KUMAR PAY.CENTER SCHOOL

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct admission
{
    char name[50], father_name[50], mother_name[50], email[50], city[50], address[100];
    int age;
    int phone_number, aadhar_number;
} s1;

int admission()
{
    printf("please..enter your name \n");
    scanf("%s", &s1.name);
    printf("enter your age \n");
    scanf("%d", &s1.age);
    printf("enter your father name \n");
    scanf("%s", &s1.father_name);
    printf("enter your mother name \n");
    scanf("%s", &s1.mother_name);
    printf("enter your city name \n");
    scanf("%s", &s1.city);
    printf("enter your email id \n");
    scanf("%s", &s1.email);
    printf("enter your phone number \n");
    scanf("%ld", &s1.phone_number);
    printf("enter your aadhar number \n");
    scanf("%ld", &s1.aadhar_number);
    printf("YOUR ADMISSION SUCCESFULLY....\n");
}

int show_details()
{

    srand(time(NULL));
    long r = rand();
    r = r * 10;
    printf("your GR number is : %ld \n", r);
    printf("your name is : %s \n", s1.name);
    printf("your age is : %d \n", s1.age);
    printf("your father name is : %s \n", s1.father_name);
    printf("your mother name is : %s\n", s1.mother_name);
    printf("your city name is : %s\n", s1.city);
    printf("your email id is : %s \n", s1.email);
    printf("your phone number is : %ld \n", s1.phone_number);
    printf("your aadhar number is : %ld \n", s1.aadhar_number);
}

struct result
{
    int marks[5];
} r1;

int cal_result()
{
    int sum = 0, pr;
    for (int i = 0; i < 5; i++)
    {
        printf("enter the mark of %d subjects \n", i + 1);
        scanf("%d", &r1.marks[i]);
        sum = sum + r1.marks[i];
        pr = (float)sum / 5;
    }
    printf("your percentage is %f \n", pr);

    if (pr >= 33)
    {
        printf("CONGRATS....YOU ARE PASSED \n");
    }
    else
    {
        printf("SORRY...YOU ARE FAILED \n");
    }
}

int academic_result()
{
    int std;
    printf(" WELCOME TO THE GENERATE ACADEMIC RESULTS \n ");
    printf("1.STD_1 \n 2.STD_2 \n 3.STD_3  \n 4.STD_4 \n 5.STD_5 \n 6.STD_6 \n 7.STD_7 \n 8.STD_8 \n 9.logout \n");
    printf("in which standard are you study \n");
    scanf("%d", &std);

    switch (std)
    {
    case 1:
        cal_result();
        break;
    case 2:
        cal_result();
        break;
    case 3:
        cal_result();
        break;
    case 4:
        cal_result();
        break;
    case 5:
        cal_result();
        break;
    case 6:
        cal_result();
        break;
    case 7:
        cal_result();
        break;
    case 8:
        cal_result();
        break;
    case 9:
        exit(1);
        break;

    default:
        printf("enter the valid value \n");
        break;
    }
}

int main(int argc, char const *argv[])
{
    int ch;
    printf(" WELCOME TO THE SHREE KUMAR PAY.CENTER SCHOOL \n ");
    printf("we have many convenience for you \n");
    do
    {

        printf("1.take an admission \n 2.show details \n 3.get your academic result  \n 4.logout \n");
        printf("enter your option :\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            admission();
            break;
        case 2:
            show_details();
            break;
        case 3:
            academic_result();
            break;
        case 4:
            exit(1);
            break;

        default:
            printf("enter valid choice \n");
            break;
        }
    } while (ch != 5);
    return 0;
}

// 6. Write a program to compute Fahrenheit from centigrade

#include <stdio.h>

int main(int argc, char const *argv[])
{
    double fahrenheit, celsius;
    printf("Enter temperature in fahrenheit \n");
    scanf("%lf", &fahrenheit);
    celsius = (fahrenheit - 32) / 1.8;
    printf("Temperature in Celsius is : %.2lf\n", celsius);
    return 0;
}

//  Write a C program to enter a distance in to kilometre and convert it in to meter, feet, inches
// and centimetre

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int distance;
    printf("Enter the distance in kilometer \n");
    scanf("%d", &distance);
    printf("Distance in meter is : %d \n", distance * 1000);
    printf("Distance in feet is : %.2f \n", distance * 3280.84);
    printf("Distance in inches is : %.2f \n", distance * 39370.1);
    printf("Distance in centimetre is : %d \n", distance * 100000);
    return 0;
}

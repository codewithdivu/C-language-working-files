#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
double triangle()
{
    double height, base;
    printf("enter height and base : \n ");
    scanf("%lf %lf", &height, &base);
    return ((height * base) / 2);
}
double rectangle()
{
    double length, breadth;
    printf("enter length and breadth: \n ");
    scanf("%lf %lf", &length, &breadth);
    return (length * breadth);
}
double circle()
{
    double radius;
    printf("enter radius : \n ");
    scanf("%lf", &radius);
    return (pie * radius * radius);
}
int main(int argc, char const *argv[])
{
    int ch;
    do
    {

        printf("1.area of triangle \n 2.area of rectangle \n 3.area of circle\n 4.exit \n  ");
        printf("enter your choice \n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("area of triangles is :  %lf \n", triangle());
            break;
        case 2:
            printf("area of rectangle is :%lf \n", rectangle());
            break;
        case 3:
            printf("area of circle is :%lf \n", circle());
            break;
        case 4:
            exit(1);
        default:
            printf("enter valid choice\n");
        }
    } while (ch != 4);
    return 0;
}

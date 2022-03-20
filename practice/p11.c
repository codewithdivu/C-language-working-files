#include <stdio.h>

int divyesh(int, int);
int mayur(int, int);
float vijay(); // func declartion
// UDF
int dk() // type 1 function with no argument and no return
{
    printf("kya he be lowde..!!\n"); // function defination
    return 0;
}

// LIBRARY FUNCTION
int main(int argc, char const *argv[])
{
    int i;
  //  float a;
    dk(); // function call
    i = divyesh(10, 15);
    printf("\n %d \n", i);
    mayur(2, 3);
 //   a = vijay();
    printf("%f",vijay());
    return 0;
}
// UDF
int divyesh(int a, int b) // func with argument with return
{
    //   printf("%d",); // function defination
    return (a + b);
}

int mayur(int x, int y) // function with argumrnt and no return
{
    printf("%d\n", x * y);
    return 0;
}

float vijay() // function with no argument and return
{
    float a = 47, g = 78.9;
    return (a + g);
}
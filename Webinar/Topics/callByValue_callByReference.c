

//      CALL BY VALUE

// #include <stdio.h>
// #include <stdlib.h>

// void swapx(int x, int y)
// {
//     int t;

//     t = x;
//     x = y;
//     y = t;

//     printf("x=%d y=%d\n", x, y);
// }

// int main(int argc, char const *argv[])
// {
//     int a = 10, b = 20;

//     // Pass by Values
//     swapx(a, b);

//     printf("a is :: %d and b is :: %d\n", a, b);

//     return 0;
// }


// CALL BY REFERENCE

// #include <stdio.h>
// #include <stdlib.h>

// void swapx(int *x, int *y)
// {
//     int t;

//     t = *x;
//     *x = *y;
//     *y = t;

//     printf("x=%d y=%d\n", *x, *y);
// }

// int main(int argc, char const *argv[])
// {
//     int a = 10, b = 20;

//     // Pass by Values
//     swapx(&a, &b);

//     printf("a is :: %d and b is :: %d\n", a, b);

//     return 0;
// }
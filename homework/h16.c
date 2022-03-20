#include <stdio.h>

int main(int argc, char const *argv[])
{

    float disc, price;
    printf("enter your amount : \n");
    scanf("%f", &price);
    if (price == 1000)
    {
        disc = 0.1;
        price = price - price * disc;
        printf("price is : %f \n  discount percentage is : %f \n  ", price, disc * 100);
    }
    else if (price > 1000)
    {
        disc = 0.12;
        price = price - price * disc;
        printf("price is : %f \n  discount percentage is  : %f \n  ", price, disc * 100);
    }
    else
    {
        disc = 0;
        printf("price is : %f \n  discount percentage is : %f \n  ", price, disc * 100);
    }

    return 0;
}

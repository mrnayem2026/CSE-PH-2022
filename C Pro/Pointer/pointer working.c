#include<stdio.h>

int main()
{


     int price = 200;
    int *dam  = &price;
    int value = 3000;
     *dam = &value;


    printf("price is : %d\n", price);
    printf("Price address is %p and price is %d\n", &price, *dam);

     price = 400;
     //int *dam = &price;

    printf("price is : %d\n", price);
    printf("Price address is %p and price is %d\n", &price, *dam);

        printf("Price address is %p and price is %d\n", &value, *dam);


    return 0;
}


#include<stdio.h>

int main()
{
    float a ,real;

    printf("Enter Number: ",a);
    scanf("%f",&a);

    int b = printf("Integr Number: %d\n", (int)a);

    real = a - b;

    printf("Real Part: %f",real);

    return 0;
}

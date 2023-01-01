#include<stdio.h>

int main()
{
    int a,b,sum,difference,product,quotien,modulus;
    printf("First number: ",a);
    scanf("%d",&a);
    printf("Second number: ",b);
    scanf("%d/n",&b);

    sum = a+b;
    printf("Sum= %d\n",sum);

    difference = a-b;
    printf("Difference= %d\n",difference);

    product = a*b;
    printf("Product= %d\n",product);

    quotien = a/b;
    printf("Quotient= %d\n",quotien);

    modulus = a%b;
    printf("Modulus= %d\n",modulus);
    return 0;
}

#include<stdio.h>

int main()
{

    int p,q,*x,*y,a,b,c;

    scanf("%d",&p);
    scanf("%d", &q);

    x = &p;
    y = &q;

    printf("x is %d \n", *x);
    printf("y is %d \n", *y);

    a = (*x)+(*y);
    printf(" a is %d\n", a);

    b = a - 5;

    printf("b is %d \n", b);







 return 0;
}



#include<stdio.h>

int main()
{
    int a,b,h,area,dev,mul;

    scanf("%d %d %d",&a,&b,&h);
    area = a+b;
    dev = h/2;
    mul = area*dev;
    printf("%d\n",mul);

    return 0;
}

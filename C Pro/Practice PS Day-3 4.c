#include<stdio.h>

int main()
{
    int principle,time;
    float rate,si,pi;

    printf("Enter principle: ",principle);
    scanf("%d",&principle);


    printf("Enter time: ",time);
    scanf("%d",&time);

    printf("Enter rate: ",rate);
    scanf("%f",&rate);

    si = principle*time*rate/100;
    printf("Simple Interest= %f\n",si);

    pi = principle+si;
    printf("Principal + Interest= %.1f\n",pi);

    return 0;
}

#include<stdio.h>

int main ()
{
    int grade[5],sum = 0;
    float average;

    for (int i = 0; i<5; i++)
    {

        printf("Enter your Nember [%d] : ",i+1 );
        scanf("%d",&grade[i]);
        sum += grade[i];
    }

    average =(float) (sum)/5;

    printf("Average is : %0.2f ", average);

    return 0;
}

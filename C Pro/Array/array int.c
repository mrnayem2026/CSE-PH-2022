#include<stdio.h>

int main()
{


    int ar[5],sum = 0;

    for(int i = 0; i<5; i++ )
    {
        scanf("%d",&ar[i]);
    }

    for(int i = 0; i<5; i++)
    {
        sum += ar[i];
        printf("%d \n", ar[i]);

    }

    printf(" Sum Is : %d ", sum);
}

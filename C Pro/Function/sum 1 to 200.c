#include<stdio.h>

void sum_of_all()
{
    int n,sum;
    sum = 0;

    for(n=1; n<=200; n++)
    {
        sum +=n;
    }
    printf("Sum of all nubers from 1 to 200 is %d\n", sum);
}


int main()
{
    sum_of_all();
    return 0;
}


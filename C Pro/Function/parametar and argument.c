#include<stdio.h>

void para_argu(int number)
{
    int i,sum;

    sum = 0;

    for(i=1; i<=number; i++)
    {
        sum +=i;
    }
    printf("Sum of all number from 1 to %d  is %d\n", number, sum);
}


int main()
{
    para_argu(67800000);
    return 0;
}

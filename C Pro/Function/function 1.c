#include<stdio.h>



void sum_of_all(void)
{
    int n,sum;
    sum = 0;

    for(int n; n<=100; n++)
    {
        sum += n;
    }
    printf("Sum of all numbers in 1 to 100 is %d \n", sum);

}

int main()
{
    sum_of_all();
    return 0;
}

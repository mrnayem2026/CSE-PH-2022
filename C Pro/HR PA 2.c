#include<stdio.h>

int main()
{
    int num_1,num_2;


    scanf("%d %d", &num_1,&num_2);
    printf("%d %d\n", num_1+ num_2, num_1- num_2);

    float num_3,num_4;
    scanf("%f %f ", &num_3,&num_4);
    printf(".1%f %f ", num_3+ num_4, num_3- num_4);
    return 0;
}

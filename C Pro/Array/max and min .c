#include <stdio.h>

int main()
{

    int ar[5] = {5,4,5,6,8};
    int min = ar[0], max = ar[0];

    for(int i=0; i<5; i++)
    {

        int val = ar[i];

        if(val>max)
        {
            max = val;
        }
        else if (val <min)
        {
            min = val ;
        }
    }
    printf("min -> %d max is -> %d \n ",min,max);
}

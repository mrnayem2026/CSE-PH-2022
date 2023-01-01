#include<stdio.h>

int main()
{
    int sum  = 0;

    int i= 1;
    while(i<=29)
    {
        i+=2;
        sum += i;
printf("add %d: new sum = %d\n",i,sum);
    }
    printf("%d",sum);
}




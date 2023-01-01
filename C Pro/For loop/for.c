#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int sum = 0;

    for (int i=1; i<=n; i++)
    {
        sum+=i;
        printf("I = %d, Sum = %d\n",i,sum);
    }

    return 0;
}

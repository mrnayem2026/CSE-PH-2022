#include<stdio.h>

int main()
{
    int a,b,sum;
     scanf("%d %d",&a,&b);

     sum = a + b;


     if (sum<10)
     {
         printf("%d\n",sum);
     } else
     {
         printf("error");
     }
    return 0;
}



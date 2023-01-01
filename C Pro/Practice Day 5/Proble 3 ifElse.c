#include<stdio.h>

int main()
{
    int a,b;
    char op;

    scanf("%d %c %d",&a,&op,&b);

    int result;
     if(op == '+')
     {
         result = a + b;
     }
     else if ( op == '-')
     {
         result = a - b;
     } else if (op == '*')
     {
         result = a * b ;
     }else if (op == '/')
     {
         result = a / b;
     } else if(op == '%')
     {
         result = a % b ;
     }

     printf("%d\n", result);

    return 0;
}

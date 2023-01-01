#include<stdio.h>

int main()
{
    int a ,b, c;
    scanf("%d %d", &a , &b);

     c =(a<b || b<a ) ? b : a;
     printf("%d",c);
    return 0;
}
/*
Write the program to find the largest of the two numbers.
*/

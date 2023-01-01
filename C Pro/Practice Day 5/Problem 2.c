#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number : ", num);
    scanf("%d", &num);


    if(num%2 == 0)
    {
        printf("%d Number is Even\n ",num);
    }
    else
    {
        printf("%d Number is Odd\n ", num);
    }
    return 0;
}


/*

Write a program that can say no number is even or odd.

*/

#include<stdio.h>

int main()
{
    int a ,b;
    char op;

    scanf("%d %c %d", &a,&op,&b);

    switch (op){
    case '+':
        printf("%d\n",a+b);
        break;
    case '-':
         printf("%d\n",a-b);
         break;
    case '*':
        printf("%d\n",a*b);
        break;
    case '/':
        printf("%d\n",a/b);
        break;
    case '%':
        printf("%d\n",a%b);
        break;
    default :
        printf("% NOt d\n",a/0);
        break;
    }

    return 0;
}
 /*
We wrote a program that could find the value of a op b size.
Update it in such a way that it
also works for% operator and if you divide by 0 or%,
it prints “Cannot divide by 0”.

 Example:

Input:

        5 * 15

Output:

        75


Input:

        3%2

Output:

        1


Input:

        5/0

Output:

        Cannot divide by 0.

        I will solve it and switch  the statement.
 */

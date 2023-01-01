#include<stdio.h>

int main()
{
    int x,y;
    scanf("%d %d", &x,&y);
    if( x==5 || y == 5 )
    {
        printf("True");
    } else if (x+y == 5)
    {
        printf("True");
    }else if(x-y == 5)

    {
        printf("True");
    }


    return 0;
}

#include<stdio.h>

int main()

{
    char st[] = "This is \0 a string.";

    int sz = sizeof(st)/sizeof(st[0]);

    printf("%d\n", sz);

    for(int i=0; i<sz; i++)
    {
        printf("%d ==> %d \n",i+1,st[i]);
    }

    return 0;
}

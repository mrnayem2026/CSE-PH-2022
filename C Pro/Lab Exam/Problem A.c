#include<stdio.h>

int main()
{
    char n,a,e,i,o,u;
    scanf("%c", &n);

    if(n == 'a' || n == 'e' ||  n == 'i' ||  n == 'o' || n == 'u' )
    {
        printf("vowel");
    } else {
     printf("consonant");
    }

    return 0;
}

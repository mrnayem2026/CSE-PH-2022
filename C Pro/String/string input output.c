#include<stdio.h>

int main()

{
    char name[5];


    printf("What is your name?: ");
    fgets(name,5,stdin);

    printf("Hello %s \n",name);


    /* if(age <= 0 )
    {
        printf("Sorry ! %s, age can't be zero or negative .\n", name);
    } else
    {
        printf("Hey %s, your courrent age %d after five year your old %d \n",name, age, age+5);
    }
    */
}

